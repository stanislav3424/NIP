// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_ActorItem_generated_h
#error "ActorItem.generated.h already included, missing '#pragma once' in ActorItem.h"
#endif
#define NIP_ActorItem_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorItem(); \
	friend struct Z_Construct_UClass_AActorItem_Statics; \
public: \
	DECLARE_CLASS(AActorItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(AActorItem) \
	virtual UObject* _getUObject() const override { return const_cast<AActorItem*>(this); }


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActorItem(AActorItem&&); \
	AActorItem(const AActorItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorItem) \
	NO_API virtual ~AActorItem();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_12_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class AActorItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ActorItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
