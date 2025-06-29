// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNIP_init() {}
	NIP_API UFunction* Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature();
	NIP_API UFunction* Z_Construct_UDelegateFunction_NIP_OnChangesInventory__DelegateSignature();
	NIP_API UFunction* Z_Construct_UDelegateFunction_NIP_OnChangesTeam__DelegateSignature();
	NIP_API UFunction* Z_Construct_UDelegateFunction_NIP_OnItemRotation__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NIP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NIP()
	{
		if (!Z_Registration_Info_UPackage__Script_NIP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NIP_OnChangesEquipment__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NIP_OnChangesInventory__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NIP_OnChangesTeam__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NIP_OnItemRotation__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NIP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01D7B6F1,
				0x79C4E021,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NIP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NIP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NIP(Z_Construct_UPackage__Script_NIP, TEXT("/Script/NIP"), Z_Registration_Info_UPackage__Script_NIP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01D7B6F1, 0x79C4E021));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
