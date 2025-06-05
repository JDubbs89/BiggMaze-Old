// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "BMBeaconClient.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API ABMBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
	
public:
	ABMBeaconClient();
	
protected:
	UFUNCTION(BlueprintCallable)
	bool ConnectToServer(const FString& Address);

	virtual void OnFailure() override;
	virtual void OnConnected() override;
};
