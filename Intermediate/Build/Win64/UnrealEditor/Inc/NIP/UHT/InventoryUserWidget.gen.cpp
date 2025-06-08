// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/InventoryUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryUserWidget() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UBaseUserWidget();
NIP_API UClass* Z_Construct_UClass_UInventory_NoRegister();
NIP_API UClass* Z_Construct_UClass_UInventoryUserWidget();
NIP_API UClass* Z_Construct_UClass_UInventoryUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UInventoryUserWidget Function InitializeUnit
struct Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics
{
	struct InventoryUserWidget_eventInitializeUnit_Parms
	{
		UInventory* NewInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::NewProp_NewInventory = { "NewInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryUserWidget_eventInitializeUnit_Parms, NewInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::NewProp_NewInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryUserWidget, nullptr, "InitializeUnit", nullptr, nullptr, Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::InventoryUserWidget_eventInitializeUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::InventoryUserWidget_eventInitializeUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryUserWidget::execInitializeUnit)
{
	P_GET_OBJECT(UInventory,Z_Param_NewInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeUnit(Z_Param_NewInventory);
	P_NATIVE_END;
}
// End Class UInventoryUserWidget Function InitializeUnit

// Begin Class UInventoryUserWidget
void UInventoryUserWidget::StaticRegisterNativesUInventoryUserWidget()
{
	UClass* Class = UInventoryUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeUnit", &UInventoryUserWidget::execInitializeUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryUserWidget);
UClass* Z_Construct_UClass_UInventoryUserWidget_NoRegister()
{
	return UInventoryUserWidget::StaticClass();
}
struct Z_Construct_UClass_UInventoryUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryUserWidget.h" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Background;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryUserWidget_InitializeUnit, "InitializeUnit" }, // 3256821986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryUserWidget, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryUserWidget, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryUserWidget, Background), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryUserWidget, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_SizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryUserWidget_Statics::NewProp_CanvasPanel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryUserWidget_Statics::ClassParams = {
	&UInventoryUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryUserWidget()
{
	if (!Z_Registration_Info_UClass_UInventoryUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryUserWidget.OuterSingleton, Z_Construct_UClass_UInventoryUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryUserWidget.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UInventoryUserWidget>()
{
	return UInventoryUserWidget::StaticClass();
}
UInventoryUserWidget::UInventoryUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryUserWidget);
UInventoryUserWidget::~UInventoryUserWidget() {}
// End Class UInventoryUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryUserWidget, UInventoryUserWidget::StaticClass, TEXT("UInventoryUserWidget"), &Z_Registration_Info_UClass_UInventoryUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryUserWidget), 2239251827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_2101594490(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_InventoryUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
