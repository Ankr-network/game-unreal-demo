// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/UpdateNFTExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateNFTExample() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UUpdateNFTExample_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UUpdateNFTExample();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClient();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FItemInfoStructure();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateNFTExample::execGetUpdateNFTResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ticketId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUpdateNFTResult(Z_Param_ticketId,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateNFTExample::execUpdateNFT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_STRUCT(FItemInfoStructure,Z_Param__item);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNFT(Z_Param_abi_hash,Z_Param__item,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateNFTExample::execGetNFTInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FIntProperty,Z_Param_tokenId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNFTInfo(Z_Param_abi_hash,Z_Param_tokenId,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	void UUpdateNFTExample::StaticRegisterNativesUUpdateNFTExample()
	{
		UClass* Class = UUpdateNFTExample::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNFTInfo", &UUpdateNFTExample::execGetNFTInfo },
			{ "GetUpdateNFTResult", &UUpdateNFTExample::execGetUpdateNFTResult },
			{ "UpdateNFT", &UUpdateNFTExample::execUpdateNFT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics
	{
		struct UpdateNFTExample_eventGetNFTInfo_Parms
		{
			FString abi_hash;
			int32 tokenId;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tokenId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventGetNFTInfo_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_tokenId = { "tokenId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventGetNFTInfo_Parms, tokenId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventGetNFTInfo_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_tokenId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetNFTInfo function is used to get an NFT's metadata from the blockchain.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response.\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param tokenId The id of the token hold by the user.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x159D0A933137f3EC155f43834BDFCd534A8bfd61\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"getTokenDetails\", \"args:\"YOUR_TOKEN_ID\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
		{ "ToolTip", "GetNFTInfo function is used to get an NFT's metadata from the blockchain.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response.\n\n@param abi_hash The hash of the abi string of the contract.\n@param tokenId The id of the token hold by the user.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x159D0A933137f3EC155f43834BDFCd534A8bfd61\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"getTokenDetails\", \"args:\"YOUR_TOKEN_ID\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateNFTExample, nullptr, "GetNFTInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::UpdateNFTExample_eventGetNFTInfo_Parms), Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics
	{
		struct UpdateNFTExample_eventGetUpdateNFTResult_Parms
		{
			FString ticketId;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ticketId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::NewProp_ticketId = { "ticketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventGetUpdateNFTResult_Parms, ticketId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventGetUpdateNFTResult_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::NewProp_ticketId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetUpdateNFTResult function is used to get the result of the ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param ticket The ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"ticket\":\"YOUR_TICKET\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
		{ "ToolTip", "GetUpdateNFTResult function is used to get the result of the ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param ticket The ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"ticket\":\"YOUR_TICKET\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateNFTExample, nullptr, "GetUpdateNFTResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::UpdateNFTExample_eventGetUpdateNFTResult_Parms), Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics
	{
		struct UpdateNFTExample_eventUpdateNFT_Parms
		{
			FString abi_hash;
			FItemInfoStructure _item;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStructPropertyParams NewProp__item;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventUpdateNFT_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp__item = { "_item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventUpdateNFT_Parms, _item), Z_Construct_UScriptStruct_FItemInfoStructure, METADATA_PARAMS(nullptr, 0) }; // 4280734622
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateNFTExample_eventUpdateNFT_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp__item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// UpdateNFT function is used to update an NFT's metadata on the blockchain and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param _item The metadata item to be updated.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\",\"contract_address\":\"0x159D0A933137f3EC155f43834BDFCd534A8bfd61\",\"abi_hash\":\"YOUR_ABI_HASH\",\"method\":\"updateTokenWithSignedMessage\",\"args\":[{\"tokenId\":YOUR_TOKEN_ID,\"itemType\":YOUR_ITEM_TYPE,\"strength\":YOUR_STRENGTH,\"level\":YOUR_LEVEL,\"expireTime\":YOUR_EXPIRE_TIME,\"signature\":\"\"}]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
		{ "ToolTip", "UpdateNFT function is used to update an NFT's metadata on the blockchain and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param _item The metadata item to be updated.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\",\"contract_address\":\"0x159D0A933137f3EC155f43834BDFCd534A8bfd61\",\"abi_hash\":\"YOUR_ABI_HASH\",\"method\":\"updateTokenWithSignedMessage\",\"args\":[{\"tokenId\":YOUR_TOKEN_ID,\"itemType\":YOUR_ITEM_TYPE,\"strength\":YOUR_STRENGTH,\"level\":YOUR_LEVEL,\"expireTime\":YOUR_EXPIRE_TIME,\"signature\":\"\"}]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateNFTExample, nullptr, "UpdateNFT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::UpdateNFTExample_eventUpdateNFT_Parms), Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateNFTExample);
	UClass* Z_Construct_UClass_UUpdateNFTExample_NoRegister()
	{
		return UUpdateNFTExample::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateNFTExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContractAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContractAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ABI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ABI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateNFTExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMirageClient,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateNFTExample_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateNFTExample_GetNFTInfo, "GetNFTInfo" }, // 1041559077
		{ &Z_Construct_UFunction_UUpdateNFTExample_GetUpdateNFTResult, "GetUpdateNFTResult" }, // 189699891
		{ &Z_Construct_UFunction_UUpdateNFTExample_UpdateNFT, "UpdateNFT" }, // 3296449680
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateNFTExample_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// UUpdateNFTExample provides various functions to get and update NFT's metadata on the blockchain.\n" },
		{ "IncludePath", "UpdateNFTExample.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
		{ "ToolTip", "UUpdateNFTExample provides various functions to get and update NFT's metadata on the blockchain." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ContractAddress_MetaData[] = {
		{ "Category", "UpdateNFTExample" },
		{ "Comment", "//#ifndef DOXYGEN_SHOULD_SKIP_THIS\x09\n" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
		{ "ToolTip", "#ifndef DOXYGEN_SHOULD_SKIP_THIS" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ContractAddress = { "ContractAddress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpdateNFTExample, ContractAddress), METADATA_PARAMS(Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ContractAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ContractAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ABI_MetaData[] = {
		{ "Category", "UpdateNFTExample" },
		{ "ModuleRelativePath", "Public/UpdateNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ABI = { "ABI", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpdateNFTExample, ABI), METADATA_PARAMS(Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ABI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ABI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateNFTExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ContractAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateNFTExample_Statics::NewProp_ABI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateNFTExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateNFTExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateNFTExample_Statics::ClassParams = {
		&UUpdateNFTExample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUpdateNFTExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateNFTExample_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpdateNFTExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateNFTExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateNFTExample()
	{
		if (!Z_Registration_Info_UClass_UUpdateNFTExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateNFTExample.OuterSingleton, Z_Construct_UClass_UUpdateNFTExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateNFTExample.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UUpdateNFTExample>()
	{
		return UUpdateNFTExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateNFTExample);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_UpdateNFTExample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_UpdateNFTExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateNFTExample, UUpdateNFTExample::StaticClass, TEXT("UUpdateNFTExample"), &Z_Registration_Info_UClass_UUpdateNFTExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateNFTExample), 2548828455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_UpdateNFTExample_h_3963729576(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_UpdateNFTExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_UpdateNFTExample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
