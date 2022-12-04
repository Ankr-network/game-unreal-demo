// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MirageClient.h"
#include "UpdateNFTExample.h"
#include "WearableNFTExample.h"
#include "AdvertisementManager.h"
#include "MirageDelegates.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MIRAGEUNREALSDK_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, VisibleAnywhere, Category = "MirageSDK")
	FApplicationResume onApplicationResume;

	FDelegateHandle hndl_AppWillEnterBackground;
	FDelegateHandle hndl_AppHasEnteredForground;
	FDelegateHandle hndl_ApplicationWillDeactivate;
	bool lostFocus;

	UMyGameInstance();
	~UMyGameInstance();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MirageSDK")
	UMirageClient* mirageClient;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MirageSDK")
	UUpdateNFTExample* updateNFTExample;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MirageSDK")
	UWearableNFTExample* wearableNFTExample;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MirageSDK")
	UAdvertisementManager* advertisementManager;

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
	UMirageClient* GetMirageClient();

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
	UUpdateNFTExample* GetUpdateNFTExample();

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
	UWearableNFTExample* GetWearableNFTExample();

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
	UAdvertisementManager* GetAdvertisementManager();

	void OnMobileFocusLost();
	void OnMobileFocusGained();
	void OnMobileAppDeactivated();

	UFUNCTION()
	void OnApplicationResumed();
};
