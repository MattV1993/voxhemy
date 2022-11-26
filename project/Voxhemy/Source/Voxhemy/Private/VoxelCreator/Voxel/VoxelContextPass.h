#pragma once

#include "Chunk/ChunkUtils.h"

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "VoxelContextPass.generated.h"

class UVoxelContext;

UCLASS(Blueprintable, BlueprintType, Abstract)
class VOXHEMY_API UVoxelContextPass : public UObject
{
	GENERATED_BODY()

public:

	static UVoxelContextPass* Create(UObject* Outer, TSubclassOf<UVoxelContextPass> Derived, FIntVector Size, FVector Offset);

	virtual TArray<EVoxel> Run(const TArray<float>& HeightMap, const TArray<EVoxel>& Input, const UVoxelContext* Context) const 
		PURE_VIRTUAL(UVoxelContextPass::Run, TArray<EVoxel> Ret; return Ret;);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UHeightMapContext> HeightMapContextClass;

	UPROPERTY()
	UHeightMapContext* HeightMapContext;

	FIntVector Size;
	FVector Offset;

private:

};

UCLASS()
class VOXHEMY_API UVoxelContextPassGround : public UVoxelContextPass
{
	GENERATED_BODY()

public:

	TArray<EVoxel> Run(const TArray<float>& HeightMap, const TArray<EVoxel>& Input, const UVoxelContext* Context) const override;

};

UCLASS()
class VOXHEMY_API UVoxelContextPassDirt : public UVoxelContextPass
{
	GENERATED_BODY()

public:

	TArray<EVoxel> Run(const TArray<float>& HeightMap, const TArray<EVoxel>& Input, const UVoxelContext* Context) const override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Threshold = 0;


};