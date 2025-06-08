// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnit;
#ifdef NIP_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define NIP_MainPlayerController_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTargetISelectUnit); \
	DECLARE_FUNCTION(execSetTargetSelectUnit);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayerController(AMainPlayerController&&); \
	AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerController) \
	NO_API virtual ~AMainPlayerController();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_17_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
