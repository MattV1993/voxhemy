#include "RenderAlgorithmMarchingCube.h"
#include "Chunk/ChunkUtils.h"
#include "Chunk/ChunkMeshData.h"

#include "DynamicMesh/MeshAttributeUtil.h"
#include "DynamicMesh/MeshNormals.h"

void URenderAlgorithmMarchingCube::GenerateData(const TArray<TPair<EVoxel, float>>& HeightMap, const FChunkParams& Params, FChunkMeshData& OutData, UE::Geometry::FDynamicMesh3& OutData2)
{
	if (Params.SurfaceLevel > 0.f)
	{
		TriangleOrder[0] = 0;
		TriangleOrder[1] = 1;
		TriangleOrder[2] = 2;
	}
	else
	{
		TriangleOrder[0] = 2;
		TriangleOrder[1] = 1;
		TriangleOrder[2] = 0;
	}

	float Cube[8];

	for (int X = 0; X < Params.ChunkSize; X++)
	{
		for (int Y = 0; Y < Params.ChunkSize; Y++)
		{
			for (int Z = 0; Z < Params.ChunkSize; Z++)
			{
				// Create cube of all voxels at each corner
				for (int I = 0; I < 8; I++)
				{
					Cube[I] = HeightMap[GetVoxelIndex1(X + VertexOffset[I][0], Y + VertexOffset[I][1], Z + VertexOffset[I][2], Params.ChunkSize + 1, Params.ChunkSize + 1, Params.ChunkSize + 1)].Value;
				}

				March(X, Y, Z, Cube, HeightMap, Params, OutData, OutData2);
			}
		}
	}

	if (Params.MeshType == EMeshType::Dynamic)
	{
		//UE::Geometry::FMeshNormals::QuickComputeVertexNormals(OutData2);
	}
}

