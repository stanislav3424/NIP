// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/ItemUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItemUserWidget();
NIP_API UClass* Z_Construct_UClass_UItemUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UItemUserWidget
void UItemUserWidget::StaticRegisterNativesUItemUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemUserWidget);
UClass* Z_Construct_UClass_UItemUserWidget_NoRegister()
{
	return UItemUserWidget::StaticClass();
}
struct Z_Construct_UClass_UItemUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemUserWidget.h" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMouseEnterColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMouseEnterColor;
	static void NewProp_bCustomSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_ModifierMouseEnterColor = { "ModifierMouseEnterColor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, ModifierMouseEnterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMouseEnterColor_MetaData), NewProp_ModifierMouseEnterColor_MetaData) };
void Z_Construct_UClass_UItemUserWidget_Statics::NewProp_bCustomSize_SetBit(void* Obj)
{
	((UItemUserWidget*)Obj)->bCustomSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_bCustomSize = { "bCustomSize", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemUserWidget), &Z_Construct_UClass_UItemUserWidget_Statics::NewProp_bCustomSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomSize_MetaData), NewProp_bCustomSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemUserWidget_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemUserWidget, ItemImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemImage_MetaData), NewProp_ItemImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_ModifierMouseEnterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_bCustomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemUserWidget_Statics::NewProp_ItemImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemUserWidget_Statics::ClassParams = {
	&UItemUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemUserWidget()
{
	if (!Z_Registration_Info_UClass_UItemUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemUserWidget.OuterSingleton, Z_Construct_UClass_UItemUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UItemUserWidget>()
{
	return UItemUserWidget::StaticClass();
}
UItemUserWidget::UItemUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemUserWidget);
UItemUserWidget::~UItemUserWidget() {}
// End Class UItemUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
<<<<<<< HEAD
		{ Z_Construct_UClass_UItemUserWidget, UItemUserWidget::StaticClass, TEXT("UItemUserWidget"), &Z_Registration_Info_UClass_UItemUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemUserWidget), 2420778560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemUserWidget_h_1922738551(TEXT("/Script/NIP"),
=======
		{ Z_Construct_UClass_UItemUserWidget, UItemUserWidget::StaticClass, TEXT("UItemUserWidget"), &Z_Registration_Info_UClass_UItemUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemUserWidget), 1460257588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemUserWidget_h_2036842258(TEXT("/Script/NIP"),
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
