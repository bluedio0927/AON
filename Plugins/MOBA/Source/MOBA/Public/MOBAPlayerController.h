﻿// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/PlayerController.h"
#include "Engine/EngineBaseTypes.h"
#include "HeroActionx.h"
#include "FlannActor.h"
#include "MOBAPlayerController.generated.h"

class AMHUD;
class AHeroCharacter;
class AEquipment;

UENUM(BlueprintType)
enum class EKeyBehavior : uint8
{
	// 技能1
	KEY_SKILL_1,
	// 技能2
	KEY_SKILL_2,
	// 技能3
	KEY_SKILL_3,
	// 技能4
	KEY_SKILL_4,
	// 技能5
	KEY_SKILL_5,
	// 技能6
	KEY_SKILL_6,
	// 技能7
	KEY_SKILL_7,
	// 技能8
	KEY_SKILL_8,
	// 技能9
	KEY_SKILL_9,
	// 技能10
	KEY_SKILL_10,
	// 攻擊
	KEY_ATTACK,
	// 移動
	KEY_MOVE,

};

UCLASS()
class AMOBAPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMOBAPlayerController();

protected:
	AMHUD* Hud;

	virtual void BeginPlay() override;
	
	virtual bool InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) override;

	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;
	uint32 bMouseRButton : 1;
	uint32 bMouseLButton : 1;
	UPrimitiveComponent* ClickedPrimitive;


	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface
	
public:
		
	// 當前滑鼠坐標
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MOBA")
	FVector2D CurrentMouseXY;

	// 地板Actor名 滑鼠LineTrace用
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MOBA")
	FString FloorActorName;

	// 有註冊的鍵盤事件
	TArray<FKey> KeyMapping;

	AFlannActor* FlannActor = nullptr;


	/** Navigate player to the given world location. */	
	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerCharacterMove(AHeroCharacter* hero, const FVector& pos);
	
	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerCharacterStopMove(AHeroCharacter* hero);
	
	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerHeroUseSkill(AHeroCharacter* hero, EHeroActionStatus SpellType, int32 index, 
		FVector VFaceTo, FVector Pos, AHeroCharacter* victim);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerSetHeroAction(AHeroCharacter* hero, const FHeroAction& action);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerAppendHeroAction(AHeroCharacter* hero, const FHeroAction& action);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerClearHeroAction(AHeroCharacter* hero, const FHeroAction& action);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerHeroSkillLevelUp(AHeroCharacter* hero, int32 idx);
	
	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerHeroForceLevelUp(AHeroCharacter* hero);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerHeroAddExpCompute(AHeroCharacter* hero, float exp);

	UFUNCTION(Server, WithValidation, Reliable, BlueprintCallable, Category = "MOBA")
	void ServerAttackCompute(AHeroCharacter* attacker, AHeroCharacter* victim, EDamageType dtype, 
		float damage, bool AttackLanded);

	UFUNCTION(BlueprintCallable, Category = "MOBA")
	TArray<AHeroCharacter*> FindRadiusActorByLocation(AHeroCharacter* hero, FVector Center,
		float Radius, ETeamFlag flag, bool CheckAlive);

	FVector2D GetMouseScreenPosition();

	void OnMouseRButtonPressed1();
	void OnMouseRButtonPressed2();
	void OnMouseRButtonReleased();

	void OnMouseLButtonPressed1();
	void OnMouseLButtonPressed2();
	void OnMouseLButtonReleased();

	
};
