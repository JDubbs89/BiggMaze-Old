// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnlineBeaconClient.h"
#include "OnlineBeaconHostDynamic.h"
#include "OnlineBeaconHostObjectDynamic.h"
#include "OnlineBeaconsSettings.h"
#include "OnlineBeaconSubsystem.generated.h"

/**
 * This Subsystem automatically creates all necessary actors 
 * and controls the hosting flow of the Beacons Subsystem.
 */
UCLASS()
class BLUEPRINTABLEONLINEBEACONS_API UOnlineBeaconSubsystem : public UWorldSubsystem {
	GENERATED_BODY()
	
    private:

        // A Map of all Current Beacons that we are hosting, with their respective hosts.
        UPROPERTY()
        TMap<TSubclassOf<class AOnlineBeaconClient>, AOnlineBeaconHostObjectDynamic*> HostingBeacons;

        // The Current Host Beacon.
        UPROPERTY()
        AOnlineBeaconHostDynamic* HostBeacon;

        // The Current Settings Object being used by this Subsystem.
        UPROPERTY()
        UOnlineBeaconsSettings* Settings;

    public:

        // Override Initialize.
        virtual void Initialize(FSubsystemCollectionBase& Collection) override;
 
        /**
         * Starts hosting a Online Beacon.
         */
        UFUNCTION(BlueprintCallable, Category = "OnlineBeacon|Subsystem|Hosting")
        void StartHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class);

        /**
         * Starts hosting multiple Online Beacons at once.
         */
        UFUNCTION(BlueprintCallable, Category = "OnlineBeacon|Subsystem|Hosting")
        void StartHostingBeacons(const TArray<TSubclassOf<class AOnlineBeaconClient>> Classes);

        /**
         * Stops hosting a Online Beacon.
         */
        UFUNCTION(BlueprintCallable, Category = "OnlineBeacon|Subsystem|Hosting")
        void StopHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class);

        /**
         * Stops hosting multiple Online Beacons at once.
         */
        UFUNCTION(BlueprintCallable, Category = "OnlineBeacon|Subsystem|Hosting")
        void StopHostingBeacons(const TArray<TSubclassOf<class AOnlineBeaconClient>> Classes);

        /**
         * Returns whether a specific beacon class is being hosted.
         */
        UFUNCTION(BlueprintPure, Category = "OnlineBeacon|Subsystem|Utilities")
        bool IsHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class) const;

        /**
         * Gets the Beacon Object of a beacon that is currently being hosted.
         */
        UFUNCTION(BlueprintPure, Category = "OnlineBeacon|Subsystem|Utilities", meta=(DeterminesOutputType="Class"))
        AOnlineBeaconClient* GetHostingBeacon(TSubclassOf<class AOnlineBeaconClient> Class) const;
 
        /**
         * Resets the Beacons Subsystem.
         * - All Clients will be disconnected.
         * - All Hosts will be stopped.
         * - All Actors will be cleared.
         * - All Active Hosts will be Restarted.
         * - Changed settings will be applied.
         */
        UFUNCTION(BlueprintCallable, Category = "OnlineBeacon|Subsystem|Utilities")
        void Reset();
 
        /**
         * Gets the Current Beacon Settings.
         * - Once settings are changed, a Beacon Subsystem reset is required
         * for changed to be applied.
         * - If no Beacons are hosted, settings will be applied automatically
         * on start of Beacon Hosting.
         */
        UFUNCTION(BlueprintPure, Category = "OnlineBeacon|Subsystem|Settings")
        UOnlineBeaconsSettings* GetSettings() const;

        
};
