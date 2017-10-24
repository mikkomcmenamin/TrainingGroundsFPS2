// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TrainingGrounds2HUD.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainingGrounds2HUD() {}
// Cross Module References
	TRAININGGROUNDS2_API UClass* Z_Construct_UClass_ATrainingGrounds2HUD_NoRegister();
	TRAININGGROUNDS2_API UClass* Z_Construct_UClass_ATrainingGrounds2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TrainingGrounds2();
// End Cross Module References
	void ATrainingGrounds2HUD::StaticRegisterNativesATrainingGrounds2HUD()
	{
	}
	UClass* Z_Construct_UClass_ATrainingGrounds2HUD_NoRegister()
	{
		return ATrainingGrounds2HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrainingGrounds2HUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_TrainingGrounds2();
			OuterClass = ATrainingGrounds2HUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2080028Cu;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATrainingGrounds2HUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrainingGrounds2HUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TrainingGrounds2HUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainingGrounds2HUD, 1367236973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainingGrounds2HUD(Z_Construct_UClass_ATrainingGrounds2HUD, &ATrainingGrounds2HUD::StaticClass, TEXT("/Script/TrainingGrounds2"), TEXT("ATrainingGrounds2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainingGrounds2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
