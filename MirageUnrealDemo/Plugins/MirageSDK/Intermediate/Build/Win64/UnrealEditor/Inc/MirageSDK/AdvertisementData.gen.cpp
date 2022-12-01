// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/AdvertisementData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvertisementData() {}
// Cross Module References
	MIRAGESDK_API UEnum* Z_Construct_UEnum_MirageSDK_EAdvertisementType();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UEnum* Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FRedirectResponse();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FMetaResponse();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementResponse();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementDataStructure();
	MIRAGESDK_API UClass* Z_Construct_UClass_UAdvertisementData_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UAdvertisementData();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdvertisementType;
	static UEnum* EAdvertisementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAdvertisementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAdvertisementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MirageSDK_EAdvertisementType, Z_Construct_UPackage__Script_MirageSDK(), TEXT("EAdvertisementType"));
		}
		return Z_Registration_Info_UEnum_EAdvertisementType.OuterSingleton;
	}
	template<> MIRAGESDK_API UEnum* StaticEnum<EAdvertisementType>()
	{
		return EAdvertisementType_StaticEnum();
	}
	struct Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enumerators[] = {
		{ "EAdvertisementType::banner", (int64)EAdvertisementType::banner },
		{ "EAdvertisementType::full_image", (int64)EAdvertisementType::full_image },
		{ "EAdvertisementType::video", (int64)EAdvertisementType::video },
		{ "EAdvertisementType::rewarded", (int64)EAdvertisementType::rewarded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enum_MetaDataParams[] = {
		{ "banner.Name", "EAdvertisementType::banner" },
		{ "BlueprintType", "true" },
		{ "full_image.Name", "EAdvertisementType::full_image" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
		{ "rewarded.Name", "EAdvertisementType::rewarded" },
		{ "video.Name", "EAdvertisementType::video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		"EAdvertisementType",
		"EAdvertisementType",
		Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MirageSDK_EAdvertisementType()
	{
		if (!Z_Registration_Info_UEnum_EAdvertisementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdvertisementType.InnerSingleton, Z_Construct_UEnum_MirageSDK_EAdvertisementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAdvertisementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdvertisementTextureType;
	static UEnum* EAdvertisementTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAdvertisementTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAdvertisementTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType, Z_Construct_UPackage__Script_MirageSDK(), TEXT("EAdvertisementTextureType"));
		}
		return Z_Registration_Info_UEnum_EAdvertisementTextureType.OuterSingleton;
	}
	template<> MIRAGESDK_API UEnum* StaticEnum<EAdvertisementTextureType>()
	{
		return EAdvertisementTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enumerators[] = {
		{ "EAdvertisementTextureType::E_False", (int64)EAdvertisementTextureType::E_False },
		{ "EAdvertisementTextureType::E_Video", (int64)EAdvertisementTextureType::E_Video },
		{ "EAdvertisementTextureType::E_Image", (int64)EAdvertisementTextureType::E_Image },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_False.Name", "EAdvertisementTextureType::E_False" },
		{ "E_Image.Name", "EAdvertisementTextureType::E_Image" },
		{ "E_Video.Name", "EAdvertisementTextureType::E_Video" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		"EAdvertisementTextureType",
		"EAdvertisementTextureType",
		Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType()
	{
		if (!Z_Registration_Info_UEnum_EAdvertisementTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdvertisementTextureType.InnerSingleton, Z_Construct_UEnum_MirageSDK_EAdvertisementTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAdvertisementTextureType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RedirectResponse;
class UScriptStruct* FRedirectResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RedirectResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RedirectResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRedirectResponse, Z_Construct_UPackage__Script_MirageSDK(), TEXT("RedirectResponse"));
	}
	return Z_Registration_Info_UScriptStruct_RedirectResponse.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FRedirectResponse>()
{
	return FRedirectResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRedirectResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_android_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_android;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ios_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ios;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedirectResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRedirectResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_android_MetaData[] = {
		{ "Category", "RedirectResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_android = { "android", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRedirectResponse, android), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_android_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_android_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_ios_MetaData[] = {
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_ios = { "ios", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRedirectResponse, ios), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_ios_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_ios_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRedirectResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_android,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewProp_ios,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRedirectResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"RedirectResponse",
		sizeof(FRedirectResponse),
		alignof(FRedirectResponse),
		Z_Construct_UScriptStruct_FRedirectResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedirectResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRedirectResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedirectResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRedirectResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_RedirectResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RedirectResponse.InnerSingleton, Z_Construct_UScriptStruct_FRedirectResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RedirectResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaResponse;
class UScriptStruct* FMetaResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaResponse, Z_Construct_UPackage__Script_MirageSDK(), TEXT("MetaResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MetaResponse.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FMetaResponse>()
{
	return FMetaResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetaResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ok_button_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ok_button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cancel_button_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_cancel_button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetaResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_title_MetaData[] = {
		{ "Category", "MetaResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaResponse, title), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_ok_button_MetaData[] = {
		{ "Category", "MetaResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_ok_button = { "ok_button", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaResponse, ok_button), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_ok_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_ok_button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_cancel_button_MetaData[] = {
		{ "Category", "MetaResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_cancel_button = { "cancel_button", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaResponse, cancel_button), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_cancel_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_cancel_button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_description_MetaData[] = {
		{ "Category", "MetaResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetaResponse, description), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_ok_button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_cancel_button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaResponse_Statics::NewProp_description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"MetaResponse",
		sizeof(FMetaResponse),
		alignof(FMetaResponse),
		Z_Construct_UScriptStruct_FMetaResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetaResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetaResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MetaResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaResponse.InnerSingleton, Z_Construct_UScriptStruct_FMetaResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetaResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvertisementResponse;
class UScriptStruct* FAdvertisementResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvertisementResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvertisementResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvertisementResponse, Z_Construct_UPackage__Script_MirageSDK(), TEXT("AdvertisementResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AdvertisementResponse.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FAdvertisementResponse>()
{
	return FAdvertisementResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdvertisementResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ad_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ad_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uuid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expire_at_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expire_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_texture_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_engagement_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_engagement_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_texture_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_width_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_texture_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_height_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_texture_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_texture_orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_required_time_in_seconds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_required_time_in_seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_in_seconds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_time_in_seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_nft_campaign_MetaData[];
#endif
		static void NewProp_is_nft_campaign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_nft_campaign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redirect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_redirect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvertisementResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_ad_type_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_ad_type = { "ad_type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, ad_type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_ad_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_ad_type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_uuid_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_uuid = { "uuid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, uuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_uuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_uuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_expire_at_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_expire_at = { "expire_at", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, expire_at), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_expire_at_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_expire_at_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_url_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_url = { "texture_url", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, texture_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_engagement_url_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_engagement_url = { "engagement_url", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, engagement_url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_engagement_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_engagement_url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_type_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_type = { "texture_type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, texture_type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_width_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_width = { "texture_width", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, texture_width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_height_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_height = { "texture_height", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, texture_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_orientation_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_orientation = { "texture_orientation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, texture_orientation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_required_time_in_seconds_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_required_time_in_seconds = { "required_time_in_seconds", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, required_time_in_seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_required_time_in_seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_required_time_in_seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_time_in_seconds_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_time_in_seconds = { "time_in_seconds", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, time_in_seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_time_in_seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_time_in_seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign_SetBit(void* Obj)
	{
		((FAdvertisementResponse*)Obj)->is_nft_campaign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign = { "is_nft_campaign", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdvertisementResponse), &Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_redirect_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_redirect = { "redirect", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, redirect), Z_Construct_UScriptStruct_FRedirectResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_redirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_redirect_MetaData)) }; // 912906381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_meta_MetaData[] = {
		{ "Category", "AdvertisementResponse" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementResponse, meta), Z_Construct_UScriptStruct_FMetaResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_meta_MetaData)) }; // 2391371905
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_ad_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_uuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_expire_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_engagement_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_texture_orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_required_time_in_seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_time_in_seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_is_nft_campaign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_redirect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewProp_meta,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"AdvertisementResponse",
		sizeof(FAdvertisementResponse),
		alignof(FAdvertisementResponse),
		Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_AdvertisementResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvertisementResponse.InnerSingleton, Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdvertisementResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvertisementDataStructure;
class UScriptStruct* FAdvertisementDataStructure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvertisementDataStructure, Z_Construct_UPackage__Script_MirageSDK(), TEXT("AdvertisementDataStructure"));
	}
	return Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FAdvertisementDataStructure>()
{
	return FAdvertisementDataStructure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvertisementDataStructure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_code_MetaData[] = {
		{ "Category", "AdvertisementDataStructure" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementDataStructure, code), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_error_MetaData[] = {
		{ "Category", "AdvertisementDataStructure" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementDataStructure, error), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_error_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_result_MetaData[] = {
		{ "Category", "AdvertisementDataStructure" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdvertisementDataStructure, result), Z_Construct_UScriptStruct_FAdvertisementResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_result_MetaData)) }; // 629614188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewProp_result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"AdvertisementDataStructure",
		sizeof(FAdvertisementDataStructure),
		alignof(FAdvertisementDataStructure),
		Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvertisementDataStructure()
	{
		if (!Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.InnerSingleton, Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdvertisementDataStructure.InnerSingleton;
	}
	void UAdvertisementData::StaticRegisterNativesUAdvertisementData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvertisementData);
	UClass* Z_Construct_UClass_UAdvertisementData_NoRegister()
	{
		return UAdvertisementData::StaticClass();
	}
	struct Z_Construct_UClass_UAdvertisementData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvertisementData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvertisementData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvertisementData.h" },
		{ "ModuleRelativePath", "Public/AdvertisementData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvertisementData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvertisementData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvertisementData_Statics::ClassParams = {
		&UAdvertisementData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvertisementData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvertisementData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvertisementData()
	{
		if (!Z_Registration_Info_UClass_UAdvertisementData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvertisementData.OuterSingleton, Z_Construct_UClass_UAdvertisementData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvertisementData.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UAdvertisementData>()
	{
		return UAdvertisementData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvertisementData);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::EnumInfo[] = {
		{ EAdvertisementType_StaticEnum, TEXT("EAdvertisementType"), &Z_Registration_Info_UEnum_EAdvertisementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2682419267U) },
		{ EAdvertisementTextureType_StaticEnum, TEXT("EAdvertisementTextureType"), &Z_Registration_Info_UEnum_EAdvertisementTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 977625711U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ScriptStructInfo[] = {
		{ FRedirectResponse::StaticStruct, Z_Construct_UScriptStruct_FRedirectResponse_Statics::NewStructOps, TEXT("RedirectResponse"), &Z_Registration_Info_UScriptStruct_RedirectResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRedirectResponse), 912906381U) },
		{ FMetaResponse::StaticStruct, Z_Construct_UScriptStruct_FMetaResponse_Statics::NewStructOps, TEXT("MetaResponse"), &Z_Registration_Info_UScriptStruct_MetaResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaResponse), 2391371905U) },
		{ FAdvertisementResponse::StaticStruct, Z_Construct_UScriptStruct_FAdvertisementResponse_Statics::NewStructOps, TEXT("AdvertisementResponse"), &Z_Registration_Info_UScriptStruct_AdvertisementResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvertisementResponse), 629614188U) },
		{ FAdvertisementDataStructure::StaticStruct, Z_Construct_UScriptStruct_FAdvertisementDataStructure_Statics::NewStructOps, TEXT("AdvertisementDataStructure"), &Z_Registration_Info_UScriptStruct_AdvertisementDataStructure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvertisementDataStructure), 4285921050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvertisementData, UAdvertisementData::StaticClass, TEXT("UAdvertisementData"), &Z_Registration_Info_UClass_UAdvertisementData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvertisementData), 3392130989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_40567906(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
