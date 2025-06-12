// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloque.h"
#include "GrupoBloques.generated.h"

UCLASS()
class BOMBERMANLAB06_API AGrupoBloques : public AActor, public IIBloque
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrupoBloques();
	void AgregarBloque(AActor* NuevoBloque);
	void EliminarBloque(AActor* Bloque);

	virtual void  MostrarPropiedades() override;
	virtual void DestruirBloque() override;

private:
	TArray<IIBloque*> Bloques;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
