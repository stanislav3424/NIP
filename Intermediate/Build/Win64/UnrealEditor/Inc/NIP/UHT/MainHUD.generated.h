// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_MainHUD_generated_h
#error "MainHUD.generated.h already included, missing '#pragma once' in MainHUD.h"
#endif
#define NIP_MainHUD_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainHUD(); \
	friend struct Z_Construct_UClass_AMainHUD_Statics; \
public: \
	DECLARE_CLASS(AMainHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(AMainHUD)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainHUD(AMainHUD&&); \
	AMainHUD(const AMainHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainHUD) \
	NO_API virtual ~AMainHUD();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_10_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class AMainHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
