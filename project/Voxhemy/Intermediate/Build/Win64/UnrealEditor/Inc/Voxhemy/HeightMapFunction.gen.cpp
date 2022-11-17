// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Public/VoxelCreator/HeightMapFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapFunction() {}
// Cross Module References
	VOXHEMY_API UEnum* Z_Construct_UEnum_Voxhemy_EPassOperation();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunction_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionGradient_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionGradient();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionSelect_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionSelect();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionFloor_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionFloor();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionNoise_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionNoise();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType();
	FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionValue_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionValue();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionStep_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunctionStep();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPassOperation;
	static UEnum* EPassOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPassOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPassOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxhemy_EPassOperation, Z_Construct_UPackage__Script_Voxhemy(), TEXT("EPassOperation"));
		}
		return Z_Registration_Info_UEnum_EPassOperation.OuterSingleton;
	}
	template<> VOXHEMY_API UEnum* StaticEnum<EPassOperation>()
	{
		return EPassOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxhemy_EPassOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enumerators[] = {
		{ "EPassOperation::Set", (int64)EPassOperation::Set },
		{ "EPassOperation::Add", (int64)EPassOperation::Add },
		{ "EPassOperation::Subtract", (int64)EPassOperation::Subtract },
		{ "EPassOperation::Multiply", (int64)EPassOperation::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EPassOperation::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
		{ "Multiply.Name", "EPassOperation::Multiply" },
		{ "Set.Name", "EPassOperation::Set" },
		{ "Subtract.Name", "EPassOperation::Subtract" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		"EPassOperation",
		"EPassOperation",
		Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxhemy_EPassOperation()
	{
		if (!Z_Registration_Info_UEnum_EPassOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPassOperation.InnerSingleton, Z_Construct_UEnum_Voxhemy_EPassOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPassOperation.InnerSingleton;
	}
	void UHeightMapFunction::StaticRegisterNativesUHeightMapFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunction);
	UClass* Z_Construct_UClass_UHeightMapFunction_NoRegister()
	{
		return UHeightMapFunction::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "HeightMapFunction" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunction, Operation), Z_Construct_UEnum_Voxhemy_EPassOperation, METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation_MetaData)) }; // 2100247612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunction_Statics::NewProp_Operation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunction_Statics::ClassParams = {
		&UHeightMapFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunction()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunction.OuterSingleton, Z_Construct_UClass_UHeightMapFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunction.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunction>()
	{
		return UHeightMapFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunction);
	void UHeightMapFunctionGradient::StaticRegisterNativesUHeightMapFunctionGradient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionGradient);
	UClass* Z_Construct_UClass_UHeightMapFunctionGradient_NoRegister()
	{
		return UHeightMapFunctionGradient::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionGradient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionGradient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionGradient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "HeightMapFunctionGradient" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionGradient, Min), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "HeightMapFunctionGradient" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionGradient, Max), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_ValueOffset_MetaData[] = {
		{ "Category", "HeightMapFunctionGradient" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_ValueOffset = { "ValueOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionGradient, ValueOffset), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_ValueOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_ValueOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionGradient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionGradient_Statics::NewProp_ValueOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionGradient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionGradient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionGradient_Statics::ClassParams = {
		&UHeightMapFunctionGradient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionGradient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionGradient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionGradient()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionGradient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionGradient.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionGradient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionGradient.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionGradient>()
	{
		return UHeightMapFunctionGradient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionGradient);
	void UHeightMapFunctionSelect::StaticRegisterNativesUHeightMapFunctionSelect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionSelect);
	UClass* Z_Construct_UClass_UHeightMapFunctionSelect_NoRegister()
	{
		return UHeightMapFunctionSelect::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionSelect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionSelect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionSelect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "HeightMapFunctionSelect" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionSelect, Min), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "HeightMapFunctionSelect" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionSelect, Max), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "HeightMapFunctionSelect" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionSelect, Threshold), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Threshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionSelect_Statics::NewProp_Threshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionSelect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionSelect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionSelect_Statics::ClassParams = {
		&UHeightMapFunctionSelect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionSelect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionSelect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionSelect()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionSelect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionSelect.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionSelect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionSelect.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionSelect>()
	{
		return UHeightMapFunctionSelect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionSelect);
	void UHeightMapFunctionFloor::StaticRegisterNativesUHeightMapFunctionFloor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionFloor);
	UClass* Z_Construct_UClass_UHeightMapFunctionFloor_NoRegister()
	{
		return UHeightMapFunctionFloor::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "HeightMapFunctionFloor" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionFloor, Min), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "HeightMapFunctionFloor" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionFloor, Threshold), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Threshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionFloor_Statics::NewProp_Threshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionFloor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionFloor_Statics::ClassParams = {
		&UHeightMapFunctionFloor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionFloor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionFloor()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionFloor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionFloor.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionFloor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionFloor.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionFloor>()
	{
		return UHeightMapFunctionFloor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionFloor);
	void UHeightMapFunctionNoise::StaticRegisterNativesUHeightMapFunctionNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionNoise);
	UClass* Z_Construct_UClass_UHeightMapFunctionNoise_NoRegister()
	{
		return UHeightMapFunctionNoise::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NoiseType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FractalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FractalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Noise_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Noise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType_MetaData[] = {
		{ "Category", "HeightMapFunctionNoise" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType = { "NoiseType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, NoiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType_MetaData)) }; // 590119321
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType_MetaData[] = {
		{ "Category", "HeightMapFunctionNoise" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType = { "FractalType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, FractalType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType_MetaData)) }; // 978473801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseModifier_MetaData[] = {
		{ "Category", "HeightMapFunctionNoise" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseModifier = { "NoiseModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, NoiseModifier), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "HeightMapFunctionNoise" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, NoiseFrequency), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "HeightMapFunctionNoise" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, Seed), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Noise_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Noise = { "Noise", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionNoise, Noise), Z_Construct_UClass_UFastNoiseWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Noise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Noise_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_FractalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_NoiseFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionNoise_Statics::NewProp_Noise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionNoise_Statics::ClassParams = {
		&UHeightMapFunctionNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionNoise()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionNoise.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionNoise.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionNoise>()
	{
		return UHeightMapFunctionNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionNoise);
	void UHeightMapFunctionValue::StaticRegisterNativesUHeightMapFunctionValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionValue);
	UClass* Z_Construct_UClass_UHeightMapFunctionValue_NoRegister()
	{
		return UHeightMapFunctionValue::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "HeightMapFunctionValue" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionValue, Value), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionValue_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionValue_Statics::ClassParams = {
		&UHeightMapFunctionValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionValue()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionValue.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionValue.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionValue>()
	{
		return UHeightMapFunctionValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionValue);
	void UHeightMapFunctionStep::StaticRegisterNativesUHeightMapFunctionStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapFunctionStep);
	UClass* Z_Construct_UClass_UHeightMapFunctionStep_NoRegister()
	{
		return UHeightMapFunctionStep::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapFunctionStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapFunctionStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeightMapFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/HeightMapFunction.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapFunctionStep_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "HeightMapFunctionStep" },
		{ "ModuleRelativePath", "Public/VoxelCreator/HeightMapFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeightMapFunctionStep_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapFunctionStep, Step), METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionStep_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionStep_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapFunctionStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapFunctionStep_Statics::NewProp_Step,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapFunctionStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapFunctionStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapFunctionStep_Statics::ClassParams = {
		&UHeightMapFunctionStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapFunctionStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionStep_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapFunctionStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapFunctionStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapFunctionStep()
	{
		if (!Z_Registration_Info_UClass_UHeightMapFunctionStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapFunctionStep.OuterSingleton, Z_Construct_UClass_UHeightMapFunctionStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapFunctionStep.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapFunctionStep>()
	{
		return UHeightMapFunctionStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapFunctionStep);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::EnumInfo[] = {
		{ EPassOperation_StaticEnum, TEXT("EPassOperation"), &Z_Registration_Info_UEnum_EPassOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2100247612U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapFunction, UHeightMapFunction::StaticClass, TEXT("UHeightMapFunction"), &Z_Registration_Info_UClass_UHeightMapFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunction), 2440735152U) },
		{ Z_Construct_UClass_UHeightMapFunctionGradient, UHeightMapFunctionGradient::StaticClass, TEXT("UHeightMapFunctionGradient"), &Z_Registration_Info_UClass_UHeightMapFunctionGradient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionGradient), 3526316546U) },
		{ Z_Construct_UClass_UHeightMapFunctionSelect, UHeightMapFunctionSelect::StaticClass, TEXT("UHeightMapFunctionSelect"), &Z_Registration_Info_UClass_UHeightMapFunctionSelect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionSelect), 2248236247U) },
		{ Z_Construct_UClass_UHeightMapFunctionFloor, UHeightMapFunctionFloor::StaticClass, TEXT("UHeightMapFunctionFloor"), &Z_Registration_Info_UClass_UHeightMapFunctionFloor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionFloor), 1093891260U) },
		{ Z_Construct_UClass_UHeightMapFunctionNoise, UHeightMapFunctionNoise::StaticClass, TEXT("UHeightMapFunctionNoise"), &Z_Registration_Info_UClass_UHeightMapFunctionNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionNoise), 3964548921U) },
		{ Z_Construct_UClass_UHeightMapFunctionValue, UHeightMapFunctionValue::StaticClass, TEXT("UHeightMapFunctionValue"), &Z_Registration_Info_UClass_UHeightMapFunctionValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionValue), 3487847824U) },
		{ Z_Construct_UClass_UHeightMapFunctionStep, UHeightMapFunctionStep::StaticClass, TEXT("UHeightMapFunctionStep"), &Z_Registration_Info_UClass_UHeightMapFunctionStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapFunctionStep), 2812415341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_4125101976(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_HeightMapFunction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
