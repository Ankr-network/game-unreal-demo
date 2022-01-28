// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidget.h"
#include <string>

void UMenuWidget::GetClient()
{
	Http = &FHttpModule::Get();

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UMenuWidget::OnGetClientResponseReceived);
	FString url = baseUrl + "getClient";
	Request->SetURL(url);
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-MirageSDK-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

/*Assigned function on successfull http call*/
void UMenuWidget::OnGetClientResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	// Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		// Get the value of the json object by field name
		FString recievedUri = JsonObject->GetStringField("uri");

		// Output it to the engine for debug
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, recievedUri);

		// Set recievedUri as clientId for future calls
		clientId = recievedUri;

		// Open Metamask
		FPlatformProcess::LaunchURL(recievedUri.GetCharArray().GetData(), NULL, NULL);
	}
}

void UMenuWidget::SendTransaction()
{
	Http = &FHttpModule::Get();

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UMenuWidget::OnSendTransactionResponseReceived);
	FString url = baseUrl + "sendTransaction";
	Request->SetURL(url);
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-MirageSDK-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	// Send clientId to backend to redirect metamask 
	Request->SetContentAsString("{\"client_id\": \"" + clientId + "\"}");
	Request->ProcessRequest();
}

void UMenuWidget::OnSendTransactionResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		FString recievedUri = JsonObject->GetStringField("uri");

		// Output it to the engine for debug
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, recievedUri);

		// Open Metamask
		FPlatformProcess::LaunchURL(recievedUri.GetCharArray().GetData(), NULL, NULL);
	}
}
