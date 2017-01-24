#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3067050131.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3067050131;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C"  void UnhandledExceptionHandler_RegisterUECatcher_m72343880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionHandler_HandleUnhandledException_m1413629867 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3067050131 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C"  void UnhandledExceptionHandler_PrintException_m1321283931 (Il2CppObject * __this /* static, unused */, String_t* ___title0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler(System.String,System.String,System.String)
extern "C"  void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2847695570 (Il2CppObject * __this /* static, unused */, String_t* ___managedExceptionType0, String_t* ___managedExceptionMessage1, String_t* ___managedExceptionStack2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
