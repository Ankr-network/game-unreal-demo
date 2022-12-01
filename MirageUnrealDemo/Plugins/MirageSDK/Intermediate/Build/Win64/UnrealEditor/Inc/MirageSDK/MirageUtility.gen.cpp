// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/MirageUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageUtility() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageUtility_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageUtility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
// End Cross Module References
	DEFINE_FUNCTION(UMirageUtility::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetLanguage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__language);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetLanguage(Z_Param__language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetAdvertisementAppID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__appId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetAdvertisementAppID(Z_Param__appId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetAdvertisementAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetAdvertisementAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetChainID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__chainId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetChainID(Z_Param__chainId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetChainID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMirageUtility::GetChainID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetWalletAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetWalletAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execAddWalletAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__address);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::AddWalletAddress(Z_Param__address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetNeedLogin)
	{
		P_GET_UBOOL(Z_Param__needLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetNeedLogin(Z_Param__needLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetNeedLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMirageUtility::GetNeedLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetWalletConnectDeepLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__walletConnectDeepLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetWalletConnectDeepLink(Z_Param__walletConnectDeepLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetWalletConnectDeepLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetWalletConnectDeepLink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__session);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetSession(Z_Param__session);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execSetDeviceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMirageUtility::SetDeviceID(Z_Param__deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageUtility::execGetDeviceID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMirageUtility::GetDeviceID();
		P_NATIVE_END;
	}
	void UMirageUtility::StaticRegisterNativesUMirageUtility()
	{
		UClass* Class = UMirageUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWalletAddress", &UMirageUtility::execAddWalletAddress },
			{ "GetAdvertisementAppID", &UMirageUtility::execGetAdvertisementAppID },
			{ "GetChainID", &UMirageUtility::execGetChainID },
			{ "GetDeviceID", &UMirageUtility::execGetDeviceID },
			{ "GetLanguage", &UMirageUtility::execGetLanguage },
			{ "GetNeedLogin", &UMirageUtility::execGetNeedLogin },
			{ "GetSession", &UMirageUtility::execGetSession },
			{ "GetWalletAddress", &UMirageUtility::execGetWalletAddress },
			{ "GetWalletConnectDeepLink", &UMirageUtility::execGetWalletConnectDeepLink },
			{ "Reset", &UMirageUtility::execReset },
			{ "SetAdvertisementAppID", &UMirageUtility::execSetAdvertisementAppID },
			{ "SetChainID", &UMirageUtility::execSetChainID },
			{ "SetDeviceID", &UMirageUtility::execSetDeviceID },
			{ "SetLanguage", &UMirageUtility::execSetLanguage },
			{ "SetNeedLogin", &UMirageUtility::execSetNeedLogin },
			{ "SetSession", &UMirageUtility::execSetSession },
			{ "SetWalletConnectDeepLink", &UMirageUtility::execSetWalletConnectDeepLink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics
	{
		struct MirageUtility_eventAddWalletAddress_Parms
		{
			FString _address;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::NewProp__address = { "_address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventAddWalletAddress_Parms, _address), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::NewProp__address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "AddWalletAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::MirageUtility_eventAddWalletAddress_Parms), Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_AddWalletAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_AddWalletAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics
	{
		struct MirageUtility_eventGetAdvertisementAppID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetAdvertisementAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetAdvertisementAppID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::MirageUtility_eventGetAdvertisementAppID_Parms), Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetChainID_Statics
	{
		struct MirageUtility_eventGetChainID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetChainID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetChainID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::MirageUtility_eventGetChainID_Parms), Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetChainID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetChainID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics
	{
		struct MirageUtility_eventGetDeviceID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetDeviceID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetDeviceID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::MirageUtility_eventGetDeviceID_Parms), Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics
	{
		struct MirageUtility_eventGetLanguage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::MirageUtility_eventGetLanguage_Parms), Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics
	{
		struct MirageUtility_eventGetNeedLogin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MirageUtility_eventGetNeedLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MirageUtility_eventGetNeedLogin_Parms), &Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetNeedLogin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::MirageUtility_eventGetNeedLogin_Parms), Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetNeedLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetNeedLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetSession_Statics
	{
		struct MirageUtility_eventGetSession_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetSession_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetSession_Statics::MirageUtility_eventGetSession_Parms), Z_Construct_UFunction_UMirageUtility_GetSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics
	{
		struct MirageUtility_eventGetWalletAddress_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetWalletAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetWalletAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::MirageUtility_eventGetWalletAddress_Parms), Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetWalletAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetWalletAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics
	{
		struct MirageUtility_eventGetWalletConnectDeepLink_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventGetWalletConnectDeepLink_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "GetWalletConnectDeepLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::MirageUtility_eventGetWalletConnectDeepLink_Parms), Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics
	{
		struct MirageUtility_eventSetAdvertisementAppID_Parms
		{
			FString _appId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__appId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::NewProp__appId = { "_appId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetAdvertisementAppID_Parms, _appId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::NewProp__appId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetAdvertisementAppID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::MirageUtility_eventSetAdvertisementAppID_Parms), Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetChainID_Statics
	{
		struct MirageUtility_eventSetChainID_Parms
		{
			int32 _chainId;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__chainId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::NewProp__chainId = { "_chainId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetChainID_Parms, _chainId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::NewProp__chainId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetChainID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::MirageUtility_eventSetChainID_Parms), Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetChainID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetChainID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics
	{
		struct MirageUtility_eventSetDeviceID_Parms
		{
			FString _deviceId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__deviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::NewProp__deviceId = { "_deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetDeviceID_Parms, _deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::NewProp__deviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetDeviceID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::MirageUtility_eventSetDeviceID_Parms), Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics
	{
		struct MirageUtility_eventSetLanguage_Parms
		{
			FString _language;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__language;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::NewProp__language = { "_language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetLanguage_Parms, _language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::NewProp__language,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::MirageUtility_eventSetLanguage_Parms), Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics
	{
		struct MirageUtility_eventSetNeedLogin_Parms
		{
			bool _needLogin;
		};
		static void NewProp__needLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__needLogin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::NewProp__needLogin_SetBit(void* Obj)
	{
		((MirageUtility_eventSetNeedLogin_Parms*)Obj)->_needLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::NewProp__needLogin = { "_needLogin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MirageUtility_eventSetNeedLogin_Parms), &Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::NewProp__needLogin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::NewProp__needLogin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetNeedLogin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::MirageUtility_eventSetNeedLogin_Parms), Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetNeedLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetNeedLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetSession_Statics
	{
		struct MirageUtility_eventSetSession_Parms
		{
			FString _session;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__session;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_SetSession_Statics::NewProp__session = { "_session", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetSession_Parms, _session), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetSession_Statics::NewProp__session,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetSession_Statics::MirageUtility_eventSetSession_Parms), Z_Construct_UFunction_UMirageUtility_SetSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics
	{
		struct MirageUtility_eventSetWalletConnectDeepLink_Parms
		{
			FString _walletConnectDeepLink;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__walletConnectDeepLink;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::NewProp__walletConnectDeepLink = { "_walletConnectDeepLink", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageUtility_eventSetWalletConnectDeepLink_Parms, _walletConnectDeepLink), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::NewProp__walletConnectDeepLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "MirageUtility" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageUtility, nullptr, "SetWalletConnectDeepLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::MirageUtility_eventSetWalletConnectDeepLink_Parms), Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirageUtility);
	UClass* Z_Construct_UClass_UMirageUtility_NoRegister()
	{
		return UMirageUtility::StaticClass();
	}
	struct Z_Construct_UClass_UMirageUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirageUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMirageUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMirageUtility_AddWalletAddress, "AddWalletAddress" }, // 800379635
		{ &Z_Construct_UFunction_UMirageUtility_GetAdvertisementAppID, "GetAdvertisementAppID" }, // 2215159070
		{ &Z_Construct_UFunction_UMirageUtility_GetChainID, "GetChainID" }, // 2367539055
		{ &Z_Construct_UFunction_UMirageUtility_GetDeviceID, "GetDeviceID" }, // 2349386375
		{ &Z_Construct_UFunction_UMirageUtility_GetLanguage, "GetLanguage" }, // 2598658802
		{ &Z_Construct_UFunction_UMirageUtility_GetNeedLogin, "GetNeedLogin" }, // 2572579636
		{ &Z_Construct_UFunction_UMirageUtility_GetSession, "GetSession" }, // 1930519286
		{ &Z_Construct_UFunction_UMirageUtility_GetWalletAddress, "GetWalletAddress" }, // 388927810
		{ &Z_Construct_UFunction_UMirageUtility_GetWalletConnectDeepLink, "GetWalletConnectDeepLink" }, // 927894670
		{ &Z_Construct_UFunction_UMirageUtility_Reset, "Reset" }, // 2407124329
		{ &Z_Construct_UFunction_UMirageUtility_SetAdvertisementAppID, "SetAdvertisementAppID" }, // 2575145269
		{ &Z_Construct_UFunction_UMirageUtility_SetChainID, "SetChainID" }, // 1043376803
		{ &Z_Construct_UFunction_UMirageUtility_SetDeviceID, "SetDeviceID" }, // 638000269
		{ &Z_Construct_UFunction_UMirageUtility_SetLanguage, "SetLanguage" }, // 1170645617
		{ &Z_Construct_UFunction_UMirageUtility_SetNeedLogin, "SetNeedLogin" }, // 3930693135
		{ &Z_Construct_UFunction_UMirageUtility_SetSession, "SetSession" }, // 1923431647
		{ &Z_Construct_UFunction_UMirageUtility_SetWalletConnectDeepLink, "SetWalletConnectDeepLink" }, // 2465618687
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirageUtility.h" },
		{ "ModuleRelativePath", "Public/MirageUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirageUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirageUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirageUtility_Statics::ClassParams = {
		&UMirageUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirageUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirageUtility()
	{
		if (!Z_Registration_Info_UClass_UMirageUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirageUtility.OuterSingleton, Z_Construct_UClass_UMirageUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirageUtility.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UMirageUtility>()
	{
		return UMirageUtility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirageUtility);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirageUtility, UMirageUtility::StaticClass, TEXT("UMirageUtility"), &Z_Registration_Info_UClass_UMirageUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirageUtility), 2080245561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageUtility_h_4148870483(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
