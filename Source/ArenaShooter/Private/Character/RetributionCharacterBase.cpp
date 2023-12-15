// Copyright Luis Infante / Matthew Labrada


#include "Character/RetributionCharacterBase.h"

// Sets default values
ARetributionCharacterBase::ARetributionCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ARetributionCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

