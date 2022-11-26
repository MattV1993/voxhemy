#include "VoxelMap.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#include "Engine/World.h"

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

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Magenta, "AVoxelMap::BeginPlay()");
	}

	ChunkLoader.Start();

	GetWorld()->GetTimerManager().SetTimer(
		ManageChunksTimerHandle,
		this,
		&AVoxelMap::ManageChunks,
		static_cast<float>(Params.TickSpeedMS) / 1000.f,
		true);

	auto StartTime = FDateTime::UtcNow();

	int InitialChunks = ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1);

	Chunks.Reserve(InitialChunks * 2);
	PendingLoads.Reserve(InitialChunks);

	APawn* Pawn = GetWorld()->GetPlayerControllerIterator()->Get()->GetPawn();

	RegisterPawn(Pawn);
	LoadAllPawnChunks(Pawn);

	while (Renders < InitialChunks)
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

		ManageChunksForPawn(Controller->GetPawn());
	}

	HandlePendingChunks();
}

AChunk* AVoxelMap::GetChunkFromCorrectedPosition(FIntVector Position)
{
	AChunk** Chunk = Chunks.Find(Position);

	if (Chunk != nullptr)
	{
		return *Chunk;
	}

	const FVector NewChunkPosition
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

void AVoxelMap::LoadAllPawnChunks(APawn* Pawn)
{
	const float ChunkSize = Params.ChunkSize * Params.VoxelSize;

	TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);
	const FVector PawnLocation = Pawn->GetActorLocation();
	const FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

	for (int X = -DrawDistance; X <= DrawDistance; X++)
	{
		for (int Y = -DrawDistance; Y <= DrawDistance; Y++)
		{
			for (int Z = -DrawDistance; Z <= DrawDistance; Z++)
			{
				const FIntVector Location = FIntVector(X, Y, Z) * ChunkSize;
				const FIntVector PawnChunkLocation = Location + CorrectedPawnLocation;

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

void AVoxelMap::ManageChunksForPawn(APawn* Pawn)
{
	if (Pawn == nullptr)
	{
		return;
	}

	if (MappedChunks.Find(Pawn) == nullptr)
	{
		RegisterPawn(Pawn);
	}

	const FVector PawnLocation = Pawn->GetActorLocation();
	const FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

	if (CorrectedPawnLocation != LastPositions[Pawn])
	{
		const FChunkDiff Diff = CreateChunkDiff(Pawn);
		AppendDiff(Diff);

		LastPositions[Pawn] = CorrectedPawnLocation;

		if (GEngine)
		{
			GEngine->ForceGarbageCollection(true);
		}
	}
	else
	{
		if (PendingPreloads.Num() > 0)
		{
			PlaceChunks(Pawn);
		}

		/*if (PendingPreloads.Num() > 0)
		{
			LoadChunks(Pawn);
		}

		if (PendingCleans.Num() > 0)
		{
			CleanChunks(Pawn);
		}*/
	}
}

void AVoxelMap::RegisterPawn(APawn* Pawn)
{
	if (MappedChunks.Find(Pawn) == nullptr)
	{
		TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);

		MappedChunks.Add(Pawn, TArray<AChunk*>{});
		PawnChunks = MappedChunks.Find(Pawn);

		const int OnScreenChunkCount = ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1) * ((DrawDistance * 2) + 1);
		PawnChunks->Reserve(OnScreenChunkCount * 1.5);
	}

	if (LastPositions.Find(Pawn) == nullptr)
	{
		const FVector PawnLocation = Pawn->GetActorLocation();
		const FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

		LastPositions.Add(Pawn, CorrectedPawnLocation);
	}
}

void AVoxelMap::CleanChunks(APawn* Pawn)
{
	const auto StartTime = FDateTime::UtcNow();

	const int CleanCount = FMath::Min(PendingCleans.Num(), Params.UpdatesPerTick);

	for (int I = CleanCount - 1; I >= 0; I--)
	{
		AChunk* Chunk = GetChunkFromCorrectedPosition(PendingCleans[I]);

		// If it's been loaded and waiting to be rendered, we can remove it
		if (PendingRenders.Find(Chunk) != INDEX_NONE)
		{
			PendingRenders.Remove(Chunk);
		}

		if (PendingLoads.Find(Chunk) == INDEX_NONE)
		{
			MappedChunks[Pawn].Remove(Chunk);

			Chunk->Unload();
			Chunk->Destroy();

			Chunks.Remove(PendingCleans[I]);
			PendingCleans.RemoveAt(I);
		}
	}

	const auto CurrentTime = FDateTime::UtcNow();
	const FTimespan Diff1 = CurrentTime - StartTime;

	FString TimeString = "Clean Time: ";
	TimeString.AppendInt(Diff1.GetTotalMilliseconds());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Red, TimeString);
	}
}

