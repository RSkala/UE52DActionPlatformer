// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5PlatformerProjGameMode.h"
#include "UE5PlatformerProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5PlatformerProjGameMode::AUE5PlatformerProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
