// Copyright Epic Games, Inc. All Rights Reserved.

#include "Organic_Dungeon_V2_CGameMode.h"
#include "Organic_Dungeon_V2_CCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOrganic_Dungeon_V2_CGameMode::AOrganic_Dungeon_V2_CGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
