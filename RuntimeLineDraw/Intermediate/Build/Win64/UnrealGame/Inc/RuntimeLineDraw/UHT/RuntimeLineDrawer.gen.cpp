// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeLineDraw/Public/RuntimeLineDrawer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeLineDrawer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMELINEDRAW_API UClass* Z_Construct_UClass_URuntimeLineDrawer();
	RUNTIMELINEDRAW_API UClass* Z_Construct_UClass_URuntimeLineDrawer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeLineDraw();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeLineDrawer::execDrawLinesRuntime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Starts);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Ends);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_GET_UBOOL(Z_Param_bDepthTest);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeLineDrawer::DrawLinesRuntime(Z_Param_WorldContextObject,Z_Param_Out_Starts,Z_Param_Out_Ends,Z_Param_Out_Colors,Z_Param_Thickness,Z_Param_LifeTime,Z_Param_bDepthTest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeLineDrawer::execDrawLineRuntime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_GET_UBOOL(Z_Param_bDepthTest);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeLineDrawer::DrawLineRuntime(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Color,Z_Param_Thickness,Z_Param_LifeTime,Z_Param_bDepthTest);
		P_NATIVE_END;
	}
	void URuntimeLineDrawer::StaticRegisterNativesURuntimeLineDrawer()
	{
		UClass* Class = URuntimeLineDrawer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawLineRuntime", &URuntimeLineDrawer::execDrawLineRuntime },
			{ "DrawLinesRuntime", &URuntimeLineDrawer::execDrawLinesRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics
	{
		struct RuntimeLineDrawer_eventDrawLineRuntime_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			FLinearColor Color;
			float Thickness;
			float LifeTime;
			bool bDepthTest;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static void NewProp_bDepthTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLineRuntime_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_bDepthTest_SetBit(void* Obj)
	{
		((RuntimeLineDrawer_eventDrawLineRuntime_Parms*)Obj)->bDepthTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_bDepthTest = { "bDepthTest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeLineDrawer_eventDrawLineRuntime_Parms), &Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_bDepthTest_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::NewProp_bDepthTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeDraw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draw a single line */" },
#endif
		{ "CPP_Default_bDepthTest", "true" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_LifeTime", "0.000000" },
		{ "CPP_Default_Thickness", "2.000000" },
		{ "ModuleRelativePath", "Public/RuntimeLineDrawer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw a single line" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeLineDrawer, nullptr, "DrawLineRuntime", nullptr, nullptr, Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::RuntimeLineDrawer_eventDrawLineRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::RuntimeLineDrawer_eventDrawLineRuntime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics
	{
		struct RuntimeLineDrawer_eventDrawLinesRuntime_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> Starts;
			TArray<FVector> Ends;
			TArray<FLinearColor> Colors;
			float Thickness;
			float LifeTime;
			bool bDepthTest;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Starts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Starts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Starts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ends;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static void NewProp_bDepthTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts_Inner = { "Starts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts = { "Starts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, Starts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts_MetaData), Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends_Inner = { "Ends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends = { "Ends", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, Ends), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends_MetaData), Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors_MetaData), Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeLineDrawer_eventDrawLinesRuntime_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_bDepthTest_SetBit(void* Obj)
	{
		((RuntimeLineDrawer_eventDrawLinesRuntime_Parms*)Obj)->bDepthTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_bDepthTest = { "bDepthTest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RuntimeLineDrawer_eventDrawLinesRuntime_Parms), &Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_bDepthTest_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Starts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Ends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::NewProp_bDepthTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeDraw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draw multiple lines in one call */" },
#endif
		{ "CPP_Default_bDepthTest", "true" },
		{ "CPP_Default_LifeTime", "0.000000" },
		{ "CPP_Default_Thickness", "2.000000" },
		{ "ModuleRelativePath", "Public/RuntimeLineDrawer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw multiple lines in one call" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeLineDrawer, nullptr, "DrawLinesRuntime", nullptr, nullptr, Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::RuntimeLineDrawer_eventDrawLinesRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::RuntimeLineDrawer_eventDrawLinesRuntime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeLineDrawer);
	UClass* Z_Construct_UClass_URuntimeLineDrawer_NoRegister()
	{
		return URuntimeLineDrawer::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeLineDrawer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeLineDrawer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeLineDraw,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeLineDrawer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeLineDrawer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeLineDrawer_DrawLineRuntime, "DrawLineRuntime" }, // 182048091
		{ &Z_Construct_UFunction_URuntimeLineDrawer_DrawLinesRuntime, "DrawLinesRuntime" }, // 3100842111
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeLineDrawer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeLineDrawer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime line drawing for Release/Shipping using ULineBatchComponent.\n */" },
#endif
		{ "IncludePath", "RuntimeLineDrawer.h" },
		{ "ModuleRelativePath", "Public/RuntimeLineDrawer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime line drawing for Release/Shipping using ULineBatchComponent." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeLineDrawer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeLineDrawer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeLineDrawer_Statics::ClassParams = {
		&URuntimeLineDrawer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeLineDrawer_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeLineDrawer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URuntimeLineDrawer()
	{
		if (!Z_Registration_Info_UClass_URuntimeLineDrawer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeLineDrawer.OuterSingleton, Z_Construct_UClass_URuntimeLineDrawer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeLineDrawer.OuterSingleton;
	}
	template<> RUNTIMELINEDRAW_API UClass* StaticClass<URuntimeLineDrawer>()
	{
		return URuntimeLineDrawer::StaticClass();
	}
	URuntimeLineDrawer::URuntimeLineDrawer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeLineDrawer);
	URuntimeLineDrawer::~URuntimeLineDrawer() {}
	struct Z_CompiledInDeferFile_FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeLineDrawer, URuntimeLineDrawer::StaticClass, TEXT("URuntimeLineDrawer"), &Z_Registration_Info_UClass_URuntimeLineDrawer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeLineDrawer), 3248353451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_2940324769(TEXT("/Script/RuntimeLineDraw"),
		Z_CompiledInDeferFile_FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_VehicleProject_Plugins_RuntimeLineDraw_Source_RuntimeLineDraw_Public_RuntimeLineDrawer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
