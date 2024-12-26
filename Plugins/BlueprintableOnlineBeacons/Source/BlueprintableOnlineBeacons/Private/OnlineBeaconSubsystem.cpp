// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.


#include "OnlineBeaconSubsystem.h"
#include "Engine/World.h"
#include "BlueprintableOnlineBeacons.h"

// Override Initialize.
void UOnlineBeaconSubsystem::Initialize(FSubsystemCollectionBase& Collection) {
    // Initialize Beacon Host Map.
    HostingBeacons = TMap<TSubclassOf<class AOnlineBeaconClient>, AOnlineBeaconHostObjectDynamic*>();

    // Get Settings.
    Settings = NewObject<UOnlineBeaconsSettings>(this, UOnlineBeaconsSettings::StaticClass(), NAME_None, RF_NoFlags, GetMutableDefault<UOnlineBeaconsSettings>());
}

/**
 * Starts hosting a Online Beacon.
 */
void UOnlineBeaconSubsystem::StartHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class) {
    // Make sure this class isn't being hosted.
    if (IsHostingBeacon(Class)) {
        // Notify.
        UE_LOG(LogBlueprintableOnlineBeacons, Log, TEXT("Beacon %s is already being hosted."), *Class->GetName());

        // Stop Execution.
        return;
    }

    // If we don't have a Host Beacon...
    if (!HostBeacon) {
        // Create it.
        HostBeacon = GetWorld()->SpawnActor<AOnlineBeaconHostDynamic>();

        // Update Runtime Settings.
        HostBeacon->UpdateSettings(Settings);

        // Initialize it.
        if (!HostBeacon->InitHost()) {
            // Notify Error.
            UE_LOG(LogBlueprintableOnlineBeacons, Error, TEXT("Beacon Host has failed to Initialize!"));

            // Destroy the Host Beacon.
            GetWorld()->DestroyActor(HostBeacon);

            // Invalidate the Host Beacon handle.
            HostBeacon = nullptr;

            // Stop Execution.
            return;
        }

        // Start Beacon Requests.
        HostBeacon->PauseBeaconRequests(false);
    }

    // Create our new Host Object.
    AOnlineBeaconHostObjectDynamic* HostObject = GetWorld()->SpawnActor<AOnlineBeaconHostObjectDynamic>();

    // Set the Client Class.
    HostObject->SetClientBeaconActorClass(Class);

    // Add Host.
    HostBeacon->RegisterHost(HostObject);

    // Add to Map.
    HostingBeacons.Add(Class, HostObject);

    // Notify.
    UE_LOG(LogBlueprintableOnlineBeacons, Log, TEXT("Beacon %s is now being hosted."), *Class->GetName());
}

/**
 * Starts hosting multiple Online Beacons at once.
 */
void UOnlineBeaconSubsystem::StartHostingBeacons(const TArray<TSubclassOf<class AOnlineBeaconClient>> Classes) {
    // Loop all Classes, call Host.
    for (const TSubclassOf<class AOnlineBeaconClient> Class : Classes)
        StartHostingBeacon(Class);
}

/**
 * Stops hosting a Online Beacon.
 */
void UOnlineBeaconSubsystem::StopHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class) {
    // If we aren't hosting this beacon or we don't have a Host Beacon, stop execution.
    if (!IsHostingBeacon(Class) || !HostBeacon) {
        // Notify.
        UE_LOG(LogBlueprintableOnlineBeacons, Log, TEXT("Stop Hosting Beacon %s has been called, but it was not being hosted."), *Class->GetName());

        // Stop Execution.
        return;
    }

    // Call Unregister Host.
    HostBeacon->UnregisterHost(Class->GetName());

    // Destroy the Host Object.
    GetWorld()->DestroyActor(HostingBeacons[Class]);

    // Remove from the Map.
    HostingBeacons.Remove(Class);

    // If we aren't hosting any more beacons...
    if (HostingBeacons.Num() <= 0) {
        // Destroy our Host.
        GetWorld()->DestroyActor(HostBeacon);

        // Invalidate Host Beacon Handle.
        HostBeacon = nullptr;
    }

    // Notify.
    UE_LOG(LogBlueprintableOnlineBeacons, Log, TEXT("Beacon %s is no longer being hosted."), *Class->GetName());
}

/**
 * Stops hosting multiple Online Beacons at once.
 */
void UOnlineBeaconSubsystem::StopHostingBeacons(const TArray<TSubclassOf<class AOnlineBeaconClient>> Classes) {
    // Loop all Classes, call Stop Hosting.
    for (TSubclassOf<class AOnlineBeaconClient> Class : Classes)
        StopHostingBeacon(Class);
}

/**
 * Returns whether a specific beacon class is being hosted.
 */
bool UOnlineBeaconSubsystem::IsHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class) const {
    // If we contain the class, then we are hosting it, otherwise, we are not hosting it.
    return HostingBeacons.Contains(Class);
}

/**
 * Gets the Beacon Object of a beacon that is currently being hosted.
 */
AOnlineBeaconClient* UOnlineBeaconSubsystem::GetHostingBeacon(TSubclassOf<AOnlineBeaconClient> Class) const {
    // If we aren't hosting the beacon, we return none.
    if (!IsHostingBeacon(Class))
        return nullptr;

    // Return the Relay Object, that exists only in the server, effectively our 'server beacon'.
    return HostingBeacons[Class]->GetClientRelay();
}

/**
 * Resets the Beacons Subsystem.
 * - All Clients will be disconnected.
 * - All Hosts will be stopped.
 * - All Actors will be cleared.
 * - All Active Hosts will be Restarted.
 * - Changed settings will be applied.
 */
void UOnlineBeaconSubsystem::Reset() {
    // There is no need to run reset if we aren't hosting any beacons.
    if (HostingBeacons.Num() <= 0)
        return;
    
    // The Array of all Hosts.
    TArray<TSubclassOf<class AOnlineBeaconClient>> CurrentHost;

    // Get all Hosts.
    HostingBeacons.GetKeys(CurrentHost);

    // Stop hosting them all.
    StopHostingBeacons(CurrentHost);

    // From this point on, all beacons were destroyed and the host object cleared.
    // So we can just start hosting it all again.
    StartHostingBeacons(CurrentHost);
}

/**
 * Gets the Current Beacon Settings.
 * - Once settings are changed, a Beacon Subsystem reset is required
 * for changed to be applied.
 * - If no Beacons are hosted, settings will be applied automatically
 * on start of Beacon Hosting.
 */
UOnlineBeaconsSettings* UOnlineBeaconSubsystem::GetSettings() const {
    // Return Settings.
    return Settings;
}
