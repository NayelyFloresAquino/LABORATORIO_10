// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueFuego.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMANLAB06_API ABloqueFuego : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueFuego();

protected:
	virtual void BeginPlay() override;
};
