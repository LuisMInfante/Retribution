// Copyright Luis Infante / Matthew Labrada

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RetributionCharacterBase.generated.h"

UCLASS(Abstract)
class ARENASHOOTER_API ARetributionCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	ARetributionCharacterBase();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
