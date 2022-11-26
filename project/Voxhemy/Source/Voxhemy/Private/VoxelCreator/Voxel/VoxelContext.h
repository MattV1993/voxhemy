#pragma once

#include "VoxelContextPass.h"

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "VoxelContext.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOXHEMY_API UVoxelContext : public UObject
{
	GENERATED_BODY()

public:

	static UVoxelContext* Create(UObject* Outer, TSubclassOf<UVoxelContext> Derived, FIntVector Size, FVector Offset);

	void PostInitProperties() override;

	TArray<EVoxel> Generate(const TArray<float>& HeightMap);

	FIntVector GetSize() const;
	FVector GetOffset() const;

protected:

	void BeginPlay();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<UVoxelContextPass>> DefaultPasses;

private:

	UPROPERTY()
		TArray<UVoxelContextPass*> Passes;

	FIntVector Size;
	FVector Offset;
};