// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/VRCharacterBase.h"
#include "Camera/CameraComponent.h"

// Sets default values
AVRCharacterBase::AVRCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Origin = CreateDefaultSubobject<UCameraComponent>("Origin");
	Origin->SetupAttachment(GetMesh());

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(Origin);
}

// Called when the game starts or when spawned
void AVRCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

