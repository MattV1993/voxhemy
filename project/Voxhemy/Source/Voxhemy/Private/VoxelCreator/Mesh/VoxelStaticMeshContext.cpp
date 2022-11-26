#include "VoxelStaticMeshContext.h"

UVoxelStaticMeshContext* UVoxelStaticMeshContext::Create(UObject* Outer, TSubclassOf<UVoxelStaticMeshContext> Derived, AActor* Owner, FIntVector Size, float VoxelSize, FVector Location)
{
	auto* Context = NewObject<UVoxelStaticMeshContext>(Outer, Derived);

	Context->Owner = Owner;
	Context->Size = Size;
	Context->Size = Size;
	Context->VoxelSize = VoxelSize;
	Context->Location = Location;

	Context->Init();

	return Context;
}

void UVoxelStaticMeshContext::Generate(const TArray<TPair<EVoxel, float>>& Voxels)
{
	for (auto Layer : Layers)
	{
		Layer->Run(Voxels, this);
	}
}

void UVoxelStaticMeshContext::Apply()
{
	for (auto Layer : Layers)
	{
		Layer->Apply();
	}
}

void UVoxelStaticMeshContext::Reset()
{
	for (auto Layer : Layers)
	{
		Layer->Clean();
	}
}

AActor* UVoxelStaticMeshContext::GetOwner() const
{
    return Owner;
}

FIntVector UVoxelStaticMeshContext::GetSize() const
{
    return Size;
}

float UVoxelStaticMeshContext::GetVoxelSize() const
{
    return VoxelSize;
}

FVector UVoxelStaticMeshContext::GetLocation() const
{
	return Location;
}

void UVoxelStaticMeshContext::Init()
{
	for (const auto& DefaultLayer : LayerSpecs)
	{
		auto* Layer = UVoxelStaticMeshLayer::Create(this, DefaultLayer, GetOwner(), Size, VoxelSize, Location);
		Layers.Add(Layer);
	}
}
