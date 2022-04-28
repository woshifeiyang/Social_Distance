// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DayLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MC_Risk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MC_Risk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MC_Happiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MC_Happiness;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableNPCList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableNPCList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractableNPCList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, TimeOfDay), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop = { "DayLoop", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, DayLoop), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk = { "MC_Risk", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, MC_Risk), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness = { "MC_Happiness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, MC_Happiness), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList_Inner = { "InteractableNPCList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList = { "InteractableNPCList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, InteractableNPCList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractableNPCList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 4019598223);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
