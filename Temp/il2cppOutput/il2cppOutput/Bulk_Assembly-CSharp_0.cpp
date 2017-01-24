#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_textController3646056863.h"
#include "AssemblyU2DCSharp_textController3646056863MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"

// textController
struct textController_t3646056863;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Object
struct Il2CppObject;
extern Il2CppCodeGenString* _stringLiteral1770476363;
extern const uint32_t textController_Start_m32255562_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var;
extern const uint32_t textController_PushToText_m1924047140_MetadataUsageId;

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t356221433_m1217399699(__this, method) ((  Text_t356221433 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void textController::.ctor()
extern "C"  void textController__ctor_m422131134 (textController_t3646056863 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void textController::Start()
extern "C"  void textController_Start_m32255562 (textController_t3646056863 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (textController_Start_m32255562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// test = GameObject.Find ("Boom");
		// test = GameObject.Find ("Boom");
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1770476363, /*hidden argument*/NULL);
		__this->set_test_2(L_0);
		// }
		return;
	}
}
// System.Void textController::PushToText(System.String)
extern "C"  void textController_PushToText_m1924047140 (textController_t3646056863 * __this, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (textController_PushToText_m1924047140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// test.GetComponent<Text> ().text = str;
		GameObject_t1756533147 * L_0 = __this->get_test_2();
		// test.GetComponent<Text> ().text = str;
		NullCheck(L_0);
		Text_t356221433 * L_1 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_2 = ___str0;
		// test.GetComponent<Text> ().text = str;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
