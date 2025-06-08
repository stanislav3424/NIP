// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/Item.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
NIP_API UClass* Z_Construct_UClass_AMainGameState_NoRegister();
NIP_API UClass* Z_Construct_UClass_UItem();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UClass* Z_Construct_UClass_URepresentableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Class UItem
void UItem::StaticRegisterNativesUItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
UClass* Z_Construct_UClass_UItem_NoRegister()
{
	return UItem::StaticClass();
}
struct Z_Construct_UClass_UItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGameState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassRepresentedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
		{ "MustImplement", "RepresentableInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Represented_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPut_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerOwner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSelect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGameState;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassRepresentedActor;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Represented;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSize;
	static void NewProp_bCanPut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPut;
	static void NewProp_bCanRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRotation;
	static void NewProp_bRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerOwner;
	static void NewProp_bCanSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSelect;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_MainGameState = { "MainGameState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, MainGameState), Z_Construct_UClass_AMainGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGameState_MetaData), NewProp_MainGameState_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ClassRepresentedActor = { "ClassRepresentedActor", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ClassRepresentedActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassRepresentedActor_MetaData), NewProp_ClassRepresentedActor_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Represented = { "Represented", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Represented), Z_Construct_UClass_URepresentableInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Represented_MetaData), NewProp_Represented_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemSize = { "ItemSize", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ItemSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSize_MetaData), NewProp_ItemSize_MetaData) };
void Z_Construct_UClass_UItem_Statics::NewProp_bCanPut_SetBit(void* Obj)
{
	((UItem*)Obj)->bCanPut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bCanPut = { "bCanPut", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bCanPut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPut_MetaData), NewProp_bCanPut_MetaData) };
void Z_Construct_UClass_UItem_Statics::NewProp_bCanRotation_SetBit(void* Obj)
{
	((UItem*)Obj)->bCanRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bCanRotation = { "bCanRotation", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bCanRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRotation_MetaData), NewProp_bCanRotation_MetaData) };
void Z_Construct_UClass_UItem_Statics::NewProp_bRotation_SetBit(void* Obj)
{
	((UItem*)Obj)->bRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bRotation = { "bRotation", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotation_MetaData), NewProp_bRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ContainerOwner = { "ContainerOwner", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ContainerOwner), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerOwner_MetaData), NewProp_ContainerOwner_MetaData) };
void Z_Construct_UClass_UItem_Statics::NewProp_bCanSelect_SetBit(void* Obj)
{
	((UItem*)Obj)->bCanSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bCanSelect = { "bCanSelect", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bCanSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSelect_MetaData), NewProp_bCanSelect_MetaData) };
void Z_Construct_UClass_UItem_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((UItem*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelect_MetaData), NewProp_bSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_MainGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ClassRepresentedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Represented,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bCanPut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bCanRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ContainerOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bCanSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
	&UItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItem()
{
	if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItem.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UItem>()
{
	return UItem::StaticClass();
}
UItem::UItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
UItem::~UItem() {}
// End Class UItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 1004016913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Item_h_1454874778(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
