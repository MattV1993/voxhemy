#pragma once

#include "Chunk/Chunk.h"
#include "VoxelCreator/Chunk/ChunkLoader.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "VoxelMap.generated.h"

UCLASS()
class VOXHEMY_API AVoxelMap : public AActor
{
	GENERATED_BODY()
	
public:	

	AVoxelMap();

	virtual void Tick(float DeltaTime) override;

protected:

	void BeginPlay() override;
	void BeginDestroy() override;

	UPROPERTY(EditAnywhere)
		int DrawDistance = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FChunkParams Params;

private:

	void ManageChunks();

	AChunk* GetChunkFromCorrectedPosition(FIntVector Position);

	FIntVector GetCorrectedChunkPosition(FVector Position);

	void CleanChunks(APawn* Pawn);
	void LoadChunks(APawn* Pawn);

	UPROPERTY()
	FTimerHandle ManageChunksTimerHandle;

	TMap<APawn*, TArray<AChunk*>> MappedChunks;

	UPROPERTY()
	TMap<FIntVector, AChunk*> Chunks;

	UPROPERTY()
	TArray<AChunk*> PendingLoads;

	UPROPERTY()
	TArray<AChunk*> PendingRenders;

	FChunkLoader ChunkLoader;

	int RenderCount = 0;
};
