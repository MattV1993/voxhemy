// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXHEMY_ChunkUtils_generated_h
#error "ChunkUtils.generated.h already included, missing '#pragma once' in ChunkUtils.h"
#endif
#define VOXHEMY_ChunkUtils_generated_h

#define FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkParams_Statics; \
	VOXHEMY_API static class UScriptStruct* StaticStruct();


template<> VOXHEMY_API UScriptStruct* StaticStruct<struct FChunkParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Voxhemy_Source_Voxhemy_Private_VoxelCreator_Chunk_ChunkUtils_h


#define FOREACH_ENUM_EVOXEL(op) \
	op(EVoxel::Air) \
	op(EVoxel::Grass) \
	op(EVoxel::Ground) \
	op(EVoxel::Rock) \
	op(EVoxel::Water) \
	op(EVoxel::Count) 

enum class EVoxel : uint8;
template<> VOXHEMY_API UEnum* StaticEnum<EVoxel>();

#define FOREACH_ENUM_EALGORITHMTYPE(op) \
	op(EAlgorithmType::MarchingCube) 

enum class EAlgorithmType;
template<> VOXHEMY_API UEnum* StaticEnum<EAlgorithmType>();

#define FOREACH_ENUM_EMESHTYPE(op) \
	op(EMeshType::Procedural) \
	op(EMeshType::Dynamic) 

enum class EMeshType;
template<> VOXHEMY_API UEnum* StaticEnum<EMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
