// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef DYNAMICLOADTEXTURE2D_LoadTextureBPL_generated_h
#error "LoadTextureBPL.generated.h already included, missing '#pragma once' in LoadTextureBPL.h"
#endif
#define DYNAMICLOADTEXTURE2D_LoadTextureBPL_generated_h

#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnsureDiectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULoadTextureBPL::EnsureDiectory(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=ULoadTextureBPL::LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	}


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnsureDiectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULoadTextureBPL::EnsureDiectory(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=ULoadTextureBPL::LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	}


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadTextureBPL(); \
	friend DYNAMICLOADTEXTURE2D_API class UClass* Z_Construct_UClass_ULoadTextureBPL(); \
public: \
	DECLARE_CLASS(ULoadTextureBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DynamicLoadTexture2D"), NO_API) \
	DECLARE_SERIALIZER(ULoadTextureBPL) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULoadTextureBPL(); \
	friend DYNAMICLOADTEXTURE2D_API class UClass* Z_Construct_UClass_ULoadTextureBPL(); \
public: \
	DECLARE_CLASS(ULoadTextureBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DynamicLoadTexture2D"), NO_API) \
	DECLARE_SERIALIZER(ULoadTextureBPL) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadTextureBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadTextureBPL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadTextureBPL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadTextureBPL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadTextureBPL(ULoadTextureBPL&&); \
	NO_API ULoadTextureBPL(const ULoadTextureBPL&); \
public:


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadTextureBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadTextureBPL(ULoadTextureBPL&&); \
	NO_API ULoadTextureBPL(const ULoadTextureBPL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadTextureBPL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadTextureBPL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadTextureBPL)


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_PRIVATE_PROPERTY_OFFSET
#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_19_PROLOG
#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_PRIVATE_PROPERTY_OFFSET \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_RPC_WRAPPERS \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_INCLASS \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_PRIVATE_PROPERTY_OFFSET \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_INCLASS_NO_PURE_DECLS \
	JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JsonArray_Plugins_DynamicLoadTexture2D_Source_DynamicLoadTexture2D_Public_LoadTextureBPL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
