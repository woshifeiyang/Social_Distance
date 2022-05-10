// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/Struct_TaskProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct_TaskProperty() {}
// Cross Module References
	SOCIAL_DISTANCE_API UScriptStruct* Z_Construct_UScriptStruct_FTaskProperty();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AStruct_TaskProperty_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AStruct_TaskProperty();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References

static_assert(std::is_polymorphic<FTaskProperty>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTaskProperty cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTaskProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIAL_DISTANCE_API uint32 Get_Z_Construct_UScriptStruct_FTaskProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskProperty, Z_Construct_UPackage__Script_Social_Distance(), TEXT("TaskProperty"), sizeof(FTaskProperty), Get_Z_Construct_UScriptStruct_FTaskProperty_Hash());
	}
	return Singleton;
}
template<> SOCIAL_DISTANCE_API UScriptStruct* StaticStruct<FTaskProperty>()
{
	return FTaskProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskProperty(FTaskProperty::StaticStruct, TEXT("/Script/Social_Distance"), TEXT("TaskProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Social_Distance_StaticRegisterNativesFTaskProperty
{
	FScriptStruct_Social_Distance_StaticRegisterNativesFTaskProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TaskProperty")),new UScriptStruct::TCppStructOps<FTaskProperty>);
	}
} ScriptStruct_Social_Distance_StaticRegisterNativesFTaskProperty;
	struct Z_Construct_UScriptStruct_FTaskProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskOrderNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TaskOrderNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPC_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NPC_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskCompletedContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskCompletedContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskTip_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskTip_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskTip_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskTip_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MCReward_Happiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MCReward_Happiness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCReward_Happiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NPCReward_Happiness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskIndex_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskOrderNum_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskOrderNum = { "TaskOrderNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskOrderNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskOrderNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskOrderNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPC_Name_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPC_Name = { "NPC_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, NPC_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPC_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPC_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskRequest_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskRequest = { "TaskRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskRequest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskContent_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskContent = { "TaskContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskCompletedContent_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskCompletedContent = { "TaskCompletedContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskCompletedContent), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskCompletedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskCompletedContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_1_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_1 = { "TaskTip_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskTip_1), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_2_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_2 = { "TaskTip_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, TaskTip_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_MCReward_Happiness_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_MCReward_Happiness = { "MCReward_Happiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, MCReward_Happiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_MCReward_Happiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_MCReward_Happiness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPCReward_Happiness_MetaData[] = {
		{ "Category", "TaskProperty" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPCReward_Happiness = { "NPCReward_Happiness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskProperty, NPCReward_Happiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPCReward_Happiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPCReward_Happiness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskOrderNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPC_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskCompletedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_TaskTip_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_MCReward_Happiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskProperty_Statics::NewProp_NPCReward_Happiness,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TaskProperty",
		sizeof(FTaskProperty),
		alignof(FTaskProperty),
		Z_Construct_UScriptStruct_FTaskProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Social_Distance();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskProperty"), sizeof(FTaskProperty), Get_Z_Construct_UScriptStruct_FTaskProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskProperty_Hash() { return 3523575921U; }
	void AStruct_TaskProperty::StaticRegisterNativesAStruct_TaskProperty()
	{
	}
	UClass* Z_Construct_UClass_AStruct_TaskProperty_NoRegister()
	{
		return AStruct_TaskProperty::StaticClass();
	}
	struct Z_Construct_UClass_AStruct_TaskProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStruct_TaskProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStruct_TaskProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Struct_TaskProperty.h" },
		{ "ModuleRelativePath", "Struct_TaskProperty.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStruct_TaskProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStruct_TaskProperty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStruct_TaskProperty_Statics::ClassParams = {
		&AStruct_TaskProperty::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStruct_TaskProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStruct_TaskProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStruct_TaskProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStruct_TaskProperty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStruct_TaskProperty, 1023036391);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<AStruct_TaskProperty>()
	{
		return AStruct_TaskProperty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStruct_TaskProperty(Z_Construct_UClass_AStruct_TaskProperty, &AStruct_TaskProperty::StaticClass, TEXT("/Script/Social_Distance"), TEXT("AStruct_TaskProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStruct_TaskProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
