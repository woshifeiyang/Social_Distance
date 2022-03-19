// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/MainCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterAnimInstance() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
// End Cross Module References
	void UMainCharacterAnimInstance::StaticRegisterNativesUMainCharacterAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMainCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTalking_MetaData[];
#endif
		static void NewProp_IsTalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTalking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking_MetaData[] = {
		{ "Category", "MainCharacterAnimInstance" },
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking_SetBit(void* Obj)
	{
		((UMainCharacterAnimInstance*)Obj)->IsTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking = { "IsTalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMainCharacterAnimInstance), &Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_IsTalking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams = {
		&UMainCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainCharacterAnimInstance, 1195146101);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UMainCharacterAnimInstance>()
	{
		return UMainCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainCharacterAnimInstance(Z_Construct_UClass_UMainCharacterAnimInstance, &UMainCharacterAnimInstance::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UMainCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
