// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.


#include "OnlineBeaconsSettings.h"
#include "Engine.h"

// Called when all properties are initialized..
void UOnlineBeaconsSettings::PostInitProperties() {
	// Super this.
	Super::PostInitProperties();
	
	// Refresh the Engine's Net Driver Definitions.
	RefreshNetDriver();
}

#if WITH_EDITOR

// Called when a Property Value was Changed.
void UOnlineBeaconsSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	// Super this.
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// Refresh the Engine's Net Driver Definitions.
	RefreshNetDriver();
}

#endif

// Called to refresh the Engine's Net Driver.
void UOnlineBeaconsSettings::RefreshNetDriver() const {
	// If we don't have the Engine reference, ignore.
	if (!GEngine) return;

	// For each Net Driver definition of the Engine...
	for (auto& NetDriver : GEngine->NetDriverDefinitions) {
		// If it isn't the Beacon Net Driver, ignore.
		if (NetDriver.DefName != NAME_BeaconNetDriver)
			continue;

		// Otherwise, set its data.
		NetDriver.DriverClassName = NetDriverClass;
		NetDriver.DriverClassNameFallback = NetDriverFallbackClass;

		// Stop the refresh.
		return;
	}

	// If we reached here, it means we have no Net Driver Definition
	// for the Beacon, so we create one.
	FNetDriverDefinition BeaconDef;
	BeaconDef.DefName = NAME_BeaconNetDriver;
	BeaconDef.DriverClassName = NetDriverClass;
	BeaconDef.DriverClassNameFallback = NetDriverFallbackClass;

	// And add it to the Engine's Definitions.
	GEngine->NetDriverDefinitions.Add(BeaconDef);
}

// Called to save settings.
bool UOnlineBeaconsSettings::SaveBeaconSettings() {
	// Save the Config.
	SaveConfig();

	// And Refresh the Net Driver.
	RefreshNetDriver();
	
	// Return true.
	return true;
}