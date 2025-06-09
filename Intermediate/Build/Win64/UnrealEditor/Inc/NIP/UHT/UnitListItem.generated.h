// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitListItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_UnitListItem_generated_h
#error "UnitListItem.generated.h already included, missing '#pragma once' in UnitListItem.h"
#endif
#define NIP_UnitListItem_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnitListItem(); \
	friend struct Z_Construct_UClass_UUnitListItem_Statics; \
public: \
	DECLARE_CLASS(UUnitListItem, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UUnitListItem) \
	virtual UObject* _getUObject() const override { return const_cast<UUnitListItem*>(this); }


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitListItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnitListItem(UUnitListItem&&); \
	UUnitListItem(const UUnitListItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitListItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitListItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitListItem) \
	NO_API virtual ~UUnitListItem();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_15_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UUnitListItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
