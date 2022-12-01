// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/WearableNFTExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWearableNFTExample() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UWearableNFTExample_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UWearableNFTExample();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClient();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWearableNFTExample::execGetHatAddressByID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__hatID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHatAddressByID(Z_Param__hatID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetTokenURI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FIntProperty,Z_Param_tokenId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTokenURI(Z_Param_abi_hash,Z_Param_tokenId,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetItemValueFromBalances)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemValueFromBalances(Z_Param_data,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetItemsBalance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemsBalance(Z_Param_abi_hash,Z_Param_address,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetWearableNFTResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ticketId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWearableNFTResult(Z_Param_ticketId,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetHat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHat(Z_Param_abi_hash,Z_Param_characterId,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execChangeHat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_hatAddress);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeHat(Z_Param_abi_hash,Z_Param_characterId,Z_Param_hatAddress,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetCharacterTokenId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FIntProperty,Z_Param_tokenBalance);
		P_GET_PROPERTY(FStrProperty,Z_Param_owner);
		P_GET_PROPERTY(FStrProperty,Z_Param_index);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCharacterTokenId(Z_Param_abi_hash,Z_Param_tokenBalance,Z_Param_owner,Z_Param_index,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetCharacterBalance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCharacterBalance(Z_Param_abi_hash,Z_Param_address,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGameItemSetApproval)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_callOperator);
		P_GET_UBOOL(Z_Param_approved);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameItemSetApproval(Z_Param_abi_hash,Z_Param_callOperator,Z_Param_approved,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execMintCharacter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_to);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MintCharacter(Z_Param_abi_hash,Z_Param_to,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execMintItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_abi_hash);
		P_GET_PROPERTY(FStrProperty,Z_Param_to);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MintItems(Z_Param_abi_hash,Z_Param_to,FMirageCallCompleteDynamicDelegate(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetWhiteGlassesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWhiteGlassesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetRedGlassesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRedGlassesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetBlueGlassesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBlueGlassesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetWhiteShoesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWhiteShoesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetRedShoesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRedShoesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetBlueShoesAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBlueShoesAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetWhiteHatAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWhiteHatAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetRedHatAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRedHatAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWearableNFTExample::execGetBlueHatAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBlueHatAddress();
		P_NATIVE_END;
	}
	void UWearableNFTExample::StaticRegisterNativesUWearableNFTExample()
	{
		UClass* Class = UWearableNFTExample::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeHat", &UWearableNFTExample::execChangeHat },
			{ "GameItemSetApproval", &UWearableNFTExample::execGameItemSetApproval },
			{ "GetBlueGlassesAddress", &UWearableNFTExample::execGetBlueGlassesAddress },
			{ "GetBlueHatAddress", &UWearableNFTExample::execGetBlueHatAddress },
			{ "GetBlueShoesAddress", &UWearableNFTExample::execGetBlueShoesAddress },
			{ "GetCharacterBalance", &UWearableNFTExample::execGetCharacterBalance },
			{ "GetCharacterTokenId", &UWearableNFTExample::execGetCharacterTokenId },
			{ "GetHat", &UWearableNFTExample::execGetHat },
			{ "GetHatAddressByID", &UWearableNFTExample::execGetHatAddressByID },
			{ "GetItemsBalance", &UWearableNFTExample::execGetItemsBalance },
			{ "GetItemValueFromBalances", &UWearableNFTExample::execGetItemValueFromBalances },
			{ "GetRedGlassesAddress", &UWearableNFTExample::execGetRedGlassesAddress },
			{ "GetRedHatAddress", &UWearableNFTExample::execGetRedHatAddress },
			{ "GetRedShoesAddress", &UWearableNFTExample::execGetRedShoesAddress },
			{ "GetTokenURI", &UWearableNFTExample::execGetTokenURI },
			{ "GetWearableNFTResult", &UWearableNFTExample::execGetWearableNFTResult },
			{ "GetWhiteGlassesAddress", &UWearableNFTExample::execGetWhiteGlassesAddress },
			{ "GetWhiteHatAddress", &UWearableNFTExample::execGetWhiteHatAddress },
			{ "GetWhiteShoesAddress", &UWearableNFTExample::execGetWhiteShoesAddress },
			{ "MintCharacter", &UWearableNFTExample::execMintCharacter },
			{ "MintItems", &UWearableNFTExample::execMintItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics
	{
		struct WearableNFTExample_eventChangeHat_Parms
		{
			FString abi_hash;
			int32 characterId;
			FString hatAddress;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_characterId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_hatAddress;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventChangeHat_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventChangeHat_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_hatAddress = { "hatAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventChangeHat_Parms, hatAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventChangeHat_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_characterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_hatAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// ChangeHat function is used to change the hat of the character and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param characterId The character id obtained by GetCharacterTokenId(FString, int, FString, FString, FMirageCallCompleteDynamicDelegate);\n/// @param hatAddress The address of the hat to change hat to.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"changeHat\", \"args\":[\"TOKEN_ID\", \"HAT_ADDRESS\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "ChangeHat function is used to change the hat of the character and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param characterId The character id obtained by GetCharacterTokenId(FString, int, FString, FString, FMirageCallCompleteDynamicDelegate);\n@param hatAddress The address of the hat to change hat to.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"changeHat\", \"args\":[\"TOKEN_ID\", \"HAT_ADDRESS\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "ChangeHat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::WearableNFTExample_eventChangeHat_Parms), Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_ChangeHat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_ChangeHat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics
	{
		struct WearableNFTExample_eventGameItemSetApproval_Parms
		{
			FString abi_hash;
			FString callOperator;
			bool approved;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_callOperator;
		static void NewProp_approved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_approved;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGameItemSetApproval_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_callOperator = { "callOperator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGameItemSetApproval_Parms, callOperator), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_approved_SetBit(void* Obj)
	{
		((WearableNFTExample_eventGameItemSetApproval_Parms*)Obj)->approved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_approved = { "approved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WearableNFTExample_eventGameItemSetApproval_Parms), &Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_approved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGameItemSetApproval_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_callOperator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_approved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GameItemSetApproval function is used to set an approval to mint items for the user and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param callOperator The address of the contract that will operate the items.\n/// @param approved Whether the approval is granted or not.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"setApprovalForAll\", \"args:[\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", true]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GameItemSetApproval function is used to set an approval to mint items for the user and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param callOperator The address of the contract that will operate the items.\n@param approved Whether the approval is granted or not.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"setApprovalForAll\", \"args:[\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", true]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GameItemSetApproval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::WearableNFTExample_eventGameItemSetApproval_Parms), Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics
	{
		struct WearableNFTExample_eventGetBlueGlassesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetBlueGlassesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetBlueGlassesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::WearableNFTExample_eventGetBlueGlassesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics
	{
		struct WearableNFTExample_eventGetBlueHatAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetBlueHatAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetBlueHatAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::WearableNFTExample_eventGetBlueHatAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics
	{
		struct WearableNFTExample_eventGetBlueShoesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetBlueShoesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetBlueShoesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::WearableNFTExample_eventGetBlueShoesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics
	{
		struct WearableNFTExample_eventGetCharacterBalance_Parms
		{
			FString abi_hash;
			FString address;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_address;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterBalance_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterBalance_Parms, address), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterBalance_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetCharacterBalance function is used to get the token balance that user holds.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param address The address of the user to check the balance against.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"balanceOf\", \"args\":[\"WALLET_ADDRESS\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetCharacterBalance function is used to get the token balance that user holds.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param address The address of the user to check the balance against.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"balanceOf\", \"args\":[\"WALLET_ADDRESS\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetCharacterBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::WearableNFTExample_eventGetCharacterBalance_Parms), Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics
	{
		struct WearableNFTExample_eventGetCharacterTokenId_Parms
		{
			FString abi_hash;
			int32 tokenBalance;
			FString owner;
			FString index;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tokenBalance;
		static const UECodeGen_Private::FStrPropertyParams NewProp_owner;
		static const UECodeGen_Private::FStrPropertyParams NewProp_index;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterTokenId_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_tokenBalance = { "tokenBalance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterTokenId_Parms, tokenBalance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterTokenId_Parms, owner), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterTokenId_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetCharacterTokenId_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_tokenBalance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetCharacterTokenId function is used to get the id of the token at the specified index.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param tokenBalance The token balance obtained by GetCharacterBalance(FString, FString, FMirageCallCompleteDynamicDelegate);\n/// @param owner The address of the owner of the token.\n/// @param index The index of the token.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"tokenOfOwnerByIndex\", \"args\":[\"WALLET_ADDRESS\", \"INDEX\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetCharacterTokenId function is used to get the id of the token at the specified index.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param tokenBalance The token balance obtained by GetCharacterBalance(FString, FString, FMirageCallCompleteDynamicDelegate);\n@param owner The address of the owner of the token.\n@param index The index of the token.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"tokenOfOwnerByIndex\", \"args\":[\"WALLET_ADDRESS\", \"INDEX\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetCharacterTokenId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::WearableNFTExample_eventGetCharacterTokenId_Parms), Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics
	{
		struct WearableNFTExample_eventGetHat_Parms
		{
			FString abi_hash;
			int32 characterId;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_characterId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetHat_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetHat_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetHat_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_characterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetHat function is used to get the current hat of the character and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a  device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param characterId The character id obtained by GetCharacterTokenId(FString, int, FString, FString, FMirageCallCompleteDynamicDelegate);\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"getHat\", \"args\":[\"TOKEN_ID\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetHat function is used to get the current hat of the character and requires the user confirmation through wallet such as metamask.\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a  device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param characterId The character id obtained by GetCharacterTokenId(FString, int, FString, FString, FMirageCallCompleteDynamicDelegate);\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"getHat\", \"args\":[\"TOKEN_ID\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetHat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::WearableNFTExample_eventGetHat_Parms), Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetHat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetHat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics
	{
		struct WearableNFTExample_eventGetHatAddressByID_Parms
		{
			FString _hatID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__hatID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::NewProp__hatID = { "_hatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetHatAddressByID_Parms, _hatID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetHatAddressByID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::NewProp__hatID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetHatAddressByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::WearableNFTExample_eventGetHatAddressByID_Parms), Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics
	{
		struct WearableNFTExample_eventGetItemsBalance_Parms
		{
			FString abi_hash;
			FString address;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_address;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemsBalance_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemsBalance_Parms, address), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemsBalance_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetItemsBalance function is used to get the balance of items in batch.\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param address The address of the user to check the balance of items against.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"balanceOfBatch\", \"args:[ [\"activeAccount\", \" + activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\"], [\"BlueHatAddress\", \"RedHatAddress \", \"WhiteHatAddress \", \"BlueShoesAddress\", \"RedShoesAddress\", \"WhiteShoesAddress\", \"BlueGlassesAddress\", \"RedGlassesAddress\", \"WhiteGlassesAddress\"]]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetItemsBalance function is used to get the balance of items in batch.\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a ticket. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param address The address of the user to check the balance of items against.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"balanceOfBatch\", \"args:[ [\"activeAccount\", \" + activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\", \"activeAccount\"], [\"BlueHatAddress\", \"RedHatAddress \", \"WhiteHatAddress \", \"BlueShoesAddress\", \"RedShoesAddress\", \"WhiteShoesAddress\", \"BlueGlassesAddress\", \"RedGlassesAddress\", \"WhiteGlassesAddress\"]]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetItemsBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::WearableNFTExample_eventGetItemsBalance_Parms), Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics
	{
		struct WearableNFTExample_eventGetItemValueFromBalances_Parms
		{
			FString data;
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemValueFromBalances_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemValueFromBalances_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetItemValueFromBalances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetItemValueFromBalances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::WearableNFTExample_eventGetItemValueFromBalances_Parms), Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics
	{
		struct WearableNFTExample_eventGetRedGlassesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetRedGlassesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetRedGlassesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::WearableNFTExample_eventGetRedGlassesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics
	{
		struct WearableNFTExample_eventGetRedHatAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetRedHatAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetRedHatAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::WearableNFTExample_eventGetRedHatAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics
	{
		struct WearableNFTExample_eventGetRedShoesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetRedShoesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetRedShoesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::WearableNFTExample_eventGetRedShoesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics
	{
		struct WearableNFTExample_eventGetTokenURI_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetTokenURI_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_tokenId = { "tokenId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetTokenURI_Parms, tokenId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetTokenURI_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_tokenId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetTokenURI function is used to get token uri of an NFT.\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage. The request needs a json body containing a ticket. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param tokenId The id the token hold by the user.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetTokenURI function is used to get token uri of an NFT.\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A POST request is sent to the Mirage. The request needs a json body containing a ticket. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param tokenId The id the token hold by the user.\n@param Result A callback delegate that will be triggered once a response is received with data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetTokenURI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::WearableNFTExample_eventGetTokenURI_Parms), Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetTokenURI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetTokenURI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics
	{
		struct WearableNFTExample_eventGetWearableNFTResult_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::NewProp_ticketId = { "ticketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetWearableNFTResult_Parms, ticketId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetWearableNFTResult_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::NewProp_ticketId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetTicketResult function is used to get the result of the ticket generated by MintItems(FString, FString, FMirageCallCompleteDynamicDelegate), MintCharacter(FString, FString, FMirageCallCompleteDynamicDelegate),\n/// GameItemSetApproval(FString, FString, bool, FMirageCallCompleteDynamicDelegate) or ChangeHat(FString, int, bool, FString, FMirageCallCompleteDynamicDelegate)\n///\n/// The function requires a parameter described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a data and txHash. The format is described in the body section below.\n/// string data will be received in json response for a \"data\".\n///\n/// @param ticketId The ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"ticket\":\"YOUR_TICKET\"}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "GetTicketResult function is used to get the result of the ticket generated by MintItems(FString, FString, FMirageCallCompleteDynamicDelegate), MintCharacter(FString, FString, FMirageCallCompleteDynamicDelegate),\nGameItemSetApproval(FString, FString, bool, FMirageCallCompleteDynamicDelegate) or ChangeHat(FString, int, bool, FString, FMirageCallCompleteDynamicDelegate)\n\nThe function requires a parameter described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a data and txHash. The format is described in the body section below.\nstring data will be received in json response for a \"data\".\n\n@param ticketId The ticket generated by UpdateNFT(FString, FItemInfoStructure, FMirageCallCompleteDynamicDelegate);\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"ticket\":\"YOUR_TICKET\"}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetWearableNFTResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::WearableNFTExample_eventGetWearableNFTResult_Parms), Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics
	{
		struct WearableNFTExample_eventGetWhiteGlassesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetWhiteGlassesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetWhiteGlassesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::WearableNFTExample_eventGetWhiteGlassesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics
	{
		struct WearableNFTExample_eventGetWhiteHatAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetWhiteHatAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetWhiteHatAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::WearableNFTExample_eventGetWhiteHatAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics
	{
		struct WearableNFTExample_eventGetWhiteShoesAddress_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventGetWhiteShoesAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "GetWhiteShoesAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::WearableNFTExample_eventGetWhiteShoesAddress_Parms), Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics
	{
		struct WearableNFTExample_eventMintCharacter_Parms
		{
			FString abi_hash;
			FString to;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_to;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintCharacter_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintCharacter_Parms, to), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintCharacter_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// MintCharacter function is used to mint a character to the user and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param to The address of the user to which the character should be minted.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"safeMint\", \"args:[\"TO_WALLET_ADDRESS\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "MintCharacter function is used to mint a character to the user and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param to The address of the user to which the character should be minted.\n@param Result A callback delegate that will be triggered once a response is received with data.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0x7081F409F750EACD27867c988b4B3771d935Fe16\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"safeMint\", \"args:[\"TO_WALLET_ADDRESS\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "MintCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::WearableNFTExample_eventMintCharacter_Parms), Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_MintCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_MintCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics
	{
		struct WearableNFTExample_eventMintItems_Parms
		{
			FString abi_hash;
			FString to;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
		static const UECodeGen_Private::FStrPropertyParams NewProp_to;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintItems_Parms, abi_hash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintItems_Parms, to), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WearableNFTExample_eventMintItems_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_MirageCallCompleteDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 486823444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// MintItems function is used to mint a batch of items to the user and requires the user confirmation through wallet such as metamask.\n///\n/// The function requires parameters described below and returns nothing.\n/// Inside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\n/// string data will be received in json response for a \"ticket\".\n///\n/// @param abi_hash The hash of the abi string of the contract.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n/// @attention YOUR_ITEM_ADDRESS(s) and YOUR_ITEM_QUANTITY(s) represent each other respectively.\n/// \n/// ### Body\n/// ~~~~~~~~~~~~~~~~~~~~~~~.cpp\n/// {\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"mintBatch\", \"args\":[\"TO_WALLET_ADDRESS\", [\"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\"], [YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY], \\\"0x\\\"]}\n/// ~~~~~~~~~~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "MintItems function is used to mint a batch of items to the user and requires the user confirmation through wallet such as metamask.\n\nThe function requires parameters described below and returns nothing.\nInside the function, A POST request is sent to the Mirage API. The request needs a json body containing a device_id, contract_address, abi_hash, method and args. The format is described in the body section below.\nstring data will be received in json response for a \"ticket\".\n\n@param abi_hash The hash of the abi string of the contract.\n@param Result A callback delegate that will be triggered once a response is received with data.\n@attention YOUR_ITEM_ADDRESS(s) and YOUR_ITEM_QUANTITY(s) represent each other respectively.\n\n### Body\n~~~~~~~~~~~~~~~~~~~~~~~.cpp\n{\"device_id\":\"YOUR_DEVICE_ID\", \"contract_address\":\"0xD0eF33b38D8525728902D90b20d6e2F303B8dc2C\", \"abi_hash\":\"YOUR_ABI_HASH\", \"method\":\"mintBatch\", \"args\":[\"TO_WALLET_ADDRESS\", [\"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\", \"YOUR_ITEM_ADDRESS\"], [YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY, YOUR_ITEM_QUANTITY], \\\"0x\\\"]}\n~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWearableNFTExample, nullptr, "MintItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::WearableNFTExample_eventMintItems_Parms), Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWearableNFTExample_MintItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWearableNFTExample_MintItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWearableNFTExample);
	UClass* Z_Construct_UClass_UWearableNFTExample_NoRegister()
	{
		return UWearableNFTExample::StaticClass();
	}
	struct Z_Construct_UClass_UWearableNFTExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItemContractAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameItemContractAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameItemABI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameItemABI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCharacterContractAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCharacterContractAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCharacterABI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCharacterABI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionGasLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionGasLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWearableNFTExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMirageClient,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWearableNFTExample_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWearableNFTExample_ChangeHat, "ChangeHat" }, // 134483887
		{ &Z_Construct_UFunction_UWearableNFTExample_GameItemSetApproval, "GameItemSetApproval" }, // 4038857616
		{ &Z_Construct_UFunction_UWearableNFTExample_GetBlueGlassesAddress, "GetBlueGlassesAddress" }, // 1713585732
		{ &Z_Construct_UFunction_UWearableNFTExample_GetBlueHatAddress, "GetBlueHatAddress" }, // 4067263466
		{ &Z_Construct_UFunction_UWearableNFTExample_GetBlueShoesAddress, "GetBlueShoesAddress" }, // 2424318612
		{ &Z_Construct_UFunction_UWearableNFTExample_GetCharacterBalance, "GetCharacterBalance" }, // 1526976142
		{ &Z_Construct_UFunction_UWearableNFTExample_GetCharacterTokenId, "GetCharacterTokenId" }, // 3772705915
		{ &Z_Construct_UFunction_UWearableNFTExample_GetHat, "GetHat" }, // 1753405005
		{ &Z_Construct_UFunction_UWearableNFTExample_GetHatAddressByID, "GetHatAddressByID" }, // 765421553
		{ &Z_Construct_UFunction_UWearableNFTExample_GetItemsBalance, "GetItemsBalance" }, // 726230451
		{ &Z_Construct_UFunction_UWearableNFTExample_GetItemValueFromBalances, "GetItemValueFromBalances" }, // 3963406677
		{ &Z_Construct_UFunction_UWearableNFTExample_GetRedGlassesAddress, "GetRedGlassesAddress" }, // 4267804806
		{ &Z_Construct_UFunction_UWearableNFTExample_GetRedHatAddress, "GetRedHatAddress" }, // 1479909792
		{ &Z_Construct_UFunction_UWearableNFTExample_GetRedShoesAddress, "GetRedShoesAddress" }, // 1145151556
		{ &Z_Construct_UFunction_UWearableNFTExample_GetTokenURI, "GetTokenURI" }, // 437013586
		{ &Z_Construct_UFunction_UWearableNFTExample_GetWearableNFTResult, "GetWearableNFTResult" }, // 2556212081
		{ &Z_Construct_UFunction_UWearableNFTExample_GetWhiteGlassesAddress, "GetWhiteGlassesAddress" }, // 268767016
		{ &Z_Construct_UFunction_UWearableNFTExample_GetWhiteHatAddress, "GetWhiteHatAddress" }, // 2222332243
		{ &Z_Construct_UFunction_UWearableNFTExample_GetWhiteShoesAddress, "GetWhiteShoesAddress" }, // 1103047533
		{ &Z_Construct_UFunction_UWearableNFTExample_MintCharacter, "MintCharacter" }, // 896429866
		{ &Z_Construct_UFunction_UWearableNFTExample_MintItems, "MintItems" }, // 2242815788
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// UWearableNFTExample provide various functions to mint character, mint items, get balance and changeHat etc.\n" },
		{ "IncludePath", "WearableNFTExample.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "UWearableNFTExample provide various functions to mint character, mint items, get balance and changeHat etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemContractAddress_MetaData[] = {
		{ "Category", "WearableNFTExample" },
		{ "Comment", "//#ifndef DOXYGEN_SHOULD_SKIP_THIS\x09\n" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
		{ "ToolTip", "#ifndef DOXYGEN_SHOULD_SKIP_THIS" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemContractAddress = { "GameItemContractAddress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWearableNFTExample, GameItemContractAddress), METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemContractAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemContractAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemABI_MetaData[] = {
		{ "Category", "WearableNFTExample" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemABI = { "GameItemABI", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWearableNFTExample, GameItemABI), METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemABI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemABI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterContractAddress_MetaData[] = {
		{ "Category", "WearableNFTExample" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterContractAddress = { "GameCharacterContractAddress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWearableNFTExample, GameCharacterContractAddress), METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterContractAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterContractAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterABI_MetaData[] = {
		{ "Category", "WearableNFTExample" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterABI = { "GameCharacterABI", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWearableNFTExample, GameCharacterABI), METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterABI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterABI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_TransactionGasLimit_MetaData[] = {
		{ "Category", "WearableNFTExample" },
		{ "ModuleRelativePath", "Public/WearableNFTExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_TransactionGasLimit = { "TransactionGasLimit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWearableNFTExample, TransactionGasLimit), METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_TransactionGasLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_TransactionGasLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWearableNFTExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemContractAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameItemABI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterContractAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_GameCharacterABI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWearableNFTExample_Statics::NewProp_TransactionGasLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWearableNFTExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWearableNFTExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWearableNFTExample_Statics::ClassParams = {
		&UWearableNFTExample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWearableNFTExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWearableNFTExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWearableNFTExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWearableNFTExample()
	{
		if (!Z_Registration_Info_UClass_UWearableNFTExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWearableNFTExample.OuterSingleton, Z_Construct_UClass_UWearableNFTExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWearableNFTExample.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UWearableNFTExample>()
	{
		return UWearableNFTExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWearableNFTExample);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWearableNFTExample, UWearableNFTExample::StaticClass, TEXT("UWearableNFTExample"), &Z_Registration_Info_UClass_UWearableNFTExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWearableNFTExample), 2129799957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_3643676508(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
