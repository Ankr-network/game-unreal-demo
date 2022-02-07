// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "MenuWidget.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FMirageDelegate, FString, StringOut);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMirageConnectionStatus, bool, status);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMirageTicket, FString, TicketId);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FMirageTicketResult, FString, Status, int, Code);

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
	FString baseUrl = "http://45.77.189.28:5000/";
	FString deviceId = GetDeviceId(); // FGenericPlatformMisc::GetHashedMacAddressString();

	/* The actual HTTP call */
	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
		bool GetClient(FMirageConnectionStatus Callback);

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
		void GetData(FString contract, FString abi, FString method, FString args, FMirageDelegate Result);

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
		void SendTransaction(FString contract, FString abi, FString method, FString args, FMirageTicket Ticket);

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
		void GetTicketResult(FString ticketId, FMirageTicketResult Result);

	UFUNCTION(BlueprintCallable, Category = "MirageSDK")
		void SendABI(FString abi, FMirageDelegate Result);

	FString GetDeviceId();
};
