#include "VoxelMap.h"

AVoxelMap::AVoxelMap()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AVoxelMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVoxelMap::BeginPlay()
{
	Super::BeginPlay();

	ChunkLoader.Start();

	GetWorld()->GetTimerManager().SetTimer(
		ManageChunksTimerHandle,
		this,
		&AVoxelMap::ManageChunks,
		0.01f,
		true);

	auto StartTime = FDateTime::UtcNow();

	int InitialChunks = ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1);

	Chunks.Reserve(InitialChunks * 2);
	PendingLoads.Reserve(InitialChunks);

	while (RenderCount < InitialChunks)
	{
		ManageChunks();
	}

	auto CurrentTime = FDateTime::UtcNow();
	FTimespan Diff = CurrentTime - StartTime;

	FString TimeString;
	TimeString.AppendInt(Diff.GetTotalMilliseconds());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Magenta, TimeString);
	}
}

void AVoxelMap::BeginDestroy()
{
	Super::BeginDestroy();

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(ManageChunksTimerHandle);
	}

	ChunkLoader.Stop();
}

void AVoxelMap::ManageChunks()
{
	// TODO: Fix issue where chunk is being managed by 2 controllers
	// If controller goes out of range of chunk even if its needed by other controller then it will still unload
	
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* Controller = Iterator->Get();

		if (Controller == nullptr || Controller->IsLocalController() == false)
		{
			continue;
		}

		APawn* ControllerPawn = Controller->GetPawn();

		if (ControllerPawn == nullptr)
		{
			continue;
		}

		CleanChunks(ControllerPawn);
		LoadChunks(ControllerPawn);
	}

	TArray<AChunk*> LoadedChunks = ChunkLoader.GetLoadedChunks();

	PendingRenders.Append(LoadedChunks);
	
	for (auto Chunk : LoadedChunks)
	{
		PendingLoads.Remove(Chunk);
	}

	if (PendingRenders.Num() > 0)
	{
		// Do one render per frame to prevent lag
		AChunk* RenderChunk = PendingRenders[0];
		RenderChunk->Render();
		RenderCount++;


		PendingRenders.Remove(RenderChunk);
	}

	if (LoadedChunks.Num() > 0)
	{
		GEngine->ForceGarbageCollection(false);
	}
}

AChunk* AVoxelMap::GetChunkFromCorrectedPosition(FIntVector Position)
{
	AChunk** Chunk = Chunks.Find(Position);

	if (Chunk != nullptr)
	{
		return *Chunk;
	}

	FVector NewChunkPosition
	{
		static_cast<double>(Position.X),
		static_cast<double>(Position.Y),
		static_cast<double>(Position.Z)
	};

	auto* NewChunk = AChunk::Create(GetWorld(), NewChunkPosition, Params);
	Chunks.Add(Position, NewChunk);

	check(NewChunk != nullptr);

	return NewChunk;
}

FIntVector AVoxelMap::GetCorrectedChunkPosition(FVector Position)
{
	return GetCorrectedChunkPosition1(Position, Params.VoxelSize, Params.ChunkSize);
}

void AVoxelMap::CleanChunks(APawn* Pawn)
{
	const float ChunkSize = Params.ChunkSize * Params.VoxelSize;

	TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);
	FVector PawnLocation = Pawn->GetActorLocation();
	FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

	if (PawnChunks == nullptr)
	{
		return;
	}

	TArray<AChunk*> MappedDeletions;

	for (auto PawnChunk : *PawnChunks)
	{
		FIntVector CorrecredChunkLocation = GetCorrectedChunkPosition(PawnChunk->GetActorLocation());

		if (FMath::Abs(CorrectedPawnLocation.X - CorrecredChunkLocation.X) > DrawDistance * ChunkSize ||
			FMath::Abs(CorrectedPawnLocation.Y - CorrecredChunkLocation.Y) > DrawDistance * ChunkSize ||
			FMath::Abs(CorrectedPawnLocation.Z - CorrecredChunkLocation.Z) > DrawDistance * ChunkSize)
		{
			// If it's already loading then we have to wait for it to load before removing
			if (PendingLoads.Find(PawnChunk) == INDEX_NONE)
			{
				MappedDeletions.Add(PawnChunk);
				Chunks.Remove(CorrecredChunkLocation);
			}

			// If it's been loaded and waiting to be rendered, we can remove it
			if (PendingRenders.Find(PawnChunk) != INDEX_NONE)
			{
				PendingRenders.Remove(PawnChunk);
			}
		}
	}

	for (auto Deletion : MappedDeletions)
	{
		PawnChunks->Remove(Deletion);
		Deletion->Unload();
		Deletion->Destroy();
	}
}

void AVoxelMap::LoadChunks(APawn* Pawn)
{
	const float ChunkSize = Params.ChunkSize * Params.VoxelSize;

	TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);
	FVector PawnLocation = Pawn->GetActorLocation();
	FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

	const int OnScreenChunkCount = ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1);

	if (PawnChunks == nullptr)
	{
		MappedChunks.Add(Pawn, TArray<AChunk*>{});
		PawnChunks = MappedChunks.Find(Pawn);

		PawnChunks->Reserve(OnScreenChunkCount * 1.5);
	}

	if (PawnChunks->Num() >= OnScreenChunkCount)
	{
		// Dont bother looking for chunks to render if mapped chunks size is already >= Rendered chunks size
		// As we know there wont be any more to load
		return;
	}

	// TODO: Dont loop through every coord
	// Find a way of figuring out what coords to loop through
	for (int X = -DrawDistance; X <= DrawDistance; X++)
	{
		for (int Y = -DrawDistance; Y <= DrawDistance; Y++)
		{
			for (int Z = -DrawDistance; Z <= DrawDistance; Z++)
			{
				auto Position = FVector(X, Y, Z) * ChunkSize;
				FIntVector CorrectedLocation = GetCorrectedChunkPosition(Position);
				FIntVector PawnChunkLocation = CorrectedLocation + CorrectedPawnLocation;

				AChunk* Chunk = GetChunkFromCorrectedPosition(PawnChunkLocation);

				bool AlreadyExists = PawnChunks->Find(Chunk) != INDEX_NONE;

				if (AlreadyExists == false)
				{
					ChunkLoader.LoadChunk(Chunk);
					PawnChunks->Add(Chunk);
					PendingLoads.Add(Chunk);
				}

			}
		}
	}
}
