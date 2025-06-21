// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapGeneration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_MapGeneration_generated_h
#error "MapGeneration.generated.h already included, missing '#pragma once' in MapGeneration.h"
#endif
#define NIP_MapGeneration_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestGeneration);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGeneration(); \
	friend struct Z_Construct_UClass_AMapGeneration_Statics; \
public: \
	DECLARE_CLASS(AMapGeneration, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(AMapGeneration)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapGeneration(AMapGeneration&&); \
	AMapGeneration(const AMapGeneration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGeneration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGeneration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGeneration) \
	NO_API virtual ~AMapGeneration();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_18_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class AMapGeneration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MapGeneration_h


#define FOREACH_ENUM_PARAMETERS(op) \
	op(Parameters::NoneIndex) \
	op(Parameters::SID) \
	op(Parameters::Room) \
	op(Parameters::Parameter3) 

enum class Parameters : uint8;
template<> struct TIsUEnumClass<Parameters> { enum { Value = true }; };
template<> NIP_API UEnum* StaticEnum<Parameters>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
