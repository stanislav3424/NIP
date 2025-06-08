// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RepresentableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_RepresentableInterface_generated_h
#error "RepresentableInterface.generated.h already included, missing '#pragma once' in RepresentableInterface.h"
#endif
#define NIP_RepresentableInterface_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIP_API URepresentableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URepresentableInterface(URepresentableInterface&&); \
	URepresentableInterface(const URepresentableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIP_API, URepresentableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URepresentableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URepresentableInterface) \
	NIP_API virtual ~URepresentableInterface();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURepresentableInterface(); \
	friend struct Z_Construct_UClass_URepresentableInterface_Statics; \
public: \
	DECLARE_CLASS(URepresentableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NIP"), NIP_API) \
	DECLARE_SERIALIZER(URepresentableInterface)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRepresentableInterface() {} \
public: \
	typedef URepresentableInterface UClassType; \
	typedef IRepresentableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_10_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class URepresentableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RepresentableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
