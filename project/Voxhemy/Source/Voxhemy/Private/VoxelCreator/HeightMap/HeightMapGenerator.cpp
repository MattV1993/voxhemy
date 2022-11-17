#include "HeightMapGenerator.h"
#include "HeightMapFunction.h"

void UHeightMapGenerator::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

TArray<float> UHeightMapGenerator::Generate(int XSize, int YSize, int ZSize, FVector Offset)
{
	TArray<float> HeightMap;
	HeightMap.SetNum(XSize * YSize * ZSize);

	for (const auto& PassSpec : Passes)
	{
		FHeightMapGeneratorPass& Pass = PassMap[PassSpec.Name];

		if (PassSpec.Input.IsNone())
		{
			Pass.Output = HeightMap;
		}
		else
		{
			FHeightMapGeneratorPass& PassInput = PassMap[PassSpec.Input];
			Pass.Output = PassInput.Output;
		}

		Pass.Output = Pass.Function->Generate(Pass.Output, XSize, YSize, ZSize, Offset);
	}

	TArray<float> Output = PassMap[Passes.Last().Name].Output;

	for (const auto& PassSpec : Passes)
	{
		PassMap[PassSpec.Name].Output.Reset();
	}

	return Output;
}

void UHeightMapGenerator::BeginPlay()
{
	for (const auto& PassSpec : Passes)
	{
		auto* Function = NewObject<UHeightMapFunction>(this, PassSpec.Function);

		FHeightMapGeneratorPass Pass;
		Pass.Function = Function;

		PassMap.Add(PassSpec.Name, Pass);
	}
}
