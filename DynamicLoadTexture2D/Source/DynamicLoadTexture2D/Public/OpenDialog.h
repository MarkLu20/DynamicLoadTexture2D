// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlateApplication.h"
//#include "Windows.system.RemoteDesktop.h"
#include "Platform.h"
#include "WindowsPlatformMisc.h"
#include "PlatformMisc.h"
//#include "DesktopPlatformModule.h"
//#include "IDesktopPlatform.h"
//#include "runtime/"
//#include "PlatformModule.h"
//#include ""
#include "Engine.h"
#include "OpenDialog.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICLOADTEXTURE2D_API UOpenDialog : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		static void showOpenFileDialog(const FString FileTypes);

	
	
	
	
};
