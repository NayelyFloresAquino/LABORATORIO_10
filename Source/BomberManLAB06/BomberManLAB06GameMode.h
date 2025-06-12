// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberManLAB06GameMode.generated.h"
class ABloqueMadera;
class AGrupoBloques;
//class AFabricaBloques;
UCLASS(minimalapi)
class ABomberManLAB06GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberManLAB06GameMode();

protected:
	virtual void BeginPlay() override;
};



