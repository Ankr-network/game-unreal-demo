#pragma once

#include "AnkrDelegates.generated.h"

DECLARE_DYNAMIC_DELEGATE_FiveParams(FAnkrCallCompleteDynamicDelegate, FString, response, FString, data, FString, optionalData, int, optionalCode, bool, optionalBool);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FApplicationResume);

UCLASS()
class ANKRSDK_API UAnkrDelegates : public UObject
{
	GENERATED_BODY()
};