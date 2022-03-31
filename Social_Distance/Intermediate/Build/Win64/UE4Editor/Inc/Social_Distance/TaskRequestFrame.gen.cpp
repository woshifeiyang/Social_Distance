// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Social_Distance/TaskRequestFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskRequestFrame() {}
// Cross Module References
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UTaskRequestFrame_NoRegister();
	SOCIAL_DISTANCE_API UClass* Z_Construct_UClass_UTaskRequestFrame();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Social_Distance();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTaskRequestFrame::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTaskRequestFrame::execAcceptTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptTask();
		P_NATIVE_END;
	}
	void UTaskRequestFrame::StaticRegisterNativesUTaskRequestFrame()
	{
		UClass* Class = UTaskRequestFrame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptTask", &UTaskRequestFrame::execAcceptTask },
			{ "PrintLog", &UTaskRequestFrame::execPrintLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskRequestFrame, nullptr, "AcceptTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskRequestFrame_AcceptTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskRequestFrame_AcceptTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics
	{
		struct TaskRequestFrame_eventPrintLog_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TaskRequestFrame_eventPrintLog_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskRequestFrame, nullptr, "PrintLog", nullptr, nullptr, sizeof(TaskRequestFrame_eventPrintLog_Parms), Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskRequestFrame_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskRequestFrame_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskRequestFrame_NoRegister()
	{
		return UTaskRequestFrame::StaticClass();
	}
	struct Z_Construct_UClass_UTaskRequestFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YesButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YesButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskRequestFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Social_Distance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskRequestFrame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskRequestFrame_AcceptTask, "AcceptTask" }, // 4097747204
		{ &Z_Construct_UFunction_UTaskRequestFrame_PrintLog, "PrintLog" }, // 2269650636
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskRequestFrame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TaskRequestFrame.h" },
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskRequest_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskRequest = { "TaskRequest", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskRequestFrame, TaskRequest), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskContent = { "TaskContent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskRequestFrame, TaskContent), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_YesButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_YesButton = { "YesButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskRequestFrame, YesButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_YesButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_YesButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_NoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaskRequestFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_NoButton = { "NoButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskRequestFrame, NoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_NoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_NoButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskRequestFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_TaskContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_YesButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskRequestFrame_Statics::NewProp_NoButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskRequestFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskRequestFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskRequestFrame_Statics::ClassParams = {
		&UTaskRequestFrame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTaskRequestFrame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskRequestFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskRequestFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskRequestFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskRequestFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskRequestFrame, 2591147938);
	template<> SOCIAL_DISTANCE_API UClass* StaticClass<UTaskRequestFrame>()
	{
		return UTaskRequestFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskRequestFrame(Z_Construct_UClass_UTaskRequestFrame, &UTaskRequestFrame::StaticClass, TEXT("/Script/Social_Distance"), TEXT("UTaskRequestFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskRequestFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
