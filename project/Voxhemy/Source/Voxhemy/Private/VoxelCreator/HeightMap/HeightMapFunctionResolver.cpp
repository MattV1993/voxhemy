#include "HeightMapFunctionResolver.h"
#include "HeightMapContext.h"

TArray<float> UHeightMapFunctionResolverNoise3D::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("noise_type"));
	ensure(Params.Contains("fractal_type"));
	ensure(Params.Contains("frequency"));
	ensure(Params.Contains("seed"));

	FNoiseParams NoiseParams;
	NoiseParams.NoiseType = ToNoiseType(Params["noise_type"]);
	NoiseParams.FractalType = ToFractalType(Params["fractal_type"]);
	NoiseParams.NoiseFrequency = FCString::Atof(*Params["frequency"]);
	NoiseParams.Seed = FCString::Atoi(*Params["seed"]);

	if (Params.Contains("octaves"))
	{
		NoiseParams.Octaves = FCString::Atoi(*Params["octaves"]);
	}

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y * Context->GetSize().Z);
	}

	return UHeightMapFunctions::Noise3D(Input, NoiseParams, Context->GetOffset(), Context->GetSize(), Operation);
}

TArray<float> UHeightMapFunctionResolverNoise2D::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("noise_type"));
	ensure(Params.Contains("fractal_type"));
	ensure(Params.Contains("frequency"));
	ensure(Params.Contains("seed"));

	FNoiseParams NoiseParams;
	NoiseParams.NoiseType = ToNoiseType(Params["noise_type"]);
	NoiseParams.FractalType = ToFractalType(Params["fractal_type"]);
	NoiseParams.NoiseFrequency = FCString::Atof(*Params["frequency"]);
	NoiseParams.Seed = FCString::Atoi(*Params["seed"]);
	
	if (Params.Contains("octaves"))
	{
		NoiseParams.Octaves = FCString::Atoi(*Params["octaves"]);
	}

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y);
	}
		

	FVector2D Offset2D{ Context->GetOffset().X, Context->GetOffset().Y };
	FIntPoint Size2D{ Context->GetSize().X, Context->GetSize().Y };

	return UHeightMapFunctions::Noise2D(Input, NoiseParams, Offset2D, Size2D, Operation);
}

TArray<float> UHeightMapFunctionResolverGradient::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("min"));
	ensure(Params.Contains("max"));

	float Min = FCString::Atof(*Params["min"]);
	float Max = FCString::Atof(*Params["max"]);

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y * Context->GetSize().Z);
	}

	return UHeightMapFunctions::Gradient(Input, Min, Max, Context->GetOffset().Z, Context->GetSize(), Operation);
}

TArray<float> UHeightMapFunctionResolverSelect::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("min"));
	ensure(Params.Contains("max"));
	ensure(Params.Contains("threshold"));

	float Min = FCString::Atof(*Params["min"]);
	float Max = FCString::Atof(*Params["max"]);
	float Threshold = FCString::Atof(*Params["threshold"]);

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y * Context->GetSize().Z);
	}

	return UHeightMapFunctions::Select(Input, Min, Max, Threshold, Context->GetSize(), Operation);
}

TArray<float> UHeightMapFunctionResolverValue::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("value"));

	float Value = FCString::Atof(*Params["value"]);

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y * Context->GetSize().Z);
	}

	return UHeightMapFunctions::Value(Input, Value, Context->GetSize(), Operation);
}

TArray<float> UHeightMapFunctionResolverStep::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("step"));

	float Step = FCString::Atof(*Params["step"]);

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input;

	if (Params.Contains("input"))
	{
		FName InputName = *Params["input"];
		Input = Context->GetPasses()[InputName]->GetOutput();
	}
	else
	{
		Input.SetNum(Context->GetSize().X * Context->GetSize().Y * Context->GetSize().Z);
	}

	return UHeightMapFunctions::Step(Input, Step, Context->GetSize(), Operation);
}

TArray<float> UHeightMapFunctionResolverCombine::CallHeightMapFunction(const TMap<FString, FString>& Params, const UHeightMapContext* Context) const
{
	ensure(Params.Contains("input"));
	ensure(Params.Contains("input2"));

	FName InputName = *Params["input"];
	FName Input2Name{ *Params["input2"] };

	auto Operation = EPassOperation::Set;

	if (Params.Contains("operation"))
	{
		Operation = ToPassOperation(*Params["operation"]);
	}

	TArray<float> Input = Context->GetPasses()[InputName]->GetOutput();
	TArray<float> Input2 = Context->GetPasses()[Input2Name]->GetOutput();

	return UHeightMapFunctions::Combine(Input, Input2, Context->GetSize(), Operation);
}

FastNoise::NoiseType ToNoiseType(FString Value)
{
	if (Value == "value")
	{
		return FastNoise::NoiseType::Value;
	}
	else if (Value == "value_fractal")
	{
		return FastNoise::NoiseType::ValueFractal;
	}
	else if (Value == "perlin")
	{
		return FastNoise::NoiseType::Perlin;
	}
	else if (Value == "perlin_fractal")
	{
		return FastNoise::NoiseType::PerlinFractal;
	}
	else if (Value == "simplex")
	{
		return FastNoise::NoiseType::Simplex;
	}
	else if (Value == "simplex_fractal")
	{
		return FastNoise::NoiseType::SimplexFractal;
	}
	else if (Value == "cellular")
	{
		return FastNoise::NoiseType::Cellular;
	}
	else if (Value == "white_noise")
	{
		return FastNoise::NoiseType::WhiteNoise;
	}
	else if (Value == "cubic")
	{
		return FastNoise::NoiseType::Cubic;
	}
	else if (Value == "cubic_fractal")
	{
		return FastNoise::NoiseType::CubicFractal;
	}

	checkNoEntry();
	return FastNoise::NoiseType::Value;
}

FastNoise::FractalType ToFractalType(FString Value)
{
	if (Value == "fbm")
	{
		return FastNoise::FractalType::FBM;
	}
	else if (Value == "billow")
	{
		return FastNoise::FractalType::Billow;
	}
	else if (Value == "rigid_multi")
	{
		return FastNoise::FractalType::RigidMulti;
	}

	checkNoEntry();
	return FastNoise::FractalType::FBM;
}

EPassOperation ToPassOperation(FString Value)
{
	if (Value == "set")
	{
		return EPassOperation::Set;
	}
	else if (Value == "add")
	{
		return EPassOperation::Add;
	}
	else if (Value == "subtract")
	{
		return EPassOperation::Subtract;
	}
	else if (Value == "multiply")
	{
		return EPassOperation::Multiply;
	}

	checkNoEntry();
	return EPassOperation::Set;
}