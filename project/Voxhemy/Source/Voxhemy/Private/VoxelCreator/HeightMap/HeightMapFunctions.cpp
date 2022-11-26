#include "HeightMapFunctions.h"
#include "Chunk/ChunkUtils.h"

namespace
{
    void ApplyOperation(TArray<float>& Input, int Index, float Value, EPassOperation Operation)
    {
		switch (Operation)
		{
		case EPassOperation::Set:
			Input[Index] = Value;
			break;
		case EPassOperation::Add:
			Input[Index] += Value;
			break;
		case EPassOperation::Subtract:
			Input[Index] -= Value;
			break;
		case EPassOperation::Multiply:
			Input[Index] *= Value;
			break;
		default:
			checkNoEntry();
			break;
		}
    }
}

TArray<float> UHeightMapFunctions::Noise3D(const TArray<float>& Input, const FNoiseParams& Params, FVector Offset, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	FastNoise Noise;
	Noise.SetInterp(FastNoise::Interp::Quintic);
	Noise.SetFractalOctaves(Params.Octaves);
	Noise.SetFractalLacunarity(2.f);
	Noise.SetFractalGain(0.5f);
	Noise.SetCellularJitter(0.45f);
	Noise.SetCellularDistanceFunction(FastNoise::CellularDistanceFunction::Euclidean);
	Noise.SetCellularReturnType(FastNoise::CellularReturnType::CellValue);

	Noise.SetFrequency(Params.NoiseFrequency);
	Noise.SetNoiseType(Params.NoiseType);
	Noise.SetFractalType(Params.FractalType);
	Noise.SetSeed(Params.Seed);

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				const float Val = Noise.GetNoise(Offset.X + X, Offset.Y + Y, Offset.Z + Z);
				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z), Val, Operation);
			}
		}
	}

 	return HeightMap;
}

TArray<float> UHeightMapFunctions::Noise2D(const TArray<float>& Input, const FNoiseParams& Params, FVector2D Offset, FIntPoint Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	FastNoise Noise;
	Noise.SetInterp(FastNoise::Interp::Quintic);
	Noise.SetFractalOctaves(Params.Octaves);
	Noise.SetFractalLacunarity(2.f);
	Noise.SetFractalGain(0.5f);
	Noise.SetCellularJitter(0.45f);
	Noise.SetCellularDistanceFunction(FastNoise::CellularDistanceFunction::Euclidean);
	Noise.SetCellularReturnType(FastNoise::CellularReturnType::CellValue);

	Noise.SetFrequency(Params.NoiseFrequency);
	Noise.SetNoiseType(Params.NoiseType);
	Noise.SetFractalType(Params.FractalType);
	Noise.SetSeed(Params.Seed);

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			const float Val = Noise.GetNoise(Offset.X + X, Offset.Y + Y);
			ApplyOperation(HeightMap, X + (Y * Size.X), Val, Operation);
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctions::Gradient(const TArray<float>& Input, float Min, float Max, float ZOffset, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				const float Val = ((ZOffset + Z) - Min) / (Max - Min);
				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z), Val, Operation);
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctions::Select(const TArray<float>& Input, float Min, float Max, float Threshold, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				int VoxelIndex = GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z);
				float Value = 0.f;

				if (HeightMap[VoxelIndex] < Threshold)
				{
					Value = Min;
				}
				else
				{
					Value = Max;
				}

				ApplyOperation(HeightMap, VoxelIndex, Value, Operation);
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctions::Value(const TArray<float>& Input, float Value, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z), Value, Operation);
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctions::Step(const TArray<float>& Input, float Step, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				int VoxelIndex = GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z);
				float Current = HeightMap[VoxelIndex];
				float Value = FMath::Floor(Current / Step) * Step;

				ApplyOperation(HeightMap, VoxelIndex, Value, Operation);
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctions::Combine(const TArray<float>& Input1, TArray<float>& Input2, FIntVector Size, EPassOperation Operation)
{
	TArray<float> HeightMap = Input1;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = 0; Z < Size.Z; Z++)
			{
				int VoxelIndex = GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z);
				ApplyOperation(HeightMap, VoxelIndex, Input2[VoxelIndex], Operation);
			}

		}
	}

	return HeightMap;
}