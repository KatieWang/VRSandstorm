// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "levelScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelevelScript() {}
// Cross Module References
	DARUDESANDSTORM_API UClass* Z_Construct_UClass_AlevelScript_NoRegister();
	DARUDESANDSTORM_API UClass* Z_Construct_UClass_AlevelScript();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_darudeSandstorm();
	DARUDESANDSTORM_API UFunction* Z_Construct_UFunction_AlevelScript_DoSomething();
// End Cross Module References
	void AlevelScript::StaticRegisterNativesAlevelScript()
	{
		UClass* Class = AlevelScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoSomething", (Native)&AlevelScript::execDoSomething },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AlevelScript_DoSomething()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LevelBlueprint" },
				{ "ModuleRelativePath", "levelScript.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AlevelScript, "DoSomething", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AlevelScript_NoRegister()
	{
		return AlevelScript::StaticClass();
	}
	UClass* Z_Construct_UClass_AlevelScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
				(UObject* (*)())Z_Construct_UPackage__Script_darudeSandstorm,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AlevelScript_DoSomething, "DoSomething" }, // 1466496401
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "levelScript.h" },
				{ "ModuleRelativePath", "levelScript.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AlevelScript>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AlevelScript::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AlevelScript, 1402076331);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AlevelScript(Z_Construct_UClass_AlevelScript, &AlevelScript::StaticClass, TEXT("/Script/darudeSandstorm"), TEXT("AlevelScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlevelScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
