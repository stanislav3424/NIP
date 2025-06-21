// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/EquipmentUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UEquipmentUserWidget();
NIP_API UClass* Z_Construct_UClass_UEquipmentUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UEnum* Z_Construct_UEnum_NIP_EEquipmentSlots();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UEquipmentUserWidget
void UEquipmentUserWidget::StaticRegisterNativesUEquipmentUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentUserWidget);
UClass* Z_Construct_UClass_UEquipmentUserWidget_NoRegister()
{
	return UEquipmentUserWidget::StaticClass();
}
struct Z_Construct_UClass_UEquipmentUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentUserWidget.h" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlots_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMouseEnterColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EquipmentUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlots_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMouseEnterColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_EquipmentSlots_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_EquipmentSlots = { "EquipmentSlots", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, EquipmentSlots), Z_Construct_UEnum_NIP_EEquipmentSlots, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlots_MetaData), NewProp_EquipmentSlots_MetaData) }; // 2378091645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_ModifierMouseEnterColor = { "ModifierMouseEnterColor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, ModifierMouseEnterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMouseEnterColor_MetaData), NewProp_ModifierMouseEnterColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, ItemImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemImage_MetaData), NewProp_ItemImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_TextBlock_Name = { "TextBlock_Name", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentUserWidget, TextBlock_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Name_MetaData), NewProp_TextBlock_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_EquipmentSlots_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_EquipmentSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_ModifierMouseEnterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_ItemImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentUserWidget_Statics::NewProp_TextBlock_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentUserWidget_Statics::ClassParams = {
	&UEquipmentUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEquipmentUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentUserWidget()
{
	if (!Z_Registration_Info_UClass_UEquipmentUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentUserWidget.OuterSingleton, Z_Construct_UClass_UEquipmentUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UEquipmentUserWidget>()
{
	return UEquipmentUserWidget::StaticClass();
}
UEquipmentUserWidget::UEquipmentUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentUserWidget);
UEquipmentUserWidget::~UEquipmentUserWidget() {}
// End Class UEquipmentUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_EquipmentUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentUserWidget, UEquipmentUserWidget::StaticClass, TEXT("UEquipmentUserWidget"), &Z_Registration_Info_UClass_UEquipmentUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentUserWidget), 593381088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_EquipmentUserWidget_h_474325277(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_EquipmentUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_EquipmentUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
