#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Containers/Array.h"

#include "FastNoiseWrapper.h"

#include "HeightMapFunction.generated.h"

UENUM(BlueprintType)
enum class EPassOperation : uint8
{
	Set,
	Add,
	Subtract,
	Multiply
};

UCLASS(Blueprintable, BlueprintType)
class VOXHEMY_API UHeightMapFunction : public UObject
{
	GENERATED_BODY()

public:

	virtual TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) PURE_VIRTUAL(UHeightMapFunction::GenerateHeightMap, return Input;);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPassOperation Operation = EPassOperation::Set;

	void ApplyOperation(TArray<float>& Input, int Index, float Value);
};

UCLASS()
class VOXHEMY_API UHeightMapFunctionGradient : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Min = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Max = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ValueOffset = 0;
};

UCLASS()
class VOXHEMY_API UHeightMapFunctionSelect : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Min = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Max = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Threshold = 0.5;
};

UCLASS()
class VOXHEMY_API UHeightMapFunctionFloor : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Min = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Threshold = 0.5;
};

UCLASS()
class VOXHEMY_API UHeightMapFunctionNoise : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	UHeightMapFunctionNoise();

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFastNoise_NoiseType NoiseType = EFastNoise_NoiseType::Perlin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EFastNoise_FractalType FractalType = EFastNoise_FractalType::FBM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NoiseModifier = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NoiseFrequency = 0.03f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Seed = 1337;

private:

	UPROPERTY()
		TObjectPtr<UFastNoiseWrapper> Noise;
};

UCLASS()
class VOXHEMY_API UHeightMapFunctionValue : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Value = 0;

};

UCLASS()
class VOXHEMY_API UHeightMapFunctionStep : public UHeightMapFunction
{
	GENERATED_BODY()

public:

	TArray<float> Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset) override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Step = 0.1;

};