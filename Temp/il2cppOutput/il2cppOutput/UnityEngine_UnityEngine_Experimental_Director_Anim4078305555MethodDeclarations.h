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
#include "UnityEngine_UnityEngine_Experimental_Director_Play1502856514.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Anim4078305555.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo2410896200.h"
#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Experimental.Director.AnimatorControllerPlayable
struct AnimatorControllerPlayable_t4078305555;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;
// System.String
struct String_t;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t2969332312;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t3274872481;
// System.Object
struct Il2CppObject;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t1936965233;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1381019216;

// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::.ctor()
extern "C"  void AnimatorControllerPlayable__ctor_m98486062 (AnimatorControllerPlayable_t4078305555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayableHandle UnityEngine.Experimental.Director.AnimatorControllerPlayable::op_Implicit(UnityEngine.Experimental.Director.AnimatorControllerPlayable)
extern "C"  PlayableHandle_t1502856514  AnimatorControllerPlayable_op_Implicit_m2653766077 (Il2CppObject * __this /* static, unused */, AnimatorControllerPlayable_t4078305555 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetAnimatorControllerInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  RuntimeAnimatorController_t670468573 * AnimatorControllerPlayable_GetAnimatorControllerInternal_m3295942522 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetAnimatorControllerInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  RuntimeAnimatorController_t670468573 * AnimatorControllerPlayable_INTERNAL_CALL_GetAnimatorControllerInternal_m239716681 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetFloat(System.String)
extern "C"  float AnimatorControllerPlayable_GetFloat_m3973018798 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetFloat(System.Int32)
extern "C"  float AnimatorControllerPlayable_GetFloat_m1390479365 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetFloat(System.String,System.Single)
extern "C"  void AnimatorControllerPlayable_SetFloat_m1976526821 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetFloat(System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_SetFloat_m3591286820 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetBool(System.String)
extern "C"  bool AnimatorControllerPlayable_GetBool_m3591753284 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetBool(System.Int32)
extern "C"  bool AnimatorControllerPlayable_GetBool_m1148461985 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetBool(System.String,System.Boolean)
extern "C"  void AnimatorControllerPlayable_SetBool_m557806493 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetBool(System.Int32,System.Boolean)
extern "C"  void AnimatorControllerPlayable_SetBool_m1779744142 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetInteger(System.String)
extern "C"  int32_t AnimatorControllerPlayable_GetInteger_m4173276460 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetInteger(System.Int32)
extern "C"  int32_t AnimatorControllerPlayable_GetInteger_m3742708739 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetInteger(System.String,System.Int32)
extern "C"  void AnimatorControllerPlayable_SetInteger_m1311149575 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetInteger(System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_SetInteger_m1170756226 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetTrigger(System.String)
extern "C"  void AnimatorControllerPlayable_SetTrigger_m3144166126 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetTrigger(System.Int32)
extern "C"  void AnimatorControllerPlayable_SetTrigger_m4082809679 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResetTrigger(System.String)
extern "C"  void AnimatorControllerPlayable_ResetTrigger_m1410782179 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResetTrigger(System.Int32)
extern "C"  void AnimatorControllerPlayable_ResetTrigger_m2216540396 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsParameterControlledByCurve(System.String)
extern "C"  bool AnimatorControllerPlayable_IsParameterControlledByCurve_m1187113395 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsParameterControlledByCurve(System.Int32)
extern "C"  bool AnimatorControllerPlayable_IsParameterControlledByCurve_m3222505226 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::get_layerCount()
extern "C"  int32_t AnimatorControllerPlayable_get_layerCount_m3541790599 (AnimatorControllerPlayable_t4078305555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerCountInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  int32_t AnimatorControllerPlayable_GetLayerCountInternal_m467020652 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetLayerCountInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetLayerCountInternal_m2530620255 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerNameInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_GetLayerNameInternal_m3717310182 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetLayerNameInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_INTERNAL_CALL_GetLayerNameInternal_m2049776925 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerName(System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_GetLayerName_m2571001466 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerIndexInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  int32_t AnimatorControllerPlayable_GetLayerIndexInternal_m696260605 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___layerName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetLayerIndexInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetLayerIndexInternal_m1847150746 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___layerName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerIndex(System.String)
extern "C"  int32_t AnimatorControllerPlayable_GetLayerIndex_m3450603267 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___layerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerWeightInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  float AnimatorControllerPlayable_GetLayerWeightInternal_m2558846198 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetLayerWeightInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  float AnimatorControllerPlayable_INTERNAL_CALL_GetLayerWeightInternal_m3829748773 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetLayerWeight(System.Int32)
extern "C"  float AnimatorControllerPlayable_GetLayerWeight_m839112938 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetLayerWeightInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_SetLayerWeightInternal_m1987718751 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetLayerWeightInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetLayerWeightInternal_m1418536944 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetLayerWeight(System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_SetLayerWeight_m795493633 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorStateInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_GetCurrentAnimatorStateInfoInternal_m1841547606 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetCurrentAnimatorStateInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_INTERNAL_CALL_GetCurrentAnimatorStateInfoInternal_m3799001565 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_GetCurrentAnimatorStateInfo_m689786022 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorStateInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_GetNextAnimatorStateInfoInternal_m928343784 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetNextAnimatorStateInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_INTERNAL_CALL_GetNextAnimatorStateInfoInternal_m1550960895 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  AnimatorControllerPlayable_GetNextAnimatorStateInfo_m1349013420 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetAnimatorTransitionInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorTransitionInfo_t2410896200  AnimatorControllerPlayable_GetAnimatorTransitionInfoInternal_m2884059009 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetAnimatorTransitionInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorTransitionInfo_t2410896200  AnimatorControllerPlayable_INTERNAL_CALL_GetAnimatorTransitionInfoInternal_m2259454958 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetAnimatorTransitionInfo(System.Int32)
extern "C"  AnimatorTransitionInfo_t2410896200  AnimatorControllerPlayable_GetAnimatorTransitionInfo_m1294266687 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorClipInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_GetCurrentAnimatorClipInfoInternal_m2037167218 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetCurrentAnimatorClipInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_INTERNAL_CALL_GetCurrentAnimatorClipInfoInternal_m3542665271 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_GetCurrentAnimatorClipInfo_m663340294 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C"  void AnimatorControllerPlayable_GetCurrentAnimatorClipInfo_m3523103275 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, List_1_t3274872481 * ___clips1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C"  void AnimatorControllerPlayable_GetNextAnimatorClipInfo_m2439552509 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, List_1_t3274872481 * ___clips1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetAnimatorClipInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean,System.Object)
extern "C"  void AnimatorControllerPlayable_GetAnimatorClipInfoInternal_m2427817131 (AnimatorControllerPlayable_t4078305555 * __this, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, bool ___isCurrent2, Il2CppObject * ___clips3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetAnimatorClipInfoInternal(UnityEngine.Experimental.Director.AnimatorControllerPlayable,UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean,System.Object)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_GetAnimatorClipInfoInternal_m3180917212 (Il2CppObject * __this /* static, unused */, AnimatorControllerPlayable_t4078305555 * ___self0, PlayableHandle_t1502856514 * ___handle1, int32_t ___layerIndex2, bool ___isCurrent3, Il2CppObject * ___clips4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetAnimatorClipInfoCountInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean)
extern "C"  int32_t AnimatorControllerPlayable_GetAnimatorClipInfoCountInternal_m826336390 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, bool ___current2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetAnimatorClipInfoCountInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetAnimatorClipInfoCountInternal_m76073097 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, bool ___current2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetCurrentAnimatorClipInfoCount(System.Int32)
extern "C"  int32_t AnimatorControllerPlayable_GetCurrentAnimatorClipInfoCount_m335090574 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorClipInfoCount(System.Int32)
extern "C"  int32_t AnimatorControllerPlayable_GetNextAnimatorClipInfoCount_m2044259572 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorClipInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_GetNextAnimatorClipInfoInternal_m2063705906 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetNextAnimatorClipInfoInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_INTERNAL_CALL_GetNextAnimatorClipInfoInternal_m4165249349 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetNextAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* AnimatorControllerPlayable_GetNextAnimatorClipInfo_m962214430 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResolveHash(System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_ResolveHash_m2472572196 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResolveHashInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_ResolveHashInternal_m4066573656 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_ResolveHashInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  String_t* AnimatorControllerPlayable_INTERNAL_CALL_ResolveHashInternal_m1707002337 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsInTransitionInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_IsInTransitionInternal_m3004933857 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_IsInTransitionInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_IsInTransitionInternal_m2978200270 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsInTransition(System.Int32)
extern "C"  bool AnimatorControllerPlayable_IsInTransition_m4064534331 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetParameterCountInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  int32_t AnimatorControllerPlayable_GetParameterCountInternal_m3993919750 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetParameterCountInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetParameterCountInternal_m3593070209 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::get_parameterCount()
extern "C"  int32_t AnimatorControllerPlayable_get_parameterCount_m993805465 (AnimatorControllerPlayable_t4078305555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetParametersArrayInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  AnimatorControllerParameterU5BU5D_t1936965233* AnimatorControllerPlayable_GetParametersArrayInternal_m851504719 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetParametersArrayInternal(UnityEngine.Experimental.Director.PlayableHandle&)
extern "C"  AnimatorControllerParameterU5BU5D_t1936965233* AnimatorControllerPlayable_INTERNAL_CALL_GetParametersArrayInternal_m3948383534 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetParameter(System.Int32)
extern "C"  AnimatorControllerParameter_t1381019216 * AnimatorControllerPlayable_GetParameter_m1109094904 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::StringToHash(System.String)
extern "C"  int32_t AnimatorControllerPlayable_StringToHash_m223263502 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.String,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m2203048040 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.String,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m3978247231 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m3493632207 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, float ___fixedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m246216837 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m2153894334 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTime_m1082259778 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, float ___fixedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTimeInternal_m793606818 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, float ___fixedTime4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTimeInternal_m3955067023 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInFixedTimeInternal_m3729673154 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_CrossFadeInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_CrossFadeInFixedTimeInternal_m3528719771 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, float ___fixedTime4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.String,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFade_m2332797404 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.String,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFade_m437921439 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFade_m2119841183 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.Int32,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFade_m1243737073 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFade_m949607638 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFade_m3146661810 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, float ___transitionDuration1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInternal_m220517942 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, float ___normalizedTime4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32)
extern "C"  void AnimatorControllerPlayable_CrossFadeInternal_m622348039 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::CrossFadeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_CrossFadeInternal_m3412201542 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_CrossFadeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_CrossFadeInternal_m698817831 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, float ___transitionDuration2, int32_t ___layer3, float ___normalizedTime4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.String,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m172593751 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.String)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m3734997604 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.String,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m2562520484 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m2966168794 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m2493327565 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTime(System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTime_m2629510873 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTimeInternal_m2767099167 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, float ___fixedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTimeInternal_m2047085454 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInFixedTimeInternal_m623452639 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_PlayInFixedTimeInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_PlayInFixedTimeInternal_m847261734 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, float ___fixedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.String,System.Int32)
extern "C"  void AnimatorControllerPlayable_Play_m3114724599 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.String)
extern "C"  void AnimatorControllerPlayable_Play_m1337154648 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.String,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_Play_m1100499576 (AnimatorControllerPlayable_t4078305555 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_Play_m1350238866 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.Int32)
extern "C"  void AnimatorControllerPlayable_Play_m4092315465 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::Play(System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_Play_m2286317581 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_PlayInternal_m3385259863 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInternal_m2770955394 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::PlayInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_PlayInternal_m4018423479 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_PlayInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_PlayInternal_m3496633968 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___stateNameHash1, int32_t ___layer2, float ___normalizedTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::HasState(System.Int32,System.Int32)
extern "C"  bool AnimatorControllerPlayable_HasState_m4036688937 (AnimatorControllerPlayable_t4078305555 * __this, int32_t ___layerIndex0, int32_t ___stateID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::HasStateInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  bool AnimatorControllerPlayable_HasStateInternal_m1905524675 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, int32_t ___stateID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_HasStateInternal(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_HasStateInternal_m2474394942 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___layerIndex1, int32_t ___stateID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetFloatString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Single)
extern "C"  void AnimatorControllerPlayable_SetFloatString_m3937146789 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetFloatString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetFloatString_m743616790 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetFloatID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_SetFloatID_m2632606700 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetFloatID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Single)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetFloatID_m1667841187 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetFloatString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  float AnimatorControllerPlayable_GetFloatString_m2999633302 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetFloatString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  float AnimatorControllerPlayable_INTERNAL_CALL_GetFloatString_m4205749063 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetFloatID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  float AnimatorControllerPlayable_GetFloatID_m3274868729 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetFloatID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  float AnimatorControllerPlayable_INTERNAL_CALL_GetFloatID_m1816887522 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetBoolString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Boolean)
extern "C"  void AnimatorControllerPlayable_SetBoolString_m1314460333 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetBoolString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Boolean)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetBoolString_m1232105510 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetBoolID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean)
extern "C"  void AnimatorControllerPlayable_SetBoolID_m1141253014 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetBoolID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Boolean)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetBoolID_m2987425503 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetBoolString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  bool AnimatorControllerPlayable_GetBoolString_m2552769404 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetBoolString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_GetBoolString_m538178071 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetBoolID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_GetBoolID_m2566184981 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetBoolID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_GetBoolID_m3610941922 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetIntegerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Int32)
extern "C"  void AnimatorControllerPlayable_SetIntegerString_m1750228335 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetIntegerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String,System.Int32)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetIntegerString_m4224797784 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetIntegerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_SetIntegerID_m1774408598 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetIntegerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32,System.Int32)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetIntegerID_m3110109413 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetIntegerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  int32_t AnimatorControllerPlayable_GetIntegerString_m3063601436 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetIntegerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetIntegerString_m1883966697 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::GetIntegerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  int32_t AnimatorControllerPlayable_GetIntegerID_m756947419 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_GetIntegerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  int32_t AnimatorControllerPlayable_INTERNAL_CALL_GetIntegerID_m2295839520 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetTriggerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  void AnimatorControllerPlayable_SetTriggerString_m2313149510 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetTriggerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetTriggerString_m489309069 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::SetTriggerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_SetTriggerID_m290818743 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_SetTriggerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_SetTriggerID_m508896534 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResetTriggerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  void AnimatorControllerPlayable_ResetTriggerString_m1669955779 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_ResetTriggerString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_ResetTriggerString_m395754516 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::ResetTriggerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_ResetTriggerID_m326518904 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_ResetTriggerID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  void AnimatorControllerPlayable_INTERNAL_CALL_ResetTriggerID_m3592790433 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsParameterControlledByCurveString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  bool AnimatorControllerPlayable_IsParameterControlledByCurveString_m4036987523 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_IsParameterControlledByCurveString(UnityEngine.Experimental.Director.PlayableHandle&,System.String)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_IsParameterControlledByCurveString_m1715379406 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::IsParameterControlledByCurveID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_IsParameterControlledByCurveID_m4183631446 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.AnimatorControllerPlayable::INTERNAL_CALL_IsParameterControlledByCurveID(UnityEngine.Experimental.Director.PlayableHandle&,System.Int32)
extern "C"  bool AnimatorControllerPlayable_INTERNAL_CALL_IsParameterControlledByCurveID_m3975433561 (Il2CppObject * __this /* static, unused */, PlayableHandle_t1502856514 * ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
