// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TrainingGrounds2GameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainingGrounds2GameMode() {}
// Cross Module References
	TRAININGGROUNDS2_API UClass* Z_Construct_UClass_ATrainingGrounds2GameMode_NoRegister();
	TRAININGGROUNDS2_API UClass* Z_Construct_UClass_ATrainingGrounds2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TrainingGrounds2();
// End Cross Module References
	void ATrainingGrounds2GameMode::StaticRegisterNativesATrainingGrounds2GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATrainingGrounds2GameMode_NoRegister()
	{
		return ATrainingGrounds2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrainingGrounds2GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_TrainingGrounds2();
			OuterClass = ATrainingGrounds2GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATrainingGrounds2GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrainingGrounds2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TrainingGrounds2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrainingGrounds2GameMode, 2530811697);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrainingGrounds2GameMode(Z_Construct_UClass_ATrainingGrounds2GameMode, &ATrainingGrounds2GameMode::StaticClass, TEXT("/Script/TrainingGrounds2"), TEXT("ATrainingGrounds2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainingGrounds2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
