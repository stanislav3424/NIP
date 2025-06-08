// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_Camera_generated_h
#error "Camera.generated.h already included, missing '#pragma once' in Camera.h"
#endif
#define NIP_Camera_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACamera(ACamera&&); \
	ACamera(const ACamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera) \
	NO_API virtual ~ACamera();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_14_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class ACamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
