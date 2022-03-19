// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/Tests/HoudiniEditorTestUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEditorTestUtils() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorTestObject_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniEditorTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniEditorTestObject::execPostProcessingCallback)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostProcessingCallback(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorTestObject::execPostCookCallback)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_AssetWrapper);
		P_GET_UBOOL(Z_Param_bInCookSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostCookCallback(Z_Param_AssetWrapper,Z_Param_bInCookSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorTestObject::execPostInstantiationCallback)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_AssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostInstantiationCallback(Z_Param_AssetWrapper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniEditorTestObject::execPreInstantiationCallback)
	{
		P_GET_OBJECT(UHoudiniPublicAPIAssetWrapper,Z_Param_InAssetWrapper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreInstantiationCallback(Z_Param_InAssetWrapper);
		P_NATIVE_END;
	}
	void UHoudiniEditorTestObject::StaticRegisterNativesUHoudiniEditorTestObject()
	{
		UClass* Class = UHoudiniEditorTestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostCookCallback", &UHoudiniEditorTestObject::execPostCookCallback },
			{ "PostInstantiationCallback", &UHoudiniEditorTestObject::execPostInstantiationCallback },
			{ "PostProcessingCallback", &UHoudiniEditorTestObject::execPostProcessingCallback },
			{ "PreInstantiationCallback", &UHoudiniEditorTestObject::execPreInstantiationCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics
	{
		struct HoudiniEditorTestObject_eventPostCookCallback_Parms
		{
			UHoudiniPublicAPIAssetWrapper* AssetWrapper;
			bool bInCookSuccess;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCookSuccess_MetaData[];
#endif
		static void NewProp_bInCookSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCookSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_AssetWrapper = { "AssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniEditorTestObject_eventPostCookCallback_Parms, AssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess_SetBit(void* Obj)
	{
		((HoudiniEditorTestObject_eventPostCookCallback_Parms*)Obj)->bInCookSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess = { "bInCookSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniEditorTestObject_eventPostCookCallback_Parms), &Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_AssetWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::NewProp_bInCookSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorTestObject, nullptr, "PostCookCallback", nullptr, nullptr, sizeof(HoudiniEditorTestObject_eventPostCookCallback_Parms), Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics
	{
		struct HoudiniEditorTestObject_eventPostInstantiationCallback_Parms
		{
			UHoudiniPublicAPIAssetWrapper* AssetWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::NewProp_AssetWrapper = { "AssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniEditorTestObject_eventPostInstantiationCallback_Parms, AssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::NewProp_AssetWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorTestObject, nullptr, "PostInstantiationCallback", nullptr, nullptr, sizeof(HoudiniEditorTestObject_eventPostInstantiationCallback_Parms), Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics
	{
		struct HoudiniEditorTestObject_eventPostProcessingCallback_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniEditorTestObject_eventPostProcessingCallback_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Bound to UHoudiniPublicAPIAssetWrapper::OnPostProcessingDelegate of an asset wrapper. Broadcasts\n\x09 * ThisClass::OnPostProcessingDelegate (if bound) when called, and unbinds from InAssetWrapper->OnPostProcessingDelegate.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
		{ "ToolTip", "Bound to UHoudiniPublicAPIAssetWrapper::OnPostProcessingDelegate of an asset wrapper. Broadcasts\nThisClass::OnPostProcessingDelegate (if bound) when called, and unbinds from InAssetWrapper->OnPostProcessingDelegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorTestObject, nullptr, "PostProcessingCallback", nullptr, nullptr, sizeof(HoudiniEditorTestObject_eventPostProcessingCallback_Parms), Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics
	{
		struct HoudiniEditorTestObject_eventPreInstantiationCallback_Parms
		{
			UHoudiniPublicAPIAssetWrapper* InAssetWrapper;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAssetWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::NewProp_InAssetWrapper = { "InAssetWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniEditorTestObject_eventPreInstantiationCallback_Parms, InAssetWrapper), Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::NewProp_InAssetWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Bound to UHoudiniPublicAPIAssetWrapper::OnPreInstantiationDelegate of an asset wrapper. Broadcasts\n\x09 * ThisClass::OnPreInstantiationDelegate (if bound) when called, and unbinds from InAssetWrapper->OnPreInstantiationDelegate.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
		{ "ToolTip", "Bound to UHoudiniPublicAPIAssetWrapper::OnPreInstantiationDelegate of an asset wrapper. Broadcasts\nThisClass::OnPreInstantiationDelegate (if bound) when called, and unbinds from InAssetWrapper->OnPreInstantiationDelegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniEditorTestObject, nullptr, "PreInstantiationCallback", nullptr, nullptr, sizeof(HoudiniEditorTestObject_eventPreInstantiationCallback_Parms), Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniEditorTestObject_NoRegister()
	{
		return UHoudiniEditorTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniEditorTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAssetWrappers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetWrappers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetWrappers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniEditorTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniEditorTestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniEditorTestObject_PostCookCallback, "PostCookCallback" }, // 3224550664
		{ &Z_Construct_UFunction_UHoudiniEditorTestObject_PostInstantiationCallback, "PostInstantiationCallback" }, // 4024792949
		{ &Z_Construct_UFunction_UHoudiniEditorTestObject_PostProcessingCallback, "PostProcessingCallback" }, // 297451592
		{ &Z_Construct_UFunction_UHoudiniEditorTestObject_PreInstantiationCallback, "PreInstantiationCallback" }, // 1755712291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorTestObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// UObject is needed to add a dynamic delegate to the object. \n// Note: Would it be beneficial to move everything to here?\n" },
		{ "IncludePath", "Tests/HoudiniEditorTestUtils.h" },
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
		{ "ToolTip", "UObject is needed to add a dynamic delegate to the object.\nNote: Would it be beneficial to move everything to here?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers_Inner = { "InAssetWrappers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/HoudiniEditorTestUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers = { "InAssetWrappers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniEditorTestObject, InAssetWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniEditorTestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniEditorTestObject_Statics::NewProp_InAssetWrappers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniEditorTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniEditorTestObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniEditorTestObject_Statics::ClassParams = {
		&UHoudiniEditorTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniEditorTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniEditorTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniEditorTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniEditorTestObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniEditorTestObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniEditorTestObject, 3733005068);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniEditorTestObject>()
	{
		return UHoudiniEditorTestObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniEditorTestObject(Z_Construct_UClass_UHoudiniEditorTestObject, &UHoudiniEditorTestObject::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniEditorTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniEditorTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
