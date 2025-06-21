// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NIP/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}

// Begin Cross Module References
NIP_API UClass* Z_Construct_UClass_UItem();
NIP_API UClass* Z_Construct_UClass_UItem_NoRegister();
NIP_API UClass* Z_Construct_UClass_UUnit();
NIP_API UClass* Z_Construct_UClass_UUnit_NoRegister();
NIP_API UEnum* Z_Construct_UEnum_NIP_EEquipmentSlots();
NIP_API UFunction* Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NIP();
// End Cross Module References

// Begin Delegate FOnChangesEquipment
struct Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NIP, nullptr, "OnChangesEquipment__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangesEquipment_DelegateWrapper(const FMulticastScriptDelegate& OnChangesEquipment)
{
	OnChangesEquipment.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnChangesEquipment

// Begin Class UUnit
void UUnit::StaticRegisterNativesUUnit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnit);
UClass* Z_Construct_UClass_UUnit_NoRegister()
{
	return UUnit::StaticClass();
}
struct Z_Construct_UClass_UUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Unit.h" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Unit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EquipmentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_ValueProp = { "EquipmentMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_Key_KeyProp = { "EquipmentMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NIP_EEquipmentSlots, METADATA_PARAMS(0, nullptr) }; // 2378091645
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap = { "EquipmentMap", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnit, EquipmentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentMap_MetaData), NewProp_EquipmentMap_MetaData) }; // 2378091645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnit_Statics::NewProp_EquipmentMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnit_Statics::ClassParams = {
	&UUnit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnit()
{
	if (!Z_Registration_Info_UClass_UUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnit.OuterSingleton, Z_Construct_UClass_UUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnit.OuterSingleton;
}
template<> NIP_API UClass* StaticClass<UUnit>()
{
	return UUnit::StaticClass();
}
UUnit::UUnit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnit);
UUnit::~UUnit() {}
// End Class UUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnit, UUnit::StaticClass, TEXT("UUnit"), &Z_Registration_Info_UClass_UUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnit), 4064563176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_381076599(TEXT("/Script/NIP"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_Unit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
