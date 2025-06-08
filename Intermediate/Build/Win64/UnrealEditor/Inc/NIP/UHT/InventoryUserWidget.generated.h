// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
#ifdef NIP_InventoryUserWidget_generated_h
#error "InventoryUserWidget.generated.h already included, missing '#pragma once' in InventoryUserWidget.h"
#endif
#define NIP_InventoryUserWidget_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeUnit);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryUserWidget(); \
	friend struct Z_Construct_UClass_UInventoryUserWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryUserWidget, UBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(UInventoryUserWidget)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryUserWidget(UInventoryUserWidget&&); \
	UInventoryUserWidget(const UInventoryUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryUserWidget) \
	NO_API virtual ~UInventoryUserWidget();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_17_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class UInventoryUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
