#pragma once

#include "DynamicMesh/DynamicMesh3.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ChunkMeshData.h"
#include "ChunkUtils.h"

#include "Chunk.generated.h"

class UProceduralMeshComponent;
class UDynamicMeshComponent;
class UVoxelGenerator;
class IRenderAlgorithm;

class UHeightMapContext;
class UVoxelContext;
class UVoxelStaticMeshContext;

UCLASS()
class VOXHEMY_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	

	AChunk();

	void SetChunkParams(const FChunkParams& NewChunkParams);

	void Load();
	void Unload();

	bool IsLoaded() const;

	void Render();

	static AChunk* Create(UWorld* World, FVector Location, FChunkParams& Params);

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FChunkParams Params;

private:

	bool Loaded = false;

	UPROPERTY()
		UHeightMapContext* HeightMapContext;

	UPROPERTY()
		UVoxelContext* VoxelContext;

	UPROPERTY()
		UVoxelStaticMeshContext* VoxelStaticMeshContext;

	UPROPERTY()
		TScriptInterface<IRenderAlgorithm> RenderAlgorithm;

	TArray<TPair<EVoxel,float>> Voxels;

	UPROPERTY()
		FChunkMeshData MeshData;

	UE::Geometry::FDynamicMesh3 MeshData2;

	UPROPERTY()
		TObjectPtr<UProceduralMeshComponent> Mesh;

	UPROPERTY()
	UDynamicMeshComponent* DynamicMesh;
};