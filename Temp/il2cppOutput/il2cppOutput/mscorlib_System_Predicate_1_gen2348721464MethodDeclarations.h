﻿#pragma once

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
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo3905751349.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Predicate`1<UnityEngine.AnimatorClipInfo>
struct Predicate_1_t2348721464;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

// System.Void System.Predicate`1<UnityEngine.AnimatorClipInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m541404361_gshared (Predicate_1_t2348721464 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m541404361(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2348721464 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m541404361_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m744913181_gshared (Predicate_1_t2348721464 * __this, AnimatorClipInfo_t3905751349  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m744913181(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2348721464 *, AnimatorClipInfo_t3905751349 , const MethodInfo*))Predicate_1_Invoke_m744913181_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.AnimatorClipInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2336395304_gshared (Predicate_1_t2348721464 * __this, AnimatorClipInfo_t3905751349  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2336395304(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2348721464 *, AnimatorClipInfo_t3905751349 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2336395304_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.AnimatorClipInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1604508263_gshared (Predicate_1_t2348721464 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1604508263(__this, ___result0, method) ((  bool (*) (Predicate_1_t2348721464 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1604508263_gshared)(__this, ___result0, method)
