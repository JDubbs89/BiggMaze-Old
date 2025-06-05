// Copyright Jade Eye Studios 2025


#include "Multiplayer/BMLobbyGameMode.h"
#include "Multiplayer/BMBeaconHostObject.h"
#include "OnlineBeaconHost.h"


ABMLobbyGameMode::ABMLobbyGameMode()
{
    HostObject = nullptr;
}

bool ABMLobbyGameMode::CreateHostBeacon()
{
    if (AOnlineBeaconHost* Host = GetWorld()->SpawnActor<AOnlineBeaconHost>(AOnlineBeaconHost::StaticClass()))
    {
        if (Host->InitHost())
        {
            Host->PauseBeaconRequests(false);

            HostObject = GetWorld()->SpawnActor<ABMBeaconHostObject>(ABMBeaconHostObject::StaticClass());
            if (HostObject)
            {
                Host->RegisterHost(HostObject);
                return true;
            }

        }
    }
    return false;
}