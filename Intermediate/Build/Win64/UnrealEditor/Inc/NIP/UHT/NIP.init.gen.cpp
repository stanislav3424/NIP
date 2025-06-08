// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNIP_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NIP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NIP()
	{
		if (!Z_Registration_Info_UPackage__Script_NIP.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NIP",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x50CD4DE7,
				0xBCE67AA9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NIP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NIP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NIP(Z_Construct_UPackage__Script_NIP, TEXT("/Script/NIP"), Z_Registration_Info_UPackage__Script_NIP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x50CD4DE7, 0xBCE67AA9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
