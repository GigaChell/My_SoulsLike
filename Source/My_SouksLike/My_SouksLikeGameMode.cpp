// Copyright Epic Games, Inc. All Rights Reserved.

#include "My_SouksLikeGameMode.h"
#include "My_SouksLikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMy_SouksLikeGameMode::AMy_SouksLikeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
