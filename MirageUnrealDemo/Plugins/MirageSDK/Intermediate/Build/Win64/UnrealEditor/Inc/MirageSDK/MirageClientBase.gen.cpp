// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/MirageClientBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageClientBase() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClientBase_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageClientBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
// End Cross Module References
	void UMirageClientBase::StaticRegisterNativesUMirageClientBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirageClientBase);
	UClass* Z_Construct_UClass_UMirageClientBase_NoRegister()
	{
		return UMirageClientBase::StaticClass();
	}
	struct Z_Construct_UClass_UMirageClientBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirageClientBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageClientBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// UMirageClientBase is a  class that provides helper functions to send GET or POST requests asynchronously.\n" },
		{ "IncludePath", "MirageClientBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MirageClientBase.h" },
		{ "ToolTip", "UMirageClientBase is a  class that provides helper functions to send GET or POST requests asynchronously." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirageClientBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirageClientBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirageClientBase_Statics::ClassParams = {
		&UMirageClientBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMirageClientBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageClientBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirageClientBase()
	{
		if (!Z_Registration_Info_UClass_UMirageClientBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirageClientBase.OuterSingleton, Z_Construct_UClass_UMirageClientBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirageClientBase.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UMirageClientBase>()
	{
		return UMirageClientBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirageClientBase);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClientBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClientBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirageClientBase, UMirageClientBase::StaticClass, TEXT("UMirageClientBase"), &Z_Registration_Info_UClass_UMirageClientBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirageClientBase), 3914502863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClientBase_h_3799956909(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClientBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageClientBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
