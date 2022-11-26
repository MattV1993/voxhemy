#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "FastNoiseWrapper.h"

#include "HeightMapFunctions.generated.h"

UENUM(BlueprintType)
enum class EPassOperation : uint8
{
    Set,
    Add,
    Subtract,
    Multiply
};

USTRUCT()
struct FNoiseParams
{
    GENERATED_BODY()

    FastNoise::NoiseType NoiseType = FastNoise::NoiseType::Perlin;
    FastNoise::FractalType FractalType = FastNoise::FractalType::FBM;

    float NoiseFrequency = 0.03f;

    int Seed = 1337;

    int Octaves = 3;
};

UCLASS()
class UHeightMapFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    // Generates a map of 3D noise
    UFUNCTION()
        static TArray<float> Noise3D(const TArray<float>& Input, const FNoiseParams& Params, FVector Offset, FIntVector Size, EPassOperation Operation = EPassOperation::Set);

    // Generates a map of 2D noise
    UFUNCTION()
        static TArray<float> Noise2D(const TArray<float>& Input, const FNoiseParams& Params, FVector2D Offset, FIntPoint Size, EPassOperation Operation = EPassOperation::Set);

    // Creates a gradient on the Z axis from Min to Max
    UFUNCTION()
        static TArray<float> Gradient(const TArray<float>& Input, float Min, float Max, float ZOffset, FIntVector Size, EPassOperation Operation = EPassOperation::Set);

    // Applies Max to any value above threshold, otherwise applies min
    UFUNCTION()
        static TArray<float> Select(const TArray<float>& Input, float Min, float Max, float Threshold, FIntVector Size, EPassOperation Operation = EPassOperation::Set);
      
    // Applies a value
    UFUNCTION()
        static TArray<float> Value(const TArray<float>& Input, float Value, FIntVector Size, EPassOperation Operation = EPassOperation::Set);

    // Applies the nearest multiple
    UFUNCTION()
        static TArray<float> Step(const TArray<float>& Input, float Step, FIntVector Size, EPassOperation Operation = EPassOperation::Set);

    // Combines 2 HeightMaps
    UFUNCTION()
        static TArray<float> Combine(const TArray<float>& Input1, TArray<float>& Input2, FIntVector Size, EPassOperation Operation = EPassOperation::Set);
};