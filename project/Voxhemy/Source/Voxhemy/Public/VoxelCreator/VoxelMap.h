#pragma once

#include "Chunk/Chunk.h"
#include "VoxelCreator/Chunk/ChunkLoader.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "VoxelMap.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

USTRUCT()
struct FChunkDiff
{
	GENERATED_BODY()

	TArray<FIntVector> Loads;
	TArray<FIntVector> Cleans;
};

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

	void LoadAllPawnChunks(APawn* Pawn);
	void ManageChunksForPawn(APawn* Pawn);
	void RegisterPawn(APawn* Pawn);
	void CleanChunks(APawn* Pawn);
	void LoadChunks(APawn* Pawn);
	void PlaceChunks(APawn* Pawn);
	void HandlePendingChunks();

	FChunkDiff CreateChunkDiff(APawn* Pawn);
	void AppendDiff(const FChunkDiff& Diff);

	UPROPERTY()
	FTimerHandle ManageChunksTimerHandle;

	// Chunks for each entity
	TMap<APawn*, TArray<AChunk*>> MappedChunks;

	// TODO: Store how many instances being used by Pawns
	
	// All Chunks that are registered
	UPROPERTY()
	TMap<FIntVector, AChunk*> Chunks;

	// Chunks that have been sent to the ChunkLoader
	UPROPERTY()
	TArray<AChunk*> PendingLoads;

	// Chunks that have been loaded and are ready to be rendered
	UPROPERTY()
	TArray<AChunk*> PendingRenders;

	// Chunk positions that need to be removed but are currently being loaded
	TArray<FIntVector> PendingCleans;

	// Chunk positions that we know need to be created
	TArray<FIntVector> PendingPreloads;

	TMap <APawn*, FIntVector> LastPositions;

	FChunkLoader ChunkLoader;

	int Renders = 0;
};
