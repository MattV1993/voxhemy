// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/Render/RenderAlgorithm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderAlgorithm() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithm_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithm();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
// End Cross Module References
	void URenderAlgorithm::StaticRegisterNativesURenderAlgorithm()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderAlgorithm);
	UClass* Z_Construct_UClass_URenderAlgorithm_NoRegister()
	{
		return URenderAlgorithm::StaticClass();
	}
	struct Z_Construct_UClass_URenderAlgorithm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderAlgorithm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderAlgorithm_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/Render/RenderAlgorithm.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderAlgorithm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRenderAlgorithm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderAlgorithm_Statics::ClassParams = {
		&URenderAlgorithm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URenderAlgorithm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderAlgorithm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderAlgorithm()
	{
		if (!Z_Registration_Info_UClass_URenderAlgorithm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderAlgorithm.OuterSingleton, Z_Construct_UClass_URenderAlgorithm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderAlgorithm.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<URenderAlgorithm>()
	{
		return URenderAlgorithm::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderAlgorithm);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderAlgorithm, URenderAlgorithm::StaticClass, TEXT("URenderAlgorithm"), &Z_Registration_Info_UClass_URenderAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderAlgorithm), 2226585420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithm_h_613069468(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
