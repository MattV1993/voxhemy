// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/Chunk/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_AChunk_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_AChunk();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FChunkParams();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapGenerator_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_URenderAlgorithm_NoRegister();
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
// End Cross Module References
	void AChunk::StaticRegisterNativesAChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunk);
	UClass* Z_Construct_UClass_AChunk_NoRegister()
	{
		return AChunk::StaticClass();
	}
	struct Z_Construct_UClass_AChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_RenderAlgorithm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelCreator/Chunk/Chunk.h" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, Params), Z_Construct_UScriptStruct_FChunkParams, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_Params_MetaData)) }; // 799297483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_Generator_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, Generator), Z_Construct_UClass_UHeightMapGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_RenderAlgorithm_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_RenderAlgorithm = { "RenderAlgorithm", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, RenderAlgorithm), Z_Construct_UClass_URenderAlgorithm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_RenderAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_RenderAlgorithm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_MeshData_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, MeshData), Z_Construct_UScriptStruct_FChunkMeshData, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_MeshData_MetaData)) }; // 1456293168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_DynamicMesh_MetaData[] = {
		{ "Comment", "//UE::Geometry::FDynamicMesh3 DynamicMesh;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/Chunk.h" },
		{ "ToolTip", "UE::Geometry::FDynamicMesh3 DynamicMesh;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChunk, DynamicMesh), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::NewProp_DynamicMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_DynamicMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_RenderAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_DynamicMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunk_Statics::ClassParams = {
		&AChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChunk()
	{
		if (!Z_Registration_Info_UClass_AChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunk.OuterSingleton, Z_Construct_UClass_AChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunk.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<AChunk>()
	{
		return AChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunk);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_Chunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_Chunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunk, AChunk::StaticClass, TEXT("AChunk"), &Z_Registration_Info_UClass_AChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunk), 683891456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_Chunk_h_2958524710(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_Chunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
