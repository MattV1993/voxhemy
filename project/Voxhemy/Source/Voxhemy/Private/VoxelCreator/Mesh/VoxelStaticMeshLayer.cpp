#include "VoxelStaticMeshLayer.h"
#include "VoxelStaticMeshContext.h"
#include "HeightMap/HeightMapContext.h"
#include "HeightMap/HeightMapFunctionResolver.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"

UVoxelStaticMeshLayer* UVoxelStaticMeshLayer::Create(UObject* Outer, const FVoxelStaticMeshLayerSpec& Spec, AActor* Owner, FIntVector Size, float VoxelSize, FVector Location)
{
	auto* Layer = NewObject<UVoxelStaticMeshLayer>(Outer);
	Layer->Spec = Spec;

	Layer->MeshComponent = NewObject<UHierarchicalInstancedStaticMeshComponent>(Layer);

	Layer->MeshComponent->AttachToComponent(Owner->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
	Layer->MeshComponent->SetStaticMesh(Layer->Spec.Mesh);
	Layer->MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Layer->MeshComponent->RegisterComponent();
	Layer->MeshComponent->InstanceEndCullDistance = Layer->Spec.CullDistance;
	Layer->MeshComponent->bSelectable = false;
	Layer->MeshComponent->Mobility = EComponentMobility::Static;
	Layer->MeshComponent->CastShadow = Layer->Spec.CastShadow;
	Layer->MeshComponent->bDisableCollision = !Layer->Spec.EnableCollision;

	Layer->HeightMapContext = UHeightMapContext::Create(Layer, Layer->Spec.HeightMapContext, Size, Location / VoxelSize);

	return Layer;
}

void UVoxelStaticMeshLayer::Run(const TArray<TPair<EVoxel, float>>& Voxels, UVoxelStaticMeshContext* Context)
{
	TArray<float> MeshHeightMap = HeightMapContext->Generate();

	for (int X = 0; X < Context->GetSize().X; X++)
	{
		for (int Y = 0; Y < Context->GetSize().Y; Y++)
		{
			for (int Z = 0; Z < Context->GetSize().Z; Z++)
			{
				int CurrentIndex = GetVoxelIndex1(X, Y, Z, Context->GetSize().X, Context->GetSize().Y, Context->GetSize().Z);
				EVoxel CurrentVoxel = Voxels[CurrentIndex].Key;

				if (CurrentVoxel == EVoxel::Grass)
				{
					float CurrentMeshHeightMapValue = MeshHeightMap[CurrentIndex];

					if (CurrentMeshHeightMapValue > Spec.Threshold)
					{
						float CurrentValue = Voxels[CurrentIndex].Value;

						// TODO: Find a better way of getting the correct Z offset
						// Currently just copied GetInterpolationOffset
						// Should probably use the triangle data so we know the exact Z offset
						float V1 = CurrentValue;
						float V2 = Voxels[GetVoxelIndex1(X, Y, Z + 1, Context->GetSize().X, Context->GetSize().Y, Context->GetSize().Z)].Value;
						const float Delta = (V2 - V1);
						float Pos = Delta == 0.f ? 0 : ((0 - V1) / Delta);

						FTransform ChunkTransform;
						ChunkTransform.AddToTranslation(Context->GetLocation());
						ChunkTransform.AddToTranslation(
							(FVector{ static_cast<double>(X), static_cast<double>(Y), static_cast<double>(Z) } *Context->GetVoxelSize()) + FVector{ 0, 0, Pos * Context->GetVoxelSize() });

						int Off = 16;

						if (Spec.MaxPerVoxel == 1)
						{
							FTransform MeshTransform = ChunkTransform;
							MeshTransform.AddToTranslation(FVector3d(FMath::RandRange(-Off, Off), FMath::RandRange(-Off, Off), 0.0));

							MeshTransforms.Add(ChunkTransform);
						}
						else
						{
							int XMoves = Spec.MaxPerVoxel / 2;
							int YMoves = Spec.MaxPerVoxel / 2;

							float XStep = Context->GetVoxelSize() / XMoves;
							float YStep = Context->GetVoxelSize() / YMoves;

							float XPos = 0 - (XStep / XMoves);
							float YPos = 0 - (YStep / YMoves);

							for (int MeshX = 0; MeshX < XMoves; MeshX++)
							{
								for (int MeshY = 0; MeshY < YMoves; MeshY++)
								{
									FTransform MeshTransform = ChunkTransform;
									MeshTransform.AddToTranslation({ XPos , YPos, 0.0 });
									MeshTransform.AddToTranslation(FVector3d(FMath::RandRange(-Off, Off), FMath::RandRange(-Off, Off), 0.0));

									MeshTransforms.Add(MeshTransform);

									YPos += YStep;
								}

								XPos += XStep;
								YPos = 0 - (YStep / YMoves);
							}
						}

						break;
					}
				}
			}

		}
	}
}

void UVoxelStaticMeshLayer::Apply()
{
 	MeshComponent->AddInstances(MeshTransforms, true);
}

void UVoxelStaticMeshLayer::Clean()
{
	MeshComponent->DestroyComponent();
}
