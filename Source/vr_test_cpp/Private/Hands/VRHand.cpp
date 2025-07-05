// Fill out your copyright notice in the Description page of Project Settings.


#include "Hands/VRHand.h"
#include "Characters/VRCharacterBase.h"


// Sets default values
AVRHand::AVRHand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>("MotionController");
	SetRootComponent(MotionController);
}


// Called when the game starts or when spawned
void AVRHand::BeginPlay()
{
	Super::BeginPlay();
	AVRCharacterBase Character;
}

// Called every frame
void AVRHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

