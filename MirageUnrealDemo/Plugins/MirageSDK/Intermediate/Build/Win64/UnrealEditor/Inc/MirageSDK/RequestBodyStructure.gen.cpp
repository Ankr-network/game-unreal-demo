// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/RequestBodyStructure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestBodyStructure() {}
// Cross Module References
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FRequestBodyStruct();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
	MIRAGESDK_API UScriptStruct* Z_Construct_UScriptStruct_FItemInfoStructure();
	MIRAGESDK_API UClass* Z_Construct_UClass_URequestBodyStructure_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_URequestBodyStructure();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestBodyStruct;
class UScriptStruct* FRequestBodyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestBodyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestBodyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestBodyStruct, Z_Construct_UPackage__Script_MirageSDK(), TEXT("RequestBodyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RequestBodyStruct.OuterSingleton;
}
template<> MIRAGESDK_API UScriptStruct* StaticStruct<FRequestBodyStruct>()
{
	return FRequestBodyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestBodyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_device_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contract_address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_contract_address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abi_hash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_abi_hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_method;
		static const UECodeGen_Private::FStructPropertyParams NewProp_args_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_args;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestBodyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_device_id_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_device_id = { "device_id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestBodyStruct, device_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_device_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_device_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_contract_address_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_contract_address = { "contract_address", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestBodyStruct, contract_address), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_contract_address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_contract_address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_abi_hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_abi_hash = { "abi_hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestBodyStruct, abi_hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_abi_hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_abi_hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_method_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestBodyStruct, method), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_method_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args_Inner = { "args", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemInfoStructure, METADATA_PARAMS(nullptr, 0) }; // 4280734622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestBodyStruct, args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args_MetaData)) }; // 4280734622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_device_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_contract_address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_abi_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewProp_args,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
		nullptr,
		&NewStructOps,
		"RequestBodyStruct",
		sizeof(FRequestBodyStruct),
		alignof(FRequestBodyStruct),
		Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestBodyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestBodyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestBodyStruct.InnerSingleton, Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestBodyStruct.InnerSingleton;
	}
	void URequestBodyStructure::StaticRegisterNativesURequestBodyStructure()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URequestBodyStructure);
	UClass* Z_Construct_UClass_URequestBodyStructure_NoRegister()
	{
		return URequestBodyStructure::StaticClass();
	}
	struct Z_Construct_UClass_URequestBodyStructure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequestBodyStructure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestBodyStructure_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RequestBodyStructure.h" },
		{ "ModuleRelativePath", "Public/RequestBodyStructure.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestBodyStructure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestBodyStructure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestBodyStructure_Statics::ClassParams = {
		&URequestBodyStructure::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URequestBodyStructure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestBodyStructure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestBodyStructure()
	{
		if (!Z_Registration_Info_UClass_URequestBodyStructure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestBodyStructure.OuterSingleton, Z_Construct_UClass_URequestBodyStructure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URequestBodyStructure.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<URequestBodyStructure>()
	{
		return URequestBodyStructure::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestBodyStructure);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ScriptStructInfo[] = {
		{ FRequestBodyStruct::StaticStruct, Z_Construct_UScriptStruct_FRequestBodyStruct_Statics::NewStructOps, TEXT("RequestBodyStruct"), &Z_Registration_Info_UScriptStruct_RequestBodyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestBodyStruct), 3337299680U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URequestBodyStructure, URequestBodyStructure::StaticClass, TEXT("URequestBodyStructure"), &Z_Registration_Info_UClass_URequestBodyStructure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestBodyStructure), 1392640821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_1066492716(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_RequestBodyStructure_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
