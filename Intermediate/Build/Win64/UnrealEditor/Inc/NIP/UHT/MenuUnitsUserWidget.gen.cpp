// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/MenuUnitsUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuUnitsUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UMenuUnitsUserWidget();
NIP_API UClass* Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UMenuUnitsUserWidget
void UMenuUnitsUserWidget::StaticRegisterNativesUMenuUnitsUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuUnitsUserWidget);
UClass* Z_Construct_UClass_UMenuUnitsUserWidget_NoRegister()
{
	return UMenuUnitsUserWidget::StaticClass();
}
struct Z_Construct_UClass_UMenuUnitsUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MenuUnitsUserWidget.h" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitUserWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUnitsUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuUnitsUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUnitsUserWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUnitsUserWidget, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUnitsUserWidget, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_UnitUserWidget = { "UnitUserWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUnitsUserWidget, UnitUserWidget), Z_Construct_UClass_UUnitUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitUserWidget_MetaData), NewProp_UnitUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_ListView = { "ListView", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUnitsUserWidget, ListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListView_MetaData), NewProp_ListView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuUnitsUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_UnitUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUnitsUserWidget_Statics::NewProp_ListView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuUnitsUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuUnitsUserWidget_Statics::ClassParams = {
	&UMenuUnitsUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMenuUnitsUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUnitsUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuUnitsUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuUnitsUserWidget()
{
	if (!Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton, Z_Construct_UClass_UMenuUnitsUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuUnitsUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UMenuUnitsUserWidget>()
{
	return UMenuUnitsUserWidget::StaticClass();
}
UMenuUnitsUserWidget::UMenuUnitsUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuUnitsUserWidget);
UMenuUnitsUserWidget::~UMenuUnitsUserWidget() {}
// End Class UMenuUnitsUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuUnitsUserWidget, UMenuUnitsUserWidget::StaticClass, TEXT("UMenuUnitsUserWidget"), &Z_Registration_Info_UClass_UMenuUnitsUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuUnitsUserWidget), 2514235369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_3166926510(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_MenuUnitsUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
