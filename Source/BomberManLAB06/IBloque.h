// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBloque.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBloque : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMANLAB06_API IIBloque
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void MostrarPropiedades() = 0;
	virtual void DestruirBloque() = 0;
};
