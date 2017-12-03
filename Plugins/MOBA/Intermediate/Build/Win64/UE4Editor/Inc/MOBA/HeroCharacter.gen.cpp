// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MOBAPrivatePCH.h"
#include "Public/HeroCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}
// Cross Module References
	MOBA_API UEnum* Z_Construct_UEnum_MOBA_EHeroBodyStatus();
	UPackage* Z_Construct_UPackage__Script_MOBA();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_AddBuff();
	MOBA_API UClass* Z_Construct_UClass_AHeroCharacter();
	MOBA_API UClass* Z_Construct_UClass_AHeroBuff_NoRegister();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_AttackCompute();
	MOBA_API UEnum* Z_Construct_UEnum_MOBA_EDamageType();
	MOBA_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_BP_PlayAttack();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_DoAction();
	MOBA_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAction();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_GetCurrentSkillIndex();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_GetHPPercent();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_GetMPPercent();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_GetSkillCDPercent();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_HealCompute();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_HideSkillHint();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_OnMouseClicked();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_SelectionOff();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_SelectionOn();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_ServerPlayAttack();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_ShowSkillHint();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_UpdateHPMPAS();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_UpdateSAI();
	MOBA_API UFunction* Z_Construct_UFunction_AHeroCharacter_UseSkill();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MOBA_API UEnum* Z_Construct_UEnum_MOBA_EHeroBuffProperty();
	MOBA_API UEnum* Z_Construct_UEnum_MOBA_EHeroBuffState();
	MOBA_API UClass* Z_Construct_UClass_AEquipment_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_ASkillHintActor_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_AHeroSkill_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_ADamageEffect_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_ABulletActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