void URenderAlgorithmMarchingCube::March(int X, int Y, int Z, const float Cube[8], const TArray<TPair<EVoxel, float>>& HeightMap, const FChunkParams& Params, FChunkMeshData& OutData, UE::Geometry::FDynamicMesh3& OutData2)
{
	// Create mask by checking which corners have values above surface level
	int VertexMask = 0;

	for (int I = 0; I < 8; I++)
	{
		if (Cube[I] <= Params.SurfaceLevel)
		{
			VertexMask |= 1 << I;
		}
	}

	const int EdgeMask = CubeEdgeFlags[VertexMask];

	if (EdgeMask == 0)
	{
		// Either all points in shape or all points outside shape
		// so nothing to draw
		return;
	}

	FVector EdgeVertex[12];
	TArray<EVoxel> EdgeVoxels;

	for (int I = 0; I < 12; I++)
	{
		// Get edges for point
		int VertexOffsetX = VertexOffset[EdgeConnection[I][0]][0];
		int VertexOffsetY = VertexOffset[EdgeConnection[I][0]][1];
		int VertexOffsetZ = VertexOffset[EdgeConnection[I][0]][2];

		if ((EdgeMask & 1 << I) != 0)
		{
			float Offset = Params.Interpolation ? GetInterpolationOffset(Cube[EdgeConnection[I][0]], Cube[EdgeConnection[I][1]], Params.SurfaceLevel) : 0.5f;

			EdgeVertex[I].X = X + (VertexOffsetX + Offset * EdgeDirection[I][0]);
			EdgeVertex[I].Y = Y + (VertexOffsetY + Offset * EdgeDirection[I][1]);
			EdgeVertex[I].Z = Z + (VertexOffsetZ + Offset * EdgeDirection[I][2]);

			EdgeVoxels.Add(HeightMap[GetVoxelIndex1(X + VertexOffsetX, Y + VertexOffsetY, Z + VertexOffsetZ, Params.ChunkSize + 1, Params.ChunkSize + 1, Params.ChunkSize + 1)].Key);
		}
	}

	for (int I = 0; I < 5; I++)
	{
		if (TriangleConnectionTable[VertexMask][3 * I] < 0) break;

		const FVector& V1 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * I]];
		const FVector& V2 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * I + 1]];
		const FVector& V3 = EdgeVertex[TriangleConnectionTable[VertexMask][3 * I + 2]];

		auto V1Scaled = V1 * Params.VoxelSize;
		auto V2Scaled = V2 * Params.VoxelSize;
		auto V3Scaled = V3 * Params.VoxelSize;

		auto Normal = FVector::CrossProduct(V2Scaled - V1Scaled, V3Scaled - V1Scaled);
		Normal.Normalize();

		FLinearColor Col
		{
			(float)GetTextureIndex(SelectVoxel(EdgeVoxels, I)),
			0, 0, 1
		};

		if (Params.MeshType == EMeshType::Procedural)
		{
			int VertexCount = OutData.Vertices.Num();

			OutData.Vertices.Append({ V1Scaled, V2Scaled, V3Scaled });

			OutData.UV0.Emplace(static_cast<double>(V1.X * Params.UVScale), static_cast<double>(V1.Y * Params.UVScale));
			OutData.UV0.Emplace(static_cast<double>(V2.X * Params.UVScale), static_cast<double>(V2.Y * Params.UVScale));
			OutData.UV0.Emplace(static_cast<double>(V3.X * Params.UVScale), static_cast<double>(V3.Y * Params.UVScale));

			OutData.Triangles.Append(
				{
					VertexCount + TriangleOrder[0],
					VertexCount + TriangleOrder[1],
					VertexCount + TriangleOrder[2]
				});

			OutData.Normals.Append(
				{
				Normal,
				Normal,
				Normal
				});

			OutData.Colours.Append(
				{
					Col,
					Col,
					Col
				});
		}
		else
		{
			int VertexCount = OutData2.GetVerticesBuffer().Num();

			OutData2.AppendVertex(V1Scaled);
			OutData2.AppendVertex(V2Scaled);
			OutData2.AppendVertex(V3Scaled);

			OutData2.SetVertexUV(VertexCount, { (float)V1.X * Params.UVScale, (float)V1.Y * Params.UVScale });
			OutData2.SetVertexUV(VertexCount + 1, { (float)V2.X * Params.UVScale, (float)V2.Y * Params.UVScale });
			OutData2.SetVertexUV(VertexCount + 2, { (float)V3.X * Params.UVScale, (float)V3.Y * Params.UVScale });

			OutData2.AppendTriangle(
				{
					VertexCount + TriangleOrder[0],
					VertexCount + TriangleOrder[1],
					VertexCount + TriangleOrder[2] });

			OutData2.SetVertexNormal(VertexCount, { (float)Normal.X, (float)Normal.Y, (float)Normal.Z });
			OutData2.SetVertexNormal(VertexCount + 1, { (float)Normal.X, (float)Normal.Y, (float)Normal.Z });
			OutData2.SetVertexNormal(VertexCount + 2, { (float)Normal.X, (float)Normal.Y, (float)Normal.Z });

			OutData2.SetVertexColor(VertexCount, { Col.R, Col.G , Col.B });
			OutData2.SetVertexColor(VertexCount + 1, { Col.R, Col.G , Col.B });
			OutData2.SetVertexColor(VertexCount + 2, { Col.R, Col.G , Col.B });
		}
	}
}

float URenderAlgorithmMarchingCube::GetInterpolationOffset(float V1, float V2, float SurfaceLevel) const
{
	const float Delta = (V2 - V1);
	return Delta == 0.f ? SurfaceLevel : ((SurfaceLevel - V1) / Delta);
}

int URenderAlgorithmMarchingCube::GetTextureIndex(EVoxel Voxel) const
{
	switch (Voxel)
	{
	case EVoxel::Grass:
		return 0;
	case EVoxel::Ground:
		return 1;
	case EVoxel::Rock:
		return 2;
	default:
		return 255;
	}
}

EVoxel URenderAlgorithmMarchingCube::SelectVoxel(TArray<EVoxel> Voxels, int Index)
{
	uint8_t Bits = VoxelSelectBits[Index];
	int IndexA = 7 - (Bits >> 4);
	int IndexB = 7 - (Bits & 0xF);

	EVoxel A = Voxels[IndexA];
	EVoxel B = Voxels[IndexB];

	return (A != EVoxel::Air) ? A : B;
}
