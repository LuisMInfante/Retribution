// Copyright Luis Infante / Matthew Labrada


#include "Character/RetributionCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ARetributionCharacter::ARetributionCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoomArm = CreateDefaultSubobject<USpringArmComponent>("CameraBoomArm");
	CameraBoomArm->SetupAttachment(GetMesh());
	CameraBoomArm->TargetArmLength = 500.f;
	CameraBoomArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment((CameraBoomArm), USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
	
}

void ARetributionCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ARetributionCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

