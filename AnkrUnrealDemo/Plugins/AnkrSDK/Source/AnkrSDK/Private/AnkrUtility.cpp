#include "AnkrUtility.h"
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Math/BigInt.h"

void UAnkrUtility::SetDevelopment(bool _value)
{
	IsDevelopment = _value;
}

FString UAnkrUtility::GetUrl()
{
	return IsDevelopment ? API_DEVELOPMENT_URL : API_PRODUCTION_URL;
}

FString UAnkrUtility::GetAdUrl()
{
	return IsDevelopment ? API_AD_DEVELOPMENT_URL : API_AD_PRODUCTION_URL;
}
FString UAnkrUtility::GetStatUrl()
{
	return API_STATISTICS_URL;
}

FString UAnkrUtility::GetLastRequest()
{
	return LastRequest;
}

void UAnkrUtility::SetLastRequest(FString _lastRequest)
{
	LastRequest = _lastRequest;
}

FString UAnkrUtility::GetDefaultERC20()
{
	return DefaultERC20;
}
FString UAnkrUtility::GetDefaultERC721()
{
	return DefaultERC721;
}
FString UAnkrUtility::GetDefaultERC1155()
{
	return DefaultERC1155;
}

FString UAnkrUtility::GetDeviceID()
{
	return DeviceID;
}
void UAnkrUtility::SetDeviceID(FString _deviceId)
{
	DeviceID = _deviceId;
}

FString UAnkrUtility::GetSession()
{
	return Session;
}
void UAnkrUtility::SetSession(FString _session)
{
	Session = _session;
}

FString UAnkrUtility::GetWalletConnectDeepLink()
{
	return WalletConnectDeepLink;
}
void UAnkrUtility::SetWalletConnectDeepLink(FString _walletConnectDeepLink)
{
	WalletConnectDeepLink = _walletConnectDeepLink;
}

bool UAnkrUtility::GetNeedLogin()
{
	return NeedLogin;
}
void UAnkrUtility::SetNeedLogin(bool _needLogin)
{
	NeedLogin = _needLogin;
}

void UAnkrUtility::AddWalletAddress(FString _address)
{
	if (!Accounts.Contains(_address))
	{
		Accounts.Add(_address);
	}
}
FString UAnkrUtility::GetWalletAddress()
{
	if (Accounts.Num() > 0)
	{
		return Accounts[0];
	}
	
	return FString("");
}

int UAnkrUtility::GetChainID()
{
	return ChainID;
}

void UAnkrUtility::SetChainID(int _chainId)
{
	ChainID = _chainId;
}

FString UAnkrUtility::GetAdvertisementAppID()
{
	return AdvertisementAppID;
}
void UAnkrUtility::SetAdvertisementAppID(FString _appId)
{
	AdvertisementAppID = _appId;
}
FString UAnkrUtility::GetLanguage()
{
	return Language;
}
void UAnkrUtility::SetLanguage(FString _language)
{
	Language = _language;
}

void UAnkrUtility::Reset()
{
	LastRequest = FString("");
	DeviceID = FString("");
	Session = FString("");
	WalletConnectDeepLink = FString("");
	NeedLogin = true;
	Accounts.Reset();
	ChainID = -1;
}

std::string UAnkrUtility::FStringToStdString(FString fstring)
{
	std::string conversion = std::string(TCHAR_TO_UTF8(*fstring));

	return conversion;
}
FString UAnkrUtility::StdStringToFString(std::string stdstring)
{
	FString conversion(stdstring.c_str());

	return conversion;
}
