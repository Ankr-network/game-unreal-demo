// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/AdvertisementManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvertisementManager() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UAdvertisementManager_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UAdvertisementManager();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClientBase();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementDataStructure();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature();
	MIRAGESDK_API UEnum* Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType();
	MIRAGESDK_API UFunction* Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAdvertisementManager::execGetAdTextureType)
	{
		P_GET_ENUM(EAdvertisementTextureType,Z_Param__adTextureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAdTextureType(EAdvertisementTextureType(Z_Param__adTextureType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execEngageAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param__data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EngageAdvertisement(Z_Param__data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execRewardAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param__data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewardAdvertisement(Z_Param__data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execFinishAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param__data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAdvertisement(Z_Param__data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execCancelAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param__data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAdvertisement(Z_Param__data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execShowAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param__data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAdvertisement(Z_Param__data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execDownloadVideoAdvertisement)
	{
		P_GET_STRUCT(FAdvertisementDataStructure,Z_Param_advertisementData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadVideoAdvertisement(Z_Param_advertisementData,FAdvertisementVideoAdDownloadDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execGetAdvertisement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__unit_id);
		P_GET_ENUM(EAdvertisementTextureType,Z_Param__textureType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_advertisementData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAdvertisement(Z_Param__unit_id,EAdvertisementTextureType(Z_Param__textureType),FAdvertisementReceivedDelegate(Z_Param_Out_advertisementData));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execShowView)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__unitId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowView(Z_Param__unitId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execLoadAd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__unitId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAd(Z_Param__unitId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execInitializeAdvertisement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__appId);
		P_GET_PROPERTY(FStrProperty,Z_Param__deviceId);
		P_GET_PROPERTY(FStrProperty,Z_Param__publicAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param__language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAdvertisement(Z_Param__appId,Z_Param__deviceId,Z_Param__publicAddress,Z_Param__language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvertisementManager::execStartSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSession();
		P_NATIVE_END;
	}
	void UAdvertisementManager::StaticRegisterNativesUAdvertisementManager()
	{
		UClass* Class = UAdvertisementManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAdvertisement", &UAdvertisementManager::execCancelAdvertisement },
			{ "DownloadVideoAdvertisement", &UAdvertisementManager::execDownloadVideoAdvertisement },
			{ "EngageAdvertisement", &UAdvertisementManager::execEngageAdvertisement },
			{ "FinishAdvertisement", &UAdvertisementManager::execFinishAdvertisement },
			{ "GetAdTextureType", &UAdvertisementManager::execGetAdTextureType },
			{ "GetAdvertisement", &UAdvertisementManager::execGetAdvertisement },
			{ "InitializeAdvertisement", &UAdvertisementManager::execInitializeAdvertisement },
			{ "LoadAd", &UAdvertisementManager::execLoadAd },
			{ "RewardAdvertisement", &UAdvertisementManager::execRewardAdvertisement },
			{ "ShowAdvertisement", &UAdvertisementManager::execShowAdvertisement },
			{ "ShowView", &UAdvertisementManager::execShowView },
			{ "StartSession", &UAdvertisementManager::execStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics
	{
		struct AdvertisementManager_eventCancelAdvertisement_Parms
		{
			FAdvertisementDataStructure _data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventCancelAdvertisement_Parms, _data), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::NewProp__data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// CancelAdvertisement function is used to cancel the view ad.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _data The advertisement data  structure that contains the information being requested to the show the ad.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "CancelAdvertisement function is used to cancel the view ad.\n\nThe function requires parameters and returns nothing.\n\n@param _data The advertisement data  structure that contains the information being requested to the show the ad." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "CancelAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::AdvertisementManager_eventCancelAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics
	{
		struct AdvertisementManager_eventDownloadVideoAdvertisement_Parms
		{
			FAdvertisementDataStructure advertisementData;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_advertisementData;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_advertisementData = { "advertisementData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventDownloadVideoAdvertisement_Parms, advertisementData), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventDownloadVideoAdvertisement_Parms, Result), Z_Construct_UDelegateFunction_MirageSDK_AdvertisementVideoAdDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_Result_MetaData)) }; // 502014731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_advertisementData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// DownloadVideoAdvertisement function is used to download the content of the advertisement.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param advertisementData The advertisement structure that contains the download url address.\n/// @param Result A callback delegate that will be triggered once a response is received with data.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "DownloadVideoAdvertisement function is used to download the content of the advertisement.\n\nThe function requires parameters and returns nothing.\n\n@param advertisementData The advertisement structure that contains the download url address.\n@param Result A callback delegate that will be triggered once a response is received with data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "DownloadVideoAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::AdvertisementManager_eventDownloadVideoAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics
	{
		struct AdvertisementManager_eventEngageAdvertisement_Parms
		{
			FAdvertisementDataStructure _data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventEngageAdvertisement_Parms, _data), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::NewProp__data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// EngageAdvertisement function is used to trace the click activities on the ad.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _data The advertisement data  structure that contains the information on the ads.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "EngageAdvertisement function is used to trace the click activities on the ad.\n\nThe function requires parameters and returns nothing.\n\n@param _data The advertisement data  structure that contains the information on the ads." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "EngageAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::AdvertisementManager_eventEngageAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics
	{
		struct AdvertisementManager_eventFinishAdvertisement_Parms
		{
			FAdvertisementDataStructure _data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventFinishAdvertisement_Parms, _data), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::NewProp__data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// FinishAdvertisement function is used to inform when the user has finished watching the ad.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _data The advertisement data  structure that contains the information on the ads.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "FinishAdvertisement function is used to inform when the user has finished watching the ad.\n\nThe function requires parameters and returns nothing.\n\n@param _data The advertisement data  structure that contains the information on the ads." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "FinishAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::AdvertisementManager_eventFinishAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics
	{
		struct AdvertisementManager_eventGetAdTextureType_Parms
		{
			EAdvertisementTextureType _adTextureType;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp__adTextureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp__adTextureType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp__adTextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp__adTextureType = { "_adTextureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventGetAdTextureType_Parms, _adTextureType), Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType, METADATA_PARAMS(nullptr, 0) }; // 977625711
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventGetAdTextureType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp__adTextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp__adTextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetAdTextureType function is used to open the browser when the user clicks on the ad.\n///\n/// The function requires parameters and returns FString.\n///\n/// @param _adTextureType The texture type to be selected.\n/// @return The FString texture type.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "GetAdTextureType function is used to open the browser when the user clicks on the ad.\n\nThe function requires parameters and returns FString.\n\n@param _adTextureType The texture type to be selected.\n@return The FString texture type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "GetAdTextureType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::AdvertisementManager_eventGetAdTextureType_Parms), Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics
	{
		struct AdvertisementManager_eventGetAdvertisement_Parms
		{
			FString _unit_id;
			EAdvertisementTextureType _textureType;
			FScriptDelegate advertisementData;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__unit_id;
		static const UECodeGen_Private::FBytePropertyParams NewProp__textureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp__textureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_advertisementData_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_advertisementData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__unit_id = { "_unit_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventGetAdvertisement_Parms, _unit_id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__textureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__textureType = { "_textureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventGetAdvertisement_Parms, _textureType), Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType, METADATA_PARAMS(nullptr, 0) }; // 977625711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp_advertisementData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp_advertisementData = { "advertisementData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventGetAdvertisement_Parms, advertisementData), Z_Construct_UDelegateFunction_MirageSDK_AdvertisementReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp_advertisementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp_advertisementData_MetaData)) }; // 729942678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__unit_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__textureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp__textureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::NewProp_advertisementData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// GetAdvertisement function is used to get the advertisement information.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _unit_id The unit id of the advertisement.\n/// @param _textureType Whether the type of the texture would be 'image' or 'video'.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "GetAdvertisement function is used to get the advertisement information.\n\nThe function requires parameters and returns nothing.\n\n@param _unit_id The unit id of the advertisement.\n@param _textureType Whether the type of the texture would be 'image' or 'video'." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "GetAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::AdvertisementManager_eventGetAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics
	{
		struct AdvertisementManager_eventInitializeAdvertisement_Parms
		{
			FString _appId;
			FString _deviceId;
			FString _publicAddress;
			FString _language;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__appId;
		static const UECodeGen_Private::FStrPropertyParams NewProp__deviceId;
		static const UECodeGen_Private::FStrPropertyParams NewProp__publicAddress;
		static const UECodeGen_Private::FStrPropertyParams NewProp__language;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__appId = { "_appId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventInitializeAdvertisement_Parms, _appId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__deviceId = { "_deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventInitializeAdvertisement_Parms, _deviceId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__publicAddress = { "_publicAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventInitializeAdvertisement_Parms, _publicAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__language = { "_language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventInitializeAdvertisement_Parms, _language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__appId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__publicAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::NewProp__language,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// InitializeAdvertisement function is used to set the app id, device id, public address and language for the ads.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _appId The app id for the advertisement.\n/// @param _deviceId The device id that the MirageSDK is using.\n/// @param _publicAddress The wallet address of the user logged in.\n/// @param _language The language to be used for the advertisement.\n/// @attention This function also loads native ads libraries for iOS and Android.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "InitializeAdvertisement function is used to set the app id, device id, public address and language for the ads.\n\nThe function requires parameters and returns nothing.\n\n@param _appId The app id for the advertisement.\n@param _deviceId The device id that the MirageSDK is using.\n@param _publicAddress The wallet address of the user logged in.\n@param _language The language to be used for the advertisement.\n@attention This function also loads native ads libraries for iOS and Android." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "InitializeAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::AdvertisementManager_eventInitializeAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics
	{
		struct AdvertisementManager_eventLoadAd_Parms
		{
			FString _unitId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__unitId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::NewProp__unitId = { "_unitId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventLoadAd_Parms, _unitId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::NewProp__unitId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// LoadAd function is used to load the ads for the specified ad unit id.\n///\n/// The function requires a parameter and returns nothing.\n///\n/// @param _unitId The unit id of the advertisement.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "LoadAd function is used to load the ads for the specified ad unit id.\n\nThe function requires a parameter and returns nothing.\n\n@param _unitId The unit id of the advertisement." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "LoadAd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::AdvertisementManager_eventLoadAd_Parms), Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_LoadAd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_LoadAd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics
	{
		struct AdvertisementManager_eventRewardAdvertisement_Parms
		{
			FAdvertisementDataStructure _data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventRewardAdvertisement_Parms, _data), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::NewProp__data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// RewardAdvertisement function is used to inform when the user has finished watching rewarded ad and earned reward.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _data The advertisement data  structure that contains the information on the ads.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "RewardAdvertisement function is used to inform when the user has finished watching rewarded ad and earned reward.\n\nThe function requires parameters and returns nothing.\n\n@param _data The advertisement data  structure that contains the information on the ads." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "RewardAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::AdvertisementManager_eventRewardAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics
	{
		struct AdvertisementManager_eventShowAdvertisement_Parms
		{
			FAdvertisementDataStructure _data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventShowAdvertisement_Parms, _data), Z_Construct_UScriptStruct_FAdvertisementDataStructure, METADATA_PARAMS(nullptr, 0) }; // 4285921050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::NewProp__data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// ShowAdvertisement function is used to show the advertisement on the screen.\n///\n/// The function requires parameters and returns nothing.\n///\n/// @param _data The advertisement data  structure that contains the information to show the ad.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "ShowAdvertisement function is used to show the advertisement on the screen.\n\nThe function requires parameters and returns nothing.\n\n@param _data The advertisement data  structure that contains the information to show the ad." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "ShowAdvertisement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::AdvertisementManager_eventShowAdvertisement_Parms), Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics
	{
		struct AdvertisementManager_eventShowView_Parms
		{
			FString _unitId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__unitId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::NewProp__unitId = { "_unitId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvertisementManager_eventShowView_Parms, _unitId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::NewProp__unitId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// ShowView function is used to show the ads for the specified ad unit id.\n///\n/// The function requires a parameter and returns nothing.\n///\n/// @param _unitId The unit id of the advertisement.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "ShowView function is used to show the ads for the specified ad unit id.\n\nThe function requires a parameter and returns nothing.\n\n@param _unitId The unit id of the advertisement." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "ShowView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::AdvertisementManager_eventShowView_Parms), Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_ShowView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_ShowView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIRAGE SDK" },
		{ "Comment", "/// StartSession function is used to start a new advertisement session.\n///\n/// The function does not require parameter and returns nothing.\n/// The function is called once at the start of the app and once session gets expired.\n///\n/// @param Result A callback delegate that will be triggered once a response is received with a data.\n" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "StartSession function is used to start a new advertisement session.\n\nThe function does not require parameter and returns nothing.\nThe function is called once at the start of the app and once session gets expired.\n\n@param Result A callback delegate that will be triggered once a response is received with a data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvertisementManager, nullptr, "StartSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvertisementManager_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAdvertisementManager_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvertisementManager);
	UClass* Z_Construct_UClass_UAdvertisementManager_NoRegister()
	{
		return UAdvertisementManager::StaticClass();
	}
	struct Z_Construct_UClass_UAdvertisementManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvertisementManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMirageClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvertisementManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvertisementManager_CancelAdvertisement, "CancelAdvertisement" }, // 1975710529
		{ &Z_Construct_UFunction_UAdvertisementManager_DownloadVideoAdvertisement, "DownloadVideoAdvertisement" }, // 946655758
		{ &Z_Construct_UFunction_UAdvertisementManager_EngageAdvertisement, "EngageAdvertisement" }, // 4149378255
		{ &Z_Construct_UFunction_UAdvertisementManager_FinishAdvertisement, "FinishAdvertisement" }, // 4164450461
		{ &Z_Construct_UFunction_UAdvertisementManager_GetAdTextureType, "GetAdTextureType" }, // 802840982
		{ &Z_Construct_UFunction_UAdvertisementManager_GetAdvertisement, "GetAdvertisement" }, // 3910905479
		{ &Z_Construct_UFunction_UAdvertisementManager_InitializeAdvertisement, "InitializeAdvertisement" }, // 193973315
		{ &Z_Construct_UFunction_UAdvertisementManager_LoadAd, "LoadAd" }, // 2104737520
		{ &Z_Construct_UFunction_UAdvertisementManager_RewardAdvertisement, "RewardAdvertisement" }, // 1643057680
		{ &Z_Construct_UFunction_UAdvertisementManager_ShowAdvertisement, "ShowAdvertisement" }, // 3370290545
		{ &Z_Construct_UFunction_UAdvertisementManager_ShowView, "ShowView" }, // 3564462914
		{ &Z_Construct_UFunction_UAdvertisementManager_StartSession, "StartSession" }, // 1509391240
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvertisementManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// AdvertisementManager provides functionalities to load and show ads for various platforms.\n" },
		{ "IncludePath", "AdvertisementManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdvertisementManager.h" },
		{ "ToolTip", "AdvertisementManager provides functionalities to load and show ads for various platforms." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvertisementManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvertisementManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvertisementManager_Statics::ClassParams = {
		&UAdvertisementManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvertisementManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvertisementManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvertisementManager()
	{
		if (!Z_Registration_Info_UClass_UAdvertisementManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvertisementManager.OuterSingleton, Z_Construct_UClass_UAdvertisementManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvertisementManager.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UAdvertisementManager>()
	{
		return UAdvertisementManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvertisementManager);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvertisementManager, UAdvertisementManager::StaticClass, TEXT("UAdvertisementManager"), &Z_Registration_Info_UClass_UAdvertisementManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvertisementManager), 3702745778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_1692768483(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
