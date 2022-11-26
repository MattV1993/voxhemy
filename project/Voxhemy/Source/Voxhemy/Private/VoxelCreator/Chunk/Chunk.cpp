#include "Chunk.h"
#include "HeightMap/HeightMapContext.h"
#include "Voxel/VoxelContext.h"
#include "Mesh/VoxelStaticMeshContext.h"
#include "Render/RenderAlgorithm.h"

#include "Algo/AllOf.h"

#include "Components/DynamicMeshComponent.h"

#include "ProceduralMeshComponent.h"
#include "DynamicMesh/MeshAttributeUtil.h"

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

	int Size = Params.ChunkSize + 1;
	FIntVector SizeVector{ Size, Size, Size };
	const FVector LocationOffset = GetActorLocation() / Params.VoxelSize;

	if (Params.HeightMapContext)
	{
		HeightMapContext = UHeightMapContext::Create(this, Params.HeightMapContext, SizeVector, LocationOffset);
	}

	if (Params.VoxelContext)
	{
		VoxelContext = UVoxelContext::Create(this, Params.VoxelContext, SizeVector, LocationOffset);
	}

	if (Params.VoxelStaticMeshContext)
	{
		VoxelStaticMeshContext = UVoxelStaticMeshContext::Create(this, Params.VoxelStaticMeshContext, this, SizeVector, Params.VoxelSize, GetActorLocation());
	}
}

void AChunk::Load()
{
	check(Params.HeightMapContext != nullptr);

	// Create HeightMap
	TArray<float> HeightMap = HeightMapContext->Generate();

	// Create Voxels
	TArray<EVoxel> VoxelMap = VoxelContext->Generate(HeightMap);

	// Merge HeightMap and Voxels
	int Size = Params.ChunkSize + 1;
	Voxels.SetNum(Size * Size * Size);

	for (int I = 0; I < HeightMap.Num(); I++)
	{
		Voxels[I] = TPair<EVoxel, float>{ VoxelMap[I], HeightMap[I] };
	}

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

	if (VoxelStaticMeshContext)
	{
		// Create Static Meshs
		VoxelStaticMeshContext->Generate(Voxels);
	}

	MeshData2 = FDynamicMesh3{ true, true, true, false };
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
		MeshData2 = FDynamicMesh3{ true, true, true, false };
		DynamicMesh->SetMesh(MoveTemp(MeshData2));
	}

	Voxels.Reset();

	HeightMapContext->ConditionalBeginDestroy();
	HeightMapContext = nullptr;

	VoxelContext->ConditionalBeginDestroy();
	VoxelContext = nullptr;

	if (VoxelStaticMeshContext)
	{
		VoxelStaticMeshContext->Reset();
	}

	Loaded = false;
}

bool AChunk::IsLoaded() const
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

	if (VoxelStaticMeshContext)
	{
		VoxelStaticMeshContext->Apply();
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