static UEnum* EHeroBodyStatus_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_MOBA_EHeroBodyStatus, Z_Construct_UPackage__Script_MOBA(), TEXT("EHeroBodyStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeroBodyStatus(EHeroBodyStatus_StaticEnum, TEXT("/Script/MOBA"), TEXT("EHeroBodyStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_MOBA_EHeroBodyStatus()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MOBA();
		extern uint32 Get_Z_Construct_UEnum_MOBA_EHeroBodyStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeroBodyStatus"), 0, Get_Z_Construct_UEnum_MOBA_EHeroBodyStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHeroBodyStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHeroBodyStatus::Standing"), 0);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::Moving"), 1);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::Dazzing"), 2);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::AttackWating"), 3);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::AttackBegining"), 4);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::AttackEnding"), 5);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::SpellWating"), 6);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::SpellBegining"), 7);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::SpellEnding"), 8);
			EnumNames.Emplace(TEXT("EHeroBodyStatus::EHeroBodyStatus_MAX"), 9);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHeroBodyStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AttackBegining.ToolTip"), TEXT("\x653b\x64ca\x7b49\x5f85"));
			MetaData->SetValue(ReturnEnum, TEXT("AttackEnding.ToolTip"), TEXT("\x653b\x64ca\x524d\x6416"));
			MetaData->SetValue(ReturnEnum, TEXT("AttackWating.ToolTip"), TEXT("\x6688\x7729\x4e2d"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Dazzing.ToolTip"), TEXT("\x79fb\x52d5\x4e2d"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Moving.ToolTip"), TEXT("\x7ad9\x8457\x767c\x5446"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellBegining.ToolTip"), TEXT("\x65bd\x6cd5\x524d\x7b49\x5f85"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellEnding.ToolTip"), TEXT("\x65bd\x6cd5\x524d\x6416"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellWating.ToolTip"), TEXT("\x653b\x64ca\x5f8c\x6416"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_MOBA_EHeroBodyStatus_CRC() { return 2812664003U; }
	static FName NAME_AHeroCharacter_AttackCompute = FName(TEXT("AttackCompute"));
	void AHeroCharacter::AttackCompute(AHeroCharacter* attacker, AHeroCharacter* victim, EDamageType dtype, float damage)
	{
		HeroCharacter_eventAttackCompute_Parms Parms;
		Parms.attacker=attacker;
		Parms.victim=victim;
		Parms.dtype=dtype;
		Parms.damage=damage;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_AttackCompute),&Parms);
	}
	static FName NAME_AHeroCharacter_BP_PlayAttack = FName(TEXT("BP_PlayAttack"));
	void AHeroCharacter::BP_PlayAttack(float duraction, float rate)
	{
		HeroCharacter_eventBP_PlayAttack_Parms Parms;
		Parms.duraction=duraction;
		Parms.rate=rate;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_BP_PlayAttack),&Parms);
	}
	static FName NAME_AHeroCharacter_DoAction = FName(TEXT("DoAction"));
	void AHeroCharacter::DoAction(FHeroAction const& CurrentAction)
	{
		HeroCharacter_eventDoAction_Parms Parms;
		Parms.CurrentAction=CurrentAction;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_DoAction),&Parms);
	}
	static FName NAME_AHeroCharacter_HealCompute = FName(TEXT("HealCompute"));
	void AHeroCharacter::HealCompute(AHeroCharacter* attacker, AHeroCharacter* victim, float HealMount)
	{
		HeroCharacter_eventHealCompute_Parms Parms;
		Parms.attacker=attacker;
		Parms.victim=victim;
		Parms.HealMount=HealMount;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_HealCompute),&Parms);
	}
	static FName NAME_AHeroCharacter_ServerPlayAttack = FName(TEXT("ServerPlayAttack"));
	void AHeroCharacter::ServerPlayAttack(float duraction, float rate)
	{
		HeroCharacter_eventServerPlayAttack_Parms Parms;
		Parms.duraction=duraction;
		Parms.rate=rate;
		ProcessEvent(FindFunctionChecked(NAME_AHeroCharacter_ServerPlayAttack),&Parms);
	}
	void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
	{
		UClass* Class = AHeroCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddBuff", (Native)&AHeroCharacter::execAddBuff },
			{ "AttackCompute", (Native)&AHeroCharacter::execAttackCompute },
			{ "DoAction", (Native)&AHeroCharacter::execDoAction },
			{ "GetCurrentSkillIndex", (Native)&AHeroCharacter::execGetCurrentSkillIndex },
			{ "GetHPPercent", (Native)&AHeroCharacter::execGetHPPercent },
			{ "GetMPPercent", (Native)&AHeroCharacter::execGetMPPercent },
			{ "GetSkillCDPercent", (Native)&AHeroCharacter::execGetSkillCDPercent },
			{ "HealCompute", (Native)&AHeroCharacter::execHealCompute },
			{ "HideSkillHint", (Native)&AHeroCharacter::execHideSkillHint },
			{ "OnMouseClicked", (Native)&AHeroCharacter::execOnMouseClicked },
			{ "SelectionOff", (Native)&AHeroCharacter::execSelectionOff },
			{ "SelectionOn", (Native)&AHeroCharacter::execSelectionOn },
			{ "ServerPlayAttack", (Native)&AHeroCharacter::execServerPlayAttack },
			{ "ShowSkillHint", (Native)&AHeroCharacter::execShowSkillHint },
			{ "UpdateHPMPAS", (Native)&AHeroCharacter::execUpdateHPMPAS },
			{ "UpdateSAI", (Native)&AHeroCharacter::execUpdateSAI },
			{ "UseSkill", (Native)&AHeroCharacter::execUseSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_AddBuff()
	{
		struct HeroCharacter_eventAddBuff_Parms
		{
			AHeroBuff* buff;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddBuff"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventAddBuff_Parms));
			UProperty* NewProp_buff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("buff"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(buff, HeroCharacter_eventAddBuff_Parms), 0x0010000000000080, Z_Construct_UClass_AHeroBuff_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_AttackCompute()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AttackCompute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x84024CC0, 65535, sizeof(HeroCharacter_eventAttackCompute_Parms));
			UProperty* NewProp_damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(damage, HeroCharacter_eventAttackCompute_Parms), 0x0010000000000080);
			UProperty* NewProp_dtype = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("dtype"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(dtype, HeroCharacter_eventAttackCompute_Parms), 0x0010000000000080, Z_Construct_UEnum_MOBA_EDamageType());
			UProperty* NewProp_dtype_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_dtype, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_victim = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("victim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(victim, HeroCharacter_eventAttackCompute_Parms), 0x0010000000000080, Z_Construct_UClass_AHeroCharacter_NoRegister());
			UProperty* NewProp_attacker = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("attacker"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(attacker, HeroCharacter_eventAttackCompute_Parms), 0x0010000000000080, Z_Construct_UClass_AHeroCharacter_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_BP_PlayAttack()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BP_PlayAttack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(HeroCharacter_eventBP_PlayAttack_Parms));
			UProperty* NewProp_rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rate, HeroCharacter_eventBP_PlayAttack_Parms), 0x0010000000000080);
			UProperty* NewProp_duraction = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("duraction"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(duraction, HeroCharacter_eventBP_PlayAttack_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_DoAction()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoAction"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220CC0, 65535, sizeof(HeroCharacter_eventDoAction_Parms));
			UProperty* NewProp_CurrentAction = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentAction"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentAction, HeroCharacter_eventDoAction_Parms), 0x0010000008000082, Z_Construct_UScriptStruct_FHeroAction());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("\x505a\x52d5\x4f5c"));
			MetaData->SetValue(NewProp_CurrentAction, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_GetCurrentSkillIndex()
	{
		struct HeroCharacter_eventGetCurrentSkillIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentSkillIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventGetCurrentSkillIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, HeroCharacter_eventGetCurrentSkillIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_GetHPPercent()
	{
		struct HeroCharacter_eventGetHPPercent_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHPPercent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventGetHPPercent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HeroCharacter_eventGetHPPercent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_GetMPPercent()
	{
		struct HeroCharacter_eventGetMPPercent_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMPPercent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventGetMPPercent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HeroCharacter_eventGetMPPercent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_GetSkillCDPercent()
	{
		struct HeroCharacter_eventGetSkillCDPercent_Parms
		{
			int32 n;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSkillCDPercent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventGetSkillCDPercent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HeroCharacter_eventGetSkillCDPercent_Parms), 0x0010000000000580);
			UProperty* NewProp_n = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("n"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(n, HeroCharacter_eventGetSkillCDPercent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("for Game Logic"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_HealCompute()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HealCompute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x84024CC0, 65535, sizeof(HeroCharacter_eventHealCompute_Parms));
			UProperty* NewProp_HealMount = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HealMount"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealMount, HeroCharacter_eventHealCompute_Parms), 0x0010000000000080);
			UProperty* NewProp_victim = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("victim"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(victim, HeroCharacter_eventHealCompute_Parms), 0x0010000000000080, Z_Construct_UClass_AHeroCharacter_NoRegister());
			UProperty* NewProp_attacker = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("attacker"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(attacker, HeroCharacter_eventHealCompute_Parms), 0x0010000000000080, Z_Construct_UClass_AHeroCharacter_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_HideSkillHint()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HideSkillHint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_OnMouseClicked()
	{
		struct HeroCharacter_eventOnMouseClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnMouseClicked"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(HeroCharacter_eventOnMouseClicked_Parms));
			UProperty* NewProp_ButtonPressed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ButtonPressed"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ButtonPressed, HeroCharacter_eventOnMouseClicked_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_ClickedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClickedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClickedComp, HeroCharacter_eventOnMouseClicked_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("for UI"));
			MetaData->SetValue(NewProp_ClickedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_SelectionOff()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SelectionOff"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_SelectionOn()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SelectionOn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_ServerPlayAttack()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerPlayAttack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80024CC0, 65535, sizeof(HeroCharacter_eventServerPlayAttack_Parms));
			UProperty* NewProp_rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rate, HeroCharacter_eventServerPlayAttack_Parms), 0x0010000000000080);
			UProperty* NewProp_duraction = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("duraction"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(duraction, HeroCharacter_eventServerPlayAttack_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_ShowSkillHint()
	{
		struct HeroCharacter_eventShowSkillHint_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ShowSkillHint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HeroCharacter_eventShowSkillHint_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HeroCharacter_eventShowSkillHint_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HeroCharacter_eventShowSkillHint_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HeroCharacter_eventShowSkillHint_Parms), sizeof(bool), true);
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(index, HeroCharacter_eventShowSkillHint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_UpdateHPMPAS()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateHPMPAS"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("\x4f9d\x7b49\x7d1a\x66f4\x65b0\x8840\x9b54\x653b\x901f"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_UpdateSAI()
	{
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateSAI"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("\x4f9d\x7b49\x7d1a\x66f4\x65b0\x529b\x654f\x667a"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeroCharacter_UseSkill()
	{
		struct HeroCharacter_eventUseSkill_Parms
		{
			int32 index;
			FVector VFaceTo;
			FVector Pos;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHeroCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseSkill"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(HeroCharacter_eventUseSkill_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HeroCharacter_eventUseSkill_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HeroCharacter_eventUseSkill_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HeroCharacter_eventUseSkill_Parms), sizeof(bool), true);
			UProperty* NewProp_Pos = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Pos, HeroCharacter_eventUseSkill_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_VFaceTo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VFaceTo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VFaceTo, HeroCharacter_eventUseSkill_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(index, HeroCharacter_eventUseSkill_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Hero"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
	{
		return AHeroCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeroCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_MOBA();
			OuterClass = AHeroCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_AddBuff());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_AttackCompute());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_BP_PlayAttack());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_DoAction());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_GetCurrentSkillIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_GetHPPercent());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_GetMPPercent());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_GetSkillCDPercent());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_HealCompute());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_HideSkillHint());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_OnMouseClicked());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_SelectionOff());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_SelectionOn());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_ServerPlayAttack());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_ShowSkillHint());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_UpdateHPMPAS());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_UpdateSAI());
				OuterClass->LinkChild(Z_Construct_UFunction_AHeroCharacter_UseSkill());

				UProperty* NewProp_DefaultBuffProperty = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultBuffProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(DefaultBuffProperty, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_DefaultBuffProperty_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffProperty, TEXT("DefaultBuffProperty_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UEnum_MOBA_EHeroBuffProperty());
				UProperty* NewProp_DefaultBuffProperty_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffProperty, TEXT("DefaultBuffProperty"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001);
				UProperty* NewProp_DefaultBuffProperty_Key_KeyProp_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffProperty_Key_KeyProp, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_BuffPropertyMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuffPropertyMap"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(BuffPropertyMap, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_BuffPropertyMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_BuffPropertyMap, TEXT("BuffPropertyMap_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UEnum_MOBA_EHeroBuffProperty());
				UProperty* NewProp_BuffPropertyMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_BuffPropertyMap, TEXT("BuffPropertyMap"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001);
				UProperty* NewProp_BuffPropertyMap_Key_KeyProp_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BuffPropertyMap_Key_KeyProp, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_DefaultBuffState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultBuffState"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(DefaultBuffState, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_DefaultBuffState_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffState, TEXT("DefaultBuffState_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UEnum_MOBA_EHeroBuffState());
				UProperty* NewProp_DefaultBuffState_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffState, TEXT("DefaultBuffState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, 0, sizeof(bool), true);
				UProperty* NewProp_DefaultBuffState_Key_KeyProp_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DefaultBuffState_Key_KeyProp, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_BuffStateMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuffStateMap"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(BuffStateMap, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_BuffStateMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_BuffStateMap, TEXT("BuffStateMap_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UEnum_MOBA_EHeroBuffState());
				UProperty* NewProp_BuffStateMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_BuffStateMap, TEXT("BuffStateMap"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, 0, sizeof(bool), true);
				UProperty* NewProp_BuffStateMap_Key_KeyProp_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BuffStateMap_Key_KeyProp, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_BuffQueue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuffQueue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BuffQueue, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_BuffQueue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BuffQueue, TEXT("BuffQueue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AHeroBuff_NoRegister());
				UProperty* NewProp_BodyStatus = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BodyStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(BodyStatus, AHeroCharacter), 0x0010000000000025, Z_Construct_UEnum_MOBA_EHeroBodyStatus());
				UProperty* NewProp_BodyStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_BodyStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CurrentAction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAction"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentAction, AHeroCharacter), 0x0010000000000025, Z_Construct_UScriptStruct_FHeroAction());
				UProperty* NewProp_ActionQueue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ActionQueue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActionQueue, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_ActionQueue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActionQueue, TEXT("ActionQueue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FHeroAction());
				UProperty* NewProp_Equipments = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Equipments"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Equipments, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_Equipments_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Equipments, TEXT("Equipments"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AEquipment_NoRegister());
				UProperty* NewProp_CurrentSkillIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSkillIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CurrentSkillIndex, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_CurrentAttackRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackRadius, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_AdditionIntelligence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionIntelligence"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdditionIntelligence, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_AdditionAgility = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionAgility"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdditionAgility, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_AdditionStrength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionStrength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdditionStrength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentMagicInjured = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMagicInjured"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMagicInjured, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentArmor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentArmor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentArmor, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentAttack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttack"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttack, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentAttackSpeedSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackSpeedSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackSpeedSecond, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_CurrentAttackSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackSpeed, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentRegenMP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentRegenMP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentRegenMP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentRegenHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentRegenHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentRegenHP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentMP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentHP, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_CurrentMaxMP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMaxMP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMaxMP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentMaxHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMaxHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMaxHP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentMoveSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentMoveSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentMoveSpeed, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CurrentLevel, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_DazzingLeftCounting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DazzingLeftCounting"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DazzingLeftCounting, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_SpellingCounting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpellingCounting"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpellingCounting, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_FollowActorUpdateCounting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowActorUpdateCounting"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FollowActorUpdateCounting, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_AttackingCounting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttackingCounting"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AttackingCounting, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_CurrentSpellingEndingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSpellingEndingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentSpellingEndingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentSpellingBeginingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSpellingBeginingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentSpellingBeginingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentSpellingAnimationTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSpellingAnimationTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentSpellingAnimationTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentSpellingWatingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSpellingWatingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentSpellingWatingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentAttackingEndingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackingEndingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackingEndingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentAttackingBeginingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackingBeginingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackingBeginingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentAttackingAnimationRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackingAnimationRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackingAnimationRate, AHeroCharacter), 0x0010000000000025);
				UProperty* NewProp_CurrentAttackingAnimationTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentAttackingAnimationTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentAttackingAnimationTimeLength, AHeroCharacter), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsDead, AHeroCharacter);
				UProperty* NewProp_IsDead = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsDead"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsDead, AHeroCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsDead, AHeroCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsAttacked, AHeroCharacter);
				UProperty* NewProp_IsAttacked = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsAttacked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsAttacked, AHeroCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsAttacked, AHeroCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(PlayAttack, AHeroCharacter);
				UProperty* NewProp_PlayAttack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayAttack"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(PlayAttack, AHeroCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(PlayAttack, AHeroCharacter), sizeof(bool), true);
				UProperty* NewProp_TeamId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeamId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TeamId, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_MinimumDontMoveDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinimumDontMoveDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinimumDontMoveDistance, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_PickupObjectDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupObjectDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PickupObjectDistance, AHeroCharacter), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isSelection, AHeroCharacter);
				UProperty* NewProp_isSelection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isSelection"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isSelection, AHeroCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(isSelection, AHeroCharacter), sizeof(bool), true);
				UProperty* NewProp_Skill_Points = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Skill_Points"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Skill_Points, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_CurrentSkillDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSkillDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentSkillDirection, AHeroCharacter), 0x0010000000000015, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_CurrentSkillHint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentSkillHint"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentSkillHint, AHeroCharacter), 0x0010000000000015, Z_Construct_UClass_ASkillHintActor_NoRegister());
				UProperty* NewProp_LevelProperty_Intelligence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelProperty_Intelligence"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LevelProperty_Intelligence, AHeroCharacter), 0x0010000000000015);
				UProperty* NewProp_LevelProperty_Intelligence_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LevelProperty_Intelligence, TEXT("LevelProperty_Intelligence"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_LevelProperty_Agility = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelProperty_Agility"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LevelProperty_Agility, AHeroCharacter), 0x0010000000000015);
				UProperty* NewProp_LevelProperty_Agility_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LevelProperty_Agility, TEXT("LevelProperty_Agility"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_LevelProperty_Strength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelProperty_Strength"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LevelProperty_Strength, AHeroCharacter), 0x0010000000000015);
				UProperty* NewProp_LevelProperty_Strength_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LevelProperty_Strength, TEXT("LevelProperty_Strength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_LevelProperty_Attack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LevelProperty_Attack"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LevelProperty_Attack, AHeroCharacter), 0x0010000000000015);
				UProperty* NewProp_LevelProperty_Attack_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LevelProperty_Attack, TEXT("LevelProperty_Attack"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Intelligence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Intelligence"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Intelligence, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_Agility = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Agility"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Agility, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_Strength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Strength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Strength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseBountyGold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseBountyGold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseBountyGold, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseIntelligence = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseIntelligence"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseIntelligence, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAgility = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAgility"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAgility, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseStrength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseStrength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseStrength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseMP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseMP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseMP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseHP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseRegenMP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseRegenMP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseRegenMP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseRegenHP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseRegenHP"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseRegenHP, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseMoveSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseMoveSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseMoveSpeed, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttack"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttack, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseArmor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseArmor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseArmor, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BasePhysicsInjuredRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BasePhysicsInjuredRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BasePhysicsInjuredRatio, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseMagicInjuredRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseMagicInjuredRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseMagicInjuredRatio, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_FollowActorUpdateTimeGap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowActorUpdateTimeGap"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FollowActorUpdateTimeGap, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseSpellingEndingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpellingEndingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpellingEndingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseSpellingBeginingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpellingBeginingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpellingBeginingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseSpellingAnimationTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpellingAnimationTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpellingAnimationTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseSpellingWatingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseSpellingWatingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseSpellingWatingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttackingEndingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttackingEndingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttackingEndingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttackingBeginingTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttackingBeginingTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttackingBeginingTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttackingAnimationTimeLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttackingAnimationTimeLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttackingAnimationTimeLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttackSpeedSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttackSpeedSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttackSpeedSecond, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_AdditionAttackSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdditionAttackSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdditionAttackSpeed, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_BaseAttackRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseAttackRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseAttackRadius, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_Skill_Classes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Skill_Classes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Skill_Classes, AHeroCharacter), 0x0014000000000005);
				UProperty* NewProp_Skill_Classes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Skill_Classes, TEXT("Skill_Classes"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0004000000000000, Z_Construct_UClass_AHeroSkill_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Skills = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Skills"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Skills, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_Skills_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Skills, TEXT("Skills"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AHeroSkill_NoRegister());
				UProperty* NewProp_ScreenPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScreenPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ScreenPosition, AHeroCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_Head = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Head"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Head, AHeroCharacter), 0x0010000000000005, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_HPBarLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HPBarLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HPBarLength, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_HeroHistoryDescription = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HeroHistoryDescription"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HeroHistoryDescription, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_HeroName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HeroName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HeroName, AHeroCharacter), 0x0010000000000005);
				UProperty* NewProp_ShowDamageEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShowDamageEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ShowDamageEffect, AHeroCharacter), 0x0014000000000005, Z_Construct_UClass_ADamageEffect_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_HeroBullet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HeroBullet"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(HeroBullet, AHeroCharacter), 0x0014000000000005, Z_Construct_UClass_ABulletActor_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_PositionUnderFoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PositionUnderFoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PositionUnderFoot, AHeroCharacter), 0x001000000008001d, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_PositionOnHead = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PositionOnHead"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PositionOnHead, AHeroCharacter), 0x001000000008000d, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_SelectionDecal = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectionDecal"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SelectionDecal, AHeroCharacter), 0x001000000008001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsDebug, AHeroCharacter);
				UProperty* NewProp_IsDebug = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsDebug"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsDebug, AHeroCharacter), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(IsDebug, AHeroCharacter), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_AddBuff(), "AddBuff"); // 1992653910
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_AttackCompute(), "AttackCompute"); // 21798285
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_BP_PlayAttack(), "BP_PlayAttack"); // 2693622208
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_DoAction(), "DoAction"); // 2284941708
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_GetCurrentSkillIndex(), "GetCurrentSkillIndex"); // 3198225587
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_GetHPPercent(), "GetHPPercent"); // 2662852471
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_GetMPPercent(), "GetMPPercent"); // 3667680972
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_GetSkillCDPercent(), "GetSkillCDPercent"); // 3225554263
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_HealCompute(), "HealCompute"); // 4161279553
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_HideSkillHint(), "HideSkillHint"); // 427071617
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_OnMouseClicked(), "OnMouseClicked"); // 1273128435
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_SelectionOff(), "SelectionOff"); // 1526153471
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_SelectionOn(), "SelectionOn"); // 798867789
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_ServerPlayAttack(), "ServerPlayAttack"); // 3516323136
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_ShowSkillHint(), "ShowSkillHint"); // 3961161328
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_UpdateHPMPAS(), "UpdateHPMPAS"); // 1210657723
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_UpdateSAI(), "UpdateSAI"); // 347021170
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHeroCharacter_UseSkill(), "UseSkill"); // 3587030035
				static TCppClassTypeInfo<TCppClassTypeTraits<AHeroCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HeroCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_DefaultBuffProperty, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_DefaultBuffProperty, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BuffPropertyMap, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_BuffPropertyMap, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_DefaultBuffState, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_DefaultBuffState, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BuffStateMap, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_BuffStateMap, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BuffQueue, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_BuffQueue, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BodyStatus, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_BodyStatus, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAction, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAction, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_ActionQueue, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_ActionQueue, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_ActionQueue, TEXT("ToolTip"), TEXT("\x4f9d\x5e8f\x505a\x5b8c\x88e1\x9762\x7684\x52d5\x4f5c"));
				MetaData->SetValue(NewProp_Equipments, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_Equipments, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Equipments, TEXT("ToolTip"), TEXT("\x88dd\x5099"));
				MetaData->SetValue(NewProp_CurrentSkillIndex, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentSkillIndex, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSkillIndex, TEXT("ToolTip"), TEXT("\x6e96\x5099\x8981\x7528\x7684\x6280\x80fd\x7d22\x5f15"));
				MetaData->SetValue(NewProp_CurrentAttackRadius, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackRadius, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackRadius, TEXT("ToolTip"), TEXT("\x76ee\x524d\x653b\x64ca\x8ddd\x96e2"));
				MetaData->SetValue(NewProp_AdditionIntelligence, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_AdditionIntelligence, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_AdditionIntelligence, TEXT("ToolTip"), TEXT("\x5916\x52a0\x667a\x529b"));
				MetaData->SetValue(NewProp_AdditionAgility, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_AdditionAgility, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_AdditionAgility, TEXT("ToolTip"), TEXT("\x5916\x52a0\x654f\x6377"));
				MetaData->SetValue(NewProp_AdditionStrength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_AdditionStrength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_AdditionStrength, TEXT("ToolTip"), TEXT("\x5916\x52a0\x529b\x91cf"));
				MetaData->SetValue(NewProp_CurrentMagicInjured, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentMagicInjured, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentMagicInjured, TEXT("ToolTip"), TEXT("\x7576\x524d\x9b54\x6cd5\x6e1b\x50b7"));
				MetaData->SetValue(NewProp_CurrentArmor, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentArmor, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentArmor, TEXT("ToolTip"), TEXT("\x9632\x79a6\x529b"));
				MetaData->SetValue(NewProp_CurrentAttack, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttack, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttack, TEXT("ToolTip"), TEXT("\x653b\x64ca\x529b"));
				MetaData->SetValue(NewProp_CurrentAttackSpeedSecond, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackSpeedSecond, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackSpeedSecond, TEXT("ToolTip"), TEXT("\x653b\x901f\x79d2\x6578"));
				MetaData->SetValue(NewProp_CurrentAttackSpeed, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackSpeed, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackSpeed, TEXT("ToolTip"), TEXT("\x653b\x901f"));
				MetaData->SetValue(NewProp_CurrentRegenMP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentRegenMP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentRegenMP, TEXT("ToolTip"), TEXT("\x56de\x9b54"));
				MetaData->SetValue(NewProp_CurrentRegenHP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentRegenHP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentRegenHP, TEXT("ToolTip"), TEXT("\x56de\x8840"));
				MetaData->SetValue(NewProp_CurrentMP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentMP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentMP, TEXT("ToolTip"), TEXT("\x9b54\x529b"));
				MetaData->SetValue(NewProp_CurrentHP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentHP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentHP, TEXT("ToolTip"), TEXT("\x8840\x91cf"));
				MetaData->SetValue(NewProp_CurrentMaxMP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentMaxMP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentMaxMP, TEXT("ToolTip"), TEXT("\x9b54\x529b"));
				MetaData->SetValue(NewProp_CurrentMaxHP, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentMaxHP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentMaxHP, TEXT("ToolTip"), TEXT("\x8840\x91cf"));
				MetaData->SetValue(NewProp_CurrentMoveSpeed, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentMoveSpeed, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentMoveSpeed, TEXT("ToolTip"), TEXT("\x79fb\x52d5\x901f\x5ea6"));
				MetaData->SetValue(NewProp_CurrentLevel, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentLevel, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentLevel, TEXT("ToolTip"), TEXT("\x76ee\x524d\x7b49\x7d1a"));
				MetaData->SetValue(NewProp_DazzingLeftCounting, TEXT("Category"), TEXT("Counting"));
				MetaData->SetValue(NewProp_DazzingLeftCounting, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_DazzingLeftCounting, TEXT("ToolTip"), TEXT("\x6688\x70ab\x5012\x6578\x8a08\x6642\x5668"));
				MetaData->SetValue(NewProp_SpellingCounting, TEXT("Category"), TEXT("Counting"));
				MetaData->SetValue(NewProp_SpellingCounting, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_SpellingCounting, TEXT("ToolTip"), TEXT("\x65bd\x6cd5\x8a08\x6642\x5668"));
				MetaData->SetValue(NewProp_FollowActorUpdateCounting, TEXT("Category"), TEXT("Counting"));
				MetaData->SetValue(NewProp_FollowActorUpdateCounting, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_FollowActorUpdateCounting, TEXT("ToolTip"), TEXT("\x8ffd\x8e28\x76ee\x6a19\x8a08\x6642\x5668"));
				MetaData->SetValue(NewProp_AttackingCounting, TEXT("Category"), TEXT("Counting"));
				MetaData->SetValue(NewProp_AttackingCounting, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_AttackingCounting, TEXT("ToolTip"), TEXT("\x76ee\x524d\x653b\x64ca\x8a08\x6642\x5668"));
				MetaData->SetValue(NewProp_CurrentSpellingEndingTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentSpellingEndingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSpellingEndingTimeLength, TEXT("ToolTip"), TEXT("\x76ee\x524d\x65bd\x6cd5\x5f8c\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentSpellingBeginingTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentSpellingBeginingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSpellingBeginingTimeLength, TEXT("ToolTip"), TEXT("\x76ee\x524d\x65bd\x6cd5\x524d\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentSpellingAnimationTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentSpellingAnimationTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSpellingAnimationTimeLength, TEXT("ToolTip"), TEXT("\x76ee\x524d\x65bd\x6cd5\x52d5\x756b\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentSpellingWatingTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentSpellingWatingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSpellingWatingTimeLength, TEXT("ToolTip"), TEXT("waiting for next attack\n|---------------|\n                   CurrentSpellingAnimationTimeLength\n                   |---------------------------------------------------------------|\n                   CurrentSpellingBeginingTimeLength\n                   |--------------------------------|\n                                                                            CurrentSpellingEndingTimeLength\n                                                                            |------------------------------|\n                                                                            ^\n                                           Spell cold down\n   // \x76ee\x524d\x65bd\x6cd5\x524d\x7b49\x5f85\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentAttackingEndingTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackingEndingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackingEndingTimeLength, TEXT("ToolTip"), TEXT("\x76ee\x524d\x653b\x64ca\x5f8c\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentAttackingBeginingTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackingBeginingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackingBeginingTimeLength, TEXT("ToolTip"), TEXT("\x76ee\x524d\x653b\x64ca\x524d\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationRate, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationRate, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationRate, TEXT("ToolTip"), TEXT("\x76ee\x524d\x653b\x64ca\x52d5\x756b\x64ad\x653e\x901f\x5ea6"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationTimeLength, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentAttackingAnimationTimeLength, TEXT("ToolTip"), TEXT("Each Attacking Time gap\n|---------------------------------------------------------------------------------------|\n                                    waiting for next attack\n                                   |-----------------------|\nCurrentAttackingAnimationTimeLength\n|---------------------------------------------------------------|\nCurrentAttackingBeginingTimeLength\n|--------------------------------|\n                                    CurrentAttackingEndingTimeLength\n                                    |------------------------------|\n                                    ^\n                       Cause Damage\n// \x76ee\x524d\x653b\x64ca\x52d5\x756b\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_IsDead, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_IsDead, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_IsDead, TEXT("ToolTip"), TEXT("\x76ee\x524d\x662f\x5426\x5012\x4e0b"));
				MetaData->SetValue(NewProp_IsAttacked, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_IsAttacked, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_IsAttacked, TEXT("ToolTip"), TEXT("\x7576\x524d\x666e\x653b\x662f\x5426\x6253\x51fa\x4f86\x4e86"));
				MetaData->SetValue(NewProp_PlayAttack, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_PlayAttack, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_PlayAttack, TEXT("ToolTip"), TEXT("\x76ee\x524d\x662f\x5426\x653b\x64ca"));
				MetaData->SetValue(NewProp_TeamId, TEXT("Category"), TEXT("Current"));
				MetaData->SetValue(NewProp_TeamId, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_TeamId, TEXT("ToolTip"), TEXT("\x968a\x4f0did"));
				MetaData->SetValue(NewProp_MinimumDontMoveDistance, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_MinimumDontMoveDistance, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_MinimumDontMoveDistance, TEXT("ToolTip"), TEXT("\x6700\x5c0f\x79fb\x52d5\x8ddd\x96e2"));
				MetaData->SetValue(NewProp_PickupObjectDistance, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_PickupObjectDistance, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_PickupObjectDistance, TEXT("ToolTip"), TEXT("\x64bf\x6771\x897f\x7684\x8ddd\x96e2"));
				MetaData->SetValue(NewProp_isSelection, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_isSelection, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Skill_Points, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Skill_Points, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Skill_Points, TEXT("ToolTip"), TEXT("\x53ef\x4ee5\x4f7f\x7528\x7684\x6280\x80fd\x9ede\x6578"));
				MetaData->SetValue(NewProp_CurrentSkillDirection, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_CurrentSkillDirection, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSkillDirection, TEXT("ToolTip"), TEXT("\x7576\x524d\x6280\x80fd\x6307\x5411"));
				MetaData->SetValue(NewProp_CurrentSkillHint, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_CurrentSkillHint, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_CurrentSkillHint, TEXT("ToolTip"), TEXT("\x7576\x524d\x6280\x80fd\x63d0\x793a"));
				MetaData->SetValue(NewProp_LevelProperty_Intelligence, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_LevelProperty_Intelligence, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_LevelProperty_Intelligence, TEXT("ToolTip"), TEXT("\x6bcf\x500b\x7b49\x7d1a\x63d0\x5347\x7684\x667a\x529b"));
				MetaData->SetValue(NewProp_LevelProperty_Agility, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_LevelProperty_Agility, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_LevelProperty_Agility, TEXT("ToolTip"), TEXT("\x6bcf\x500b\x7b49\x7d1a\x63d0\x5347\x7684\x654f\x6377"));
				MetaData->SetValue(NewProp_LevelProperty_Strength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_LevelProperty_Strength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_LevelProperty_Strength, TEXT("ToolTip"), TEXT("\x6bcf\x500b\x7b49\x7d1a\x63d0\x5347\x7684\x529b\x91cf"));
				MetaData->SetValue(NewProp_LevelProperty_Attack, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_LevelProperty_Attack, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_LevelProperty_Attack, TEXT("ToolTip"), TEXT("\x6bcf\x500b\x7b49\x7d1a\x63d0\x5347\x7684XXX\x4e0d\x7d2f\x52a0\n\x6bcf\x500b\x7b49\x7d1a\x63d0\x5347\x7684\x653b\x64ca\x529b"));
				MetaData->SetValue(NewProp_Intelligence, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Intelligence, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Intelligence, TEXT("ToolTip"), TEXT("\x667a\x529b"));
				MetaData->SetValue(NewProp_Agility, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Agility, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Agility, TEXT("ToolTip"), TEXT("\x654f\x6377"));
				MetaData->SetValue(NewProp_Strength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Strength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Strength, TEXT("ToolTip"), TEXT("\x529b\x91cf"));
				MetaData->SetValue(NewProp_BaseBountyGold, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseBountyGold, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseBountyGold, TEXT("ToolTip"), TEXT("\x57fa\x790e\x6389\x7387\x91d1\x9322"));
				MetaData->SetValue(NewProp_BaseIntelligence, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseIntelligence, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseIntelligence, TEXT("ToolTip"), TEXT("\x57fa\x790e\x667a\x529b"));
				MetaData->SetValue(NewProp_BaseAgility, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAgility, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAgility, TEXT("ToolTip"), TEXT("\x57fa\x790e\x654f\x6377"));
				MetaData->SetValue(NewProp_BaseStrength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseStrength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseStrength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x529b\x91cf"));
				MetaData->SetValue(NewProp_BaseMP, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseMP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseMP, TEXT("ToolTip"), TEXT("\x57fa\x790e\x9b54\x529b"));
				MetaData->SetValue(NewProp_BaseHP, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseHP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseHP, TEXT("ToolTip"), TEXT("\x57fa\x790e\x8840\x91cf"));
				MetaData->SetValue(NewProp_BaseRegenMP, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseRegenMP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseRegenMP, TEXT("ToolTip"), TEXT("\x57fa\x790e\x56de\x9b54"));
				MetaData->SetValue(NewProp_BaseRegenHP, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseRegenHP, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseRegenHP, TEXT("ToolTip"), TEXT("\x57fa\x790e\x56de\x8840"));
				MetaData->SetValue(NewProp_BaseMoveSpeed, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseMoveSpeed, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseMoveSpeed, TEXT("ToolTip"), TEXT("\x57fa\x790e\x79fb\x52d5\x901f\x5ea6"));
				MetaData->SetValue(NewProp_BaseAttack, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttack, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttack, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x529b"));
				MetaData->SetValue(NewProp_BaseArmor, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseArmor, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseArmor, TEXT("ToolTip"), TEXT("\x57fa\x790e\x88dd\x7532"));
				MetaData->SetValue(NewProp_BasePhysicsInjuredRatio, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BasePhysicsInjuredRatio, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BasePhysicsInjuredRatio, TEXT("ToolTip"), TEXT("\x57fa\x790e\x7269\x7406\x53d7\x50b7\x500d\x7387"));
				MetaData->SetValue(NewProp_BaseMagicInjuredRatio, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseMagicInjuredRatio, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseMagicInjuredRatio, TEXT("ToolTip"), TEXT("\x57fa\x790e\x9b54\x6cd5\x53d7\x50b7\x500d\x7387"));
				MetaData->SetValue(NewProp_FollowActorUpdateTimeGap, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_FollowActorUpdateTimeGap, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_FollowActorUpdateTimeGap, TEXT("ToolTip"), TEXT("\x8ffd\x8e28\x76ee\x6a19\x66f4\x65b0\x6642\x9593"));
				MetaData->SetValue(NewProp_BaseSpellingEndingTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseSpellingEndingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpellingEndingTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x65bd\x6cd5\x5f8c\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseSpellingBeginingTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseSpellingBeginingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpellingBeginingTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x65bd\x6cd5\x524d\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseSpellingAnimationTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseSpellingAnimationTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpellingAnimationTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x65bd\x6cd5\x52d5\x756b\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseSpellingWatingTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseSpellingWatingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseSpellingWatingTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x65bd\x6cd5\x524d\x7b49\x5f85\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseAttackingEndingTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttackingEndingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttackingEndingTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x5f8c\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseAttackingBeginingTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttackingBeginingTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttackingBeginingTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x524d\x6416\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseAttackingAnimationTimeLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttackingAnimationTimeLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttackingAnimationTimeLength, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x52d5\x756b\x6642\x9593\x9577\x5ea6"));
				MetaData->SetValue(NewProp_BaseAttackSpeedSecond, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttackSpeedSecond, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttackSpeedSecond, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x901f"));
				MetaData->SetValue(NewProp_AdditionAttackSpeed, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_AdditionAttackSpeed, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_AdditionAttackSpeed, TEXT("ToolTip"), TEXT("\x653b\x901f\x52a0\x4e58"));
				MetaData->SetValue(NewProp_BaseAttackRadius, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_BaseAttackRadius, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_BaseAttackRadius, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x8ddd\x96e2"));
				MetaData->SetValue(NewProp_Skill_Classes, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Skill_Classes, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Skills, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Skills, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Skills, TEXT("ToolTip"), TEXT("\x57fa\x790e\x653b\x64ca\x8ddd\x96e2"));
				MetaData->SetValue(NewProp_ScreenPosition, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_ScreenPosition, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_ScreenPosition, TEXT("ToolTip"), TEXT("set by HUD"));
				MetaData->SetValue(NewProp_Head, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_Head, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_Head, TEXT("ToolTip"), TEXT("\x5927\x982d\x8cbc"));
				MetaData->SetValue(NewProp_HPBarLength, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_HPBarLength, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_HPBarLength, TEXT("ToolTip"), TEXT("\x8840\x689d\x9577\x5ea6"));
				MetaData->SetValue(NewProp_HeroHistoryDescription, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_HeroHistoryDescription, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_HeroHistoryDescription, TEXT("ToolTip"), TEXT("\x6b77\x53f2\x8aaa\x660e"));
				MetaData->SetValue(NewProp_HeroName, TEXT("Category"), TEXT("Hero"));
				MetaData->SetValue(NewProp_HeroName, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_HeroName, TEXT("ToolTip"), TEXT("\x82f1\x96c4\x540d"));
				MetaData->SetValue(NewProp_ShowDamageEffect, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_ShowDamageEffect, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_HeroBullet, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_HeroBullet, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_PositionUnderFoot, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_PositionUnderFoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PositionUnderFoot, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_PositionUnderFoot, TEXT("ToolTip"), TEXT("\x624b\x52d5\x8a2d\x5b9a\x7684\x8173\x5e95\x4f4d\x7f6e"));
				MetaData->SetValue(NewProp_PositionOnHead, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_PositionOnHead, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PositionOnHead, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_PositionOnHead, TEXT("ToolTip"), TEXT("\x624b\x52d5\x8a2d\x5b9a\x7684\x982d\x9802\x4f4d\x7f6e"));
				MetaData->SetValue(NewProp_SelectionDecal, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_SelectionDecal, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SelectionDecal, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_SelectionDecal, TEXT("ToolTip"), TEXT("\x9078\x4eba\x7684\x5730\x7248\x5149\x74b0"));
				MetaData->SetValue(NewProp_IsDebug, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_IsDebug, TEXT("ModuleRelativePath"), TEXT("Public/HeroCharacter.h"));
				MetaData->SetValue(NewProp_IsDebug, TEXT("ToolTip"), TEXT("Debug information"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroCharacter, 804710193);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroCharacter(Z_Construct_UClass_AHeroCharacter, &AHeroCharacter::StaticClass, TEXT("/Script/MOBA"), TEXT("AHeroCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
