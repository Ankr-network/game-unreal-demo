// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/ItemInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInfo() {}
// Cross Module References
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FItemInfoStructure();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UClass* Z_Construct_UClass_UItemInfo_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UItemInfo();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInfoStructure;
class UScriptStruct* FItemInfoStructure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInfoStructure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInfoStructure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInfoStructure, Z_Construct_UPackage__Script_MirageSDK(), TEXT("ItemInfoStructure"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInfoStructure.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FItemInfoStructure>()
{
	return FItemInfoStructure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemInfoStructure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tokenId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tokenId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemType_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_strength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_expireTime_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expireTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_signature_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_signature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInfoStructure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_tokenId_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_tokenId = { "tokenId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, tokenId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_tokenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_tokenId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_itemType_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_itemType = { "itemType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, itemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_itemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_itemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_strength_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_level_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, level), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_expireTime_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_expireTime = { "expireTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, expireTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_expireTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_expireTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_signature_MetaData[] = {
		{ "Category", "ItemInfoStructure" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_signature = { "signature", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInfoStructure, signature), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_signature_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInfoStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_tokenId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_itemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_expireTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewProp_signature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInfoStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"ItemInfoStructure",
		sizeof(FItemInfoStructure),
		alignof(FItemInfoStructure),
		Z_Construct_UScriptStruct_FItemInfoStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInfoStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemInfoStructure()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemInfoStructure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInfoStructure.InnerSingleton, Z_Construct_UScriptStruct_FItemInfoStructure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemInfoStructure.InnerSingleton;
	}
	void UItemInfo::StaticRegisterNativesUItemInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemInfo);
	UClass* Z_Construct_UClass_UItemInfo_NoRegister()
	{
		return UItemInfo::StaticClass();
	}
	struct Z_Construct_UClass_UItemInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemInfo.h" },
		{ "ModuleRelativePath", "Public/ItemInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInfo_Statics::ClassParams = {
		&UItemInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInfo()
	{
		if (!Z_Registration_Info_UClass_UItemInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInfo.OuterSingleton, Z_Construct_UClass_UItemInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemInfo.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UItemInfo>()
	{
		return UItemInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInfo);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ScriptStructInfo[] = {
		{ FItemInfoStructure::StaticStruct, Z_Construct_UScriptStruct_FItemInfoStructure_Statics::NewStructOps, TEXT("ItemInfoStructure"), &Z_Registration_Info_UScriptStruct_ItemInfoStructure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInfoStructure), 4280734622U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemInfo, UItemInfo::StaticClass, TEXT("UItemInfo"), &Z_Registration_Info_UClass_UItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInfo), 597343172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_3143974184(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_ItemInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
