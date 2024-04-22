// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClipboardFunctionsBPLibrary.h"
#include "ClipboardFunctions.h"

void UClipboardFunctionsBPLibrary::CopyText(FString Text) 
{

	FPlatformMisc::ClipboardCopy(*Text);

}

FString UClipboardFunctionsBPLibrary::PasteText() 
{

	FString LocalString;
	FPlatformMisc::ClipboardPaste(LocalString);
	return LocalString;

}

