// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// Declare Blueprintable Online Beacons Log.
DECLARE_LOG_CATEGORY_EXTERN(LogBlueprintableOnlineBeacons, Log, All);

/**
 * Used by the engine to register modules.
 */
class FBlueprintableOnlineBeaconsModule : public IModuleInterface {

	public:

		/** IModuleInterface implementation */

		// Called by the Engine when the Module Starts up.
		virtual void StartupModule() override { }

		// Called by the Engine when the Module Shutdown.
		virtual void ShutdownModule() override { }

		/** IModuleInterface implementation */
};
