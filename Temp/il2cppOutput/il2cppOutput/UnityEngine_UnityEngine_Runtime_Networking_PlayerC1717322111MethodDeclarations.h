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
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t1717322111;
// System.String
struct String_t;

// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::.ctor()
extern "C"  void PlayerConnection__ctor_m2361184941 (PlayerConnection_t1717322111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::get_instance()
extern "C"  PlayerConnection_t1717322111 * PlayerConnection_get_instance_m1816083061 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::CreateInstance()
extern "C"  PlayerConnection_t1717322111 * PlayerConnection_CreateInstance_m3726294950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::MessageCallbackInternal(System.IntPtr,System.UInt64,System.UInt64,System.String)
extern "C"  void PlayerConnection_MessageCallbackInternal_m404593444 (Il2CppObject * __this /* static, unused */, IntPtr_t ___data0, uint64_t ___size1, uint64_t ___guid2, String_t* ___messageId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::ConnectedCallbackInternal(System.Int32)
extern "C"  void PlayerConnection_ConnectedCallbackInternal_m788571417 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerConnection::DisconnectedCallback(System.Int32)
extern "C"  void PlayerConnection_DisconnectedCallback_m1998456502 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
