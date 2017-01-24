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
#include "mscorlib_System_Guid2533601593.h"

// UnityEngine.Runtime.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t999164305;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerEditorConnectionEvents::.ctor()
extern "C"  void PlayerEditorConnectionEvents__ctor_m271769607 (PlayerEditorConnectionEvents_t999164305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Runtime.Networking.PlayerConnection.PlayerEditorConnectionEvents::InvokeMessageIdSubscribers(System.Guid,System.Byte[],System.Int32)
extern "C"  void PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m3523738736 (PlayerEditorConnectionEvents_t999164305 * __this, Guid_t  ___messageId0, ByteU5BU5D_t3397334013* ___data1, int32_t ___playerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
