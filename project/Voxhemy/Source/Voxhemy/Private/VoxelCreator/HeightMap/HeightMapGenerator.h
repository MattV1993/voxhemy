#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Containers/Array.h"

#include "FastNoiseWrapper.h"

#include "HeightMapGenerator.generated.h"

class UHeightMapFunction;

USTRUCT(BlueprintType)
struct VOXHEMY_API FHeightMapGeneratorPassSpec
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name = FName("None");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UHeightMapFunction> Function;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Input;
};

USTRUCT(BlueprintType)
struct VOXHEMY_API FHeightMapGeneratorPass
{
	GENERATED_BODY()

	UPROPERTY()
	UHeightMapFunction* Function;

	TArray<float> Output;
};

UCLASS(Blueprintable, BlueprintType)
class VOXHEMY_API UHeightMapGenerator : public UObject
{
	GENERATED_BODY()

public:

	void PostInitProperties() override;

	TArray<float> Generate(int XSize, int YSize, int ZSize, FVector Offset);

protected:

	void BeginPlay();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FHeightMapGeneratorPassSpec> Passes;

private:

	UPROPERTY()
		TMap<FName, FHeightMapGeneratorPass> PassMap;
};