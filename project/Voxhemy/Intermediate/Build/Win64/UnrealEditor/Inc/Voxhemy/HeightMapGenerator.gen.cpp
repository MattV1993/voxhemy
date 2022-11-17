// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/HeightMap/HeightMapGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapGenerator() {}
// Cross Module References
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapFunction_NoRegister();
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FHeightMapGeneratorPass();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapGenerator_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec;
class UScriptStruct* FHeightMapGeneratorPassSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec, Z_Construct_UPackage__Script_Voxhemy(), TEXT("HeightMapGeneratorPassSpec"));
	}
	return Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.OuterSingleton;
}
template<> VOXHEMY_API UScriptStruct* StaticStruct<FHeightMapGeneratorPassSpec>()
{
	return FHeightMapGeneratorPassSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightMapGeneratorPassSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "HeightMapGeneratorPassSpec" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeightMapGeneratorPassSpec, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "HeightMapGeneratorPassSpec" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeightMapGeneratorPassSpec, Function), Z_Construct_UClass_UHeightMapFunction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "HeightMapGeneratorPassSpec" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeightMapGeneratorPassSpec, Input), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		&NewStructOps,
		"HeightMapGeneratorPassSpec",
		sizeof(FHeightMapGeneratorPassSpec),
		alignof(FHeightMapGeneratorPassSpec),
		Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.InnerSingleton, Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass;
class UScriptStruct* FHeightMapGeneratorPass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightMapGeneratorPass, Z_Construct_UPackage__Script_Voxhemy(), TEXT("HeightMapGeneratorPass"));
	}
	return Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.OuterSingleton;
}
template<> VOXHEMY_API UScriptStruct* StaticStruct<FHeightMapGeneratorPass>()
{
	return FHeightMapGeneratorPass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightMapGeneratorPass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeightMapGeneratorPass, Function), Z_Construct_UClass_UHeightMapFunction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewProp_Function_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewProp_Function,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		&NewStructOps,
		"HeightMapGeneratorPass",
		sizeof(FHeightMapGeneratorPass),
		alignof(FHeightMapGeneratorPass),
		Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightMapGeneratorPass()
	{
		if (!Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.InnerSingleton, Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass.InnerSingleton;
	}
	void UHeightMapGenerator::StaticRegisterNativesUHeightMapGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapGenerator);
	UClass* Z_Construct_UClass_UHeightMapGenerator_NoRegister()
	{
		return UHeightMapGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Passes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Passes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PassMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PassMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelCreator/HeightMap/HeightMapGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes_Inner = { "Passes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec, METADATA_PARAMS(nullptr, 0) }; // 3016196452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes_MetaData[] = {
		{ "Category", "HeightMapGenerator" },
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapGenerator, Passes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes_MetaData)) }; // 3016196452
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_ValueProp = { "PassMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHeightMapGeneratorPass, METADATA_PARAMS(nullptr, 0) }; // 3796773613
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_Key_KeyProp = { "PassMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/HeightMap/HeightMapGenerator.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap = { "PassMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeightMapGenerator, PassMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_MetaData)) }; // 3796773613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_Passes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapGenerator_Statics::NewProp_PassMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapGenerator_Statics::ClassParams = {
		&UHeightMapGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightMapGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapGenerator()
	{
		if (!Z_Registration_Info_UClass_UHeightMapGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapGenerator.OuterSingleton, Z_Construct_UClass_UHeightMapGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapGenerator.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<UHeightMapGenerator>()
	{
		return UHeightMapGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapGenerator);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ScriptStructInfo[] = {
		{ FHeightMapGeneratorPassSpec::StaticStruct, Z_Construct_UScriptStruct_FHeightMapGeneratorPassSpec_Statics::NewStructOps, TEXT("HeightMapGeneratorPassSpec"), &Z_Registration_Info_UScriptStruct_HeightMapGeneratorPassSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightMapGeneratorPassSpec), 3016196452U) },
		{ FHeightMapGeneratorPass::StaticStruct, Z_Construct_UScriptStruct_FHeightMapGeneratorPass_Statics::NewStructOps, TEXT("HeightMapGeneratorPass"), &Z_Registration_Info_UScriptStruct_HeightMapGeneratorPass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightMapGeneratorPass), 3796773613U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapGenerator, UHeightMapGenerator::StaticClass, TEXT("UHeightMapGenerator"), &Z_Registration_Info_UClass_UHeightMapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapGenerator), 1011707186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_2117479528(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_HeightMap_HeightMapGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
