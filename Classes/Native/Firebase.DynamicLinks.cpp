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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Firebase.Dispatcher
struct Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557;
// Firebase.DynamicLinks.FirebaseDynamicLinks/Listener
struct Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45;
// Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/<DynamicLinkReceivedMethod>c__AnonStorey0
struct U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E;
// Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/DynamicLinkReceivedDelegate
struct DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F;
// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF;
// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D;
// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2;
// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69;
// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B;
// Firebase.DynamicLinks.ReceivedDynamicLink
struct ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC;
// Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs
struct ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t377E8825D7E7876483D0A90870A4BD55E2AB432F;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>
struct EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FDF992AE722840C316163D5721298AF7459B2E8;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m73B715AD04A6EF505E2A32F4672CEAD63CE101FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_U3CU3Em__0_m651FB70BB619B83C7D7719153E276475CEA8E534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t DynamicLinkReceivedDelegate_BeginInvoke_m108F1CD1B9E7C12237DD42E1D47B64C87564E0E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_NotifyDynamicLinkReceived_m2A47BECA238C5E426946CC1602E3027D82176472_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks__cctor_mB660233B9EE70606AF8F71E5A6E7D859C717580B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_add_DynamicLinkReceivedInternal_mB83B64232DF19972AE42C2975603F1E7D5A70212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_add_DynamicLinkReceived_mD6828C6C3F4477E2F6F1CCB975E7180FDF565BA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_remove_DynamicLinkReceivedInternal_mAC8819B538E1D5B0C8FE15B891A93FDF62CA8134_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicLinks_remove_DynamicLinkReceived_m7743DA38091E11748686E51BA0B3AAF1F65BFA84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDynamicLinksPINVOKE__cctor_m58AAB7666F3F99E771D013AAD7EC4C7501851EB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02Firebase_DynamicLinks_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Create_mDB5219CECEA7EE13596D94E3ECD1279C76E8EB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Destroy_m0F7867838A7A9CD9418F7D579D1EB02B7096D96D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Dispose_m8C8874DD1C5B687815FC14C60D4C560E2ADC3F70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener__ctor_m4599DEF9B899A281F33587FE3B9B246BDBC64359_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReceivedDynamicLinkEventArgs__ctor_m6255DF0EA374BEF4CC72A938EAF86B85C060370E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_mFBD21F0565032AF48DA0767BB03AF9331C45A696_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mBC40092F9CF8637F18C56A84FF4BE500A82CC284_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_U3CU3Em__0_m651FB70BB619B83C7D7719153E276475CEA8E534_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD1105BCF140B886565EADEB9F99A67858BC6232A 
{
public:

public:
};


// System.Object


// Firebase.DynamicLinks.DynamicLinks
struct  DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1  : public RuntimeObject
{
public:

public:
};

struct DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields
{
public:
	// Firebase.FirebaseApp Firebase.DynamicLinks.DynamicLinks::app
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app_0;
	// System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs> Firebase.DynamicLinks.DynamicLinks::DynamicLinkReceivedInternal
	EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___DynamicLinkReceivedInternal_1;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields, ___app_0)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_0), (void*)value);
	}

	inline static int32_t get_offset_of_DynamicLinkReceivedInternal_1() { return static_cast<int32_t>(offsetof(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields, ___DynamicLinkReceivedInternal_1)); }
	inline EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * get_DynamicLinkReceivedInternal_1() const { return ___DynamicLinkReceivedInternal_1; }
	inline EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 ** get_address_of_DynamicLinkReceivedInternal_1() { return &___DynamicLinkReceivedInternal_1; }
	inline void set_DynamicLinkReceivedInternal_1(EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * value)
	{
		___DynamicLinkReceivedInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DynamicLinkReceivedInternal_1), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinks
struct  FirebaseDynamicLinks_t0F47890EBA2D997D7F767CC97F25D9AAF279B876  : public RuntimeObject
{
public:

public:
};


// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener
struct  Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45  : public RuntimeObject
{
public:
	// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::dynamicLinkReceivedDelegate
	DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * ___dynamicLinkReceivedDelegate_0;
	// Firebase.FirebaseApp Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::app
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app_1;

public:
	inline static int32_t get_offset_of_dynamicLinkReceivedDelegate_0() { return static_cast<int32_t>(offsetof(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45, ___dynamicLinkReceivedDelegate_0)); }
	inline DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * get_dynamicLinkReceivedDelegate_0() const { return ___dynamicLinkReceivedDelegate_0; }
	inline DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F ** get_address_of_dynamicLinkReceivedDelegate_0() { return &___dynamicLinkReceivedDelegate_0; }
	inline void set_dynamicLinkReceivedDelegate_0(DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * value)
	{
		___dynamicLinkReceivedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicLinkReceivedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_app_1() { return static_cast<int32_t>(offsetof(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45, ___app_1)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_app_1() const { return ___app_1; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_app_1() { return &___app_1; }
	inline void set_app_1(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___app_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_1), (void*)value);
	}
};

struct Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields
{
public:
	// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::listener
	Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * ___listener_2;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs> Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::<>f__mgU24cache0
	EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___U3CU3Ef__mgU24cache0_3;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs> Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::<>f__mgU24cache1
	EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___U3CU3Ef__mgU24cache1_4;

public:
	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields, ___listener_2)); }
	inline Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * get_listener_2() const { return ___listener_2; }
	inline Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_4() { return static_cast<int32_t>(offsetof(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields, ___U3CU3Ef__mgU24cache1_4)); }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * get_U3CU3Ef__mgU24cache1_4() const { return ___U3CU3Ef__mgU24cache1_4; }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 ** get_address_of_U3CU3Ef__mgU24cache1_4() { return &___U3CU3Ef__mgU24cache1_4; }
	inline void set_U3CU3Ef__mgU24cache1_4(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * value)
	{
		___U3CU3Ef__mgU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_4), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE
