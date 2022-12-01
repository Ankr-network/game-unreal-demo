// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdvertisementDataStructure;
#ifdef MIRAGESDK_MirageDelegates_generated_h
#error "MirageDelegates.generated.h already included, missing '#pragma once' in MirageDelegates.h"
#endif
#define MIRAGESDK_MirageDelegates_generated_h

#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_6_DELEGATE \
struct _Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms \
{ \
	FString response; \
	FString data; \
	FString optionalData; \
	int32 optionalCode; \
	bool optionalBool; \
}; \
static inline void FMirageCallCompleteDynamicDelegate_DelegateWrapper(const FScriptDelegate& MirageCallCompleteDynamicDelegate, const FString& response, const FString& data, const FString& optionalData, int32 optionalCode, bool optionalBool) \
{ \
	_Script_MirageSDK_eventMirageCallCompleteDynamicDelegate_Parms Parms; \
	Parms.response=response; \
	Parms.data=data; \
	Parms.optionalData=optionalData; \
	Parms.optionalCode=optionalCode; \
	Parms.optionalBool=optionalBool ? true : false; \
	MirageCallCompleteDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_7_DELEGATE \
static inline void FApplicationResume_DelegateWrapper(const FMulticastScriptDelegate& ApplicationResume) \
{ \
	ApplicationResume.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_8_DELEGATE \
struct _Script_MirageSDK_eventAdvertisementReceivedDelegate_Parms \
{ \
	FAdvertisementDataStructure advertisementData; \
}; \
static inline void FAdvertisementReceivedDelegate_DelegateWrapper(const FScriptDelegate& AdvertisementReceivedDelegate, FAdvertisementDataStructure advertisementData) \
{ \
	_Script_MirageSDK_eventAdvertisementReceivedDelegate_Parms Parms; \
	Parms.advertisementData=advertisementData; \
	AdvertisementReceivedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_9_DELEGATE \
struct _Script_MirageSDK_eventAdvertisementVideoAdDownloadDelegate_Parms \
{ \
	FString path; \
}; \
static inline void FAdvertisementVideoAdDownloadDelegate_DelegateWrapper(const FScriptDelegate& AdvertisementVideoAdDownloadDelegate, const FString& path) \
{ \
	_Script_MirageSDK_eventAdvertisementVideoAdDownloadDelegate_Parms Parms; \
	Parms.path=path; \
	AdvertisementVideoAdDownloadDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_SPARSE_DATA
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_RPC_WRAPPERS
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirageDelegates(); \
	friend struct Z_Construct_UClass_UMirageDelegates_Statics; \
public: \
	DECLARE_CLASS(UMirageDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UMirageDelegates)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMirageDelegates(); \
	friend struct Z_Construct_UClass_UMirageDelegates_Statics; \
public: \
	DECLARE_CLASS(UMirageDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MirageSDK"), NO_API) \
	DECLARE_SERIALIZER(UMirageDelegates)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMirageDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirageDelegates) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMirageDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirageDelegates); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMirageDelegates(UMirageDelegates&&); \
	NO_API UMirageDelegates(const UMirageDelegates&); \
public:


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMirageDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMirageDelegates(UMirageDelegates&&); \
	NO_API UMirageDelegates(const UMirageDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMirageDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirageDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirageDelegates)


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_11_PROLOG
#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_RPC_WRAPPERS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_INCLASS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_SPARSE_DATA \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_INCLASS_NO_PURE_DECLS \
	FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRAGESDK_API UClass* StaticClass<class UMirageDelegates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnkrUnrealDemo_Plugins_MirageSDK_Source_MirageSDK_Public_MirageDelegates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
