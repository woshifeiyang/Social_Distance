// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIAL_DISTANCE_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define SOCIAL_DISTANCE_MainCharacter_generated_h

#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_SPARSE_DATA
#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execUpdateState);


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execUpdateState);


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Social_Distance"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Social_Distance"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define Social_Distance_Source_Social_Distance_MainCharacter_h_12_PROLOG
#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_SPARSE_DATA \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_RPC_WRAPPERS \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_INCLASS \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Social_Distance_Source_Social_Distance_MainCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_SPARSE_DATA \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Social_Distance_Source_Social_Distance_MainCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCIAL_DISTANCE_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Social_Distance_Source_Social_Distance_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
