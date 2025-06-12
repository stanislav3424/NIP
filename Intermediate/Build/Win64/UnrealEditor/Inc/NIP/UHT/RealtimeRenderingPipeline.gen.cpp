// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/RealtimeRenderingPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtimeRenderingPipeline() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
NIP_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline();
NIP_API UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class ARealtimeRenderingPipeline
void ARealtimeRenderingPipeline::StaticRegisterNativesARealtimeRenderingPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtimeRenderingPipeline);
UClass* Z_Construct_UClass_ARealtimeRenderingPipeline_NoRegister()
{
	return ARealtimeRenderingPipeline::StaticClass();
}
struct Z_Construct_UClass_ARealtimeRenderingPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeRenderingPipeline.h" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureScaleModifier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTextures_MetaData[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderActor_MetaData[] = {
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "RealtimeRenderingPipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureScaleModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTextures_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapTextures_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeRenderingPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_CaptureScaleModifier = { "CaptureScaleModifier", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, CaptureScaleModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureScaleModifier_MetaData), NewProp_CaptureScaleModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_ValueProp = { "MapTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_Key_KeyProp = { "MapTextures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures = { "MapTextures", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, MapTextures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTextures_MetaData), NewProp_MapTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_RenderActor = { "RenderActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, RenderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderActor_MetaData), NewProp_RenderActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture_MetaData), NewProp_SceneCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MaterialBase = { "MaterialBase", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeRenderingPipeline, MaterialBase), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBase_MetaData), NewProp_MaterialBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_CaptureScaleModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MapTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_RenderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_SpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::NewProp_MaterialBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::ClassParams = {
	&ARealtimeRenderingPipeline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARealtimeRenderingPipeline()
{
	if (!Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton, Z_Construct_UClass_ARealtimeRenderingPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeRenderingPipeline.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<ARealtimeRenderingPipeline>()
{
	return ARealtimeRenderingPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtimeRenderingPipeline);
ARealtimeRenderingPipeline::~ARealtimeRenderingPipeline() {}
// End Class ARealtimeRenderingPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeRenderingPipeline, ARealtimeRenderingPipeline::StaticClass, TEXT("ARealtimeRenderingPipeline"), &Z_Registration_Info_UClass_ARealtimeRenderingPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeRenderingPipeline), 889575957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_730704679(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_RealtimeRenderingPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
