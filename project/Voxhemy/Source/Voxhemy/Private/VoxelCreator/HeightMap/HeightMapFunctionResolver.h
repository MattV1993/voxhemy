#pragma once

#include "HeightMapFunctions.h"

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "FastNoiseWrapper.h"

#include "HeightMapFunctionResolver.generated.h"

class UHeightMapContext;

UCLASS(Blueprintable, BlueprintType, Abstract)
class UHeightMapFunctionResolver : public UObject
{
	GENERATED_BODY()

public:

	virtual TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
		PURE_VIRTUAL(UHeightMapFunctionResolver::CallHeightMapFunction, TArray<float> Ret; return Ret;);

};

UCLASS()
class UHeightMapFunctionResolverNoise3D : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverNoise2D : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverGradient : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverSelect : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverValue : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverStep : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

UCLASS()
class UHeightMapFunctionResolverCombine : public UHeightMapFunctionResolver
{
	GENERATED_BODY()

public:

	TArray<float> CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const override;

};

FastNoise::NoiseType ToNoiseType(FString Value);
FastNoise::FractalType ToFractalType(FString Value);
EPassOperation ToPassOperation(FString Value);