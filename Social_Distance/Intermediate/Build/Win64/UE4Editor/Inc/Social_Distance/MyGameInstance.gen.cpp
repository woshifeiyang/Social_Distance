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
	SOCIAL_DISTANCE_API UScriptStruct* Z_Construct_UScriptStruct_FNPC_Data();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
class UScriptStruct* FNPC_Data::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIAL_DISTANCE_API uint32 Get_Z_Construct_UScriptStruct_FNPC_Data_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPC_Data, Z_Construct_UPackage__Script_Social_Distance(), TEXT("NPC_Data"), sizeof(FNPC_Data), Get_Z_Construct_UScriptStruct_FNPC_Data_Hash());
	}
	return Singleton;
}
template<> SOCIAL_DISTANCE_API UScriptStruct* StaticStruct<FNPC_Data>()
{
	return FNPC_Data::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNPC_Data(FNPC_Data::StaticStruct, TEXT("/Script/Social_Distance"), TEXT("NPC_Data"), false, nullptr, nullptr);
static struct FScriptStruct_Social_Distance_StaticRegisterNativesFNPC_Data
{
	FScriptStruct_Social_Distance_StaticRegisterNativesFNPC_Data()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NPC_Data")),new UScriptStruct::TCppStructOps<FNPC_Data>);
	}
} ScriptStruct_Social_Distance_StaticRegisterNativesFNPC_Data;
	struct Z_Construct_UScriptStruct_FNPC_Data_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Happiness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Happiness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Risk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Risk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPC_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPC_Data>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NPC_Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNPC_Data, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Happiness_MetaData[] = {
		{ "Category", "NPC_Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Happiness = { "Happiness", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNPC_Data, Happiness), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Happiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Happiness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Risk_MetaData[] = {
		{ "Category", "NPC_Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Risk = { "Risk", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNPC_Data, Risk), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Risk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Risk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPC_Data_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Happiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPC_Data_Statics::NewProp_Risk,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPC_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
		nullptr,
		&NewStructOps,
		"NPC_Data",
		sizeof(FNPC_Data),
		alignof(FNPC_Data),
		Z_Construct_UScriptStruct_FNPC_Data_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_Data_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPC_Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPC_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPC_Data()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNPC_Data_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Social_Distance();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NPC_Data"), sizeof(FNPC_Data), Get_Z_Construct_UScriptStruct_FNPC_Data_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNPC_Data_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNPC_Data_Hash() { return 1088862146U; }
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
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_ValueProp = { "NPC_Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNPC_Data, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_Key_KeyProp = { "NPC_Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data = { "NPC_Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, NPC_Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TimeOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_DayLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Risk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_MC_Happiness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NPC_Data,
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
	IMPLEMENT_CLASS(UMyGameInstance, 2778899526);
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
