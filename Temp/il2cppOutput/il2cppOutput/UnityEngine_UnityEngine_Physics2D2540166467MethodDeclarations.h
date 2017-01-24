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
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_ContactFilter2D1672660996.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

// System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
extern "C"  bool Physics2D_get_queriesHitTriggers_m361275035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m1220041042 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m122312471 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m3913913442 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2560154475 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2303387255 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_Raycast_m2368200185 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, ContactFilter2D_t1672660996  ___contactFilter2, RaycastHit2DU5BU5D_t4176517891* ___results3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single)
extern "C"  int32_t Physics2D_Raycast_m564567838 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, ContactFilter2D_t1672660996  ___contactFilter2, RaycastHit2DU5BU5D_t4176517891* ___results3, float ___distance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m2213595168 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m489831109 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2D_t4063908774 * ___raycastHit4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::Internal_RaycastNonAlloc(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_Internal_RaycastNonAlloc_m1874107548 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___direction1, float ___distance2, ContactFilter2D_t1672660996  ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Physics2D::INTERNAL_CALL_Internal_RaycastNonAlloc(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
extern "C"  int32_t Physics2D_INTERNAL_CALL_Internal_RaycastNonAlloc_m2253171281 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___origin0, Vector2_t2243707579 * ___direction1, float ___distance2, ContactFilter2D_t1672660996 * ___contactFilter3, RaycastHit2DU5BU5D_t4176517891* ___results4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m253330691 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m2808325432 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, float ___distance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_GetRayIntersectionAll_m120415839 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t4176517891* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m161475998 (Il2CppObject * __this /* static, unused */, Ray_t2469606224 * ___ray0, float ___distance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Physics2D::GetRigidbodyFromInstanceID(System.Int32)
extern "C"  Rigidbody2D_t502193897 * Physics2D_GetRigidbodyFromInstanceID_m3260338451 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::GetColliderFromInstanceID(System.Int32)
extern "C"  Collider2D_t646061738 * Physics2D_GetColliderFromInstanceID_m95920619 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m3532647019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
