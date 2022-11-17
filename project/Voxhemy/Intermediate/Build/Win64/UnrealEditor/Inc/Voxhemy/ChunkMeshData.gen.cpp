// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/Chunk/ChunkMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkMeshData() {}
// Cross Module References
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkMeshData;
class UScriptStruct* FChunkMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkMeshData, Z_Construct_UPackage__Script_Voxhemy(), TEXT("ChunkMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton;
}
template<> VOXHEMY_API UScriptStruct* StaticStruct<FChunkMeshData>()
{
	return FChunkMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkMeshData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkMeshData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		&NewStructOps,
		"ChunkMeshData",
		sizeof(FChunkMeshData),
		alignof(FChunkMeshData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton, Z_Construct_UScriptStruct_FChunkMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkMeshData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkMeshData_h_Statics::ScriptStructInfo[] = {
		{ FChunkMeshData::StaticStruct, Z_Construct_UScriptStruct_FChunkMeshData_Statics::NewStructOps, TEXT("ChunkMeshData"), &Z_Registration_Info_UScriptStruct_ChunkMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkMeshData), 1456293168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkMeshData_h_3585367723(TEXT("/Script/Voxhemy"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkMeshData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
