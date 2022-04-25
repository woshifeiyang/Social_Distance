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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelScript_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelScript_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelScript_Main_Statics::ClassParams = {
		&ALevelScript_Main::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ALevelScript_Main, 773480919);
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
