// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/NPC_Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_Interactable() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ANPC_Interactable_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ANPC_Interactable();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ANPC_Interactable::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_Interactable::execUpdateRisk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRisk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_Interactable::execUpdateLoneliness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoneliness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_Interactable::execGetDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDistance();
		P_NATIVE_END;
	}
	void ANPC_Interactable::StaticRegisterNativesANPC_Interactable()
	{
		UClass* Class = ANPC_Interactable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistance", &ANPC_Interactable::execGetDistance },
			{ "PrintLog", &ANPC_Interactable::execPrintLog },
			{ "UpdateLoneliness", &ANPC_Interactable::execUpdateLoneliness },
			{ "UpdateRisk", &ANPC_Interactable::execUpdateRisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_Interactable, nullptr, "GetDistance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Interactable_GetDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Interactable_GetDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics
	{
		struct NPC_Interactable_eventPrintLog_Parms
		{
			FString String;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_Interactable_eventPrintLog_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_Interactable, nullptr, "PrintLog", nullptr, nullptr, sizeof(NPC_Interactable_eventPrintLog_Parms), Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Interactable_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Interactable_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_Interactable, nullptr, "UpdateLoneliness", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_Interactable, nullptr, "UpdateRisk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_Interactable_UpdateRisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_Interactable_UpdateRisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_Interactable_NoRegister()
	{
		return ANPC_Interactable::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Interactable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loneliness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loneliness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitLoneliness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitLoneliness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Risk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Risk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitRisk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitRisk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelfLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsIndoor_MetaData[];
#endif
		static void NewProp_IsIndoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIndoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveMask_MetaData[];
#endif
		static void NewProp_HaveMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HaveMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Interactable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_Interactable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_Interactable_GetDistance, "GetDistance" }, // 1997943010
		{ &Z_Construct_UFunction_ANPC_Interactable_PrintLog, "PrintLog" }, // 3365130430
		{ &Z_Construct_UFunction_ANPC_Interactable_UpdateLoneliness, "UpdateLoneliness" }, // 2880258400
		{ &Z_Construct_UFunction_ANPC_Interactable_UpdateRisk, "UpdateRisk" }, // 3801202348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC_Interactable.h" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Loneliness_MetaData[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Loneliness = { "Loneliness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, Loneliness), METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Loneliness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Loneliness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitLoneliness_MetaData[] = {
		{ "Category", "CharacterProperty" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitLoneliness = { "InitLoneliness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, InitLoneliness), METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitLoneliness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitLoneliness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Risk_MetaData[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Risk = { "Risk", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, Risk), METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Risk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Risk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitRisk_MetaData[] = {
		{ "Category", "CharacterProperty" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitRisk = { "InitRisk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, InitRisk), METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitRisk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitRisk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_SelfLocation_MetaData[] = {
		{ "Category", "NPC_Interactable" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_SelfLocation = { "SelfLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, SelfLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_SelfLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_SelfLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "NPC_Interactable" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, Distance), METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor_MetaData[] = {
		{ "Category", "CharacterProperty" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	void Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor_SetBit(void* Obj)
	{
		((ANPC_Interactable*)Obj)->IsIndoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor = { "IsIndoor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANPC_Interactable), &Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask_MetaData[] = {
		{ "Category", "CharacterProperty" },
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	void Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask_SetBit(void* Obj)
	{
		((ANPC_Interactable*)Obj)->HaveMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask = { "HaveMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANPC_Interactable), &Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_MainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_MainCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "NPC_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_Interactable, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Interactable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Loneliness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitLoneliness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Risk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_InitRisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_SelfLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_IsIndoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_HaveMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_MainCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Interactable_Statics::NewProp_TimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Interactable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_Interactable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Interactable_Statics::ClassParams = {
		&ANPC_Interactable::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_Interactable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Interactable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Interactable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_Interactable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_Interactable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_Interactable, 1254340686);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<ANPC_Interactable>()
	{
		return ANPC_Interactable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_Interactable(Z_Construct_UClass_ANPC_Interactable, &ANPC_Interactable::StaticClass, TEXT("/Script/Social_Distance"), TEXT("ANPC_Interactable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_Interactable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
