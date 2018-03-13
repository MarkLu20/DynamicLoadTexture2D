// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OpenDialog.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDialog() {}
// Cross Module References
	DYNAMICLOADTEXTURE2D_API UClass* Z_Construct_UClass_UOpenDialog_NoRegister();
	DYNAMICLOADTEXTURE2D_API UClass* Z_Construct_UClass_UOpenDialog();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DynamicLoadTexture2D();
// End Cross Module References
	void UOpenDialog::StaticRegisterNativesUOpenDialog()
	{
	}
	UClass* Z_Construct_UClass_UOpenDialog_NoRegister()
	{
		return UOpenDialog::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDialog()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_DynamicLoadTexture2D();
			OuterClass = UOpenDialog::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDialog> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDialog.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/OpenDialog.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDialog, 1620438734);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDialog(Z_Construct_UClass_UOpenDialog, &UOpenDialog::StaticClass, TEXT("/Script/DynamicLoadTexture2D"), TEXT("UOpenDialog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDialog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
