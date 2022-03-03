// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/C_InteractableNPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_InteractableNPC() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AC_InteractableNPC_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AC_InteractableNPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(AC_InteractableNPC::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_InteractableNPC::execClickEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClickEvent(Z_Param_Target,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	void AC_InteractableNPC::StaticRegisterNativesAC_InteractableNPC()
	{
		UClass* Class = AC_InteractableNPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClickEvent", &AC_InteractableNPC::execClickEvent },
			{ "PrintLog", &AC_InteractableNPC::execPrintLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics
	{
		struct C_InteractableNPC_eventClickEvent_Parms
		{
			AActor* Target;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_InteractableNPC_eventClickEvent_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_InteractableNPC_eventClickEvent_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_InteractableNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_InteractableNPC, nullptr, "ClickEvent", nullptr, nullptr, sizeof(C_InteractableNPC_eventClickEvent_Parms), Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_InteractableNPC_ClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_InteractableNPC_ClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics
	{
		struct C_InteractableNPC_eventPrintLog_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_InteractableNPC_eventPrintLog_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_InteractableNPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_InteractableNPC, nullptr, "PrintLog", nullptr, nullptr, sizeof(C_InteractableNPC_eventPrintLog_Parms), Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_InteractableNPC_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC_InteractableNPC_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC_InteractableNPC_NoRegister()
	{
		return AC_InteractableNPC::StaticClass();
	}
	struct Z_Construct_UClass_AC_InteractableNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_InteractableNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_InteractableNPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_InteractableNPC_ClickEvent, "ClickEvent" }, // 2632545796
		{ &Z_Construct_UFunction_AC_InteractableNPC_PrintLog, "PrintLog" }, // 3069870925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_InteractableNPC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "C_InteractableNPC.h" },
		{ "ModuleRelativePath", "C_InteractableNPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_InteractableNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_InteractableNPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_InteractableNPC_Statics::ClassParams = {
		&AC_InteractableNPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_InteractableNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_InteractableNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_InteractableNPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_InteractableNPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_InteractableNPC, 619463114);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<AC_InteractableNPC>()
	{
		return AC_InteractableNPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_InteractableNPC(Z_Construct_UClass_AC_InteractableNPC, &AC_InteractableNPC::StaticClass, TEXT("/Script/Social_Distance"), TEXT("AC_InteractableNPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_InteractableNPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