void AVoxelMap::LoadChunks(APawn* Pawn)
{
	// TODO: Creating a pooling mechanism which takes actors from the cleans and changes positions

	TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);

	const auto StartTime = FDateTime::UtcNow();

	const int LoadCount = FMath::Min(PendingPreloads.Num(), Params.UpdatesPerTick);

	for (int I = LoadCount - 1; I >= 0; I--)
	{
		AChunk* Chunk = GetChunkFromCorrectedPosition(PendingPreloads[I]);

		const bool AlreadyExists = PawnChunks->Find(Chunk) != INDEX_NONE;

		if (AlreadyExists == false)
		{
			ChunkLoader.LoadChunk(Chunk);
			PawnChunks->Add(Chunk);
			PendingLoads.Add(Chunk);
		}

		PendingPreloads.RemoveAt(I);
	}

	const auto CurrentTime = FDateTime::UtcNow();
	const FTimespan Diff1 = CurrentTime - StartTime;

	FString TimeString = "Load Time: ";
	TimeString.AppendInt(Diff1.GetTotalMilliseconds());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Green, TimeString);
	}
}

void AVoxelMap::PlaceChunks(APawn* Pawn)
{
	TArray<AChunk*>* PawnChunks = MappedChunks.Find(Pawn);

	const auto StartTime = FDateTime::UtcNow();

	const int PlaceCount = FMath::Min(PendingPreloads.Num(), Params.UpdatesPerTick);

	for (int I = PlaceCount - 1; I >= 0; I--)
	{
		AChunk* Chunk = GetChunkFromCorrectedPosition(PendingCleans[I]);

		if (PendingLoads.Find(Chunk) != INDEX_NONE)
		{
			// Can clean a chunk until its loaded
			continue;
		}

		if (PendingRenders.Find(Chunk) != INDEX_NONE)
		{
			PendingRenders.Remove(Chunk);
		}

		Chunk->Unload();

		FIntVector NewChunkPos = PendingPreloads[I];
		Chunk->SetActorLocation(
			FVector { 
				static_cast<double>(NewChunkPos.X),
				static_cast<double>(NewChunkPos.Y),
				static_cast<double>(NewChunkPos.Z)
			});

		Chunk->SetChunkParams(Params);

		Chunks.Remove(PendingCleans[I]);
		Chunks.Add(NewChunkPos, Chunk);

		ChunkLoader.LoadChunk(Chunk);

		PendingLoads.Add(Chunk);
		PendingPreloads.RemoveAt(I);
		PendingCleans.RemoveAt(I);
	}

	const auto CurrentTime = FDateTime::UtcNow();
	const FTimespan Diff1 = CurrentTime - StartTime;

	FString TimeString = "Place Time: ";
	TimeString.AppendInt(Diff1.GetTotalMilliseconds());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Green, TimeString);
	}
}

void AVoxelMap::HandlePendingChunks()
{
	const TArray<AChunk*> LoadedChunks = ChunkLoader.GetLoadedChunks();

	const auto StartTime = FDateTime::UtcNow();

	PendingRenders.Append(LoadedChunks);

	for (auto Chunk : LoadedChunks)
	{
		PendingLoads.Remove(Chunk);
	}

	const int RenderCount = FMath::Min(PendingRenders.Num(), Params.RendersPerTick);

	for (int I = RenderCount - 1; I >= 0; I--)
	{
		AChunk* RenderChunk = PendingRenders[I];
		RenderChunk->Render();
		Renders++;

		PendingRenders.RemoveAt(I);
	}

	const auto CurrentTime = FDateTime::UtcNow();
	const FTimespan Diff1 = CurrentTime - StartTime;

	FString TimeString = "Render Time: ";
	TimeString.AppendInt(Diff1.GetTotalMilliseconds());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Blue, TimeString);
	}
}

