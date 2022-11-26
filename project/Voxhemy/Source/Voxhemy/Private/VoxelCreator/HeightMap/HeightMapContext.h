#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Math/IntVector.h"

#include "HeightMapContext.generated.h"

class UHeightMapFunctionResolver;

USTRUCT(BlueprintType)
struct VOXHEMY_API FHeightMapContextPassSpec
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Name = FName("None");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UHeightMapFunctionResolver> HeightMapFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FString, FString> Params;
};

UCLASS()
class VOXHEMY_API UHeightMapContextPass : public UObject
{
	GENERATED_BODY()

public:

	static UHeightMapContextPass* Create(UObject* Outer, const FHeightMapContextPassSpec& Spec);

	void Run(const UHeightMapContext* Context);

	const TMap<FString, FString>& GetParams() const;

	const TArray<float>& GetOutput() const;

private:

	UPROPERTY()
		UHeightMapFunctionResolver* HeightMapFunction;

	FHeightMapContextPassSpec Spec;

	TArray<float> Output;
};

UCLASS(Blueprintable, BlueprintType)
class UHeightMapContext : public UObject
{
	GENERATED_BODY()

public:

	static UHeightMapContext* Create(UObject* Outer, TSubclassOf<UHeightMapContext> Derived, FIntVector Size, FVector Offset);
	static UHeightMapContext* Create(UObject* Outer, const TArray<FHeightMapContextPassSpec>& Passes, FIntVector Size, FVector Offset);

	void PostInitProperties() override;

	TArray<float> Generate();

	FIntVector GetSize() const;
	FVector GetOffset() const;

	const TMap<FName, UHeightMapContextPass*>& GetPasses() const;

protected:

	void BeginPlay();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FHeightMapContextPassSpec> PassSpecs;

private:

	UPROPERTY()
		TMap<FName, UHeightMapContextPass*> PassMap;

	FIntVector Size; 
	FVector Offset;
};