struct  FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB  : public RuntimeObject
{
public:

public:
};

struct FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_StaticFields
{
public:
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * ___swigExceptionHelper_0;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::swigStringHelper
	SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields
{
public:
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___applicationDelegate_0;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___arithmeticDelegate_1;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___divideByZeroDelegate_2;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___indexOutOfRangeDelegate_3;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidCastDelegate_4;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidOperationDelegate_5;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___ioDelegate_6;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___nullReferenceDelegate_7;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___outOfMemoryDelegate_8;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___overflowDelegate_9;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___systemDelegate_10;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentDelegate_11;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentNullDelegate_12;
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGPendingException
struct  SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields
{
public:
	// System.Int32 Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields
{
public:
	// System.Exception Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_StaticFields
{
public:
	// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseHandler
struct  FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___Updated_6;
	// System.Action Firebase.Platform.FirebaseHandler::UpdatedEventWrapper
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___UpdatedEventWrapper_7;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___ApplicationFocusChanged_8;

public:
	inline static int32_t get_offset_of_U3CIsPlayModeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___U3CIsPlayModeU3Ek__BackingField_4)); }
	inline bool get_U3CIsPlayModeU3Ek__BackingField_4() const { return ___U3CIsPlayModeU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPlayModeU3Ek__BackingField_4() { return &___U3CIsPlayModeU3Ek__BackingField_4; }
	inline void set_U3CIsPlayModeU3Ek__BackingField_4(bool value)
	{
		___U3CIsPlayModeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_Updated_6() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___Updated_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_Updated_6() const { return ___Updated_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_Updated_6() { return &___Updated_6; }
	inline void set_Updated_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___Updated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_6), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatedEventWrapper_7() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___UpdatedEventWrapper_7)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_UpdatedEventWrapper_7() const { return ___UpdatedEventWrapper_7; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_UpdatedEventWrapper_7() { return &___UpdatedEventWrapper_7; }
	inline void set_UpdatedEventWrapper_7(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___UpdatedEventWrapper_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatedEventWrapper_7), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationFocusChanged_8() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C, ___ApplicationFocusChanged_8)); }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * get_ApplicationFocusChanged_8() const { return ___ApplicationFocusChanged_8; }
	inline EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 ** get_address_of_ApplicationFocusChanged_8() { return &___ApplicationFocusChanged_8; }
	inline void set_ApplicationFocusChanged_8(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * value)
	{
		___ApplicationFocusChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplicationFocusChanged_8), (void*)value);
	}
};

struct FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields
{
public:
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * ___firebaseHandler_5;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__amU24cache0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_firebaseMonoBehaviour_0() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___firebaseMonoBehaviour_0)); }
	inline FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * get_firebaseMonoBehaviour_0() const { return ___firebaseMonoBehaviour_0; }
	inline FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 ** get_address_of_firebaseMonoBehaviour_0() { return &___firebaseMonoBehaviour_0; }
	inline void set_firebaseMonoBehaviour_0(FirebaseMonoBehaviour_t1C5FABF3FF9EF1FD0BB517B08A2F0805B3AD64B0 * value)
	{
		___firebaseMonoBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseMonoBehaviour_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppUtilsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CAppUtilsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAppUtilsU3Ek__BackingField_1() const { return ___U3CAppUtilsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAppUtilsU3Ek__BackingField_1() { return &___U3CAppUtilsU3Ek__BackingField_1; }
	inline void set_U3CAppUtilsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAppUtilsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppUtilsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_tickCount_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___tickCount_2)); }
	inline int32_t get_tickCount_2() const { return ___tickCount_2; }
	inline int32_t* get_address_of_tickCount_2() { return &___tickCount_2; }
	inline void set_tickCount_2(int32_t value)
	{
		___tickCount_2 = value;
	}

	inline static int32_t get_offset_of_U3CThreadDispatcherU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CThreadDispatcherU3Ek__BackingField_3)); }
	inline Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * get_U3CThreadDispatcherU3Ek__BackingField_3() const { return ___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 ** get_address_of_U3CThreadDispatcherU3Ek__BackingField_3() { return &___U3CThreadDispatcherU3Ek__BackingField_3; }
	inline void set_U3CThreadDispatcherU3Ek__BackingField_3(Dispatcher_t613F406E87F8495295D262A364DDD8801BB06557 * value)
	{
		___U3CThreadDispatcherU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CThreadDispatcherU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseHandler_5() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___firebaseHandler_5)); }
	inline FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * get_firebaseHandler_5() const { return ___firebaseHandler_5; }
	inline FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C ** get_address_of_firebaseHandler_5() { return &___firebaseHandler_5; }
	inline void set_firebaseHandler_5(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * value)
	{
		___firebaseHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs
struct  ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.DynamicLinks.ReceivedDynamicLink Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::<ReceivedDynamicLink>k__BackingField
	ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___U3CReceivedDynamicLinkU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReceivedDynamicLinkU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63, ___U3CReceivedDynamicLinkU3Ek__BackingField_1)); }
	inline ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * get_U3CReceivedDynamicLinkU3Ek__BackingField_1() const { return ___U3CReceivedDynamicLinkU3Ek__BackingField_1; }
	inline ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC ** get_address_of_U3CReceivedDynamicLinkU3Ek__BackingField_1() { return &___U3CReceivedDynamicLinkU3Ek__BackingField_1; }
	inline void set_U3CReceivedDynamicLinkU3Ek__BackingField_1(ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * value)
	{
		___U3CReceivedDynamicLinkU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceivedDynamicLinkU3Ek__BackingField_1), (void*)value);
	}
};


// Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs
struct  ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHasFocusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51, ___U3CHasFocusU3Ek__BackingField_1)); }
	inline bool get_U3CHasFocusU3Ek__BackingField_1() const { return ___U3CHasFocusU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CHasFocusU3Ek__BackingField_1() { return &___U3CHasFocusU3Ek__BackingField_1; }
	inline void set_U3CHasFocusU3Ek__BackingField_1(bool value)
	{
		___U3CHasFocusU3Ek__BackingField_1 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_<DynamicLinkReceivedMethod>c__AnonStorey0
struct  U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_<DynamicLinkReceivedMethod>c__AnonStorey0::dynamic_link_ptr
	intptr_t ___dynamic_link_ptr_0;

public:
	inline static int32_t get_offset_of_dynamic_link_ptr_0() { return static_cast<int32_t>(offsetof(U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E, ___dynamic_link_ptr_0)); }
	inline intptr_t get_dynamic_link_ptr_0() const { return ___dynamic_link_ptr_0; }
	inline intptr_t* get_address_of_dynamic_link_ptr_0() { return &___dynamic_link_ptr_0; }
	inline void set_dynamic_link_ptr_0(intptr_t value)
	{
		___dynamic_link_ptr_0 = value;
	}
};


// Firebase.DynamicLinks.LinkMatchStrength
struct  LinkMatchStrength_t0D85C7043370AF2537B7E74C8FC1D0ED94170F8C 
{
public:
	// System.Int32 Firebase.DynamicLinks.LinkMatchStrength::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LinkMatchStrength_t0D85C7043370AF2537B7E74C8FC1D0ED94170F8C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct  LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tC69575EF4D1F372E563D26D15A24B00EA684B4F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.DynamicLinks.ReceivedDynamicLink
struct  ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC  : public RuntimeObject
{
public:
	// System.Uri Firebase.DynamicLinks.ReceivedDynamicLink::<Url>k__BackingField
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___U3CUrlU3Ek__BackingField_0;
	// Firebase.DynamicLinks.LinkMatchStrength Firebase.DynamicLinks.ReceivedDynamicLink::<MatchStrength>k__BackingField
	int32_t ___U3CMatchStrengthU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC, ___U3CUrlU3Ek__BackingField_0)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_U3CUrlU3Ek__BackingField_0() const { return ___U3CUrlU3Ek__BackingField_0; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_U3CUrlU3Ek__BackingField_0() { return &___U3CUrlU3Ek__BackingField_0; }
	inline void set_U3CUrlU3Ek__BackingField_0(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___U3CUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMatchStrengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC, ___U3CMatchStrengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CMatchStrengthU3Ek__BackingField_1() const { return ___U3CMatchStrengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CMatchStrengthU3Ek__BackingField_1() { return &___U3CMatchStrengthU3Ek__BackingField_1; }
	inline void set_U3CMatchStrengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CMatchStrengthU3Ek__BackingField_1 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_12;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___U3CU3Ef__amU24cache0_13;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache1_14;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * ___U3CU3Ef__amU24cache2_15;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * ___U3CU3Ef__amU24cache3_16;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * ___U3CU3Ef__amU24cache4_17;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_11)); }
	inline int32_t get_CheckDependenciesThread_11() const { return ___CheckDependenciesThread_11; }
	inline int32_t* get_address_of_CheckDependenciesThread_11() { return &___CheckDependenciesThread_11; }
	inline void set_CheckDependenciesThread_11(int32_t value)
	{
		___CheckDependenciesThread_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_12)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_12() const { return ___CheckDependenciesThreadLock_12; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_12() { return &___CheckDependenciesThreadLock_12; }
	inline void set_CheckDependenciesThreadLock_12(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache2_15)); }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * get_U3CU3Ef__amU24cache2_15() const { return ___U3CU3Ef__amU24cache2_15; }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 ** get_address_of_U3CU3Ef__amU24cache2_15() { return &___U3CU3Ef__amU24cache2_15; }
	inline void set_U3CU3Ef__amU24cache2_15(Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * value)
	{
		___U3CU3Ef__amU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache3_16)); }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * get_U3CU3Ef__amU24cache3_16() const { return ___U3CU3Ef__amU24cache3_16; }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D ** get_address_of_U3CU3Ef__amU24cache3_16() { return &___U3CU3Ef__amU24cache3_16; }
	inline void set_U3CU3Ef__amU24cache3_16(Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * value)
	{
		___U3CU3Ef__amU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache4_17)); }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * get_U3CU3Ef__amU24cache4_17() const { return ___U3CU3Ef__amU24cache4_17; }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F ** get_address_of_U3CU3Ef__amU24cache4_17() { return &___U3CU3Ef__amU24cache4_17; }
	inline void set_U3CU3Ef__amU24cache4_17(Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * value)
	{
		___U3CU3Ef__amU24cache4_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_17), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate
