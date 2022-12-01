// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAdvertisementTextureType : uint8;
struct FAdvertisementDataStructure;
#ifdef MIRAGESDK_AdvertisementManager_generated_h
#error "AdvertisementManager.generated.h already included, missing '#pragma once' in AdvertisementManager.h"
#endif
#define MIRAGESDK_AdvertisementManager_generated_h

#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_SPARSE_DATA
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAdTextureType); \
	DECLARE_FUNCTION(execEngageAdvertisement); \
	DECLARE_FUNCTION(execRewardAdvertisement); \
	DECLARE_FUNCTION(execFinishAdvertisement); \
	DECLARE_FUNCTION(execCancelAdvertisement); \
	DECLARE_FUNCTION(execShowAdvertisement); \
	DECLARE_FUNCTION(execDownloadVideoAdvertisement); \
	DECLARE_FUNCTION(execGetAdvertisement); \
	DECLARE_FUNCTION(execShowView); \
	DECLARE_FUNCTION(execLoadAd); \
	DECLARE_FUNCTION(execInitializeAdvertisement); \
	DECLARE_FUNCTION(execStartSession);


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdTextureType); \
	DECLARE_FUNCTION(execEngageAdvertisement); \
	DECLARE_FUNCTION(execRewardAdvertisement); \
	DECLARE_FUNCTION(execFinishAdvertisement); \
	DECLARE_FUNCTION(execCancelAdvertisement); \
	DECLARE_FUNCTION(execShowAdvertisement); \
	DECLARE_FUNCTION(execDownloadVideoAdvertisement); \
	DECLARE_FUNCTION(execGetAdvertisement); \
	DECLARE_FUNCTION(execShowView); \
	DECLARE_FUNCTION(execLoadAd); \
	DECLARE_FUNCTION(execInitializeAdvertisement); \
	DECLARE_FUNCTION(execStartSession);


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvertisementManager(); \
	friend struct Z_Construct_UClass_UAdvertisementManager_Statics; \
public: \
	DECLARE_CLASS(UAdvertisementManager, UMirageClientBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UAdvertisementManager)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAdvertisementManager(); \
	friend struct Z_Construct_UClass_UAdvertisementManager_Statics; \
public: \
	DECLARE_CLASS(UAdvertisementManager, UMirageClientBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UAdvertisementManager)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvertisementManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvertisementManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvertisementManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvertisementManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvertisementManager(UAdvertisementManager&&); \
	NO_API UAdvertisementManager(const UAdvertisementManager&); \
public:


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvertisementManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvertisementManager(UAdvertisementManager&&); \
	NO_API UAdvertisementManager(const UAdvertisementManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvertisementManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvertisementManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvertisementManager)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_22_PROLOG
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_RPC_WRAPPERS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_INCLASS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_INCLASS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AdvertisementManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRAGESDK_API UClass* StaticClass<class UAdvertisementManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_AdvertisementManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
