// Copyright Luis Infante / Matthew Labrada

#pragma once

#include "CoreMinimal.h"
#include "Character/RetributionCharacterBase.h"
#include "RetributionCharacter.generated.h"

/*
 Player Controller Character
*/
class USpringArmComponent;
class UCameraComponent;
UCLASS()
class ARENASHOOTER_API ARetributionCharacter : public ARetributionCharacterBase
{
	GENERATED_BODY()

public:
	ARetributionCharacter();
	virtual void Tick(float DeltaSeconds) override;
	
protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoomArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* Camera;
	
public:
};
