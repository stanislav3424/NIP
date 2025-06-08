// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterUnit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_CharacterUnit_generated_h
#error "CharacterUnit.generated.h already included, missing '#pragma once' in CharacterUnit.h"
#endif
#define NIP_CharacterUnit_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterUnit(); \
	friend struct Z_Construct_UClass_ACharacterUnit_Statics; \
public: \
	DECLARE_CLASS(ACharacterUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(ACharacterUnit) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterUnit*>(this); }


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacterUnit(ACharacterUnit&&); \
	ACharacterUnit(const ACharacterUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterUnit) \
	NO_API virtual ~ACharacterUnit();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class ACharacterUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_CharacterUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
