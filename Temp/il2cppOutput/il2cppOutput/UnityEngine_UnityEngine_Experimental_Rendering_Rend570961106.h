#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// UnityEngine.Experimental.Rendering.RenderPipeline
struct RenderPipeline_t570961106;

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipeline
struct  RenderPipeline_t570961106  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderPipeline::m_NeedsRebuild
	bool ___m_NeedsRebuild_3;

public:
	inline static int32_t get_offset_of_m_NeedsRebuild_3() { return static_cast<int32_t>(offsetof(RenderPipeline_t570961106, ___m_NeedsRebuild_3)); }
	inline bool get_m_NeedsRebuild_3() const { return ___m_NeedsRebuild_3; }
	inline bool* get_address_of_m_NeedsRebuild_3() { return &___m_NeedsRebuild_3; }
	inline void set_m_NeedsRebuild_3(bool value)
	{
		___m_NeedsRebuild_3 = value;
	}
};

struct RenderPipeline_t570961106_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.RenderPipeline UnityEngine.Experimental.Rendering.RenderPipeline::s_CurrentRenderPipeline
	RenderPipeline_t570961106 * ___s_CurrentRenderPipeline_2;

public:
	inline static int32_t get_offset_of_s_CurrentRenderPipeline_2() { return static_cast<int32_t>(offsetof(RenderPipeline_t570961106_StaticFields, ___s_CurrentRenderPipeline_2)); }
	inline RenderPipeline_t570961106 * get_s_CurrentRenderPipeline_2() const { return ___s_CurrentRenderPipeline_2; }
	inline RenderPipeline_t570961106 ** get_address_of_s_CurrentRenderPipeline_2() { return &___s_CurrentRenderPipeline_2; }
	inline void set_s_CurrentRenderPipeline_2(RenderPipeline_t570961106 * value)
	{
		___s_CurrentRenderPipeline_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_CurrentRenderPipeline_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
