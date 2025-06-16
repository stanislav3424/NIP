// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PayloadItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_PayloadItem_generated_h
#error "PayloadItem.generated.h already included, missing '#pragma once' in PayloadItem.h"
#endif
#define NIP_PayloadItem_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPayloadItem(); \
	friend struct Z_Construct_UClass_UPayloadItem_Statics; \
public: \
	DECLARE_CLASS(UPayloadItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UPayloadItem)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPayloadItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPayloadItem(UPayloadItem&&); \
	UPayloadItem(const UPayloadItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPayloadItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPayloadItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPayloadItem) \
	NO_API virtual ~UPayloadItem();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_11_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UPayloadItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_PayloadItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
