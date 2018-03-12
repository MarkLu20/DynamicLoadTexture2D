// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LoadTextureBPL.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadTextureBPL() {}
// Cross Module References
	DYNAMICLOADTEXTURE2D_API UFunction* Z_Construct_UFunction_ULoadTextureBPL_EnsureDiectory();
	DYNAMICLOADTEXTURE2D_API UClass* Z_Construct_UClass_ULoadTextureBPL();
	DYNAMICLOADTEXTURE2D_API UFunction* Z_Construct_UFunction_ULoadTextureBPL_LoadTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DYNAMICLOADTEXTURE2D_API UClass* Z_Construct_UClass_ULoadTextureBPL_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DynamicLoadTexture2D();
// End Cross Module References
	void ULoadTextureBPL::StaticRegisterNativesULoadTextureBPL()
	{
		UClass* Class = ULoadTextureBPL::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "EnsureDiectory", (Native)&ULoadTextureBPL::execEnsureDiectory },
			{ "LoadTexture2D", (Native)&ULoadTextureBPL::execLoadTexture2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ULoadTextureBPL_EnsureDiectory()
	{
		struct LoadTextureBPL_eventEnsureDiectory_Parms
		{
			FString path;
		};
		UObject* Outer = Z_Construct_UClass_ULoadTextureBPL();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnsureDiectory"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(LoadTextureBPL_eventEnsureDiectory_Parms));
			UProperty* NewProp_path = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("path"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(path, LoadTextureBPL_eventEnsureDiectory_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LoadTexture"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LoadTextureBPL.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULoadTextureBPL_LoadTexture2D()
	{
		struct LoadTextureBPL_eventLoadTexture2D_Parms
		{
			FString ImagePath;
			bool IsValid;
			int32 OutWidth;
			int32 OutHeight;
			UTexture2D* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ULoadTextureBPL();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadTexture2D"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(LoadTextureBPL_eventLoadTexture2D_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, LoadTextureBPL_eventLoadTexture2D_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_OutHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OutHeight, LoadTextureBPL_eventLoadTexture2D_Parms), 0x0010000000000180);
			UProperty* NewProp_OutWidth = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OutWidth, LoadTextureBPL_eventLoadTexture2D_Parms), 0x0010000000000180);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsValid, LoadTextureBPL_eventLoadTexture2D_Parms);
			UProperty* NewProp_IsValid = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsValid"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsValid, LoadTextureBPL_eventLoadTexture2D_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(IsValid, LoadTextureBPL_eventLoadTexture2D_Parms), sizeof(bool), true);
			UProperty* NewProp_ImagePath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ImagePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ImagePath, LoadTextureBPL_eventLoadTexture2D_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LoadTexture"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/LoadTextureBPL.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("FString diectory=\"\";"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadTextureBPL_NoRegister()
	{
		return ULoadTextureBPL::StaticClass();
	}
	UClass* Z_Construct_UClass_ULoadTextureBPL()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_DynamicLoadTexture2D();
			OuterClass = ULoadTextureBPL::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ULoadTextureBPL_EnsureDiectory());
				OuterClass->LinkChild(Z_Construct_UFunction_ULoadTextureBPL_LoadTexture2D());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULoadTextureBPL_EnsureDiectory(), "EnsureDiectory"); // 3758145202
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ULoadTextureBPL_LoadTexture2D(), "LoadTexture2D"); // 3635688384
				static TCppClassTypeInfo<TCppClassTypeTraits<ULoadTextureBPL> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LoadTextureBPL.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/LoadTextureBPL.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadTextureBPL, 1207239237);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadTextureBPL(Z_Construct_UClass_ULoadTextureBPL, &ULoadTextureBPL::StaticClass, TEXT("/Script/DynamicLoadTexture2D"), TEXT("ULoadTextureBPL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadTextureBPL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
