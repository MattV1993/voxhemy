#include "ChunkLoader.h"
#include "Chunk/Chunk.h"

FChunkLoaderWorker::FChunkLoaderWorker()
{
}

bool FChunkLoaderWorker::Init()
{
	return true;
}

uint32 FChunkLoaderWorker::Run()
{
	while (!ShouldStop)
	{
		if (LoadChunks.IsEmpty())
		{
			FPlatformProcess::Sleep(0.001f);
			continue;
		}

		AChunk* Chunk = nullptr;

		while ((LoadChunks.Dequeue(Chunk)))
		{
			if (Chunk->IsLoaded() == false)
			{
				Chunk->Load();
			}

			Count.Decrement();

			LoadedChunks.Enqueue(Chunk);

			if (ShouldStop)
			{
				break;
			}
		}

		FPlatformProcess::Sleep(0.001f);
	}

	return 0;
}

void FChunkLoaderWorker::Exit()
{

}

void FChunkLoaderWorker::Stop()
{
	ShouldStop = true;
}

void FChunkLoaderWorker::LoadChunk(AChunk* Chunk)
{
	Count.Increment();
	LoadChunks.Enqueue(Chunk);
}

TArray<AChunk*> FChunkLoaderWorker::GetLoadedChunks()
{
	TArray<AChunk*> Chunks;
	AChunk* Chunk = nullptr;
	
	while ((LoadedChunks.Dequeue(Chunk)))
	{
		Chunks.Push(Chunk);
	}

	return Chunks;
}

int FChunkLoaderWorker::GetLoadingChunksCount() const
{
	return Count.GetValue();
}

void FChunkLoader::Start()
{
	if (Loaders.Num() > 0)
	{
		return;
	}

	int ProcessorCount = FGenericPlatformMisc::NumberOfCoresIncludingHyperthreads();

	Loaders.Reserve(ProcessorCount);

	for (int I = 0; I < ProcessorCount - 1; I++)
	{
		Loaders.Emplace();

		FString ThreadName{ "ChunkLoader" };
		ThreadName.AppendInt(I);

		Loaders.Last().Value = FRunnableThread::Create(&Loaders.Last().Key, *ThreadName);
	}
}

void FChunkLoader::Stop()
{
	for (auto& Loader : Loaders)
	{
		if (Loader.Value)
		{
			Loader.Value->Kill();
			Loader.Value->WaitForCompletion();
			delete Loader.Value;
			Loader.Value = nullptr;
		}
	}
	
}

void FChunkLoader::LoadChunk(AChunk* Chunk)
{
	FChunkLoaderWorker* Winner = nullptr;
	int LowestCount = 999999;

	for (auto& Loader : Loaders)
	{
		FChunkLoaderWorker* ChunkLoader = &Loader.Key;
		int LoadingCount = ChunkLoader->GetLoadingChunksCount();

		if (LoadingCount == 0)
		{
			ChunkLoader->LoadChunk(Chunk);
			return;
		}

		if (LoadingCount < LowestCount)
		{
			Winner = ChunkLoader;
			LowestCount = LoadingCount;
		}
	}

	ensure(Winner);

	Winner->LoadChunk(Chunk);
}

TArray<AChunk*> FChunkLoader::GetLoadedChunks()
{
	TArray<AChunk*> LoadedChunks;

	for (auto& Loader : Loaders)
	{
		LoadedChunks.Append(Loader.Key.GetLoadedChunks());
	}

	return LoadedChunks;
}
