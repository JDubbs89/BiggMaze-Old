// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconBlueprint.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlineBeaconConnectProxy.generated.h"

// Our Callback for this Connect By IP Proxy.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnlineBeaconConnectDelegate);

/**
 * The Online Beacon Connect by IP Callback Proxy.
 * Used for the Async Node to Connect a Beacon By IP with callbacks for Success and Failure.
 */
UCLASS()
class BLUEPRINTABLEONLINEBEACONS_API UOnlineBeaconConnectProxy : public UOnlineBlueprintCallProxyBase {
	GENERATED_BODY()

	public:

		// When the Connection was a Success.
		UPROPERTY(BlueprintAssignable)
		FOnlineBeaconConnectDelegate OnSuccess;

		// When the Connection has failed.
		UPROPERTY(BlueprintAssignable)
		FOnlineBeaconConnectDelegate OnFailure;

		/**
		 * Call this function to begin connecting to a server, given an Address.
	     * - Returns if the connection progress has started.
	     * - Additional 'On Success' and 'On Failure' branches for additional functionality without using
	     * internal Beacon Blueprint events.
		 * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.
		 */
		UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Connect By IP (Async)", DefaultToSelf="Target"), Category="OnlineBeacon|Connection|Client")
		static UOnlineBeaconConnectProxy* ConnectByIPAsync(AOnlineBeaconBlueprint* Target, FString Address, int32 Port = -1);

		/**
		 * Call this function to begin connecting to a server, given a Session.
		 * - Returns if the connection progress has started.
		 * - Additional 'On Success' and 'On Failure' branches for additional functionality without using
		 * internal Beacon Blueprint events.
		 * - If the Port parameter has a valid value (between 1 and 65535), it will override the port defined on your settings.
		 */
		UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Connect By Session (Async)", DefaultToSelf="Target"), Category="OnlineBeacon|Connection|Client")
		static UOnlineBeaconConnectProxy* ConnectBySessionAsync(AOnlineBeaconBlueprint* Target, const FBlueprintSessionResult& Session, int32 Port = -1);
	
		// Overrides Activate.
		virtual void Activate() override;
	
	private:

		// Callbacks for the On Connected and On Connection Failure Events.
		void OnConnected() const;
		void OnConnectionFailure() const;

		// Function that Cleans up Bindings.
		void Cleanup() const;

		// Our Delegate Handles.
		FDelegateHandle OnConnectedDelegate, OnConnectionFailureDelegate;
	
		// The Reference to the Beacon.
		UPROPERTY()
		AOnlineBeaconBlueprint* Beacon;

		// If we are using a Session Connect.
		bool IsSessionConnect;
	
		// The Address.
		FString Address;

		// The Session information.
		FBlueprintSessionResult Session;

		// The Port.
		int32 Port;
};