struct  DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>
struct  EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs>
struct  EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.DynamicLinks::add_DynamicLinkReceivedInternal(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_add_DynamicLinkReceivedInternal_mB83B64232DF19972AE42C2975603F1E7D5A70212 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.DynamicLinks::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5 (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.DynamicLinks::remove_DynamicLinkReceivedInternal(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_remove_DynamicLinkReceivedInternal_mAC8819B538E1D5B0C8FE15B891A93FDF62CA8134 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLinkEventArgs__ctor_m6255DF0EA374BEF4CC72A938EAF86B85C060370E (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::set_ReceivedDynamicLink(Firebase.DynamicLinks.ReceivedDynamicLink)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLinkEventArgs_set_ReceivedDynamicLink_mD5CB8C7B4278E0D9290477D345E58F33BA343702_inline (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m73B715AD04A6EF505E2A32F4672CEAD63CE101FD (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * __this, RuntimeObject * ___sender0, ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *, RuntimeObject *, ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// Firebase.DynamicLinks.FirebaseDynamicLinks/Listener Firebase.DynamicLinks.FirebaseDynamicLinks/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * Listener_Create_mDB5219CECEA7EE13596D94E3ECD1279C76E8EB27 (const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m0F7867838A7A9CD9418F7D579D1EB02B7096D96D (const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_SetListenerCallbacks(Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/DynamicLinkReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_SetListenerCallbacks_mEAA9E3BD649D6E211481B8F66F574EE4A0D1ABF7 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_DynamicLinkGetUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetUrl_mF68467DE83478F1A6A05D41210E1A087CC4FCE44 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_DynamicLinkGetMatchStrength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetMatchStrength_mCC0CA10191BED3EFDC447EED0DFCE02831B7C781 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_Fetch_m29CA2CE0155CB6956CDD58B93CA66F50CBD4F916 (const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener::DynamicLinkReceivedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788 (intptr_t ___dynamic_link_ptr0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/DynamicLinkReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinkReceivedDelegate__ctor_m71360C715D82FF71E0D0B7794DF56DA10BCB9D73 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks::SetListenerCallbacks(Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/DynamicLinkReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * ___received_callback0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m4599DEF9B899A281F33587FE3B9B246BDBC64359 (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * __this, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline (const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574 (EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Platform.FirebaseHandler::add_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_ApplicationFocusChanged_m5C319ABB35E18933D24592D994A62377A0D77B69 (FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * __this, EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::remove_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_remove_ApplicationFocusChanged_mC4518B3B3C81ECB88B0ECD0AF701844E45766237 (FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * __this, EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m8C8874DD1C5B687815FC14C60D4C560E2ADC3F70 (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::get_HasFocus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ApplicationFocusChangedEventArgs_get_HasFocus_m196F62FE1550BF697CF7C8338DD1285F904E351E_inline (ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51 * __this, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6 (const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/<DynamicLinkReceivedMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0__ctor_m1E2237BB748011F7F093A86481DB8CEF551DC729 (U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLink__ctor_mD44F837EE07D3C8D28FBA6D8498B7372D518A039 (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, const RuntimeMethod* method);
// System.String Firebase.DynamicLinks.FirebaseDynamicLinks::DynamicLinkGetUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF (intptr_t ___dynamic_link0, const RuntimeMethod* method);
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA (String_t* ___urlString0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::set_Url(System.Uri)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_Url_m98AD53902C5B7BC466F0D1026B72B1FF2FE8CD47_inline (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method);
// Firebase.DynamicLinks.LinkMatchStrength Firebase.DynamicLinks.FirebaseDynamicLinks::DynamicLinkGetMatchStrength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE (intptr_t ___dynamic_link0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::set_MatchStrength(Firebase.DynamicLinks.LinkMatchStrength)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_MatchStrength_mD5113101CF30CE0E1F8E70C89BE6CD53121D282D_inline (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.DynamicLinks::NotifyDynamicLinkReceived(Firebase.DynamicLinks.ReceivedDynamicLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_NotifyDynamicLinkReceived_m2A47BECA238C5E426946CC1602E3027D82176472 (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___dynamicLink0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6FFD8CF312E6E965162319599496B4A1F7DCB9F6 (SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * __this, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mCB462634CC3A613CF9915A8C4704D6886C311808 (SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * __this, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m4D38B7F0E775A81C952560F4C936CF0832CDCED0 (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks_mE6096E2B7247CA581D9AFB395CDDFAEBABC0DBBB (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___applicationDelegate0, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___arithmeticDelegate1, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___divideByZeroDelegate2, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidCastDelegate4, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidOperationDelegate5, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___ioDelegate6, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___nullReferenceDelegate7, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___outOfMemoryDelegate8, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___overflowDelegate9, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks_mE7DA7E931D0F3FE8E06B93684939516E4EED4B2C (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentDelegate0, ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentNullDelegate1, ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m6210DA8C0D9C8057D76C3FA529692BD845E2626E (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseDynamicLinks_m18E939EA41FB72E732F8B80B1E141AE58A514AD4 (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.DynamicLinks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks__cctor_mB660233B9EE70606AF8F71E5A6E7D859C717580B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks__cctor_mB660233B9EE70606AF8F71E5A6E7D859C717580B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->set_app_0(L_0);
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::add_DynamicLinkReceived(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_add_DynamicLinkReceived_mD6828C6C3F4477E2F6F1CCB975E7180FDF565BA9 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_add_DynamicLinkReceived_mD6828C6C3F4477E2F6F1CCB975E7180FDF565BA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		DynamicLinks_add_DynamicLinkReceivedInternal_mB83B64232DF19972AE42C2975603F1E7D5A70212(L_3, /*hidden argument*/NULL);
		DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::remove_DynamicLinkReceived(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_remove_DynamicLinkReceived_m7743DA38091E11748686E51BA0B3AAF1F65BFA84 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_remove_DynamicLinkReceived_m7743DA38091E11748686E51BA0B3AAF1F65BFA84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		DynamicLinks_remove_DynamicLinkReceivedInternal_mAC8819B538E1D5B0C8FE15B891A93FDF62CA8134(L_3, /*hidden argument*/NULL);
		DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::add_DynamicLinkReceivedInternal(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_add_DynamicLinkReceivedInternal_mB83B64232DF19972AE42C2975603F1E7D5A70212 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_add_DynamicLinkReceivedInternal_mB83B64232DF19972AE42C2975603F1E7D5A70212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * V_0 = NULL;
	EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_0 = ((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_DynamicLinkReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_2 = V_1;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_5 = V_0;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *>((EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 **)(((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_address_of_DynamicLinkReceivedInternal_1()), ((EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_7 = V_0;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)L_7) == ((RuntimeObject*)(EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::remove_DynamicLinkReceivedInternal(System.EventHandler`1<Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_remove_DynamicLinkReceivedInternal_mAC8819B538E1D5B0C8FE15B891A93FDF62CA8134 (EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_remove_DynamicLinkReceivedInternal_mAC8819B538E1D5B0C8FE15B891A93FDF62CA8134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * V_0 = NULL;
	EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_0 = ((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_DynamicLinkReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_2 = V_1;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_5 = V_0;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *>((EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 **)(((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_address_of_DynamicLinkReceivedInternal_1()), ((EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_7 = V_0;
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)L_7) == ((RuntimeObject*)(EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::NotifyDynamicLinkReceived(Firebase.DynamicLinks.ReceivedDynamicLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_NotifyDynamicLinkReceived_m2A47BECA238C5E426946CC1602E3027D82176472 (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___dynamicLink0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_NotifyDynamicLinkReceived_m2A47BECA238C5E426946CC1602E3027D82176472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_0 = ((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_DynamicLinkReceivedInternal_1();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_1 = ((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_DynamicLinkReceivedInternal_1();
		ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * L_2 = (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 *)il2cpp_codegen_object_new(ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63_il2cpp_TypeInfo_var);
		ReceivedDynamicLinkEventArgs__ctor_m6255DF0EA374BEF4CC72A938EAF86B85C060370E(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * L_3 = V_0;
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_4 = ___dynamicLink0;
		NullCheck(L_3);
		ReceivedDynamicLinkEventArgs_set_ReceivedDynamicLink_mD5CB8C7B4278E0D9290477D345E58F33BA343702_inline(L_3, L_4, /*hidden argument*/NULL);
		ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * L_5 = V_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m73B715AD04A6EF505E2A32F4672CEAD63CE101FD(L_1, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_m73B715AD04A6EF505E2A32F4672CEAD63CE101FD_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.DynamicLinks::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinks_CreateOrDestroyListener_m5BD6B118E4AF84FF39F9ECE794118630D947A8F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
			EventHandler_1_tBEC8ADCFCEF51C241AE43370DE3816FCA13008B4 * L_3 = ((DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_StaticFields*)il2cpp_codegen_static_fields_for(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var))->get_DynamicLinkReceivedInternal_1();
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Listener_Create_mDB5219CECEA7EE13596D94E3ECD1279C76E8EB27(/*hidden argument*/NULL);
			goto IL_002b;
		}

IL_0026:
		{
			Listener_Destroy_m0F7867838A7A9CD9418F7D579D1EB02B7096D96D(/*hidden argument*/NULL);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks::SetListenerCallbacks(Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * ___received_callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * L_0 = ___received_callback0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var);
		FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_SetListenerCallbacks_mEAA9E3BD649D6E211481B8F66F574EE4A0D1ABF7(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.String Firebase.DynamicLinks.FirebaseDynamicLinks::DynamicLinkGetUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF (intptr_t ___dynamic_link0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___dynamic_link0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var);
		String_t* L_1 = FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetUrl_mF68467DE83478F1A6A05D41210E1A087CC4FCE44((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.DynamicLinks.LinkMatchStrength Firebase.DynamicLinks.FirebaseDynamicLinks::DynamicLinkGetMatchStrength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE (intptr_t ___dynamic_link0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___dynamic_link0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var);
		int32_t L_1 = FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetMatchStrength_mCC0CA10191BED3EFDC447EED0DFCE02831B7C781((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var);
		FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_Fetch_m29CA2CE0155CB6956CDD58B93CA66F50CBD4F916(/*hidden argument*/NULL);
		bool L_0 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788(intptr_t ___dynamic_link_ptr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788(___dynamic_link_ptr0, NULL);

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m4599DEF9B899A281F33587FE3B9B246BDBC64359 (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener__ctor_m4599DEF9B899A281F33587FE3B9B246BDBC64359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * L_0 = (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F *)il2cpp_codegen_object_new(DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F_il2cpp_TypeInfo_var);
		DynamicLinkReceivedDelegate__ctor_m71360C715D82FF71E0D0B7794DF56DA10BCB9D73(L_0, NULL, (intptr_t)((intptr_t)Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_dynamicLinkReceivedDelegate_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		__this->set_app_1(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * L_2 = __this->get_dynamicLinkReceivedDelegate_0();
		FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD(L_2, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.DynamicLinks.FirebaseDynamicLinks_Listener Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * Listener_Create_mDB5219CECEA7EE13596D94E3ECD1279C76E8EB27 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Create_mDB5219CECEA7EE13596D94E3ECD1279C76E8EB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * G_B5_0 = NULL;
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * G_B4_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_3 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_4 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			V_1 = L_4;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}

IL_0026:
		{
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_5 = (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 *)il2cpp_codegen_object_new(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var);
			Listener__ctor_m4599DEF9B899A281F33587FE3B9B246BDBC64359(L_5, /*hidden argument*/NULL);
			((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->set_listener_2(L_5);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
			FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * L_6 = FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline(/*hidden argument*/NULL);
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_7 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
			G_B4_0 = L_6;
			if (L_7)
			{
				G_B5_0 = L_6;
				goto IL_004d;
			}
		}

IL_003c:
		{
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_8 = (EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 *)il2cpp_codegen_object_new(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567_il2cpp_TypeInfo_var);
			EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574(L_8, NULL, (intptr_t)((intptr_t)Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574_RuntimeMethod_var);
			((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_8);
			G_B5_0 = G_B4_0;
		}

IL_004d:
		{
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_9 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
			NullCheck(G_B5_0);
			FirebaseHandler_add_ApplicationFocusChanged_m5C319ABB35E18933D24592D994A62377A0D77B69(G_B5_0, L_9, /*hidden argument*/NULL);
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_10 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			V_1 = L_10;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_12 = V_1;
		return L_12;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m0F7867838A7A9CD9418F7D579D1EB02B7096D96D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Destroy_m0F7867838A7A9CD9418F7D579D1EB02B7096D96D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * G_B5_0 = NULL;
	FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * G_B4_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_3 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			if (L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x63, FINALLY_005c);
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
			FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * L_4 = FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline(/*hidden argument*/NULL);
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_5 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_4();
			G_B4_0 = L_4;
			if (L_5)
			{
				G_B5_0 = L_4;
				goto IL_003d;
			}
		}

IL_002c:
		{
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_6 = (EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 *)il2cpp_codegen_object_new(EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567_il2cpp_TypeInfo_var);
			EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574(L_6, NULL, (intptr_t)((intptr_t)Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD43D3A652C03C3397A8C1B1765B744F123FE8574_RuntimeMethod_var);
			((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_4(L_6);
			G_B5_0 = G_B4_0;
		}

IL_003d:
		{
			EventHandler_1_tE7894A27E8FAEECBC3E1D7B0D2CE80998D7F7567 * L_7 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_4();
			NullCheck(G_B5_0);
			FirebaseHandler_remove_ApplicationFocusChanged_mC4518B3B3C81ECB88B0ECD0AF701844E45766237(G_B5_0, L_7, /*hidden argument*/NULL);
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_8 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			NullCheck(L_8);
			Listener_Dispose_m8C8874DD1C5B687815FC14C60D4C560E2ADC3F70(L_8, /*hidden argument*/NULL);
			((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->set_listener_2((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 *)NULL);
			IL2CPP_LEAVE(0x63, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x63, IL_0063)
	}

IL_0063:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::OnApplicationFocus(System.Object,Firebase.Platform.FirebaseHandler_ApplicationFocusChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62 (RuntimeObject * ___sender0, ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_OnApplicationFocus_mAD97DF36D89CDDE8D01A918AD1541967BCFCCE62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51 * L_0 = ___eventArgs1;
		NullCheck(L_0);
		bool L_1 = ApplicationFocusChangedEventArgs_get_HasFocus_m196F62FE1550BF697CF7C8338DD1285F904E351E_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_t09D9F776A2032DC33A29AA0E2D4E4E508B8508C4_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mE0D4736B7C636462B2AD246F65EFAF5F1785822F(1, _stringLiteral0FDF992AE722840C316163D5721298AF7459B2E8, /*hidden argument*/NULL);
		FirebaseDynamicLinks_Fetch_mE7BA11164309B35FC8B11FF1B3FDBBDDD97538E6(/*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m8C8874DD1C5B687815FC14C60D4C560E2ADC3F70 (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Dispose_m8C8874DD1C5B687815FC14C60D4C560E2ADC3F70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 * L_3 = ((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->get_listener_2();
			if ((!(((RuntimeObject*)(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 *)L_3) == ((RuntimeObject*)(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 *)__this))))
			{
				goto IL_002f;
			}
		}

IL_001c:
		{
			__this->set_app_1((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL);
			FirebaseDynamicLinks_SetListenerCallbacks_m042D05369BE72FB513825E62DA1BF70C0112ABAD((DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F *)NULL, /*hidden argument*/NULL);
			((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45_il2cpp_TypeInfo_var))->set_listener_2((Listener_t553270C75849F58DC04E36BDB49AFAAC3ABF0B45 *)NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener::DynamicLinkReceivedMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788 (intptr_t ___dynamic_link_ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_DynamicLinkReceivedMethod_m803B5535C2784759B8D8988D98694151C0E90788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * V_0 = NULL;
	{
		U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * L_0 = (U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E *)il2cpp_codegen_object_new(U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E_il2cpp_TypeInfo_var);
		U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0__ctor_m1E2237BB748011F7F093A86481DB8CEF551DC729(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * L_1 = V_0;
		intptr_t L_2 = ___dynamic_link_ptr0;
		NullCheck(L_1);
		L_1->set_dynamic_link_ptr_0((intptr_t)L_2);
		U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * L_3 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, L_3, (intptr_t)((intptr_t)U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_U3CU3Em__0_m651FB70BB619B83C7D7719153E276475CEA8E534_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_<DynamicLinkReceivedMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0__ctor_m1E2237BB748011F7F093A86481DB8CEF551DC729 (U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_<DynamicLinkReceivedMethod>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_U3CU3Em__0_m651FB70BB619B83C7D7719153E276475CEA8E534 (U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_tF1A07BB22485CD7DE031EDB85F5C529E1C41308E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDynamicLinkReceivedMethodU3Ec__AnonStorey0_U3CU3Em__0_m651FB70BB619B83C7D7719153E276475CEA8E534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * V_0 = NULL;
	{
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_0 = (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC *)il2cpp_codegen_object_new(ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC_il2cpp_TypeInfo_var);
		ReceivedDynamicLink__ctor_mD44F837EE07D3C8D28FBA6D8498B7372D518A039(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_1 = V_0;
		intptr_t L_2 = __this->get_dynamic_link_ptr_0();
		String_t* L_3 = FirebaseDynamicLinks_DynamicLinkGetUrl_mD3ECE4727FC537A6E1C93AB79609C58E57E710CF((intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = FirebaseApp_UrlStringToUri_m09F6D262D86EE9898214D35510E1E8CEBF53D0DA(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ReceivedDynamicLink_set_Url_m98AD53902C5B7BC466F0D1026B72B1FF2FE8CD47_inline(L_1, L_4, /*hidden argument*/NULL);
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_5 = V_0;
		intptr_t L_6 = __this->get_dynamic_link_ptr_0();
		int32_t L_7 = FirebaseDynamicLinks_DynamicLinkGetMatchStrength_m1B24662B57DBD71F47C9C5DC63B712C19981D2DE((intptr_t)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ReceivedDynamicLink_set_MatchStrength_mD5113101CF30CE0E1F8E70C89BE6CD53121D282D_inline(L_5, L_7, /*hidden argument*/NULL);
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DynamicLinks_tD7A26FE7850193C072E8323E8499B7CCA45162D1_il2cpp_TypeInfo_var);
		DynamicLinks_NotifyDynamicLinkReceived_m2A47BECA238C5E426946CC1602E3027D82176472(L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, intptr_t ___dynamic_link_ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___dynamic_link_ptr0);

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinkReceivedDelegate__ctor_m71360C715D82FF71E0D0B7794DF56DA10BCB9D73 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinkReceivedDelegate_Invoke_m73248A1CFB9F2D98A69CA6B1CE7DBC9CBE587CF5 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, intptr_t ___dynamic_link_ptr0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___dynamic_link_ptr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dynamic_link_ptr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___dynamic_link_ptr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___dynamic_link_ptr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dynamic_link_ptr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dynamic_link_ptr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___dynamic_link_ptr0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dynamic_link_ptr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicLinkReceivedDelegate_BeginInvoke_m108F1CD1B9E7C12237DD42E1D47B64C87564E0E1 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, intptr_t ___dynamic_link_ptr0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicLinkReceivedDelegate_BeginInvoke_m108F1CD1B9E7C12237DD42E1D47B64C87564E0E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dynamic_link_ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicLinkReceivedDelegate_EndInvoke_m0069A95C49D9E7DC8FE8443FCF2E1FC399C81772 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinksPINVOKE__cctor_m58AAB7666F3F99E771D013AAD7EC4C7501851EB9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDynamicLinksPINVOKE__cctor_m58AAB7666F3F99E771D013AAD7EC4C7501851EB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * L_0 = (SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF *)il2cpp_codegen_object_new(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m6FFD8CF312E6E965162319599496B4A1F7DCB9F6(L_0, /*hidden argument*/NULL);
		((FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * L_1 = (SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 *)il2cpp_codegen_object_new(SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_mCB462634CC3A613CF9915A8C4704D6886C311808(L_1, /*hidden argument*/NULL);
		((FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_DynamicLinks_SetListenerCallbacks(Il2CppMethodPointer);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_SetListenerCallbacks(Firebase.DynamicLinks.FirebaseDynamicLinks_Listener_DynamicLinkReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_SetListenerCallbacks_mEAA9E3BD649D6E211481B8F66F574EE4A0D1ABF7 (DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F * ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_DynamicLinks_SetListenerCallbacks)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_DynamicLinks_DynamicLinkGetUrl(intptr_t);
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_DynamicLinkGetUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetUrl_mF68467DE83478F1A6A05D41210E1A087CC4FCE44 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_DynamicLinks_DynamicLinkGetUrl)(___jarg10);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_DynamicLinks_DynamicLinkGetMatchStrength(intptr_t);
// System.Int32 Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_DynamicLinkGetMatchStrength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_DynamicLinkGetMatchStrength_mCC0CA10191BED3EFDC447EED0DFCE02831B7C781 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_DynamicLinks_DynamicLinkGetMatchStrength)(___jarg10);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_DynamicLinks_Fetch();
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE::Firebase_DynamicLinks_Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDynamicLinksPINVOKE_Firebase_DynamicLinks_Fetch_m29CA2CE0155CB6956CDD58B93CA66F50CBD4F916 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_DynamicLinks_Fetch)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mFBD21F0565032AF48DA0767BB03AF9331C45A696 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_mFBD21F0565032AF48DA0767BB03AF9331C45A696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_0 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_1 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_2 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_3 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_4 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_5 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_6 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_7 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_8 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_9 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_10 = (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 *)il2cpp_codegen_object_new(ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_11 = (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m4D38B7F0E775A81C952560F4C936CF0832CDCED0(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_12 = (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m4D38B7F0E775A81C952560F4C936CF0832CDCED0(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_13 = (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m4D38B7F0E775A81C952560F4C936CF0832CDCED0(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_14 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_15 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_16 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_17 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_18 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_19 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_20 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_21 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_22 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_23 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * L_24 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks_mE6096E2B7247CA581D9AFB395CDDFAEBABC0DBBB(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_25 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_26 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * L_27 = ((SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks_mE7DA7E931D0F3FE8E06B93684939516E4EED4B2C(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6FFD8CF312E6E965162319599496B4A1F7DCB9F6 (SWIGExceptionHelper_t7CA2F05CEDCC77E22E35D149AB410D668B5321AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks_mE6096E2B7247CA581D9AFB395CDDFAEBABC0DBBB (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___applicationDelegate0, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___arithmeticDelegate1, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___divideByZeroDelegate2, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidCastDelegate4, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___invalidOperationDelegate5, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___ioDelegate6, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___nullReferenceDelegate7, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___outOfMemoryDelegate8, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___overflowDelegate9, ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseDynamicLinks)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks_mE7DA7E931D0F3FE8E06B93684939516E4EED4B2C (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentDelegate0, ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentNullDelegate1, ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_FirebaseDynamicLinks)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mB3DC5FDAF1665F0F6BE98BAE922AD8D1F6D8B807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_mA7D038E78E7445C247239B8EECC0606C58B96F45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m0AA3955F721552663EF243D5570CBC751FC08E19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC79C2733948C24136F3564DAD7C6EDC52E39CA31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m2DA655188720B6A08E1C432666D9A979AF85F259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_mC2E182F535643CC7F26A9210D2CCEFE674804AAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m2E011DB550D4AB0930CA8997DEF3F766D4B82ED5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mA00849B4388B4DA135F391A3468669ADA24B936C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m6358F7139D230AF491CA5AE9D2D44740FA1F82A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_mE2FA92DD0653802077C1B43CD32737C601DEB9B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m04E866278B42C41F33004B47D95F62B8DCAF3868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mD094B30E7B73E640D1CB7031ADF4CAE8029D8AD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m93433DE33AE4F41BCD11074A19D86B7231E71C0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0A748C601B1F661653B8AE4EBF28D02CA41FF7D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D(L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m4D38B7F0E775A81C952560F4C936CF0832CDCED0 (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m78BD0AD89209110102A27F30B05081A32FA72852 (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m4E220F47990A62E9301873CEC9B0B93FF944302E (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m49791AE35C53815FB6687816A6634D843E2F7A88 (ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mCDAAC4882847499E5ADA4E33C1DED835E7FEF40C (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m62DB233A2841610A6303063C02C6DEAF51DE03D9 (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m39F379C5919BAFDCEAADC9D7AA8017733611318F (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mBEAB3F30210AAB42ED513F631E39B834A34A5DE2 (ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_mB9599208615AB85A51C32C8E4F3D6F5641F5A07D_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m607EE83577FD8CD42AC8B2879289C6A8D27B3243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (FirebaseDynamicLinksPINVOKE_tE2A803F65ED6AEFAB6A14545C87996EE9D4270EB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tBD85B4BAB5AE60C471DA6173D74EA0C5C20A0186_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mBC40092F9CF8637F18C56A84FF4BE500A82CC284 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mBC40092F9CF8637F18C56A84FF4BE500A82CC284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * L_0 = (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B *)il2cpp_codegen_object_new(SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m6210DA8C0D9C8057D76C3FA529692BD845E2626E(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * L_1 = ((SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseDynamicLinks_m18E939EA41FB72E732F8B80B1E141AE58A514AD4(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mCB462634CC3A613CF9915A8C4704D6886C311808 (SWIGStringHelper_tC483A8D31F8261FDAEF1EB4B78987670DF639B69 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseDynamicLinks(Il2CppMethodPointer);
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_FirebaseDynamicLinks(Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseDynamicLinks_m18E939EA41FB72E732F8B80B1E141AE58A514AD4 (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseDynamicLinks)(____stringDelegate0_marshaled);

}
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m89AA5B55A8D2DBE40F7BF9D6EC5E68EA6D7EC77A (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m6210DA8C0D9C8057D76C3FA529692BD845E2626E (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m91AE03B832737B428E3B36132A93E54847733D49 (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m4E23718B9C60E20C8105474BBE580EC64B627D84 (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m2F79C55A9AB5DD2B2D78E43E1C6B99F5C0632739 (SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLink__ctor_mD44F837EE07D3C8D28FBA6D8498B7372D518A039 (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri Firebase.DynamicLinks.ReceivedDynamicLink::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ReceivedDynamicLink_get_Url_m14318176B58B4FC9EAE4706463616E62BBB644BB (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = __this->get_U3CUrlU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::set_Url(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_Url_m98AD53902C5B7BC466F0D1026B72B1FF2FE8CD47 (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Firebase.DynamicLinks.ReceivedDynamicLink::set_MatchStrength(Firebase.DynamicLinks.LinkMatchStrength)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_MatchStrength_mD5113101CF30CE0E1F8E70C89BE6CD53121D282D (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMatchStrengthU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLinkEventArgs__ctor_m6255DF0EA374BEF4CC72A938EAF86B85C060370E (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReceivedDynamicLinkEventArgs__ctor_m6255DF0EA374BEF4CC72A938EAF86B85C060370E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.DynamicLinks.ReceivedDynamicLink Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::get_ReceivedDynamicLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ReceivedDynamicLinkEventArgs_get_ReceivedDynamicLink_mEFAB3DD2AE3A24D4C3ECC6C5ACEC09F3CA754450 (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, const RuntimeMethod* method)
{
	{
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_0 = __this->get_U3CReceivedDynamicLinkU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.DynamicLinks.ReceivedDynamicLinkEventArgs::set_ReceivedDynamicLink(Firebase.DynamicLinks.ReceivedDynamicLink)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceivedDynamicLinkEventArgs_set_ReceivedDynamicLink_mD5CB8C7B4278E0D9290477D345E58F33BA343702 (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___value0, const RuntimeMethod* method)
{
	{
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_0 = ___value0;
		__this->set_U3CReceivedDynamicLinkU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLinkEventArgs_set_ReceivedDynamicLink_mD5CB8C7B4278E0D9290477D345E58F33BA343702_inline (ReceivedDynamicLinkEventArgs_t21CB41E0F2B79FBD1654EF8C9F68590D8D871E63 * __this, ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * ___value0, const RuntimeMethod* method)
{
	{
		ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * L_0 = ___value0;
		__this->set_U3CReceivedDynamicLinkU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_get_DefaultInstance_mDE47F7545F78ED4AAA09566895610B8DD8A6FE02Firebase_DynamicLinks_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var);
		FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C * L_0 = ((FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_tF80AC3F5F35167FA8466AA6CEE6631D5B965ED0C_il2cpp_TypeInfo_var))->get_firebaseHandler_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ApplicationFocusChangedEventArgs_get_HasFocus_m196F62FE1550BF697CF7C8338DD1285F904E351E_inline (ApplicationFocusChangedEventArgs_tE245CBA91AC17B148CFA9F6380E220E8EC6E5A51 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasFocusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_Url_m98AD53902C5B7BC466F0D1026B72B1FF2FE8CD47_inline (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ReceivedDynamicLink_set_MatchStrength_mD5113101CF30CE0E1F8E70C89BE6CD53121D282D_inline (ReceivedDynamicLink_t8C0F255727DE405292D6352A1A40E915CCE954DC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMatchStrengthU3Ek__BackingField_1(L_0);
		return;
	}
}
