// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDialog.h"

void UOpenDialog::showOpenFileDialog(const FString FileTypes)
{

	void *parentWindwosPtr = FSlateApplication::Get().GetActiveTopLevelWindow()->GetNativeWindow()->GetOSWindowHandle();
	DesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	
	
}
