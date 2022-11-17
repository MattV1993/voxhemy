// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VoxhemyCharacter.generated.h"

class UCameraComponent;

UCLASS()
class VOXHEMY_API AVoxhemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AVoxhemyCharacter();

protected:

	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void LookUp(float Value);
	void LookRight(float Value);

	void JumpPressed();
	void JumpReleased();

	void ActionPressed();
	void ActionReleased();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UCableComponent* Cable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input")
		float TurnRateGamepad;

	FVector GrapplePoint;
	bool IsGrappling = false;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<UUserWidget> CrosshairObject;

public:	

	void Tick(float DeltaTime) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY()
		UUserWidget* Crosshair;
};
