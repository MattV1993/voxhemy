#include "VoxhemyCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Blueprint/UserWidget.h"
#include "CableComponent.h"

AVoxhemyCharacter::AVoxhemyCharacter()
{
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = true;
	Camera->SetupAttachment(GetMesh());

	Cable = CreateDefaultSubobject<UCableComponent>(TEXT("Cable"));
	Cable->SetupAttachment(GetRootComponent());
	Cable->SetVisibility(false);

	PrimaryActorTick.bCanEverTick = true;

	TurnRateGamepad = 50.f;

}

void AVoxhemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (CrosshairObject)
	{
		Crosshair = CreateWidget<UUserWidget>(GetWorld(), CrosshairObject);

		if (Crosshair)
		{
			Crosshair->AddToViewport();
		}
	}

	check(CrosshairObject != nullptr);
	check(Crosshair != nullptr);
}

void AVoxhemyCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AVoxhemyCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AVoxhemyCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AVoxhemyCharacter::LookRight(float Value)
{
	AddControllerYawInput(Value * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AVoxhemyCharacter::JumpPressed()
{
	bPressedJump = true;
}

void AVoxhemyCharacter::JumpReleased()
{
	bPressedJump = false;
}

void AVoxhemyCharacter::ActionPressed()
{
	FVector StartTrace = Camera->GetComponentLocation();
	FVector Rotation = GetBaseAimRotation().Vector();
	FVector EndTrace = StartTrace + Rotation * 3000;

	static const FName Tag{ TEXT("ActionTrace") };

	FCollisionQueryParams Params{ Tag, true, GetInstigator() };
	Params.bReturnPhysicalMaterial = true;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(Owner);

	FHitResult Hit{ ForceInit };

	GetWorld()->LineTraceSingleByChannel(
		Hit,
		StartTrace,
		EndTrace,
		ECollisionChannel::ECC_WorldDynamic,
		Params);

	if (Hit.IsValidBlockingHit())
	{
		GrapplePoint = Hit.ImpactPoint;
		IsGrappling = true;

		EndTrace = Hit.ImpactPoint;
		
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		Cable->SetVisibility(true);
	}
}

void AVoxhemyCharacter::ActionReleased()
{
	if (IsGrappling)
	{
		IsGrappling = false;
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Falling);
		Cable->SetVisibility(false);
	}
}

void AVoxhemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsGrappling)
	{
		FVector CableEndLocation = UKismetMathLibrary::InverseTransformLocation(GetActorTransform(), GrapplePoint);
		Cable->EndLocation = CableEndLocation;

		FVector CurrentLocation = GetActorLocation();
		FVector GrappleDirection = (GrapplePoint - CurrentLocation).GetSafeNormal();
		FVector RightMovement = GetActorRightVector() * GetInputAxisValue("MoveRight") * 0.7;

		static constexpr const float GrappleSpeed = 250000.f;

		FVector Force = GrappleDirection + RightMovement;
		Force.Normalize();

		GetCharacterMovement()->AddForce(Force * GrappleSpeed);
	}
}

void AVoxhemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AVoxhemyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AVoxhemyCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookRight", this, &AVoxhemyCharacter::LookRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AVoxhemyCharacter::LookUp);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AVoxhemyCharacter::JumpPressed);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AVoxhemyCharacter::JumpReleased);

	PlayerInputComponent->BindAction("Action", EInputEvent::IE_Pressed, this, &AVoxhemyCharacter::ActionPressed);
	PlayerInputComponent->BindAction("Action", EInputEvent::IE_Released, this, &AVoxhemyCharacter::ActionReleased);
}

