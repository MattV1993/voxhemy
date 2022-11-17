// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Private/VoxelCreator/Chunk/ChunkUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkUtils() {}
// Cross Module References
	VOXHEMY_API UEnum* Z_Construct_UEnum_Voxhemy_EVoxel();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	VOXHEMY_API UEnum* Z_Construct_UEnum_Voxhemy_EAlgorithmType();
	VOXHEMY_API UEnum* Z_Construct_UEnum_Voxhemy_EMeshType();
	VOXHEMY_API UScriptStruct* Z_Construct_UScriptStruct_FChunkParams();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXHEMY_API UClass* Z_Construct_UClass_UHeightMapGenerator_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxel;
	static UEnum* EVoxel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxhemy_EVoxel, Z_Construct_UPackage__Script_Voxhemy(), TEXT("EVoxel"));
		}
		return Z_Registration_Info_UEnum_EVoxel.OuterSingleton;
	}
	template<> VOXHEMY_API UEnum* StaticEnum<EVoxel>()
	{
		return EVoxel_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxhemy_EVoxel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enumerators[] = {
		{ "EVoxel::Air", (int64)EVoxel::Air },
		{ "EVoxel::Grass", (int64)EVoxel::Grass },
		{ "EVoxel::Ground", (int64)EVoxel::Ground },
		{ "EVoxel::Rock", (int64)EVoxel::Rock },
		{ "EVoxel::Water", (int64)EVoxel::Water },
		{ "EVoxel::Count", (int64)EVoxel::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enum_MetaDataParams[] = {
		{ "Air.Name", "EVoxel::Air" },
		{ "Count.Name", "EVoxel::Count" },
		{ "Grass.Name", "EVoxel::Grass" },
		{ "Ground.Name", "EVoxel::Ground" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
		{ "Rock.Name", "EVoxel::Rock" },
		{ "Water.Name", "EVoxel::Water" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxhemy_EVoxel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		"EVoxel",
		"EVoxel",
		Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EVoxel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxhemy_EVoxel()
	{
		if (!Z_Registration_Info_UEnum_EVoxel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxel.InnerSingleton, Z_Construct_UEnum_Voxhemy_EVoxel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlgorithmType;
	static UEnum* EAlgorithmType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlgorithmType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlgorithmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxhemy_EAlgorithmType, Z_Construct_UPackage__Script_Voxhemy(), TEXT("EAlgorithmType"));
		}
		return Z_Registration_Info_UEnum_EAlgorithmType.OuterSingleton;
	}
	template<> VOXHEMY_API UEnum* StaticEnum<EAlgorithmType>()
	{
		return EAlgorithmType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enumerators[] = {
		{ "EAlgorithmType::MarchingCube", (int64)EAlgorithmType::MarchingCube },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enum_MetaDataParams[] = {
		{ "MarchingCube.Name", "EAlgorithmType::MarchingCube" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		"EAlgorithmType",
		"EAlgorithmType",
		Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxhemy_EAlgorithmType()
	{
		if (!Z_Registration_Info_UEnum_EAlgorithmType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlgorithmType.InnerSingleton, Z_Construct_UEnum_Voxhemy_EAlgorithmType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlgorithmType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshType;
	static UEnum* EMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxhemy_EMeshType, Z_Construct_UPackage__Script_Voxhemy(), TEXT("EMeshType"));
		}
		return Z_Registration_Info_UEnum_EMeshType.OuterSingleton;
	}
	template<> VOXHEMY_API UEnum* StaticEnum<EMeshType>()
	{
		return EMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voxhemy_EMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enumerators[] = {
		{ "EMeshType::Procedural", (int64)EMeshType::Procedural },
		{ "EMeshType::Dynamic", (int64)EMeshType::Dynamic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enum_MetaDataParams[] = {
		{ "Dynamic.Name", "EMeshType::Dynamic" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
		{ "Procedural.Name", "EMeshType::Procedural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxhemy_EMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		"EMeshType",
		"EMeshType",
		Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Voxhemy_EMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Voxhemy_EMeshType()
	{
		if (!Z_Registration_Info_UEnum_EMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshType.InnerSingleton, Z_Construct_UEnum_Voxhemy_EMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkParams;
class UScriptStruct* FChunkParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkParams, Z_Construct_UPackage__Script_Voxhemy(), TEXT("ChunkParams"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkParams.OuterSingleton;
}
template<> VOXHEMY_API UScriptStruct* StaticStruct<FChunkParams>()
{
	return FChunkParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static void NewProp_Interpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[];
#endif
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Optimise_MetaData[];
#endif
		static void NewProp_Optimise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Optimise;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RenderAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderAlgorithm;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, UVScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_ChunkSize_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, ChunkSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_ChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_ChunkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_SurfaceLevel_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_SurfaceLevel = { "SurfaceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, SurfaceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_SurfaceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_SurfaceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation_SetBit(void* Obj)
	{
		((FChunkParams*)Obj)->Interpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkParams), &Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, Generator), Z_Construct_UClass_UHeightMapGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((FChunkParams*)Obj)->DrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkParams), &Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise_SetBit(void* Obj)
	{
		((FChunkParams*)Obj)->Optimise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise = { "Optimise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkParams), &Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm = { "RenderAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, RenderAlgorithm), Z_Construct_UEnum_Voxhemy_EAlgorithmType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm_MetaData)) }; // 1971402582
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "ChunkParams" },
		{ "ModuleRelativePath", "Private/VoxelCreator/Chunk/ChunkUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkParams, MeshType), Z_Construct_UEnum_Voxhemy_EMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType_MetaData)) }; // 1079435143
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_ChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_SurfaceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Interpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_DrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_Optimise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_RenderAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkParams_Statics::NewProp_MeshType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
		nullptr,
		&NewStructOps,
		"ChunkParams",
		sizeof(FChunkParams),
		alignof(FChunkParams),
		Z_Construct_UScriptStruct_FChunkParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkParams.InnerSingleton, Z_Construct_UScriptStruct_FChunkParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::EnumInfo[] = {
		{ EVoxel_StaticEnum, TEXT("EVoxel"), &Z_Registration_Info_UEnum_EVoxel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 140958008U) },
		{ EAlgorithmType_StaticEnum, TEXT("EAlgorithmType"), &Z_Registration_Info_UEnum_EAlgorithmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1971402582U) },
		{ EMeshType_StaticEnum, TEXT("EMeshType"), &Z_Registration_Info_UEnum_EMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1079435143U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::ScriptStructInfo[] = {
		{ FChunkParams::StaticStruct, Z_Construct_UScriptStruct_FChunkParams_Statics::NewStructOps, TEXT("ChunkParams"), &Z_Registration_Info_UScriptStruct_ChunkParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkParams), 799297483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_965997834(TEXT("/Script/Voxhemy"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
