#pragma once

#include "CoreMinimal.h"

class AChunk;

// TODO: Find a way of suspending thread of similar when not loading
class FChunkLoaderWorker : public FRunnable
{
public:
	FChunkLoaderWorker();

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Exit() override;
	virtual void Stop() override;

	void LoadChunk(AChunk* Chunk);

	TArray<AChunk*> GetLoadedChunks();

	int GetLoadingChunksCount() const;

private:

	bool ShouldStop = false;

	// TODO: Switch to TQueue to remove locks
	TQueue<AChunk*> LoadChunks;
	TQueue<AChunk*> LoadedChunks;

	FThreadSafeCounter Count;
};

class FChunkLoader
{
public:

	void Start();
	void Stop();

	void LoadChunk(AChunk* Chunk);

	TArray<AChunk*> GetLoadedChunks();

private:

	TArray<TPair<FChunkLoaderWorker, FRunnableThread*>> Loaders;

};