FChunkDiff AVoxelMap::CreateChunkDiff(APawn* Pawn)
{
	const FVector PawnLocation = Pawn->GetActorLocation();
	const FIntVector CorrectedPawnLocation = GetCorrectedChunkPosition(PawnLocation);

	const FIntVector DiffPos = CorrectedPawnLocation - LastPositions[Pawn];
	const FIntVector ChunkPos = (DiffPos / Params.VoxelSize) / Params.ChunkSize;

	int Start = 0;
	int End = 0;
	int Val = 0;

	FChunkDiff Diff;

	if (ChunkPos.X > 0)
	{
		Start = DrawDistance + 1;
		End = Start + ChunkPos.X;
		Val = 1;
	}
	else
	{
		Start = (-DrawDistance) + ChunkPos.X;
		End = -DrawDistance;
		Val = -1;
	}

	for (int X = Start; X < End; X++)
	{
		for (int Y = -DrawDistance; Y <= DrawDistance; Y++)
		{
			for (int Z = -DrawDistance; Z <= DrawDistance; Z++)
			{
				FIntVector AddLocation = LastPositions[Pawn] + ((FIntVector(X, Y, Z) * Params.ChunkSize) * Params.VoxelSize);

				FIntVector RemoveLocation = (LastPositions[Pawn] + ((FIntVector((X - Val) * -1, Y, Z) * Params.ChunkSize) * Params.VoxelSize));

				Diff.Loads.AddUnique(AddLocation);
				Diff.Cleans.AddUnique(RemoveLocation);
			}
		}
	}

	if (ChunkPos.Y > 0)
	{
		Start = DrawDistance + 1;
		End = Start + ChunkPos.Y;
		Val = 1;
	}
	else
	{
		Start = (-DrawDistance) + ChunkPos.Y;
		End = -DrawDistance;
		Val = -1;
	}

	for (int Y = Start; Y < End; Y++)
	{
		for (int X = -DrawDistance; X <= DrawDistance; X++)
		{
			for (int Z = -DrawDistance; Z <= DrawDistance; Z++)
			{
				FIntVector AddLocation = LastPositions[Pawn] + ((FIntVector(X, Y, Z) * Params.ChunkSize) * Params.VoxelSize);
				FIntVector RemoveLocation = (LastPositions[Pawn] + ((FIntVector(X, (Y - Val) * -1, Z) * Params.ChunkSize) * Params.VoxelSize));

				Diff.Loads.AddUnique(AddLocation);
				Diff.Cleans.AddUnique(RemoveLocation);
			}
		}
	}

	if (ChunkPos.Z > 0)
	{
		Start = DrawDistance + 1;
		End = Start + ChunkPos.Z;
		Val = 1;
	}
	else
	{
		Start = (-DrawDistance) + ChunkPos.Z;
		End = -DrawDistance;
		Val = -1;
	}

	for (int Z = Start; Z < End; Z++)
	{
		for (int X = -DrawDistance; X <= DrawDistance; X++)
		{
			for (int Y = -DrawDistance; Y <= DrawDistance; Y++)
			{
				FIntVector AddLocation = LastPositions[Pawn] + ((FIntVector(X, Y, Z) * Params.ChunkSize) * Params.VoxelSize);
				FIntVector RemoveLocation = (LastPositions[Pawn] + ((FIntVector(X, Y, (Z - Val) * -1) * Params.ChunkSize) * Params.VoxelSize));

				Diff.Loads.AddUnique(AddLocation);
				Diff.Cleans.AddUnique(RemoveLocation);
			}
		}
	}

	return Diff;
}

void AVoxelMap::AppendDiff(const FChunkDiff& Diff)
{
	PendingCleans.Append(Diff.Cleans);
	PendingPreloads.Append(Diff.Loads);

	/*for (auto Load : Diff.Loads)
	{
		PendingPreloads.AddUnique(Load);

		if (PendingCleans.Contains(Load))
		{
			PendingCleans.Remove(Load);
		}
	}

	for (auto Clean : Diff.Cleans)
	{
		PendingCleans.AddUnique(Clean);

		if (PendingPreloads.Contains(Clean))
		{
			PendingPreloads.Remove(Clean);
		}
	}*/
}
