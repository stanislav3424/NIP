// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/UnitListItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitListItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnitListItem();
NIP_API UClass* Z_Construct_UClass_UUnitListItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UUnitListItem
void UUnitListItem::StaticRegisterNativesUUnitListItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitListItem);
UClass* Z_Construct_UClass_UUnitListItem_NoRegister()
{
	return UUnitListItem::StaticClass();
}
struct Z_Construct_UClass_UUnitListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitListItem.h" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMouseEnterColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierSelectedUnitColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectedUnit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitListItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMouseEnterColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierSelectedUnitColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Name;
	static void NewProp_bSelectedUnit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectedUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitListItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, Unit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_ModifierMouseEnterColor = { "ModifierMouseEnterColor", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, ModifierMouseEnterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMouseEnterColor_MetaData), NewProp_ModifierMouseEnterColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_ModifierSelectedUnitColor = { "ModifierSelectedUnitColor", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, ModifierSelectedUnitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierSelectedUnitColor_MetaData), NewProp_ModifierSelectedUnitColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, ItemImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemImage_MetaData), NewProp_ItemImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_TextBlock_Name = { "TextBlock_Name", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitListItem, TextBlock_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Name_MetaData), NewProp_TextBlock_Name_MetaData) };
void Z_Construct_UClass_UUnitListItem_Statics::NewProp_bSelectedUnit_SetBit(void* Obj)
{
	((UUnitListItem*)Obj)->bSelectedUnit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitListItem_Statics::NewProp_bSelectedUnit = { "bSelectedUnit", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUnitListItem), &Z_Construct_UClass_UUnitListItem_Statics::NewProp_bSelectedUnit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectedUnit_MetaData), NewProp_bSelectedUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitListItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_ModifierMouseEnterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_ModifierSelectedUnitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_ItemImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_TextBlock_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitListItem_Statics::NewProp_bSelectedUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitListItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnitListItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitListItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUnitListItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UUnitListItem, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitListItem_Statics::ClassParams = {
	&UUnitListItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnitListItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnitListItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitListItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitListItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnitListItem()
{
	if (!Z_Registration_Info_UClass_UUnitListItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitListItem.OuterSingleton, Z_Construct_UClass_UUnitListItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnitListItem.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UUnitListItem>()
{
	return UUnitListItem::StaticClass();
}
UUnitListItem::UUnitListItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitListItem);
UUnitListItem::~UUnitListItem() {}
// End Class UUnitListItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnitListItem, UUnitListItem::StaticClass, TEXT("UUnitListItem"), &Z_Registration_Info_UClass_UUnitListItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitListItem), 2897733089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_11197843(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitListItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
