#include "VoxelContextPass.h"
#include "VoxelContext.h"
#include "HeightMap/HeightMapContext.h"

TArray<EVoxel> UVoxelContextPassGround::Run(const TArray<float>& HeightMap, const TArray<EVoxel>& Input, const UVoxelContext* Context) const
{
	TArray<EVoxel> Voxels = Input;

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			bool ContainsAir = HeightMap[GetVoxelIndex1(X, Y, Size.Z - 1, Size.X, Size.Y, Size.Z)] <= 0;
			bool GrassSet = false;

			for (int Z = Size.Z - 1; Z >= 0; Z--)
			{
				int CurrentIndex = GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z);
				float CurrentValue = HeightMap[CurrentIndex];

				if (CurrentValue <= 0)
				{
					Voxels[CurrentIndex] = EVoxel::Air;
				}
				else
				{
					if (ContainsAir && GrassSet == false /* && Offset.Z < -3*/)
					{
						Voxels[CurrentIndex] = EVoxel::Grass;
						GrassSet = true;
					}
					else
					{
						Voxels[CurrentIndex] = EVoxel::Ground;
					}
				}
			}
		}
	}

	return Voxels;
}

TArray<EVoxel> UVoxelContextPassDirt::Run(const TArray<float>& HeightMap, const TArray<EVoxel>& Input, const UVoxelContext* Context) const
{
	TArray<EVoxel> Voxels = Input;

	TArray<float> DirtHeightMap = HeightMapContext->Generate();

	for (int X = 0; X < Size.X; X++)
	{
		for (int Y = 0; Y < Size.Y; Y++)
		{
			for (int Z = Size.Z - 1; Z >= 0; Z--)
			{
				int CurrentIndex = GetVoxelIndex1(X, Y, Z, Size.X, Size.Y, Size.Z);
				int DirtHeightMapIndex = X + (Y * Size.X);

				if (Voxels[CurrentIndex] == EVoxel::Grass)
				{
					float Val = DirtHeightMap[CurrentIndex];

					if (DirtHeightMap[CurrentIndex] > Threshold)
					{
						Voxels[CurrentIndex] = EVoxel::Rock;
					}
					
					break;
				}
			}
		}
	}

	return Voxels;
}

UVoxelContextPass* UVoxelContextPass::Create(UObject* Outer, TSubclassOf<UVoxelContextPass> Derived, FIntVector Size, FVector Offset)
{
	auto* Pass = NewObject<UVoxelContextPass>(Outer, Derived);
	Pass->Size = Size;
	Pass->Offset = Offset;

	if (Pass->HeightMapContextClass)
	{
		Pass->HeightMapContext = UHeightMapContext::Create(Outer, Pass->HeightMapContextClass, Size, Offset);
	}

	return Pass;
}
