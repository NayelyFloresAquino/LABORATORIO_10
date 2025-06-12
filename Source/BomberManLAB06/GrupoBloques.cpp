// Fill out your copyright notice in the Description page of Project Settings.


#include "GrupoBloques.h"

// Sets default values
AGrupoBloques::AGrupoBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGrupoBloques::AgregarBloque(AActor* NuevoBloque)
{
	if (IIBloque* BloqueInterface = Cast<IIBloque>(NuevoBloque))
	{
		Bloques.Add(BloqueInterface);
		UE_LOG(LogTemp, Warning, TEXT("Bloque agregado al grupo."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("El actor no implementa la interfaz IiBloque."));
	}
}

void AGrupoBloques::EliminarBloque(AActor* Bloque)
{
	if (IIBloque* BloqueInterface = Cast<IIBloque>(Bloque))
	{
		Bloques.Remove(BloqueInterface);
		UE_LOG(LogTemp, Warning, TEXT("Bloque eliminado del grupo."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("El actor no implementa la interfaz IiBloque."));
	}
}

void AGrupoBloques::MostrarPropiedades()
{
	for (IIBloque* Bloque : Bloques)
	{
		if (Bloque)
		{
			Bloque->MostrarPropiedades();
		}
	}
}

void AGrupoBloques::DestruirBloque()
{
	for (IIBloque* Bloque : Bloques)
	{
		if (Bloque)
		{
			Bloque->DestruirBloque();
		}
	}
	Bloques.Empty(); // Limpiar el array de bloques
	UE_LOG(LogTemp, Warning, TEXT("Todos los bloques del grupo han sido destruidos."));

}

// Called when the game starts or when spawned
void AGrupoBloques::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrupoBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

