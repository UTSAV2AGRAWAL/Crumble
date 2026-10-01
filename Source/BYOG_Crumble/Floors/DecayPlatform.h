#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecayPlatform.generated.h"

UCLASS()
class BYOG_CRUMBLE_API ADecayPlatform : public AActor
{
	GENERATED_BODY()
	
public:
	ADecayPlatform();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	

};
