// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/EndOfDayInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndOfDayInterface() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UEndOfDayInterface_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UEndOfDayInterface();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
// End Cross Module References
	void UEndOfDayInterface::StaticRegisterNativesUEndOfDayInterface()
	{
	}
	UClass* Z_Construct_UClass_UEndOfDayInterface_NoRegister()
	{
		return UEndOfDayInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEndOfDayInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndOfDayInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndOfDayInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndOfDayInterface.h" },
		{ "ModuleRelativePath", "EndOfDayInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndOfDayInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndOfDayInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndOfDayInterface_Statics::ClassParams = {
		&UEndOfDayInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndOfDayInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndOfDayInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndOfDayInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndOfDayInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndOfDayInterface, 4172695728);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UEndOfDayInterface>()
	{
		return UEndOfDayInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndOfDayInterface(Z_Construct_UClass_UEndOfDayInterface, &UEndOfDayInterface::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UEndOfDayInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndOfDayInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
