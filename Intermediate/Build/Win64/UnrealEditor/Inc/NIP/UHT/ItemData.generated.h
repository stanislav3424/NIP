// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIP_ItemData_generated_h
#error "ItemData.generated.h already included, missing '#pragma once' in ItemData.h"
#endif
#define NIP_ItemData_generated_h

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	NIP_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> NIP_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryData_Statics; \
	NIP_API static class UScriptStruct* StaticStruct(); \
	typedef FItemData Super;


template<> NIP_API UScriptStruct* StaticStruct<struct FInventoryData>();

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	NIP_API static class UScriptStruct* StaticStruct(); \
	typedef FItemData Super;


template<> NIP_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnitData_Statics; \
	NIP_API static class UScriptStruct* StaticStruct(); \
	typedef FItemData Super;


template<> NIP_API UScriptStruct* StaticStruct<struct FUnitData>();

#define FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemPositionData_Statics; \
	NIP_API static class UScriptStruct* StaticStruct();


template<> NIP_API UScriptStruct* StaticStruct<struct FItemPositionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Stas_Documents_Unreal_Projects_NIP_Source_NIP_ItemData_h


#define FOREACH_ENUM_EEQUIPMENTSLOTS(op) \
	op(EEquipmentSlots::Backpack) \
	op(EEquipmentSlots::Weapon) 

enum class EEquipmentSlots : uint8;
template<> struct TIsUEnumClass<EEquipmentSlots> { enum { Value = true }; };
template<> NIP_API UEnum* StaticEnum<EEquipmentSlots>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
