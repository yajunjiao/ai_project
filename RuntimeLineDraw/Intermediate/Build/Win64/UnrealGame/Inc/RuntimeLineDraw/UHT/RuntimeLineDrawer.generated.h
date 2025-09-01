// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeLineDrawer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
#ifdef RUNTIMELINEDRAW_RuntimeLineDrawer_generated_h
#error "RuntimeLineDrawer.generated.h already included, missing '#pragma once' in RuntimeLineDrawer.h"
#endif
#define RUNTIMELINEDRAW_RuntimeLineDrawer_generated_h

#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_SPARSE_DATA
#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawLinesRuntime); \
	DECLARE_FUNCTION(execDrawLineRuntime);


#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_ACCESSORS
#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeLineDrawer(); \
	friend struct Z_Construct_UClass_URuntimeLineDrawer_Statics; \
public: \
	DECLARE_CLASS(URuntimeLineDrawer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeLineDraw"), NO_API) \
	DECLARE_SERIALIZER(URuntimeLineDrawer)


#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeLineDrawer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeLineDrawer(URuntimeLineDrawer&&); \
	NO_API URuntimeLineDrawer(const URuntimeLineDrawer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeLineDrawer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeLineDrawer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeLineDrawer) \
	NO_API virtual ~URuntimeLineDrawer();


#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_9_PROLOG
#define FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_SPARSE_DATA \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_ACCESSORS \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_INCLASS_NO_PURE_DECLS \
	FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMELINEDRAW_API UClass* StaticClass<class URuntimeLineDrawer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
