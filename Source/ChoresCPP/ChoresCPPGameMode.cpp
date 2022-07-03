// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChoresCPPGameMode.h"
#include "ChoresCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChoresCPPGameMode::AChoresCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
