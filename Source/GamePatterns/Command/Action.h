// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GAMEPATTERNS_API UAction : public UObject
{
	GENERATED_BODY()
	
protected:

    UPROPERTY()
    TObjectPtr<class UActionComponent> ActionComp;

    UFUNCTION(BlueprintCallable, Category = "Action")
    UActionComponent* GetOwningComponent() const;

	UPROPERTY()
	bool bIsRunning;

	UPROPERTY()
	TObjectPtr<AActor> Instigator;

    UPROPERTY()
    float TimeStarted;
    
public:

    void Initialize(UActionComponent* NewActionComp);

    /* Start immediately when added to an action component */
    UPROPERTY(EditDefaultsOnly, Category = "Action")
    bool bAutoStart;

    UFUNCTION(BlueprintCallable, Category = "Action")
    bool IsRunning() const;

    UFUNCTION(BlueprintNativeEvent, Category = "Action")
    bool CanStart(AActor* Actor);

    UFUNCTION(BlueprintNativeEvent, Category = "Action")
    void StartAction(AActor* Actor);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Action")
    void StopAction(AActor* Actor);

    /* Action nickname to start/stop without a reference to the object */
    UPROPERTY(EditDefaultsOnly, Category = "Action")
    FName ActionName;

    virtual UWorld* GetWorld() const override;
};
