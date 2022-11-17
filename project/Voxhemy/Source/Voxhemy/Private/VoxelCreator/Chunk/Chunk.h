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

UCLASS()
class VOXHEMY_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	

	AChunk();

	void SetChunkParams(const FChunkParams& NewChunkParams);

	void Load();
	void Unload();

	bool IsLoaded();

	void Render();

	static AChunk* Create(UWorld* World, FVector Location, FChunkParams& Params);

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FChunkParams Params;

private:

	TArray<float> GenerateHeightMap();

	void GenerateVoxels(const TArray<float>& HeightMap);

	bool Loaded = false;

	UPROPERTY()
		UHeightMapGenerator* Generator;

	UPROPERTY()
		TScriptInterface<IRenderAlgorithm> RenderAlgorithm;

	TArray<TPair<EVoxel,float>> Voxels;

	UPROPERTY()
		FChunkMeshData MeshData;

	UE::Geometry::FDynamicMesh3 MeshData2;

	UPROPERTY()
		TObjectPtr<UProceduralMeshComponent> Mesh;

	//UE::Geometry::FDynamicMesh3 DynamicMesh;

	UPROPERTY()
	UDynamicMeshComponent* DynamicMesh;
};