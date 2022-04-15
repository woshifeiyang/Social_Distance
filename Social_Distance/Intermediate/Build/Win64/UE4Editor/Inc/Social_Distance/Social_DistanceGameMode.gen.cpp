// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/Social_DistanceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocial_DistanceGameMode() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ASocial_DistanceGameMode_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ASocial_DistanceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UInGameInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void ASocial_DistanceGameMode::StaticRegisterNativesASocial_DistanceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASocial_DistanceGameMode_NoRegister()
	{
		return ASocial_DistanceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASocial_DistanceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameInterfaceInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InGameInterfaceInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskPropertyDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskPropertyDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASocial_DistanceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocial_DistanceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Social_DistanceGameMode.h" },
		{ "ModuleRelativePath", "Social_DistanceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Social_DistanceGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASocial_DistanceGameMode, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_MainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_MainCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_InGameInterfaceInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Social_DistanceGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_InGameInterfaceInstance = { "InGameInterfaceInstance", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASocial_DistanceGameMode, InGameInterfaceInstance), Z_Construct_UClass_UInGameInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_InGameInterfaceInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_InGameInterfaceInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_TaskPropertyDataTable_MetaData[] = {
		{ "Category", "Social_DistanceGameMode" },
		{ "ModuleRelativePath", "Social_DistanceGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_TaskPropertyDataTable = { "TaskPropertyDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASocial_DistanceGameMode, TaskPropertyDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_TaskPropertyDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_TaskPropertyDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASocial_DistanceGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_MainCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_InGameInterfaceInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASocial_DistanceGameMode_Statics::NewProp_TaskPropertyDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASocial_DistanceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASocial_DistanceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASocial_DistanceGameMode_Statics::ClassParams = {
		&ASocial_DistanceGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASocial_DistanceGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASocial_DistanceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASocial_DistanceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASocial_DistanceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASocial_DistanceGameMode, 2553436299);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<ASocial_DistanceGameMode>()
	{
		return ASocial_DistanceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASocial_DistanceGameMode(Z_Construct_UClass_ASocial_DistanceGameMode, &ASocial_DistanceGameMode::StaticClass, TEXT("/Script/Social_Distance"), TEXT("ASocial_DistanceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASocial_DistanceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
