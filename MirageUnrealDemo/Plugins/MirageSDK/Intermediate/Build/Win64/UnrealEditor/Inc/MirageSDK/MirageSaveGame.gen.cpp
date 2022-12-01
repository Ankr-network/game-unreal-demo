// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirageSDK/Public/MirageSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirageSaveGame() {}
// Cross Module References
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageSaveGame_NoRegister();
	MIRAGESDK_API UClass* Z_Construct_UClass_UMirageSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_MirageSDK();
// End Cross Module References
	void UMirageSaveGame::StaticRegisterNativesUMirageSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirageSaveGame);
	UClass* Z_Construct_UClass_UMirageSaveGame_NoRegister()
	{
		return UMirageSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMirageSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirageSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_MirageSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirageSaveGame.h" },
		{ "ModuleRelativePath", "Public/MirageSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirageSaveGame_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "MirageSDK" },
		{ "ModuleRelativePath", "Public/MirageSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMirageSaveGame_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMirageSaveGame, UniqueId), METADATA_PARAMS(Z_Construct_UClass_UMirageSaveGame_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageSaveGame_Statics::NewProp_UniqueId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirageSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirageSaveGame_Statics::NewProp_UniqueId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirageSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirageSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirageSaveGame_Statics::ClassParams = {
		&UMirageSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirageSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirageSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirageSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirageSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirageSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMirageSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirageSaveGame.OuterSingleton, Z_Construct_UClass_UMirageSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirageSaveGame.OuterSingleton;
	}
	template<> MIRAGESDK_API UClass* StaticClass<UMirageSaveGame>()
	{
		return UMirageSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirageSaveGame);
	struct Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirageSaveGame, UMirageSaveGame::StaticClass, TEXT("UMirageSaveGame"), &Z_Registration_Info_UClass_UMirageSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirageSaveGame), 4289336868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageSaveGame_h_3849402557(TEXT("/Script/MirageSDK"),
		Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
