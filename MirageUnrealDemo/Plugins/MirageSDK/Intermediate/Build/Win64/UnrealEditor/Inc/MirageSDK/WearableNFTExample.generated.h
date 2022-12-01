// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRAGESDK_WearableNFTExample_generated_h
#error "WearableNFTExample.generated.h already included, missing '#pragma once' in WearableNFTExample.h"
#endif
#define MIRAGESDK_WearableNFTExample_generated_h

#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_SPARSE_DATA
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHatAddressByID); \
	DECLARE_FUNCTION(execGetTokenURI); \
	DECLARE_FUNCTION(execGetItemValueFromBalances); \
	DECLARE_FUNCTION(execGetItemsBalance); \
	DECLARE_FUNCTION(execGetWearableNFTResult); \
	DECLARE_FUNCTION(execGetHat); \
	DECLARE_FUNCTION(execChangeHat); \
	DECLARE_FUNCTION(execGetCharacterTokenId); \
	DECLARE_FUNCTION(execGetCharacterBalance); \
	DECLARE_FUNCTION(execGameItemSetApproval); \
	DECLARE_FUNCTION(execMintCharacter); \
	DECLARE_FUNCTION(execMintItems); \
	DECLARE_FUNCTION(execGetWhiteGlassesAddress); \
	DECLARE_FUNCTION(execGetRedGlassesAddress); \
	DECLARE_FUNCTION(execGetBlueGlassesAddress); \
	DECLARE_FUNCTION(execGetWhiteShoesAddress); \
	DECLARE_FUNCTION(execGetRedShoesAddress); \
	DECLARE_FUNCTION(execGetBlueShoesAddress); \
	DECLARE_FUNCTION(execGetWhiteHatAddress); \
	DECLARE_FUNCTION(execGetRedHatAddress); \
	DECLARE_FUNCTION(execGetBlueHatAddress);


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHatAddressByID); \
	DECLARE_FUNCTION(execGetTokenURI); \
	DECLARE_FUNCTION(execGetItemValueFromBalances); \
	DECLARE_FUNCTION(execGetItemsBalance); \
	DECLARE_FUNCTION(execGetWearableNFTResult); \
	DECLARE_FUNCTION(execGetHat); \
	DECLARE_FUNCTION(execChangeHat); \
	DECLARE_FUNCTION(execGetCharacterTokenId); \
	DECLARE_FUNCTION(execGetCharacterBalance); \
	DECLARE_FUNCTION(execGameItemSetApproval); \
	DECLARE_FUNCTION(execMintCharacter); \
	DECLARE_FUNCTION(execMintItems); \
	DECLARE_FUNCTION(execGetWhiteGlassesAddress); \
	DECLARE_FUNCTION(execGetRedGlassesAddress); \
	DECLARE_FUNCTION(execGetBlueGlassesAddress); \
	DECLARE_FUNCTION(execGetWhiteShoesAddress); \
	DECLARE_FUNCTION(execGetRedShoesAddress); \
	DECLARE_FUNCTION(execGetBlueShoesAddress); \
	DECLARE_FUNCTION(execGetWhiteHatAddress); \
	DECLARE_FUNCTION(execGetRedHatAddress); \
	DECLARE_FUNCTION(execGetBlueHatAddress);


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWearableNFTExample(); \
	friend struct Z_Construct_UClass_UWearableNFTExample_Statics; \
public: \
	DECLARE_CLASS(UWearableNFTExample, UMirageClient, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UWearableNFTExample)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWearableNFTExample(); \
	friend struct Z_Construct_UClass_UWearableNFTExample_Statics; \
public: \
	DECLARE_CLASS(UWearableNFTExample, UMirageClient, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UWearableNFTExample)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearableNFTExample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearableNFTExample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearableNFTExample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearableNFTExample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearableNFTExample(UWearableNFTExample&&); \
	NO_API UWearableNFTExample(const UWearableNFTExample&); \
public:


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearableNFTExample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearableNFTExample(UWearableNFTExample&&); \
	NO_API UWearableNFTExample(const UWearableNFTExample&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearableNFTExample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearableNFTExample); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearableNFTExample)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_17_PROLOG
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_RPC_WRAPPERS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_INCLASS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_INCLASS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WearableNFTExample."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRAGESDK_API UClass* StaticClass<class UWearableNFTExample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_WearableNFTExample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
