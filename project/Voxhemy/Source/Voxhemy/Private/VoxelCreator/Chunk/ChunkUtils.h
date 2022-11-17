#pragma once

#include "Render/RenderAlgorithm.h"
#include "FastNoiseWrapper.h"

#include "ChunkUtils.generated.h"

UENUM()
enum class EVoxel : uint8
{
	Air = 0,
	Grass,
	Ground,
	Rock,
	Water,
	Count
};

UENUM()
enum class EAlgorithmType
{
	MarchingCube
};

UENUM()
enum class EMeshType
{
	Procedural,
	Dynamic
};

class UHeightMapGenerator;

USTRUCT(BlueprintType)
struct FChunkParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float VoxelSize = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float UVScale = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ChunkSize = 32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SurfaceLevel = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Interpolation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UHeightMapGenerator> Generator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool DrawDebug = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Optimise = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EAlgorithmType RenderAlgorithm = EAlgorithmType::MarchingCube;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EMeshType MeshType = EMeshType::Procedural;

};

int GetVoxelIndex1(int X, int Y, int Z, int XSize, int YSize, int ZSize);

FIntVector GetCorrectedChunkPosition1(FVector Position, float VoxelSize, int32 ChunkSize);

TScriptInterface<IRenderAlgorithm> CreateRenderAlgorithm(UObject* Outer, EAlgorithmType AlgorithmType);