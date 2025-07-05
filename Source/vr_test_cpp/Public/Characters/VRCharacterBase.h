// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacterBase.generated.h"

UCLASS()
//A for actor
class VR_TEST_CPP_API AVRCharacterBase : public ACharacter
{
	GENERATED_BODY()	//blueprint class may be gernated from the c++ class

public:
	// Sets default values for this character's properties
	AVRCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
