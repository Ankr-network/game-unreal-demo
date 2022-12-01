// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/MirageDelegates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageDelegates() {}
// Cross Module References
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementDataStructure();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageDelegates_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageDelegates();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms
		{
			FString response;
			FString data;
			FString optionalData;
			int32 optionalCode;
			bool optionalBool;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_response;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_optionalData;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_optionalCode;
		static void NewProp_optionalBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_optionalBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms, response), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalData = { "optionalData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms, optionalData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalCode = { "optionalCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms, optionalCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalBool_SetBit(void* Obj)
	{
		((_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms*)Obj)->optionalBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalBool = { "optionalBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::NewProp_optionalBool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MirageDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MirageSDK, nullptr, "MirageCallCompleteDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MirageDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MirageSDK, nullptr, "ApplicationResume__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MirageSDK_ApplicationResume__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_MirageSDK_eventAdvertisementReceivedDelegate_Parms
		{
			FAdvertisementDataStructure advertisementData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_advertisementData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_advertisementData = { "advertisementData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventAdvertisementReceivedDelegate_Parms, advertisementData), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::NewProp_advertisementData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MirageDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MirageSDK, nullptr, "AdvertisementReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::_Script_MirageSDK_eventAdvertisementReceivedDelegate_Parms), Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics
	{
		struct _Script_MirageSDK_eventAdvertisementVideoAdDownloadDelegate_Parms
		{
			FString path;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MirageSDK_eventAdvertisementVideoAdDownloadDelegate_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MirageDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MirageSDK, nullptr, "AdvertisementVideoAdDownloadDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::_Script_MirageSDK_eventAdvertisementVideoAdDownloadDelegate_Parms), Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMirageDelegates::StaticRegisterNativesUMirageDelegates()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirageDelegates);
	UClass* Z_Construct_UClass_UMirageDelegates_NoRegister()
	{
		return UMirageDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UMirageDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirageDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageDelegates_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirageDelegates.h" },
		{ "ModuleRelativePath", "Public/MirageDelegates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirageDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirageDelegates>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirageDelegates_Statics::ClassParams = {
		&UMirageDelegates::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirageDelegates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageDelegates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirageDelegates()
	{
		if (!Z_Registration_Info_UClass_UMirageDelegates.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirageDelegates.OuterSingleton, Z_Construct_UClass_UMirageDelegates_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirageDelegates.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UMirageDelegates>()
	{
		return UMirageDelegates::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirageDelegates);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirageDelegates, UMirageDelegates::StaticClass, TEXT("UMirageDelegates"), &Z_Registration_Info_UClass_UMirageDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirageDelegates), 1303014828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_3685727522(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
