// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/BaseUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
NIP_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UBaseUserWidget
void UBaseUserWidget::StaticRegisterNativesUBaseUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUserWidget);
UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister()
{
	return UBaseUserWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseUserWidget.h" },
		{ "ModuleRelativePath", "BaseUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "BaseUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "BaseUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryCellSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "BaseUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseEnter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "BaseUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPlayerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryCellSize;
	static void NewProp_bMouseEnter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseEnter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_MainPlayerController = { "MainPlayerController", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, MainPlayerController), Z_Construct_UClass_AMainPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPlayerController_MetaData), NewProp_MainPlayerController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InventoryCellSize = { "InventoryCellSize", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, InventoryCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryCellSize_MetaData), NewProp_InventoryCellSize_MetaData) };
void Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_bMouseEnter_SetBit(void* Obj)
{
	((UBaseUserWidget*)Obj)->bMouseEnter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_bMouseEnter = { "bMouseEnter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseUserWidget), &Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_bMouseEnter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseEnter_MetaData), NewProp_bMouseEnter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_MainGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_MainPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_InventoryCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_bMouseEnter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams = {
	&UBaseUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseUserWidget()
{
	if (!Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton, Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UBaseUserWidget>()
{
	return UBaseUserWidget::StaticClass();
}
UBaseUserWidget::UBaseUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidget);
UBaseUserWidget::~UBaseUserWidget() {}
// End Class UBaseUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_BaseUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUserWidget, UBaseUserWidget::StaticClass, TEXT("UBaseUserWidget"), &Z_Registration_Info_UClass_UBaseUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUserWidget), 3445983921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_BaseUserWidget_h_12344056(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_BaseUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_BaseUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
