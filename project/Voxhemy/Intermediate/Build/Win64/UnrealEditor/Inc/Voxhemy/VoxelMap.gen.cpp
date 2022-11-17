// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Public/VoxelCreator/VoxelMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMap() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxelMap_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxelMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FChunkParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	VOXHEMY_API UClass* Z_Construct_UClass_AChunk_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	void AVoxelMap::StaticRegisterNativesAVoxelMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelMap);
	UClass* Z_Construct_UClass_AVoxelMap_NoRegister()
	{
		return AVoxelMap::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManageChunksTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManageChunksTimerHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chunks_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chunks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chunks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Chunks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingLoads_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingLoads_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingLoads;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingRenders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingRenders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingRenders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/VoxelMap.h" },
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_DrawDistance_MetaData[] = {
		{ "Category", "VoxelMap" },
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_DrawDistance = { "DrawDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, DrawDistance), METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_DrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_DrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "VoxelMap" },
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, Params), Z_Construct_UScriptStruct_FChunkParams, METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_Params_MetaData)) }; // 799297483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_ManageChunksTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_ManageChunksTimerHandle = { "ManageChunksTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, ManageChunksTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_ManageChunksTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_ManageChunksTimerHandle_MetaData)) }; // 589591453
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_ValueProp = { "Chunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_Key_KeyProp = { "Chunks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks = { "Chunks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, Chunks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads_Inner = { "PendingLoads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads = { "PendingLoads", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, PendingLoads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders_Inner = { "PendingRenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCreator/VoxelMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders = { "PendingRenders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMap, PendingRenders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_DrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_ManageChunksTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_Chunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingLoads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMap_Statics::NewProp_PendingRenders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMap_Statics::ClassParams = {
		&AVoxelMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMap()
	{
		if (!Z_Registration_Info_UClass_AVoxelMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMap.OuterSingleton, Z_Construct_UClass_AVoxelMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelMap.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<AVoxelMap>()
	{
		return AVoxelMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMap);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_VoxelMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_VoxelMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelMap, AVoxelMap::StaticClass, TEXT("AVoxelMap"), &Z_Registration_Info_UClass_AVoxelMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMap), 692307696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_VoxelMap_h_2807351144(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_VoxelMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxelCreator_VoxelMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
