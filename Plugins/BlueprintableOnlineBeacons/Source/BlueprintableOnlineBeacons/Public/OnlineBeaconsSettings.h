// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OnlineBeaconsSettings.generated.h"

/**
 * Used to configure the default Beacon Settings.
 */
UCLASS(Config=BlueprintableOnlineBeacons,DefaultConfig,meta=(DisplayName="Blueprintable Online Beacons", Tooltip="Configure anything related to Online Beacons, without going into INI files."))
class BLUEPRINTABLEONLINEBEACONS_API UOnlineBeaconsSettings : public UDeveloperSettings {
	GENERATED_BODY()
	
	public:

		// Gets the Category Name we will be at.
		virtual FName GetCategoryName() const override { return TEXT("Plugins"); }
	
		// Called once all properties are initialized.
		virtual void PostInitProperties() override;

#if WITH_EDITOR

		// Called when a Property Value was Changed.
		virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

		// Called to Refresh the Net Driver Definitions.
		void RefreshNetDriver() const;

		/**
		 * Saves the Beacon settings directly to .ini.
		 * If changes are made on this settings object and it isn't saved,
		 * when the subsystem is reset (changing world, game restart)
		 * all changed settings will be lost.
		 * - Returns True if the save process was completed successfully.
		 */
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save Settings"), Category = "OnlineBeacons")
		bool SaveBeaconSettings();

		/**
		 * The port Beacons will try connecting to.
		 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem
		 * to be applied.
		 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process
		 * normally by just hosting a beacon.
		 */
		UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "OnlineBeacons")
		int32 ListenPort = 7787;
	
		/**
		 * The initial timeout for Online Beacons (Value needs to be less than the Timeout).
		 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem
		 * to be applied.
		 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process
		 * normally by just hosting a beacon.
		 */
		UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "OnlineBeacons")
		float InitialTimeout = 25.f;

		/**
		 * The timeout for Online Beacons.
		 * - If changed in runtime, requires a reset (stop all beacons and re-host) of the Online Beacon Subsystem
		 * to be applied.
		 * - If no Beacons are currently being hosted, a reset is not required and you can continue the process
	     * normally by just hosting a beacon.
		 */
		UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "OnlineBeacons")
		float Timeout = 30.f;

		/**
		 * Used by the Engine for the Beacon Net Driver.
		 * Some default values are:
		 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)
		 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)
		 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)
		 */
		UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "OnlineBeacons|NetDriver")
		FName NetDriverClass = "OnlineSubsystemUtils.IpNetDriver";

		/**
		 * Used by the Engine for the Beacon Net Driver as Fallback on the case the first Driver fails to Initialize.
		 * Some default values are:
		 * OnlineSubsystemUtils.IpNetDriver (for Online Subsystem Null)
		 * OnlineSubsystemSteam.SteamNetDriver (for default Steam Subsystem)
		 * /Script/SteamSockets.SteamSocketsNetDriver (for Steam Sockets)
		 */
		UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "OnlineBeacons|NetDriver")
		FName NetDriverFallbackClass = "OnlineSubsystemUtils.IpNetDriver";
};
