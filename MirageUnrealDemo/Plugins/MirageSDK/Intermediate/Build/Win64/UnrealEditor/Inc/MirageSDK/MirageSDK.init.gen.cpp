// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageSDK_init() {}
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MirageSDK;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MirageSDK()
	{
		if (!Z_Registration_Info_UPackage__Script_MirageSDK.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MirageSDK",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x845371C4,
				0x391E4F9B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MirageSDK.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MirageSDK.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MirageSDK(Z_Construct_UPackage__Script_MirageSDK, TEXT("/Script/MirageSDK"), Z_Registration_Info_UPackage__Script_MirageSDK, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x845371C4, 0x391E4F9B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
