// Copyright Jade Eye Studios 2025


#include "Multiplayer/BMBeaconHostObject.h"
#include "Multiplayer/BMBeaconClient.h"


ABMBeaconHostObject::ABMBeaconHostObject()
{
    ClientBeaconActorClass = ABMBeaconClient::StaticClass();
    BeaconTypeName = ClientBeaconActorClass->GetName();
}

void ABMBeaconHostObject::OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection)
{
    Super::OnClientConnected(NewClientActor, ClientConnection);

    if (NewClientActor)
    {
        // Here you can handle the new client connection
        UE_LOG(LogTemp, Log, TEXT("New client connected: %s"), *NewClientActor->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("NewClientActor is not valid in OnClientConnected"));
    }
    
}