#include "HeightMapContext.h"
#include "HeightMapFunctionResolver.h"

UHeightMapContextPass* UHeightMapContextPass::Create(UObject* Outer, const FHeightMapContextPassSpec& Spec)
{
    auto* Pass = NewObject<UHeightMapContextPass>(Outer);
    Pass->Spec = Spec;
	Pass->HeightMapFunction = NewObject<UHeightMapFunctionResolver>(Pass, Pass->Spec.HeightMapFunction);

    return Pass;
}

void UHeightMapContextPass::Run(const UHeightMapContext* Context)
{
	Output = HeightMapFunction->CallHeightMapFunction(GetParams(), Context);
}

const TMap<FString, FString>& UHeightMapContextPass::GetParams() const
{
    return Spec.Params;
}

const TArray<float>& UHeightMapContextPass::GetOutput() const
{
	return Output;
}

UHeightMapContext* UHeightMapContext::Create(UObject* Outer, TSubclassOf<UHeightMapContext> Derived, FIntVector Size, FVector Offset)
{
	auto* Context = NewObject<UHeightMapContext>(Outer, Derived);

	Context->Size = Size;
	Context->Offset = Offset;

	return Context;
}

UHeightMapContext* UHeightMapContext::Create(UObject* Outer, const TArray<FHeightMapContextPassSpec>& Passes, FIntVector Size, FVector Offset)
{
	auto* Context = NewObject<UHeightMapContext>(Outer);

	Context->PassSpecs = Passes;
	Context->Size = Size;
	Context->Offset = Offset;

	Context->BeginPlay();

	return Context;
}

void UHeightMapContext::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

TArray<float> UHeightMapContext::Generate()
{
	TArray<FName> PassKeys;
	PassMap.GetKeys(PassKeys);

	for (auto& PassKey : PassKeys)
	{
		UHeightMapContextPass* Pass = PassMap[PassKey];
		Pass->Run(this);
	}

	return PassMap[PassKeys.Last()]->GetOutput();
}

FIntVector UHeightMapContext::GetSize() const
{
	return Size;
}

FVector UHeightMapContext::GetOffset() const
{
	return Offset;
}

const TMap<FName, UHeightMapContextPass*>& UHeightMapContext::GetPasses() const
{
	return PassMap;
}

void UHeightMapContext::BeginPlay()
{
	for (const auto& PassSpec : PassSpecs)
	{
		auto* Pass = UHeightMapContextPass::Create(this, PassSpec);
		PassMap.Add(PassSpec.Name, Pass);
	}
}