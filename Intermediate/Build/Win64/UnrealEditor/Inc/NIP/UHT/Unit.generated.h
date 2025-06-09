// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Unit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define NIP_Unit_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnit(); \
	friend struct Z_Construct_UClass_UUnit_Statics; \
public: \
	DECLARE_CLASS(UUnit, UItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UUnit)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnit(UUnit&&); \
	UUnit(const UUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnit) \
	NO_API virtual ~UUnit();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
