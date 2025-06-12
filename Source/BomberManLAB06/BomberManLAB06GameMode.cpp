// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberManLAB06GameMode.h"
#include "BomberManLAB06Character.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueMadera.h"
#include "GrupoBloques.h"
#include "Engine/World.h"

ABomberManLAB06GameMode::ABomberManLAB06GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberManLAB06GameMode::BeginPlay()
{
	Super::BeginPlay();

	const int cantidadBloques = 10;
	const float espacioEntreBloques = 120.f;
	FVector posicionBase(0.f, 0.f, 200.f);
	FRotator rotacion = FRotator::ZeroRotator;
	FActorSpawnParameters spawnParams;

	// Crear el grupo
	AGrupoBloques* grupo = GetWorld()->SpawnActor<AGrupoBloques>(AGrupoBloques::StaticClass(), FVector::ZeroVector, rotacion, spawnParams);

	for (int i = 0; i < cantidadBloques; ++i)
	{
		FVector posicion = posicionBase + FVector(0.f, i * espacioEntreBloques, 0.f);
		ABloqueMadera* bloque = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, rotacion, spawnParams);

		if (bloque && grupo)
		{
			grupo->AgregarBloque(bloque);
		}
	}

	// Esperar un poco antes de destruir para poder verlos en escena
	FTimerHandle temporizador;
	GetWorld()->GetTimerManager().SetTimer(temporizador, [grupo]()
	{
			if (grupo)
			{
				grupo->MostrarPropiedades();
				grupo->DestruirBloque();
			}



	}, 3.0f, false);







}



