#include "ChunkUtils.h"
#include "Render/RenderAlgorithmMarchingCube.h"

int GetVoxelIndex1(int X, int Y, int Z, int XSize, int YSize, int ZSize)
{
    return Z * ZSize * YSize + Y * XSize + X;
}

FIntVector GetCorrectedChunkPosition1(FVector Position, float VoxelSize, int32 ChunkSize)
{
	const float ChunkSizeReal = ChunkSize * VoxelSize;

	int CorrectedX = static_cast<int>(FMath::Floor(Position.X / ChunkSizeReal) * ChunkSizeReal);
	int CorrectedY = static_cast<int>(FMath::Floor(Position.Y / ChunkSizeReal) * ChunkSizeReal);
	int CorrectedZ = static_cast<int>(FMath::Floor(Position.Z / ChunkSizeReal) * ChunkSizeReal);

	return FIntVector
	{
		CorrectedX,
		CorrectedY,
		CorrectedZ
	};
}

TScriptInterface<IRenderAlgorithm> CreateRenderAlgorithm(UObject* Outer, EAlgorithmType AlgorithmType)
{
	switch (AlgorithmType)
	{
	case EAlgorithmType::MarchingCube:
		return NewObject<URenderAlgorithmMarchingCube>(Outer);
	default:
		checkNoEntry();
		return nullptr;
	}
}