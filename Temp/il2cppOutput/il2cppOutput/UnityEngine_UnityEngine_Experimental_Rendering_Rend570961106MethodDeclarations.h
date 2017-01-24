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
#include "UnityEngine_UnityEngine_Experimental_Rendering_Rend570961106.h"
#include "mscorlib_System_IntPtr2504060609.h"

// UnityEngine.Experimental.Rendering.RenderPipeline
struct RenderPipeline_t570961106;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;

// System.Void UnityEngine.Experimental.Rendering.RenderPipeline::Build_Internal()
extern "C"  void RenderPipeline_Build_Internal_m987152981 (RenderPipeline_t570961106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.RenderPipeline::CleanUp_Internal()
extern "C"  void RenderPipeline_CleanUp_Internal_m1220314115 (RenderPipeline_t570961106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.RenderPipeline::CleanupRenderPipeline()
extern "C"  void RenderPipeline_CleanupRenderPipeline_m1414347483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Rendering.RenderPipeline::DoRenderLoop_Internal(UnityEngine.Experimental.Rendering.RenderPipeline,UnityEngine.Camera[],System.IntPtr)
extern "C"  bool RenderPipeline_DoRenderLoop_Internal_m104621197 (Il2CppObject * __this /* static, unused */, RenderPipeline_t570961106 * ___srl0, CameraU5BU5D_t3079764780* ___cameras1, IntPtr_t ___loopPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Rendering.RenderPipeline::PrepareRenderPipeline(UnityEngine.Experimental.Rendering.RenderPipeline)
extern "C"  bool RenderPipeline_PrepareRenderPipeline_m2716264343 (Il2CppObject * __this /* static, unused */, RenderPipeline_t570961106 * ___srl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
