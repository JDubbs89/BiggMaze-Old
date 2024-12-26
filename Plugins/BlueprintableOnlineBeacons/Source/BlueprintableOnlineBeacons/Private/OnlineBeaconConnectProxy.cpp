// Copyright (C) 2022 Alan Renato Bunese - All Rights Reserved.


#include "OnlineBeaconConnectProxy.h"

// Implementation of Connect By IP Async.
UOnlineBeaconConnectProxy* UOnlineBeaconConnectProxy::ConnectByIPAsync(AOnlineBeaconBlueprint* Target, FString Address, int32 Port) {
	// Create Proxy.
	UOnlineBeaconConnectProxy* Proxy = NewObject<UOnlineBeaconConnectProxy>();

	// Set Data.
	Proxy->Beacon = Target;
	Proxy->Address = Address;
	Proxy->Port = Port;

	// Return the Proxy.
	return Proxy;
}

// Implementation of Connect By Session Async.
UOnlineBeaconConnectProxy* UOnlineBeaconConnectProxy::ConnectBySessionAsync(AOnlineBeaconBlueprint* Target, const FBlueprintSessionResult& Session, int32 Port) {
	// Create Proxy.
	UOnlineBeaconConnectProxy* Proxy = NewObject<UOnlineBeaconConnectProxy>();

	// Set Data.
	Proxy->Beacon = Target;
	Proxy->IsSessionConnect = true;
	Proxy->Session = Session;
	Proxy->Port = Port;

	// Return the Proxy.
	return Proxy;
}

// Called when the Proxy is Activated.
void UOnlineBeaconConnectProxy::Activate() {
	// Check for Beacon...
	if (!Beacon) {
		// Broadcast Failure.
		OnFailure.Broadcast();

		// Stop Running.
		return;
	}

	// Attempt Connection.
	const bool Cnn = IsSessionConnect ? Beacon->ConnectBySession(Session, Port) : Beacon->ConnectByIP(Address, Port);

	// Check if Connection Start was a Success.
	if (!Cnn) {
		// It wasn't, broadcast failure.
		OnFailure.Broadcast();

		// Return.
		return;
	}

	// Bind to Host connection Failure.
	OnConnectedDelegate = Beacon->OnConnectedDelegate.AddUObject(this, &UOnlineBeaconConnectProxy::OnConnected);
	OnConnectionFailureDelegate = Beacon->OnConnectionFailureDelegate.AddUObject(this, &UOnlineBeaconConnectProxy::OnConnectionFailure);
}

// Callback for the On Connected Event.
void UOnlineBeaconConnectProxy::OnConnected() const {
	// Broadcast On Connected.
	OnSuccess.Broadcast();
	
	// Call Cleanup.
	Cleanup();
}

// Callback for the On Connection Failure Event.
void UOnlineBeaconConnectProxy::OnConnectionFailure() const {
	// Broadcast On Failure.
	OnFailure.Broadcast();
	
	// Call Cleanup.
	Cleanup();
}

// Function that Cleans up Bindings.
void UOnlineBeaconConnectProxy::Cleanup() const {
	// Remove Delegate Bindings.
	Beacon->OnConnectedDelegate.Remove(OnConnectedDelegate);
	Beacon->OnConnectionFailureDelegate.Remove(OnConnectionFailureDelegate);
}



