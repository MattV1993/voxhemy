#include "HeightMapFunction.h"
#include "Chunk/ChunkUtils.h"

#include "FastNoiseWrapper.h"

void UHeightMapFunction::ApplyOperation(TArray<float>& Input, int Index, float Value)
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

TArray<float> UHeightMapFunctionGradient::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				const float Val = ((Offset.Z + Z) - Min) / (Max - Min);
				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Val + ValueOffset);
			}
		}
	}

	return HeightMap;
}

UHeightMapFunctionNoise::UHeightMapFunctionNoise()
{
	Noise = CreateDefaultSubobject<UFastNoiseWrapper>("Noise");
}

TArray<float> UHeightMapFunctionNoise::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	Noise->SetupFastNoise();
	Noise->SetFrequency(NoiseFrequency);
	Noise->SetNoiseType(NoiseType);
	Noise->SetFractalType(FractalType);
	Noise->SetSeed(Seed);

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				const float Val = (Noise->GetNoise3D(Offset.X + X, Offset.Y + Y, Offset.Z + Z) * NoiseModifier);
				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Val);
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctionSelect::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				if (HeightMap[GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize)] < Threshold)
				{
					ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Min);
				}
				else
				{
					ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Max);
				}
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctionValue::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				if ((X > 2 && X < ZSize - 2) &&
					(Y > 2 && Y < ZSize - 2) &&
					(Z > 2 && Z < ZSize - 2))
				{
					ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), 1);
				}
				else
				{
					ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), 0);
				}
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctionFloor::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				if (HeightMap[GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize)] < Threshold)
				{
					ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Min);
				}
			}
		}
	}

	return HeightMap;
}

TArray<float> UHeightMapFunctionStep::Generate(const TArray<float>& Input, int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap = Input;

	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			for (int Z = 0; Z < ZSize; Z++)
			{
				float Current = HeightMap[GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize)];
				float Value = FMath::Floor(Current / Step) * Step;

				ApplyOperation(HeightMap, GetVoxelIndex1(X, Y, Z, XSize, YSize, ZSize), Value);
			}

		}
	}

	return HeightMap;
}