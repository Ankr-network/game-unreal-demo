// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FHttpModule* Http;
	FString clientId;
	FString baseUrl = "http://192.168.200.31:3000/";

	/* The actual HTTP call */
	UFUNCTION(BlueprintCallable, Category = "Test")
		void GetClient();

	UFUNCTION(BlueprintCallable, Category = "Test")
		void SendTransaction();

	/*Assign this function to call when the GET request processes sucessfully*/
	void OnGetClientResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnSendTransactionResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

};
