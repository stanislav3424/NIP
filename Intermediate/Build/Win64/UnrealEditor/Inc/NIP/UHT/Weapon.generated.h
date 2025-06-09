// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define NIP_Weapon_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeapon(UWeapon&&); \
	UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeapon) \
	NO_API virtual ~UWeapon();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_8_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
