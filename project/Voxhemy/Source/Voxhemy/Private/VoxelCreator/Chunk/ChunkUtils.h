#pragma once

#include "Render/RenderAlgorithm.h"
#include "FastNoiseWrapper.h"

#include "DynamicMesh/MeshAttributeUtil.h"

#include "ChunkUtils.generated.h"

class UHeightMapContext;
class UVoxelContext;
class UVoxelStaticMeshContext;
class UHeightMapGenerator;
class AStaticMesh;

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
		int TickSpeedMS = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int UpdatesPerTick = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int RendersPerTick = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SurfaceLevel = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Interpolation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UHeightMapContext> HeightMapContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UVoxelContext> VoxelContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UVoxelStaticMeshContext> VoxelStaticMeshContext;

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

bool CopyVertexColorsToOverlay(
	const UE::Geometry::FDynamicMesh3& Mesh,
	UE::Geometry::FDynamicMeshColorOverlay& ColorOverlayOut,
	bool bCompactElements = false);