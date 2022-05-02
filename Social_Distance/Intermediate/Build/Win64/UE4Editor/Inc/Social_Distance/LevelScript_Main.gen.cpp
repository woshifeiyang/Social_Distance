// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/LevelScript_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScript_Main() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ALevelScript_Main_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ALevelScript_Main();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ALevelScript_Main::StaticRegisterNativesALevelScript_Main()
	{
	}
	UClass* Z_Construct_UClass_ALevelScript_Main_NoRegister()
	{
		return ALevelScript_Main::StaticClass();
	}
	struct Z_Construct_UClass_ALevelScript_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableNPCList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableNPCList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractableNPCList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialFrameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialFrameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelScript_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LevelScript_Main.h" },
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelScript_Main, GameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelScript_Main, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_MainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_MainCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList_Inner = { "InteractableNPCList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList_MetaData[] = {
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList = { "InteractableNPCList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelScript_Main, InteractableNPCList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialUI_MetaData[] = {
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialUI = { "TutorialUI", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelScript_Main, TutorialUI), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialFrameInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LevelScript_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialFrameInstance = { "TutorialFrameInstance", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelScript_Main, TutorialFrameInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialFrameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialFrameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelScript_Main_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_MainCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_InteractableNPCList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScript_Main_Statics::NewProp_TutorialFrameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelScript_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelScript_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelScript_Main_Statics::ClassParams = {
		&ALevelScript_Main::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelScript_Main_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelScript_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScript_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelScript_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelScript_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelScript_Main, 2060671803);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<ALevelScript_Main>()
	{
		return ALevelScript_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelScript_Main(Z_Construct_UClass_ALevelScript_Main, &ALevelScript_Main::StaticClass, TEXT("/Script/Social_Distance"), TEXT("ALevelScript_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelScript_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
