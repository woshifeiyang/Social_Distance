// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/C_MainCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_MainCharacter() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AC_MainCharacter_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AC_MainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
// End Cross Module References
	void AC_MainCharacter::StaticRegisterNativesAC_MainCharacter()
	{
	}
	UClass* Z_Construct_UClass_AC_MainCharacter_NoRegister()
	{
		return AC_MainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AC_MainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_MainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_MainCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "C_MainCharacter.h" },
		{ "ModuleRelativePath", "C_MainCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_MainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_MainCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_MainCharacter_Statics::ClassParams = {
		&AC_MainCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AC_MainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_MainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_MainCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_MainCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_MainCharacter, 3241597430);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<AC_MainCharacter>()
	{
		return AC_MainCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_MainCharacter(Z_Construct_UClass_AC_MainCharacter, &AC_MainCharacter::StaticClass, TEXT("/Script/Social_Distance"), TEXT("AC_MainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_MainCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
