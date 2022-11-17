#include "Chunk.h"
#include "HeightMap/HeightMapGenerator.h"
#include "Render/RenderAlgorithm.h"

#include "Algo/AllOf.h"

#include "Components/DynamicMeshComponent.h"
#include "ProceduralMeshComponent.h"
#include "DynamicMesh/MeshAttributeUtil.h"

namespace
{
	bool CopyVertexColorsToOverlay(
		const UE::Geometry::FDynamicMesh3& Mesh,
		UE::Geometry::FDynamicMeshColorOverlay& ColorOverlayOut,
		bool bCompactElements = false)
	{
		if (!Mesh.HasVertexColors())
		{
			return false;
		}

		if (ColorOverlayOut.ElementCount() > 0)
		{
			ColorOverlayOut.ClearElements();
		}

		ColorOverlayOut.BeginUnsafeElementsInsert();
		for (int32 Vid : Mesh.VertexIndicesItr())
		{
			FVector3f Normal = Mesh.GetVertexColor(Vid);
			ColorOverlayOut.InsertElement(Vid, &Normal.X, true);
		}
		ColorOverlayOut.EndUnsafeElementsInsert();

		for (int32 Tid : Mesh.TriangleIndicesItr())
		{
			ColorOverlayOut.SetTriangle(Tid, Mesh.GetTriangle(Tid));
		}

		if (bCompactElements)
		{
			UE::Geometry::FCompactMaps CompactMaps;
			ColorOverlayOut.CompactInPlace(CompactMaps);
		}

		return true;
	}
}

AChunk::AChunk()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
	DynamicMesh = CreateDefaultSubobject<UDynamicMeshComponent>("DynamicMesh");
	RootComponent = Mesh;
	DynamicMesh->SetupAttachment(RootComponent);
}

void AChunk::SetChunkParams(const FChunkParams& NewChunkParams)
{
	Params = NewChunkParams;

	RenderAlgorithm = CreateRenderAlgorithm(this, Params.RenderAlgorithm);

	if (Params.Generator)
	{
		Generator = NewObject<UHeightMapGenerator>(GetOuter(), Params.Generator);
	}
}

TArray<float> AChunk::GenerateHeightMap()
{
	check(Params.Generator != nullptr);

	const FVector Location = GetActorLocation() / Params.VoxelSize;
	return Generator->Generate(Params.ChunkSize + 1, Params.ChunkSize + 1, Params.ChunkSize + 1, Location);
}

void AChunk::GenerateVoxels(const TArray<float>& HeightMap)
{
	Voxels.SetNum((Params.ChunkSize + 1) * (Params.ChunkSize + 1) * (Params.ChunkSize + 1));

	int Index = 0;

	FIntVector ChunkLocation = GetCorrectedChunkPosition1(GetActorLocation(), Params.VoxelSize, Params.ChunkSize);

 	for (int X = 0; X <= Params.ChunkSize; X++)
	{
		for (int Y = 0; Y <= Params.ChunkSize; Y++)
		{
			for (int Z = 0; Z <= Params.ChunkSize; Z++)
			{
				int VoxelIndex = GetVoxelIndex1(X, Y, Z, Params.ChunkSize + 1, Params.ChunkSize + 1, Params.ChunkSize + 1);
				float Height = HeightMap[VoxelIndex];

				if (Height > 0.f)
				{
					float CurrentZ = ChunkLocation.Z + Z;

					if (CurrentZ < 50 && CurrentZ > -10)
					{
						Voxels[VoxelIndex] = { EVoxel::Grass, Height };
					}
					else
					{
						Voxels[VoxelIndex] = { EVoxel::Rock, Height };
					}
				}
				else
				{
					Voxels[VoxelIndex] = { EVoxel::Air, Height };
				}
				
			}
		}

	}
}

void AChunk::Load()
{
	TArray<float> HeightMap = GenerateHeightMap();

	GenerateVoxels(HeightMap);

	// Optimization - If above ground and chunk has no data, dont bother rendering
	if (Params.Optimise)
	{
		if (GetActorLocation().Z > 0)
		{
			if (Algo::AllOf(Voxels, [this](const TPair<EVoxel, float>& Val) { return Val.Value <= Params.SurfaceLevel; }))
			{
				return;
			}
		}
	}

	MeshData2 = FDynamicMesh3{ true, true, true, false};
	RenderAlgorithm->GenerateData(Voxels, Params, MeshData, MeshData2);

	if (Params.MeshType == EMeshType::Dynamic)
	{
		MeshData2.EnableAttributes();
		MeshData2.Attributes()->EnablePrimaryColors();

		UE::Geometry::CopyVertexNormalsToOverlay(MeshData2, *MeshData2.Attributes()->PrimaryNormals());
		UE::Geometry::CopyVertexUVsToOverlay(MeshData2, *MeshData2.Attributes()->PrimaryUV());

		CopyVertexColorsToOverlay(MeshData2, *MeshData2.Attributes()->PrimaryColors());
	}

	Loaded = true;
}

void AChunk::Unload()
{
	if (Params.MeshType == EMeshType::Procedural)
	{
		Mesh->ClearAllMeshSections();
	}
	else
	{
		
	}

	Voxels.Reset();

	Loaded = false;
}

bool AChunk::IsLoaded()
{
	return Loaded;
}

void AChunk::Render()
{
	if (Params.MeshType == EMeshType::Procedural)
	{
		if (MeshData.Vertices.Num() > 0)
		{
			Mesh->CreateMeshSection_LinearColor(
				0,
				MeshData.Vertices,
				MeshData.Triangles,
				TArray<FVector>{},
				MeshData.UV0,
				MeshData.Colours,
				TArray<FProcMeshTangent>{},
				true);

			Mesh->SetMaterial(0, Params.Material);
		}
	}
	else
	{
		if (MeshData2.GetVerticesBuffer().Num() > 0)
		{
			DynamicMesh->SetComplexAsSimpleCollisionEnabled(true);
			DynamicMesh->SetMesh(MoveTemp(MeshData2));
			DynamicMesh->SetMaterial(0, Params.Material);
		}
	}
}

AChunk* AChunk::Create(UWorld* World, FVector Location, FChunkParams& Params)
{
	auto* NewChunk = World->SpawnActor<AChunk>(Location, FRotator::ZeroRotator);
	NewChunk->SetChunkParams(Params);

	return NewChunk;
}

void AChunk::BeginPlay()
{
	Super::BeginPlay();

	Mesh->SetCastShadow(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	DynamicMesh->SetCastShadow(false);
	DynamicMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}
