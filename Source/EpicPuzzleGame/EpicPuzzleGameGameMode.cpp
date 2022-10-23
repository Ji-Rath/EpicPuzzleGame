// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicPuzzleGameGameMode.h"
#include "EpicPuzzleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicPuzzleGameGameMode::AEpicPuzzleGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
