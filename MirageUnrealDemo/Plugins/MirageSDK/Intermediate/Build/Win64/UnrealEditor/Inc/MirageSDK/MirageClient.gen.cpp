// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/MirageClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageClient() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClient_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClient();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClientBase();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMirageClient::execSetLastRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__lastRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastRequest(Z_Param__lastRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execGetLastRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execCollectStatistics)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__app_id);
		P_GET_PROPERTY(FStrProperty,Z_Param__device_id);
		P_GET_PROPERTY(FStrProperty,Z_Param__public_address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectStatistics(Z_Param__app_id,Z_Param__device_id,Z_Param__public_address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execVerifyMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY(FStrProperty,Z_Param_signature);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VerifyMessage(Z_Param_message,Z_Param_signature,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execGetSignature)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ticket);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSignature(Z_Param_ticket,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execSignMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SignMessage(Z_Param_message,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execCallMethod)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_contract);
		P_GET_PROPERTY(FStrProperty,Z_Param_abi);
		P_GET_PROPERTY(FStrProperty,Z_Param_method);
		P_GET_PROPERTY(FStrProperty,Z_Param_args);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallMethod(Z_Param_contract,Z_Param_abi,Z_Param_method,Z_Param_args,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execGetTicketResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ticketId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTicketResult(Z_Param_ticketId,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execSendTransaction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_contract);
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_method);
		P_GET_PROPERTY(FStrProperty,Z_Param_args);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTransaction(Z_Param_contract,Z_Param_abi_hash,Z_Param_method,Z_Param_args,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execSendABI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendABI(Z_Param_abi,FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execGetWalletInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWalletInfo(FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execConnectWallet)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectWallet(FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execPing)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ping(FMirageCallCompleteDynamicDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirageClient::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UMirageClient::StaticRegisterNativesUMirageClient()
	{
		UClass* Class = UMirageClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallMethod", &UMirageClient::execCallMethod },
			{ "CollectStatistics", &UMirageClient::execCollectStatistics },
			{ "ConnectWallet", &UMirageClient::execConnectWallet },
			{ "GetLastRequest", &UMirageClient::execGetLastRequest },
			{ "GetSignature", &UMirageClient::execGetSignature },
			{ "GetTicketResult", &UMirageClient::execGetTicketResult },
			{ "GetWalletInfo", &UMirageClient::execGetWalletInfo },
			{ "Initialize", &UMirageClient::execInitialize },
			{ "Ping", &UMirageClient::execPing },
			{ "SendABI", &UMirageClient::execSendABI },
			{ "SendTransaction", &UMirageClient::execSendTransaction },
			{ "SetLastRequest", &UMirageClient::execSetLastRequest },
			{ "SignMessage", &UMirageClient::execSignMessage },
			{ "VerifyMessage", &UMirageClient::execVerifyMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMirageClient_CallMethod_Statics
	{
		struct MirageClient_eventCallMethod_Parms
		{
			FString contract;
			FString abi;
			FString method;
			FString args;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_contract;
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi;
		static const UECodeGen_Private::FStrPropertyParams NewProp_method;
		static const UECodeGen_Private::FStrPropertyParams NewProp_args;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_contract = { "contract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCallMethod_Parms, contract), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_abi = { "abi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCallMethod_Parms, abi), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCallMethod_Parms, method), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCallMethod_Parms, args), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCallMethod_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_CallMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_contract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_abi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CallMethod_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_CallMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// CallMethod function is used to get a data from blockchain and doesn't require the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\\n\n/// string data will be received in json response for a \"data\".\n///\n/// @param contract The address of the contract to which you want to interact.\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param method The method that is to be called from the contract.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"YOUR_CONTRACT_ADDRESS\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"YOUR_METHOD\", \"args:\"YOUR_ARGS\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "CallMethod function is used to get a data from blockchain and doesn't require the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\\n\nstring data will be received in json response for a \"data\".\n\n@param contract The address of the contract to which you want to interact.\n@param abi_hash The hash of the abi string of the contract.\n@param method The method that is to be called from the contract.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"YOUR_CONTRACT_ADDRESS\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"YOUR_METHOD\", \"args:\"YOUR_ARGS\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_CallMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "CallMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::MirageClient_eventCallMethod_Parms), Z_Construct_UFunction_UMirageClient_CallMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_CallMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_CallMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_CallMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics
	{
		struct MirageClient_eventCollectStatistics_Parms
		{
			FString _app_id;
			FString _device_id;
			FString _public_address;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__app_id;
		static const UECodeGen_Private::FStrPropertyParams NewProp__device_id;
		static const UECodeGen_Private::FStrPropertyParams NewProp__public_address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__app_id = { "_app_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCollectStatistics_Parms, _app_id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__device_id = { "_device_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCollectStatistics_Parms, _device_id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__public_address = { "_public_address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventCollectStatistics_Parms, _public_address), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__app_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__device_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::NewProp__public_address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// CollectStatistics function is used to collect the statistics.\n///\n/// The function requires parameters described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing an app_id, device_id and public_address. The format is described in the body section below.\\n\n/// string data will be received in json response as a result.\n///\n/// @param app_id The app specific app_id.\n/// @param device_id The device specific device id.\n/// @param public_address The address of the contract to which you want to interact.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"app_id\":\"YOUR_APP_ID\", \"device_id\":\"YOUR_DEVICE_ID\", \"public_address\":\"YOUR_PUBLIC_ADDRESS\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "CollectStatistics function is used to collect the statistics.\n\nThe function requires parameters described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing an app_id, device_id and public_address. The format is described in the body section below.\\n\nstring data will be received in json response as a result.\n\n@param app_id The app specific app_id.\n@param device_id The device specific device id.\n@param public_address The address of the contract to which you want to interact.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"app_id\":\"YOUR_APP_ID\", \"device_id\":\"YOUR_DEVICE_ID\", \"public_address\":\"YOUR_PUBLIC_ADDRESS\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "CollectStatistics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::MirageClient_eventCollectStatistics_Parms), Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_CollectStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_CollectStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics
	{
		struct MirageClient_eventConnectWallet_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventConnectWallet_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// ConnectWallet function is used to connect the wallet such as metamask etc.\n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device id and the format is described in the body section below.\\n\n/// string data will be received in json response for \"login\", \"session\" and \"uri\".\\n\n/// \"uri\" will be used to launch metamask to confirm the user to connect wallet. Once connected you can call GetWalletInfo(const FMirageCallCompleteDynamicDelegate&) to get the wallet address.\n///\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n///\n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "ConnectWallet function is used to connect the wallet such as metamask etc.\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device id and the format is described in the body section below.\\n\nstring data will be received in json response for \"login\", \"session\" and \"uri\".\\n\n\"uri\" will be used to launch metamask to confirm the user to connect wallet. Once connected you can call GetWalletInfo(const FMirageCallCompleteDynamicDelegate&) to get the wallet address.\n\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "ConnectWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::MirageClient_eventConnectWallet_Parms), Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_ConnectWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_ConnectWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics
	{
		struct MirageClient_eventGetLastRequest_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetLastRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetLastRequest function gets the name of last function that was called for the Mirage API. \n///\n/// The function doesn't require a parameter and returns a string.\\n\n/// Inside the function, the name of the last function that was called for the Mirage API is returned.\n///\n/// @returns The name of the last function that was called for Mirage API.\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "GetLastRequest function gets the name of last function that was called for the Mirage API.\n\nThe function doesn't require a parameter and returns a string.\\n\nInside the function, the name of the last function that was called for the Mirage API is returned.\n\n@returns The name of the last function that was called for Mirage API." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "GetLastRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::MirageClient_eventGetLastRequest_Parms), Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_GetLastRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_GetLastRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_GetSignature_Statics
	{
		struct MirageClient_eventGetSignature_Parms
		{
			FString ticket;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ticket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetSignature_Parms, ticket), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetSignature_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_GetSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetSignature_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetSignature function is used to get the signature signed by the SignMessage(FString, const FMirageCallCompleteDynamicDelegate&) function.\n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\\n\n/// string data will be received in json response for a \"signature\".\n///\n/// @param ticket The ticket received from the SignMessage(FString, const FMirageCallCompleteDynamicDelegate&) function.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"ticket\":\"YOUR_TICKET\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "GetSignature function is used to get the signature signed by the SignMessage(FString, const FMirageCallCompleteDynamicDelegate&) function.\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\\n\nstring data will be received in json response for a \"signature\".\n\n@param ticket The ticket received from the SignMessage(FString, const FMirageCallCompleteDynamicDelegate&) function.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"ticket\":\"YOUR_TICKET\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_GetSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "GetSignature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::MirageClient_eventGetSignature_Parms), Z_Construct_UFunction_UMirageClient_GetSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_GetSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_GetSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics
	{
		struct MirageClient_eventGetTicketResult_Parms
		{
			FString ticketId;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ticketId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_ticketId = { "ticketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetTicketResult_Parms, ticketId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetTicketResult_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_ticketId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetTicketResult function is used to get the result of the ticket generated by SendTransaction(FString, FString, FString, FString, const FMirageCallCompleteDynamicDelegate&).\n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\\n\n/// string data will be received in json response for a \"data\".\n///\n/// @param ticketId The ticket generated by any writable function.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"ticket\":\"YOUR_TICKET\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "GetTicketResult function is used to get the result of the ticket generated by SendTransaction(FString, FString, FString, FString, const FMirageCallCompleteDynamicDelegate&).\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\\n\nstring data will be received in json response for a \"data\".\n\n@param ticketId The ticket generated by any writable function.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"ticket\":\"YOUR_TICKET\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "GetTicketResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::MirageClient_eventGetTicketResult_Parms), Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_GetTicketResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_GetTicketResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics
	{
		struct MirageClient_eventGetWalletInfo_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventGetWalletInfo_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetWalletInfo function is used to get the wallet address and chain id.\n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device id and the format is described in the body section below.\\n\n/// string data will be received in json response for \"accounts\" and \"chainId\".\n///\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n///\n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "GetWalletInfo function is used to get the wallet address and chain id.\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device id and the format is described in the body section below.\\n\nstring data will be received in json response for \"accounts\" and \"chainId\".\n\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "GetWalletInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::MirageClient_eventGetWalletInfo_Parms), Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_GetWalletInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_GetWalletInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// Initialize function is used to initialize the MirageClient.\n///\n/// The function does not require a parameter and returns nothing.\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "Initialize function is used to initialize the MirageClient.\n\nThe function does not require a parameter and returns nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_Ping_Statics
	{
		struct MirageClient_eventPing_Parms
		{
			FScriptDelegate Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_Ping_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_Ping_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventPing_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_Ping_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_Ping_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_Ping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_Ping_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// Ping function is used to check if the Mirage API is alive.\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A GET request is sent to the Mirage API.\n/// string data will be received in json response with \"pong\".\n///\n/// @param Result A callback delegate that will be triggered once a response is received with a data.\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "Ping function is used to check if the Mirage API is alive.\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A GET request is sent to the Mirage API.\nstring data will be received in json response with \"pong\".\n\n@param Result A callback delegate that will be triggered once a response is received with a data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "Ping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_Ping_Statics::MirageClient_eventPing_Parms), Z_Construct_UFunction_UMirageClient_Ping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_Ping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_Ping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_SendABI_Statics
	{
		struct MirageClient_eventSendABI_Parms
		{
			FString abi;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_abi = { "abi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendABI_Parms, abi), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendABI_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_SendABI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_abi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendABI_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SendABI_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// SendABI function is used to get the hash of the abi string.\n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing an abi string and the format is described in the body section below.\\n\n/// string data will be received in json response for \"abi\".\n///\n/// @param abi An ABI string of a contract.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n///\n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"abi\":\"YOUR_ABI\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "SendABI function is used to get the hash of the abi string.\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing an abi string and the format is described in the body section below.\\n\nstring data will be received in json response for \"abi\".\n\n@param abi An ABI string of a contract.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"abi\":\"YOUR_ABI\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_SendABI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "SendABI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_SendABI_Statics::MirageClient_eventSendABI_Parms), Z_Construct_UFunction_UMirageClient_SendABI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendABI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SendABI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendABI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_SendABI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_SendABI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_SendTransaction_Statics
	{
		struct MirageClient_eventSendTransaction_Parms
		{
			FString contract;
			FString abi_hash;
			FString method;
			FString args;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_contract;
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_method;
		static const UECodeGen_Private::FStrPropertyParams NewProp_args;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_contract = { "contract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendTransaction_Parms, contract), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendTransaction_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendTransaction_Parms, method), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendTransaction_Parms, args), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSendTransaction_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_contract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// SendTransaction function is used to send a transaction and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\\n\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param contract The address of the contract to which you want to interact.\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param method The method that is to be called from the contract.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"YOUR_CONTRACT_ADDRESS\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"YOUR_METHOD\", \"args:\"YOUR_ARGS\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "SendTransaction function is used to send a transaction and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\\n\nstring data will be received in json response for a \"ticket\".\n\n@param contract The address of the contract to which you want to interact.\n@param abi_hash The hash of the abi string of the contract.\n@param method The method that is to be called from the contract.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"YOUR_CONTRACT_ADDRESS\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"YOUR_METHOD\", \"args:\"YOUR_ARGS\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "SendTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::MirageClient_eventSendTransaction_Parms), Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_SendTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_SendTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics
	{
		struct MirageClient_eventSetLastRequest_Parms
		{
			FString _lastRequest;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__lastRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::NewProp__lastRequest = { "_lastRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSetLastRequest_Parms, _lastRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::NewProp__lastRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// SetLastRequest function sets the name of last function that is called for the Mirage API. \n///\n/// The function requires a parameter described below and returns nothing.\\n\n/// Inside the function, the name of the last function that is called for the Mirage API is set.\n///\n/// @param _lastRequest The name of the function that is called for the Mirage API.\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "SetLastRequest function sets the name of last function that is called for the Mirage API.\n\nThe function requires a parameter described below and returns nothing.\\n\nInside the function, the name of the last function that is called for the Mirage API is set.\n\n@param _lastRequest The name of the function that is called for the Mirage API." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "SetLastRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::MirageClient_eventSetLastRequest_Parms), Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_SetLastRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_SetLastRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_SignMessage_Statics
	{
		struct MirageClient_eventSignMessage_Parms
		{
			FString message;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSignMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventSignMessage_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_SignMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_SignMessage_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_SignMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// SignMessage function is used to sign a message and requires the user confirmation to sign through wallet such as metamask..\n///\n/// The function requires parameters described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id and message. The format is described in the body section below.\\n\n/// string data will be received in json response for a \"data\".\n///\n/// @param message The string message to be signed\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"message\":\"YOUR_MESSAGE\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "SignMessage function is used to sign a message and requires the user confirmation to sign through wallet such as metamask..\n\nThe function requires parameters described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id and message. The format is described in the body section below.\\n\nstring data will be received in json response for a \"data\".\n\n@param message The string message to be signed\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"message\":\"YOUR_MESSAGE\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_SignMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "SignMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::MirageClient_eventSignMessage_Parms), Z_Construct_UFunction_UMirageClient_SignMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_SignMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_SignMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_SignMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics
	{
		struct MirageClient_eventVerifyMessage_Parms
		{
			FString message;
			FString signature;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_signature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventVerifyMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_signature = { "signature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventVerifyMessage_Parms, signature), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MirageClient_eventVerifyMessage_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_Result_MetaData)) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_signature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// VerifyMessage function is used to verify the message that was signed.\n///\n/// The function requires parameters described below and returns nothing.\\n\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, message and signature. The format is described in the body section below.\\n\n/// string data will be received in json response for an \"address\".\n///\n/// @param message The string message to be signed\n/// @param signature The signature received by GetSignature(FString, const FMirageCallCompleteDynamicDelegate&);\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// @attention The \"message\" should be the one that was used in SignMessage(FString, const FMirageCallCompleteDynamicDelegate&).\n/// @attention The \"signature\" should be the one that was obtained in GetSignature(FString, const FMirageCallCompleteDynamicDelegate&).\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"message\":\"YOUR_MESSAGE\", \"signature\":\"YOUR_SIGNATURE\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "VerifyMessage function is used to verify the message that was signed.\n\nThe function requires parameters described below and returns nothing.\\n\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, message and signature. The format is described in the body section below.\\n\nstring data will be received in json response for an \"address\".\n\n@param message The string message to be signed\n@param signature The signature received by GetSignature(FString, const FMirageCallCompleteDynamicDelegate&);\n@param Result A callback delegate that will be triggered once a response is received with data.\n@attention The \"message\" should be the one that was used in SignMessage(FString, const FMirageCallCompleteDynamicDelegate&).\n@attention The \"signature\" should be the one that was obtained in GetSignature(FString, const FMirageCallCompleteDynamicDelegate&).\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"message\":\"YOUR_MESSAGE\", \"signature\":\"YOUR_SIGNATURE\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirageClient, nullptr, "VerifyMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::MirageClient_eventVerifyMessage_Parms), Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirageClient_VerifyMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirageClient_VerifyMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirageClient);
	UClass* Z_Construct_UClass_UMirageClient_NoRegister()
	{
		return UMirageClient::StaticClass();
	}
	struct Z_Construct_UClass_UMirageClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirageClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMirageClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMirageClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMirageClient_CallMethod, "CallMethod" }, // 3386799677
		{ &Z_Construct_UFunction_UMirageClient_CollectStatistics, "CollectStatistics" }, // 4084363553
		{ &Z_Construct_UFunction_UMirageClient_ConnectWallet, "ConnectWallet" }, // 287140403
		{ &Z_Construct_UFunction_UMirageClient_GetLastRequest, "GetLastRequest" }, // 3583009661
		{ &Z_Construct_UFunction_UMirageClient_GetSignature, "GetSignature" }, // 2681564238
		{ &Z_Construct_UFunction_UMirageClient_GetTicketResult, "GetTicketResult" }, // 3460019904
		{ &Z_Construct_UFunction_UMirageClient_GetWalletInfo, "GetWalletInfo" }, // 2434636612
		{ &Z_Construct_UFunction_UMirageClient_Initialize, "Initialize" }, // 1962121785
		{ &Z_Construct_UFunction_UMirageClient_Ping, "Ping" }, // 3377865514
		{ &Z_Construct_UFunction_UMirageClient_SendABI, "SendABI" }, // 1198627411
		{ &Z_Construct_UFunction_UMirageClient_SendTransaction, "SendTransaction" }, // 3579039249
		{ &Z_Construct_UFunction_UMirageClient_SetLastRequest, "SetLastRequest" }, // 3655610485
		{ &Z_Construct_UFunction_UMirageClient_SignMessage, "SignMessage" }, // 1100476006
		{ &Z_Construct_UFunction_UMirageClient_VerifyMessage, "VerifyMessage" }, // 1092372855
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// MirageClient provides various functions that are used to connect wallet and interact with the blockchain.\n" },
		{ "IncludePath", "MirageClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MirageClient.h" },
		{ "ToolTip", "MirageClient provides various functions that are used to connect wallet and interact with the blockchain." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirageClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirageClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirageClient_Statics::ClassParams = {
		&UMirageClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMirageClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirageClient()
	{
		if (!Z_Registration_Info_UClass_UMirageClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirageClient.OuterSingleton, Z_Construct_UClass_UMirageClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirageClient.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UMirageClient>()
	{
		return UMirageClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirageClient);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirageClient, UMirageClient::StaticClass, TEXT("UMirageClient"), &Z_Registration_Info_UClass_UMirageClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirageClient), 537454152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClient_h_581924619(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
