// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/VoxhemyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxhemyGameModeBase() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxhemyGameModeBase_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxhemyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
// End Cross Module References
	void AVoxhemyGameModeBase::StaticRegisterNativesAVoxhemyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxhemyGameModeBase);
	UClass* Z_Construct_UClass_AVoxhemyGameModeBase_NoRegister()
	{
		return AVoxhemyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVoxhemyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxhemyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VoxhemyGameModeBase.h" },
		{ "ModuleRelativePath", "VoxhemyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxhemyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxhemyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxhemyGameModeBase_Statics::ClassParams = {
		&AVoxhemyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVoxhemyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxhemyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVoxhemyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxhemyGameModeBase.OuterSingleton, Z_Construct_UClass_AVoxhemyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxhemyGameModeBase.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<AVoxhemyGameModeBase>()
	{
		return AVoxhemyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxhemyGameModeBase);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_VoxhemyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_VoxhemyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxhemyGameModeBase, AVoxhemyGameModeBase::StaticClass, TEXT("AVoxhemyGameModeBase"), &Z_Registration_Info_UClass_AVoxhemyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxhemyGameModeBase), 3891158169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_VoxhemyGameModeBase_h_133674069(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_VoxhemyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_VoxhemyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
