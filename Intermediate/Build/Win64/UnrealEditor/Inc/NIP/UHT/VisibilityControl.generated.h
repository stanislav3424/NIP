// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisibilityControl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef NIP_VisibilityControl_generated_h
#error "VisibilityControl.generated.h already included, missing '#pragma once' in VisibilityControl.h"
#endif
#define NIP_VisibilityControl_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangesTeam); \
	DECLARE_FUNCTION(execOnTargetUpdated);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisibilityControl(); \
	friend struct Z_Construct_UClass_UVisibilityControl_Statics; \
public: \
	DECLARE_CLASS(UVisibilityControl, UAIPerceptionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UVisibilityControl)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisibilityControl(UVisibilityControl&&); \
	UVisibilityControl(const UVisibilityControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisibilityControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisibilityControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVisibilityControl) \
	NO_API virtual ~UVisibilityControl();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_11_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UVisibilityControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_VisibilityControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
