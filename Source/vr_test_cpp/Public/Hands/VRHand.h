// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRHand.generated.h"

/*
forward declaration trick move headers to cpp file, and 
show here that these are class, but defined elsewhere
*/
class UMotionControllerComponent;
class USkeletalMeshComponent;
class UWidgetInteractionComponent;
class USphereComponent;


UCLASS()
class VR_TEST_CPP_API AVRHand : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVRHand();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UMotionControllerComponent *MotionController;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	USkeletalMeshComponent *HandMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	UWidgetInteractionComponent *WidgetInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Hands")
	USphereComponent* GrabSphere;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
