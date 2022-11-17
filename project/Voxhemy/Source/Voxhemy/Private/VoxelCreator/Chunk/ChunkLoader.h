#pragma once

#include "CoreMinimal.h"

class AChunk;

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

	FCriticalSection Mutex;

	TArray<AChunk*> LoadChunks;
	TArray<AChunk*> LoadedChunks;
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