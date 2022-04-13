// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/TaskCompletedFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskCompletedFrame() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UTaskCompletedFrame_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UTaskCompletedFrame();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskCompletedFrame::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskCompletedFrame::execRejectSubmitTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectSubmitTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskCompletedFrame::execAcceptSubmitTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptSubmitTask();
		P_NATIVE_END;
	}
	void UTaskCompletedFrame::StaticRegisterNativesUTaskCompletedFrame()
	{
		UClass* Class = UTaskCompletedFrame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptSubmitTask", &UTaskCompletedFrame::execAcceptSubmitTask },
			{ "PrintLog", &UTaskCompletedFrame::execPrintLog },
			{ "RejectSubmitTask", &UTaskCompletedFrame::execRejectSubmitTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskCompletedFrame, nullptr, "AcceptSubmitTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics
	{
		struct TaskCompletedFrame_eventPrintLog_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskCompletedFrame_eventPrintLog_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskCompletedFrame, nullptr, "PrintLog", nullptr, nullptr, sizeof(TaskCompletedFrame_eventPrintLog_Parms), Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskCompletedFrame_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskCompletedFrame_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskCompletedFrame, nullptr, "RejectSubmitTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskCompletedFrame_NoRegister()
	{
		return UTaskCompletedFrame::StaticClass();
	}
	struct Z_Construct_UClass_UTaskCompletedFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskCompletedContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskCompletedContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YesButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YesButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskCompletedFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskCompletedFrame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskCompletedFrame_AcceptSubmitTask, "AcceptSubmitTask" }, // 3520988697
		{ &Z_Construct_UFunction_UTaskCompletedFrame_PrintLog, "PrintLog" }, // 120814241
		{ &Z_Construct_UFunction_UTaskCompletedFrame_RejectSubmitTask, "RejectSubmitTask" }, // 3340075394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCompletedFrame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TaskCompletedFrame.h" },
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_TaskCompletedContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_TaskCompletedContent = { "TaskCompletedContent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskCompletedFrame, TaskCompletedContent), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_TaskCompletedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_TaskCompletedContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_YesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_YesButton = { "YesButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskCompletedFrame, YesButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_YesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_YesButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_NoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_NoButton = { "NoButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskCompletedFrame, NoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_NoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_NoButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_MainCharacter_MetaData[] = {
		{ "ModuleRelativePath", "TaskCompletedFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskCompletedFrame, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_MainCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_MainCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskCompletedFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_TaskCompletedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_YesButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_NoButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskCompletedFrame_Statics::NewProp_MainCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskCompletedFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskCompletedFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskCompletedFrame_Statics::ClassParams = {
		&UTaskCompletedFrame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskCompletedFrame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskCompletedFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskCompletedFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskCompletedFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskCompletedFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskCompletedFrame, 746904289);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UTaskCompletedFrame>()
	{
		return UTaskCompletedFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskCompletedFrame(Z_Construct_UClass_UTaskCompletedFrame, &UTaskCompletedFrame::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UTaskCompletedFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskCompletedFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
