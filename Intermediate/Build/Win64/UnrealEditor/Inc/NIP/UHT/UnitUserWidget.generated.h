// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnit;
#ifdef NIP_UnitUserWidget_generated_h
#error "UnitUserWidget.generated.h already included, missing '#pragma once' in UnitUserWidget.h"
#endif
#define NIP_UnitUserWidget_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeUnit);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnitUserWidget(); \
	friend struct Z_Construct_UClass_UUnitUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUnitUserWidget, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UUnitUserWidget)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnitUserWidget(UUnitUserWidget&&); \
	UUnitUserWidget(const UUnitUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitUserWidget) \
	NO_API virtual ~UUnitUserWidget();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_16_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UUnitUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
