// Copyright Luis Infante / Matthew Labrada


#include "RetributionCharacterBase.h"

// Sets default values
ARetributionCharacterBase::ARetributionCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARetributionCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARetributionCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARetributionCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

