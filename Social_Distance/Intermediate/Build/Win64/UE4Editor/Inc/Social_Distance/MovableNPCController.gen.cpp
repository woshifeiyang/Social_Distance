// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/MovableNPCController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovableNPCController() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMovableNPCController_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMovableNPCController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_ANPC_Movable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMovableNPCController::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovableNPCController::execWalkingInPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WalkingInPath();
		P_NATIVE_END;
	}
	void AMovableNPCController::StaticRegisterNativesAMovableNPCController()
	{
		UClass* Class = AMovableNPCController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintLog", &AMovableNPCController::execPrintLog },
			{ "WalkingInPath", &AMovableNPCController::execWalkingInPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics
	{
		struct MovableNPCController_eventPrintLog_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovableNPCController_eventPrintLog_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovableNPCController, nullptr, "PrintLog", nullptr, nullptr, sizeof(MovableNPCController_eventPrintLog_Parms), Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovableNPCController_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovableNPCController_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovableNPCController, nullptr, "WalkingInPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovableNPCController_WalkingInPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovableNPCController_WalkingInPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovableNPCController_NoRegister()
	{
		return AMovableNPCController::StaticClass();
	}
	struct Z_Construct_UClass_AMovableNPCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovableNPCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovableNPCController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovableNPCController_PrintLog, "PrintLog" }, // 511691045
		{ &Z_Construct_UFunction_AMovableNPCController_WalkingInPath, "WalkingInPath" }, // 3238201864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableNPCController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MovableNPCController.h" },
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableNPCController_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovableNPCController_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableNPCController, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_TimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableNPCController_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovableNPCController_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableNPCController, Index), METADATA_PARAMS(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableNPCController, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "MovableNPCController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableNPCController, MyCharacter), Z_Construct_UClass_ANPC_Movable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MyCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovableNPCController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableNPCController_Statics::NewProp_TimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableNPCController_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableNPCController_Statics::NewProp_MyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovableNPCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovableNPCController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovableNPCController_Statics::ClassParams = {
		&AMovableNPCController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovableNPCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovableNPCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableNPCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovableNPCController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovableNPCController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovableNPCController, 2122137352);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<AMovableNPCController>()
	{
		return AMovableNPCController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovableNPCController(Z_Construct_UClass_AMovableNPCController, &AMovableNPCController::StaticClass, TEXT("/Script/Social_Distance"), TEXT("AMovableNPCController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableNPCController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
