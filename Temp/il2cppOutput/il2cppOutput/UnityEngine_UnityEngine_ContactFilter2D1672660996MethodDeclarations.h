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
#include "UnityEngine_UnityEngine_ContactFilter2D1672660996.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.ContactFilter2D
struct ContactFilter2D_t1672660996;
struct ContactFilter2D_t1672660996_marshaled_pinvoke;
struct ContactFilter2D_t1672660996_marshaled_com;

// System.Void UnityEngine.ContactFilter2D::SetLayerMask(UnityEngine.LayerMask)
extern "C"  void ContactFilter2D_SetLayerMask_m846404302 (ContactFilter2D_t1672660996 * __this, LayerMask_t3188175821  ___layerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ContactFilter2D::SetDepth(System.Single,System.Single)
extern "C"  void ContactFilter2D_SetDepth_m3891076190 (ContactFilter2D_t1672660996 * __this, float ___minDepth0, float ___maxDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactFilter2D UnityEngine.ContactFilter2D::CreateLegacyFilter(System.Int32,System.Single,System.Single)
extern "C"  ContactFilter2D_t1672660996  ContactFilter2D_CreateLegacyFilter_m1912787689 (Il2CppObject * __this /* static, unused */, int32_t ___layerMask0, float ___minDepth1, float ___maxDepth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactFilter2D_t1672660996;
struct ContactFilter2D_t1672660996_marshaled_pinvoke;

extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke(const ContactFilter2D_t1672660996& unmarshaled, ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled);
extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke_back(const ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled, ContactFilter2D_t1672660996& unmarshaled);
extern "C" void ContactFilter2D_t1672660996_marshal_pinvoke_cleanup(ContactFilter2D_t1672660996_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactFilter2D_t1672660996;
struct ContactFilter2D_t1672660996_marshaled_com;

extern "C" void ContactFilter2D_t1672660996_marshal_com(const ContactFilter2D_t1672660996& unmarshaled, ContactFilter2D_t1672660996_marshaled_com& marshaled);
extern "C" void ContactFilter2D_t1672660996_marshal_com_back(const ContactFilter2D_t1672660996_marshaled_com& marshaled, ContactFilter2D_t1672660996& unmarshaled);
extern "C" void ContactFilter2D_t1672660996_marshal_com_cleanup(ContactFilter2D_t1672660996_marshaled_com& marshaled);
