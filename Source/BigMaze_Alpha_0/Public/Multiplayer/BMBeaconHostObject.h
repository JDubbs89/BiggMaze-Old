// Copyright Jade Eye Studios 2025

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "BMBeaconHostObject.generated.h"

/**
 * 
 */
UCLASS()
class BIGMAZE_ALPHA_0_API ABMBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
	
public:
	ABMBeaconHostObject();

protected:
	virtual void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) override;
	
};
