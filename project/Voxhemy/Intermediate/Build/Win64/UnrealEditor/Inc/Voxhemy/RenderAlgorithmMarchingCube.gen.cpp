// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/Render/RenderAlgorithmMarchingCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderAlgorithmMarchingCube() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithmMarchingCube_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithmMarchingCube();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithm_NoRegister();
// End Cross Module References
	void URenderAlgorithmMarchingCube::StaticRegisterNativesURenderAlgorithmMarchingCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderAlgorithmMarchingCube);
	UClass* Z_Construct_UClass_URenderAlgorithmMarchingCube_NoRegister()
	{
		return URenderAlgorithmMarchingCube::StaticClass();
	}
	struct Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/Render/RenderAlgorithmMarchingCube.h" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Render/RenderAlgorithmMarchingCube.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URenderAlgorithm_NoRegister, (int32)VTABLE_OFFSET(URenderAlgorithmMarchingCube, IRenderAlgorithm), false },  // 2226585420
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderAlgorithmMarchingCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::ClassParams = {
		&URenderAlgorithmMarchingCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderAlgorithmMarchingCube()
	{
		if (!Z_Registration_Info_UClass_URenderAlgorithmMarchingCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderAlgorithmMarchingCube.OuterSingleton, Z_Construct_UClass_URenderAlgorithmMarchingCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderAlgorithmMarchingCube.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<URenderAlgorithmMarchingCube>()
	{
		return URenderAlgorithmMarchingCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderAlgorithmMarchingCube);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithmMarchingCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithmMarchingCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderAlgorithmMarchingCube, URenderAlgorithmMarchingCube::StaticClass, TEXT("URenderAlgorithmMarchingCube"), &Z_Registration_Info_UClass_URenderAlgorithmMarchingCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderAlgorithmMarchingCube), 3634676492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithmMarchingCube_h_3192266595(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithmMarchingCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Render_RenderAlgorithmMarchingCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
