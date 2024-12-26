// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.


#include "OnlineBeaconHostDynamic.h"

// Sets Values from a Settings Object.
void AOnlineBeaconHostDynamic::UpdateSettings(const UOnlineBeaconsSettings* Settings) {
	// Set Settings.
	ListenPort = Settings->ListenPort;
	BeaconConnectionTimeout = Settings->Timeout;
	BeaconConnectionInitialTimeout = Settings->InitialTimeout;
}