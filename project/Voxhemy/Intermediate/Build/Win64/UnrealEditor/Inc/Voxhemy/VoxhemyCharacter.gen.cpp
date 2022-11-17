// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxhemy/Public/VoxhemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxhemyCharacter() {}
// Cross Module References
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxhemyCharacter_NoRegister();
	VOXHEMY_API UClass* Z_Construct_UClass_AVoxhemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Voxhemy();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AVoxhemyCharacter::StaticRegisterNativesAVoxhemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxhemyCharacter);
	UClass* Z_Construct_UClass_AVoxhemyCharacter_NoRegister()
	{
		return AVoxhemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxhemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairObject_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CrosshairObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxhemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxhemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VoxhemyCharacter.h" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxhemyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Cable_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Cable = { "Cable", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxhemyCharacter, Cable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Cable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Cable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxhemyCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_CrosshairObject_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_CrosshairObject = { "CrosshairObject", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxhemyCharacter, CrosshairObject), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_CrosshairObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_CrosshairObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Crosshair_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxhemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxhemyCharacter, Crosshair), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Crosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Crosshair_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxhemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Cable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_CrosshairObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxhemyCharacter_Statics::NewProp_Crosshair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxhemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxhemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxhemyCharacter_Statics::ClassParams = {
		&AVoxhemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxhemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxhemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxhemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxhemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AVoxhemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxhemyCharacter.OuterSingleton, Z_Construct_UClass_AVoxhemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxhemyCharacter.OuterSingleton;
	}
	template<> VOXHEMY_API UClass* StaticClass<AVoxhemyCharacter>()
	{
		return AVoxhemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxhemyCharacter);
	struct Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxhemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxhemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxhemyCharacter, AVoxhemyCharacter::StaticClass, TEXT("AVoxhemyCharacter"), &Z_Registration_Info_UClass_AVoxhemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxhemyCharacter), 550409990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxhemyCharacter_h_981625930(TEXT("/Script/Voxhemy"),
		Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxhemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxhemy_Source_Voxhemy_Public_VoxhemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
