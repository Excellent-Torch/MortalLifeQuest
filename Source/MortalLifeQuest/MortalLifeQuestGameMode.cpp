// Copyright Epic Games, Inc. All Rights Reserved.

#include "MortalLifeQuestGameMode.h"
#include "MortalLifeQuestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMortalLifeQuestGameMode::AMortalLifeQuestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
