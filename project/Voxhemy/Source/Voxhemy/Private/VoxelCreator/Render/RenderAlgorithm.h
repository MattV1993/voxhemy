#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "DynamicMesh/DynamicMesh3.h"

#include "RenderAlgorithm.generated.h"

struct FChunkParams;
struct FChunkMeshData;

enum class EVoxel : uint8;

UINTERFACE(MinimalAPI)
class URenderAlgorithm : public UInterface
{
	GENERATED_BODY()
};

class VOXHEMY_API IRenderAlgorithm
{
	GENERATED_BODY()

public:

	virtual void GenerateData(const TArray<TPair<EVoxel, float>>& HeightMap, const FChunkParams& Params, FChunkMeshData& OutData, UE::Geometry::FDynamicMesh3& MeshData2) = 0;
};
