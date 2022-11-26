#pragma once

#include "VoxelStaticMeshLayer.h"
#include "Chunk/ChunkUtils.h"

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "VoxelStaticMeshContext.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOXHEMY_API UVoxelStaticMeshContext : public UObject
{
	GENERATED_BODY()

public:

	static UVoxelStaticMeshContext* Create(UObject* Outer, TSubclassOf<UVoxelStaticMeshContext> Derived, AActor* Owner, FIntVector Size, float VoxelSize, FVector Location);
	
	void Generate(const TArray<TPair<EVoxel, float>>& Voxels);
	void Apply();
	void Reset();

	AActor* GetOwner() const;
	FIntVector GetSize() const;
	float GetVoxelSize() const;
	FVector GetLocation() const;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FVoxelStaticMeshLayerSpec> LayerSpecs;

private:

	void Init();

	UPROPERTY()
		TArray<UVoxelStaticMeshLayer*> Layers;

	AActor* Owner;
	FIntVector Size;
	float VoxelSize;
	FVector Location;
};