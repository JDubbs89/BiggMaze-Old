// Copyright Jade Eye Studios 2025


#include "Multiplayer/BMBeaconClient.h"


ABMBeaconClient::ABMBeaconClient()
{

}

void ABMBeaconClient::OnFailure()
{
    UE_LOG(LogTemp, Warning, TEXT("Failed to connect to host beacon."));
}

void ABMBeaconClient::OnConnected()
{
    UE_LOG(LogTemp, Warning, TEXT("Successful connection to host beacon."));
}

bool ABMBeaconClient::ConnectToServer(const FString& Address)
{
    FURL Destination = FURL(nullptr, *Address, ETravelType::TRAVEL_Absolute);
    Destination.Port = 7787;
    return InitClient(Destination);
}