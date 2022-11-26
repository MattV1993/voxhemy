#pragma once

#include "Chunk/ChunkUtils.h"

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "VoxelStaticMeshLayer.generated.h"

class UVoxelStaticMeshContext;
class UHeightMapContext;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FVoxelStaticMeshLayerSpec
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CullDistance = 10000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CastShadow = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool EnableCollision = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UHeightMapContext> HeightMapContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Threshold = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxPerVoxel = 1;
};

UCLASS(Blueprintable, BlueprintType)
class VOXHEMY_API UVoxelStaticMeshLayer : public UObject
{
	GENERATED_BODY()

public:

	static UVoxelStaticMeshLayer* Create(UObject* Outer, const FVoxelStaticMeshLayerSpec& Spec, AActor* Owner, FIntVector Size, float VoxelSize, FVector Location);

	virtual void Run(const TArray<TPair<EVoxel, float>>& Voxels, UVoxelStaticMeshContext* Context);

	void Apply();
	void Clean();


protected:


private:

	UPROPERTY()
	UHeightMapContext* HeightMapContext;

	UPROPERTY()
		UHierarchicalInstancedStaticMeshComponent* MeshComponent;

	FVoxelStaticMeshLayerSpec Spec;

	TArray<FTransform> MeshTransforms;
};