// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OnlineBeaconsSettings.h"
#include "OnlineBeaconHostDynamic.generated.h"

/**
 * The Online Beacon Host Dynamic Class.
 * Some properties we might want to change in
 * runtime are protected, so let's make them public.
 */
UCLASS()
class BLUEPRINTABLEONLINEBEACONS_API AOnlineBeaconHostDynamic : public AOnlineBeaconHost {
	GENERATED_BODY()

	public:

		// Sets Values from a Settings Object.
		void UpdateSettings(const UOnlineBeaconsSettings* Settings);
};
