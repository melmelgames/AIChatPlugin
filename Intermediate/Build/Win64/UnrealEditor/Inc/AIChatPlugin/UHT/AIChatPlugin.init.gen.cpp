// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIChatPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AIChatPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AIChatPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_AIChatPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AIChatPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCF5D825A,
				0x9F416369,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AIChatPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AIChatPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AIChatPlugin(Z_Construct_UPackage__Script_AIChatPlugin, TEXT("/Script/AIChatPlugin"), Z_Registration_Info_UPackage__Script_AIChatPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCF5D825A, 0x9F416369));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
