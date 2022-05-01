// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/CharacterSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSaveGame() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UCharacterSaveGame_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UCharacterSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	SOCIAL_DISTANCE_API UScriptStruct* Z_Construct_UScriptStruct_FNPC_Data();
// End Cross Module References
	void UCharacterSaveGame::StaticRegisterNativesUCharacterSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UCharacterSaveGame_NoRegister()
	{
		return UCharacterSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MC_Risk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MC_Risk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MC_Happiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MC_Happiness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPC_Data_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NPC_Data_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPC_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NPC_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CharacterSaveGame.h" },
		{ "ModuleRelativePath", "CharacterSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Risk_MetaData[] = {
		{ "Category", "CharacterSaveGame" },
		{ "ModuleRelativePath", "CharacterSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Risk = { "MC_Risk", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSaveGame, MC_Risk), METADATA_PARAMS(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Risk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Risk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Happiness_MetaData[] = {
		{ "Category", "CharacterSaveGame" },
		{ "ModuleRelativePath", "CharacterSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Happiness = { "MC_Happiness", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSaveGame, MC_Happiness), METADATA_PARAMS(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Happiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Happiness_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_ValueProp = { "NPC_Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNPC_Data, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_Key_KeyProp = { "NPC_Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_MetaData[] = {
		{ "Category", "CharacterSaveGame" },
		{ "ModuleRelativePath", "CharacterSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data = { "NPC_Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSaveGame, NPC_Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Risk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_MC_Happiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSaveGame_Statics::NewProp_NPC_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSaveGame_Statics::ClassParams = {
		&UCharacterSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterSaveGame, 3992680642);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UCharacterSaveGame>()
	{
		return UCharacterSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterSaveGame(Z_Construct_UClass_UCharacterSaveGame, &UCharacterSaveGame::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UCharacterSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
