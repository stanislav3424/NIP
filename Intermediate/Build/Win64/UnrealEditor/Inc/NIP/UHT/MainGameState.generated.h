// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UItem;
struct FDataTableRowHandle;
#ifdef NIP_MainGameState_generated_h
#error "MainGameState.generated.h already included, missing '#pragma once' in MainGameState.h"
#endif
#define NIP_MainGameState_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTest); \
	DECLARE_FUNCTION(execSpawnRepresented); \
	DECLARE_FUNCTION(execCreateItem);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameState(); \
	friend struct Z_Construct_UClass_AMainGameState_Statics; \
public: \
	DECLARE_CLASS(AMainGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(AMainGameState)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainGameState(AMainGameState&&); \
	AMainGameState(const AMainGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameState) \
	NO_API virtual ~AMainGameState();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_18_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class AMainGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MainGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
