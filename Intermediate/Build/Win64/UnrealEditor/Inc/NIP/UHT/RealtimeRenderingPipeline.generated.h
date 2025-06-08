// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeRenderingPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
class UMaterialInstanceDynamic;
#ifdef NIP_RealtimeRenderingPipeline_generated_h
#error "RealtimeRenderingPipeline.generated.h already included, missing '#pragma once' in RealtimeRenderingPipeline.h"
#endif
#define NIP_RealtimeRenderingPipeline_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic);


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARealtimeRenderingPipeline(); \
	friend struct Z_Construct_UClass_ARealtimeRenderingPipeline_Statics; \
public: \
	DECLARE_CLASS(ARealtimeRenderingPipeline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NIP"), NO_API) \
	DECLARE_SERIALIZER(ARealtimeRenderingPipeline)


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARealtimeRenderingPipeline(ARealtimeRenderingPipeline&&); \
	ARealtimeRenderingPipeline(const ARealtimeRenderingPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtimeRenderingPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtimeRenderingPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARealtimeRenderingPipeline) \
	NO_API virtual ~ARealtimeRenderingPipeline();


#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_16_PROLOG
#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIP_API UClass* StaticClass<class ARealtimeRenderingPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
