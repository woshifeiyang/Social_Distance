// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/Sarah_InteractableNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSarah_InteractableNPC() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ASarah_InteractableNPC_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ASarah_InteractableNPC();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ANPC_Interactable();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
// End Cross Module References
	void ASarah_InteractableNPC::StaticRegisterNativesASarah_InteractableNPC()
	{
	}
	UClass* Z_Construct_UClass_ASarah_InteractableNPC_NoRegister()
	{
		return ASarah_InteractableNPC::StaticClass();
	}
	struct Z_Construct_UClass_ASarah_InteractableNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASarah_InteractableNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANPC_Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASarah_InteractableNPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sarah_InteractableNPC.h" },
		{ "ModuleRelativePath", "Sarah_InteractableNPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASarah_InteractableNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASarah_InteractableNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASarah_InteractableNPC_Statics::ClassParams = {
		&ASarah_InteractableNPC::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASarah_InteractableNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASarah_InteractableNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASarah_InteractableNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASarah_InteractableNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASarah_InteractableNPC, 3516875049);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<ASarah_InteractableNPC>()
	{
		return ASarah_InteractableNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASarah_InteractableNPC(Z_Construct_UClass_ASarah_InteractableNPC, &ASarah_InteractableNPC::StaticClass, TEXT("/Script/Social_Distance"), TEXT("ASarah_InteractableNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASarah_InteractableNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
