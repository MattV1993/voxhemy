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

bool CopyVertexColorsToOverlay(const UE::Geometry::FDynamicMesh3& Mesh, UE::Geometry::FDynamicMeshColorOverlay& ColorOverlayOut, bool bCompactElements)
{
	if (!Mesh.HasVertexColors())
	{
		return false;
	}

	if (ColorOverlayOut.ElementCount() > 0)
	{
		ColorOverlayOut.ClearElements();
	}

	ColorOverlayOut.BeginUnsafeElementsInsert();
	for (int32 Vid : Mesh.VertexIndicesItr())
	{
		FVector3f Normal = Mesh.GetVertexColor(Vid);
		ColorOverlayOut.InsertElement(Vid, &Normal.X, true);
	}
	ColorOverlayOut.EndUnsafeElementsInsert();

	for (int32 Tid : Mesh.TriangleIndicesItr())
	{
		ColorOverlayOut.SetTriangle(Tid, Mesh.GetTriangle(Tid));
	}

	if (bCompactElements)
	{
		UE::Geometry::FCompactMaps CompactMaps;
		ColorOverlayOut.CompactInPlace(CompactMaps);
	}

	return true;
}
