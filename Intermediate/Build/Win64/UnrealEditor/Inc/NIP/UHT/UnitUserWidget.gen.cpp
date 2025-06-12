// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/UnitUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UInventoryUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItemUserWidget_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget();
NIP_API UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UUnitUserWidget Function InitializeUnit
struct Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics
{
	struct UnitUserWidget_eventInitializeUnit_Parms
	{
		UUnit* NewUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::NewProp_NewUnit = { "NewUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitUserWidget_eventInitializeUnit_Parms, NewUnit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::NewProp_NewUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitUserWidget, nullptr, "InitializeUnit", nullptr, nullptr, Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::UnitUserWidget_eventInitializeUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::UnitUserWidget_eventInitializeUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnitUserWidget_InitializeUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnitUserWidget_InitializeUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnitUserWidget::execInitializeUnit)
{
	P_GET_OBJECT(UUnit,Z_Param_NewUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeUnit(Z_Param_NewUnit);
	P_NATIVE_END;
}
// End Class UUnitUserWidget Function InitializeUnit

// Begin Class UUnitUserWidget
void UUnitUserWidget::StaticRegisterNativesUUnitUserWidget()
{
	UClass* Class = UUnitUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeUnit", &UUnitUserWidget::execInitializeUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitUserWidget);
UClass* Z_Construct_UClass_UUnitUserWidget_NoRegister()
{
	return UUnitUserWidget::StaticClass();
}
struct Z_Construct_UClass_UUnitUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitUserWidget.h" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryUserWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentBackpackUserWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentWeaponUserWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentBackpackUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentWeaponUserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnitUserWidget_InitializeUnit, "InitializeUnit" }, // 1196335450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, Unit), Z_Construct_UClass_UUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_TextBlock_Name = { "TextBlock_Name", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, TextBlock_Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Name_MetaData), NewProp_TextBlock_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_InventoryUserWidget = { "InventoryUserWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, InventoryUserWidget), Z_Construct_UClass_UInventoryUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryUserWidget_MetaData), NewProp_InventoryUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_EquipmentBackpackUserWidget = { "EquipmentBackpackUserWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, EquipmentBackpackUserWidget), Z_Construct_UClass_UItemUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentBackpackUserWidget_MetaData), NewProp_EquipmentBackpackUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_EquipmentWeaponUserWidget = { "EquipmentWeaponUserWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitUserWidget, EquipmentWeaponUserWidget), Z_Construct_UClass_UItemUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentWeaponUserWidget_MetaData), NewProp_EquipmentWeaponUserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_TextBlock_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_InventoryUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_EquipmentBackpackUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitUserWidget_Statics::NewProp_EquipmentWeaponUserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnitUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitUserWidget_Statics::ClassParams = {
	&UUnitUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUnitUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnitUserWidget()
{
	if (!Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton, Z_Construct_UClass_UUnitUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnitUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UUnitUserWidget>()
{
	return UUnitUserWidget::StaticClass();
}
UUnitUserWidget::UUnitUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitUserWidget);
UUnitUserWidget::~UUnitUserWidget() {}
// End Class UUnitUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
<<<<<<< HEAD
		{ Z_Construct_UClass_UUnitUserWidget, UUnitUserWidget::StaticClass, TEXT("UUnitUserWidget"), &Z_Registration_Info_UClass_UUnitUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitUserWidget), 610330469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_3498493316(TEXT("/Script/NIP"),
=======
		{ Z_Construct_UClass_UUnitUserWidget, UUnitUserWidget::StaticClass, TEXT("UUnitUserWidget"), &Z_Registration_Info_UClass_UUnitUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitUserWidget), 2441553204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_2583373545(TEXT("/Script/NIP"),
>>>>>>> 8109ca2ede52324330ba30f33c79a0a8097732e3
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_UnitUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
