#include "VoxelContext.h"

UVoxelContext* UVoxelContext::Create(UObject* Outer, TSubclassOf<UVoxelContext> Derived, FIntVector Size, FVector Offset)
{
	auto* Context = NewObject<UVoxelContext>(Outer, Derived);

	Context->Size = Size;
	Context->Offset = Offset;

	for (const auto& DefaultPass : Context->DefaultPasses)
	{
		auto* Pass = UVoxelContextPass::Create(Context, DefaultPass, Size, Offset);
		Context->Passes.Add(Pass);
	}

	return Context;
}

void UVoxelContext::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

TArray<EVoxel> UVoxelContext::Generate(const TArray<float>& HeightMap)
{
	TArray<EVoxel> Voxels;
	Voxels.SetNum(Size.X * Size.Y * Size.Z);

	for (const auto& Pass : Passes)
	{
		Voxels = Pass->Run(HeightMap, Voxels, this);
	}

	return Voxels;
}

FIntVector UVoxelContext::GetSize() const
{
	return Size;
}

FVector UVoxelContext::GetOffset() const
{
	return Offset;
}

void UVoxelContext::BeginPlay()
{
	
}
