// Copyright Epic Games, Inc. All Rights Reserved.

#include "NextGenLandscapeGameMode.h"
#include "NextGenLandscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANextGenLandscapeGameMode::ANextGenLandscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
