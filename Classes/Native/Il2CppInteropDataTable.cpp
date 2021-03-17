#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

// BestHTTP.Decompression.Zlib.ZlibException
struct  ZlibException_t2F0C2A9C169C9729EA1A649DD3A2D58AFA7F7028  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579();
IL2CPP_EXTERN_C_CONST RuntimeType Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0;
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0;
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A();
IL2CPP_EXTERN_C_CONST RuntimeType InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0;
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0;
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0;
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0;
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0;
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0;
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0;
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0;
IL2CPP_EXTERN_C void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0;
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0;
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0;
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0;
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0;
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_0_0_0;
IL2CPP_EXTERN_C void HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0;
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0;
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0;
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0;
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0;
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0;
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0;
IL2CPP_EXTERN_C void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_0_0_0;
IL2CPP_EXTERN_C void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_0_0_0;
IL2CPP_EXTERN_C void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Position_t089976E4BEB3D345DA28CFA95786EE065063E228_0_0_0;
IL2CPP_EXTERN_C void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_0_0_0;
IL2CPP_EXTERN_C void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_0_0_0;
IL2CPP_EXTERN_C void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_0_0_0;
IL2CPP_EXTERN_C void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_0_0_0;
IL2CPP_EXTERN_C void XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_0_0_0;
IL2CPP_EXTERN_C void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_0_0_0;
IL2CPP_EXTERN_C void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8();
IL2CPP_EXTERN_C_CONST RuntimeType HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8_0_0_0;
IL2CPP_EXTERN_C void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506();
IL2CPP_EXTERN_C_CONST RuntimeType CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506_0_0_0;
IL2CPP_EXTERN_C void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0;
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0;
IL2CPP_EXTERN_C void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E();
IL2CPP_EXTERN_C_CONST RuntimeType HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E_0_0_0;
IL2CPP_EXTERN_C void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_0_0_0;
IL2CPP_EXTERN_C void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_0_0_0;
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0;
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_0_0_0;
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_0_0_0;
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0;
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_0_0_0;
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0;
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B();
IL2CPP_EXTERN_C_CONST RuntimeType OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0;
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_0_0_0;
IL2CPP_EXTERN_C void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tE8AD56646A51EED70E12A2D0A542AC934BD87C02();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tE8AD56646A51EED70E12A2D0A542AC934BD87C02_0_0_0;
IL2CPP_EXTERN_C void jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0;
IL2CPP_EXTERN_C void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0;
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0;
IL2CPP_EXTERN_C void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0;
IL2CPP_EXTERN_C void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0;
IL2CPP_EXTERN_C void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0;
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0;
IL2CPP_EXTERN_C void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_0_0_0;
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0;
IL2CPP_EXTERN_C void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0;
IL2CPP_EXTERN_C void TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0;
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_0_0_0;
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C();
IL2CPP_EXTERN_C_CONST RuntimeType IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F();
IL2CPP_EXTERN_C_CONST RuntimeType SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0;
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F();
IL2CPP_EXTERN_C_CONST RuntimeType UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnChangeCallback_t9D1B00D54D4DB63A9DAE40AC0672DE07F126B0AF();
IL2CPP_EXTERN_C_CONST RuntimeType OnChangeCallback_t9D1B00D54D4DB63A9DAE40AC0672DE07F126B0AF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF();
IL2CPP_EXTERN_C_CONST RuntimeType SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_t0AEA826435DE89A385D7C96B24E8F25AF88DE5D9();
IL2CPP_EXTERN_C_CONST RuntimeType Action_t0AEA826435DE89A385D7C96B24E8F25AF88DE5D9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988();
IL2CPP_EXTERN_C_CONST RuntimeType SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9();
IL2CPP_EXTERN_C_CONST RuntimeType LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0;
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0;
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0;
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0;
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691();
IL2CPP_EXTERN_C_CONST RuntimeType EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691_0_0_0;
IL2CPP_EXTERN_C void ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_0_0_0;
IL2CPP_EXTERN_C void FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_0_0_0;
IL2CPP_EXTERN_C void PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_0_0_0;
IL2CPP_EXTERN_C void RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_0_0_0;
IL2CPP_EXTERN_C void StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_0_0_0;
IL2CPP_EXTERN_C void UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_0_0_0;
IL2CPP_EXTERN_C void Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_0_0_0;
IL2CPP_EXTERN_C void VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83();
IL2CPP_EXTERN_C_CONST RuntimeType TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDLLLoaded_tACEA021AF4D75D93E4FC2B2F4BC942D5645262A2();
IL2CPP_EXTERN_C_CONST RuntimeType OnDLLLoaded_tACEA021AF4D75D93E4FC2B2F4BC942D5645262A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HideUnityDelegate_t1CC3D2A4791A49186725C059FD6B67DB1D23C173();
IL2CPP_EXTERN_C_CONST RuntimeType HideUnityDelegate_t1CC3D2A4791A49186725C059FD6B67DB1D23C173_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InitDelegate_t5027853A5490CEFC4312BDCD84DB17C9E7783499();
IL2CPP_EXTERN_C_CONST RuntimeType InitDelegate_t5027853A5490CEFC4312BDCD84DB17C9E7783499_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F();
IL2CPP_EXTERN_C_CONST RuntimeType DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B();
IL2CPP_EXTERN_C_CONST RuntimeType SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B();
IL2CPP_EXTERN_C_CONST RuntimeType MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3();
IL2CPP_EXTERN_C_CONST RuntimeType TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B();
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4();
IL2CPP_EXTERN_C_CONST RuntimeType SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4_0_0_0;
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B();
IL2CPP_EXTERN_C_CONST RuntimeType MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C();
IL2CPP_EXTERN_C_CONST RuntimeType MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D();
IL2CPP_EXTERN_C_CONST RuntimeType MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_0_0_0;
IL2CPP_EXTERN_C void SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_0_0_0;
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_0_0_0;
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_0_0_0;
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863_0_0_0;
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_0_0_0;
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_0_0_0;
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_APayAuthCallbackHandler_tA3B5F2DE29AC1B035CCE424CC63A12BBAC14B3B0();
IL2CPP_EXTERN_C_CONST RuntimeType APayAuthCallbackHandler_tA3B5F2DE29AC1B035CCE424CC63A12BBAC14B3B0_0_0_0;
IL2CPP_EXTERN_C void APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetCredentialStateCompleted_t0B63B0FF9BD018F477A29B891A6E8012E29850EB();
IL2CPP_EXTERN_C_CONST RuntimeType GetCredentialStateCompleted_t0B63B0FF9BD018F477A29B891A6E8012E29850EB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LoginCompleted_t4790635D8B3657385B9C03CEDDE709E967D370A8();
IL2CPP_EXTERN_C_CONST RuntimeType LoginCompleted_t4790635D8B3657385B9C03CEDDE709E967D370A8_0_0_0;
IL2CPP_EXTERN_C void SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_0_0_0;
IL2CPP_EXTERN_C void UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_0_0_0;
IL2CPP_EXTERN_C void BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_0_0_0;
IL2CPP_EXTERN_C void RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_0_0_0;
IL2CPP_EXTERN_C void SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_0_0_0;
IL2CPP_EXTERN_C void CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_0_0_0;
IL2CPP_EXTERN_C void CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_0_0_0;
IL2CPP_EXTERN_C void HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_0_0_0;
IL2CPP_EXTERN_C void TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_0_0_0;
IL2CPP_EXTERN_C void MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_0_0_0;
IL2CPP_EXTERN_C void ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_0_0_0;
IL2CPP_EXTERN_C void TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CompressFunc_t81FC687403DA94FC5391CE904E3B1E3E0A16951B();
IL2CPP_EXTERN_C_CONST RuntimeType CompressFunc_t81FC687403DA94FC5391CE904E3B1E3E0A16951B_0_0_0;
IL2CPP_EXTERN_C void BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_0_0_0;
IL2CPP_EXTERN_C void BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_0_0_0;
IL2CPP_EXTERN_C void ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_0_0_0;
IL2CPP_EXTERN_C void CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_0_0_0;
IL2CPP_EXTERN_C void CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_0_0_0;
IL2CPP_EXTERN_C void InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_0_0_0;
IL2CPP_EXTERN_C void Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_0_0_0;
IL2CPP_EXTERN_C void RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_0_0_0;
IL2CPP_EXTERN_C void WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398();
IL2CPP_EXTERN_C_CONST RuntimeType OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_0_0_0;
IL2CPP_EXTERN_C void TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_0_0_0;
IL2CPP_EXTERN_C void ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_0_0_0;
IL2CPP_EXTERN_C void TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_0_0_0;
IL2CPP_EXTERN_C void ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_0_0_0;
IL2CPP_EXTERN_C void Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PageSnapChange_tD3924B00988BFBCA67B474FF7164B0F6A5C3DE29();
IL2CPP_EXTERN_C_CONST RuntimeType PageSnapChange_tD3924B00988BFBCA67B474FF7164B0F6A5C3DE29_0_0_0;
IL2CPP_EXTERN_C void IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_0_0_0;
IL2CPP_EXTERN_C void Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Callback_t793989712FB763CF5DCE7F01FB4BFEEACC429B90();
IL2CPP_EXTERN_C_CONST RuntimeType Callback_t793989712FB763CF5DCE7F01FB4BFEEACC429B90_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PhotosCallback_t5F7452C1F3592A1F0209CE504A02F69DD9A71F39();
IL2CPP_EXTERN_C_CONST RuntimeType PhotosCallback_t5F7452C1F3592A1F0209CE504A02F69DD9A71F39_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZlibException_t2F0C2A9C169C9729EA1A649DD3A2D58AFA7F7028_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[356] = 
{
	{ NULL, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579, NULL, NULL, NULL, NULL, NULL, &Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0 } /* System.Action */,
	{ NULL, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0 } /* System.AppDomain */,
	{ NULL, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0 } /* System.DTSubString */,
	{ NULL, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0 } /* System.DateTimeResult */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0 } /* System.Enum */,
	{ NULL, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup, NULL, NULL, &Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanToken */,
	{ NULL, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanTokenizer */,
	{ NULL, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0 } /* System.Guid/GuidResult */,
	{ DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke, ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke_back, ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_t5A9E416E0129249869039FC606326558DA3B597F_0_0_0 } /* System.IO.Stream/ReadWriteParameters */,
	{ NULL, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0 } /* System.InputRecord */,
	{ NULL, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0 } /* System.Number/NumberBuffer */,
	{ NULL, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0 } /* System.ParsingInfo */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup, NULL, NULL, &Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke, AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke_back, AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshal_pinvoke_cleanup, NULL, NULL, &AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_0_0_0 } /* System.Runtime.CompilerServices.AsyncVoidMethodBuilder */,
	{ NULL, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ NULL, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup, NULL, NULL, &Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke, DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke_back, DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_tCA1A96A151F47B1904693C457243E3B919425AC6_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke, HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke_back, HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_marshal_pinvoke_cleanup, NULL, NULL, &HashAlgorithmName_tD62515D9082F4E5599534680DC6E20D5B638A18F_0_0_0 } /* System.Security.Cryptography.HashAlgorithmName */,
	{ NULL, RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke, RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke_back, RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t6A568C1275FA8F8C02615666D998134DCFFB9717_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ NULL, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0 } /* System.UnSafeCharBuffer */,
	{ NULL, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0 } /* System.ValueType */,
	{ NULL, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0 } /* System.__DTString */,
	{ NULL, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_back, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_cleanup, NULL, NULL, &XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_0_0_0 } /* MS.Internal.Xml.Cache.XPathNode */,
	{ NULL, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_back, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_cleanup, NULL, NULL, &XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_0_0_0 } /* MS.Internal.Xml.Cache.XPathNodeRef */,
	{ NULL, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_back, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_cleanup, NULL, NULL, &Position_t089976E4BEB3D345DA28CFA95786EE065063E228_0_0_0 } /* System.Xml.Schema.Position */,
	{ NULL, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_back, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_cleanup, NULL, NULL, &SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_0_0_0 } /* System.Xml.Schema.SequenceNode/SequenceConstructPosContext */,
	{ NULL, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_back, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_cleanup, NULL, NULL, &Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_0_0_0 } /* System.Xml.Schema.XmlAtomicValue/Union */,
	{ NULL, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_back, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_cleanup, NULL, NULL, &XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_0_0_0 } /* System.Xml.Schema.XsdDateTime */,
	{ NULL, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_back, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_cleanup, NULL, NULL, &Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_0_0_0 } /* System.Xml.Schema.XsdDateTime/Parser */,
	{ NULL, XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke, XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke_back, XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_marshal_pinvoke_cleanup, NULL, NULL, &XmlCharType_t7F6CCEEB0A0BC8FC40F161B8928A766BE7B234E9_0_0_0 } /* System.Xml.XmlCharType */,
	{ NULL, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_back, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_cleanup, NULL, NULL, &SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_0_0_0 } /* System.Xml.XmlNamedNodeMap/SmallXmlNodeList */,
	{ NULL, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_back, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_0_0_0 } /* System.Xml.XmlNamespaceManager/NamespaceDeclaration */,
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8_0_0_0 } /* System.Xml.XmlQualifiedName/HashCodeOfStringDelegate */,
	{ NULL, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_back, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_cleanup, NULL, NULL, &ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_0_0_0 } /* System.Xml.XmlTextReaderImpl/ParsingState */,
	{ DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506, NULL, NULL, NULL, NULL, NULL, &CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506_0_0_0 } /* Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback */,
	{ NULL, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
	{ NULL, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ NULL, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ NULL, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ DelegatePInvokeWrapper_ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397, NULL, NULL, NULL, NULL, NULL, &WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ NULL, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_back, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_0_0_0 } /* System.Net.CookieTokenizer/RecognizedAttribute */,
	{ DelegatePInvokeWrapper_ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE_0_0_0 } /* System.Net.FtpDataStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49_0_0_0 } /* System.Net.FtpDataStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E, NULL, NULL, NULL, NULL, NULL, &HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E_0_0_0 } /* System.Net.HeaderParser */,
	{ NULL, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_back, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_0_0_0 } /* System.Net.HeaderVariantInfo */,
	{ NULL, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_back, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_0_0_0 } /* System.Net.HttpWebRequest/AuthorizationState */,
	{ NULL, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_back, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_back, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_cleanup, NULL, NULL, &Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_0_0_0 } /* System.Net.NetworkInformation.Win32_FIXED_INFO */,
	{ NULL, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_back, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADDR_STRING */,
	{ NULL, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_back, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778, NULL, NULL, NULL, NULL, NULL, &LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4, NULL, NULL, NULL, NULL, NULL, &UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_back, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_back, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_back, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_back, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_back, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_back, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_back, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_back, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup, NULL, NULL, &Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_back, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ DelegatePInvokeWrapper_OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B, NULL, NULL, NULL, NULL, NULL, &OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling */,
	{ NULL, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_back, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_back, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_back, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_back, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_0_0_0 } /* UnityEngine.AssetBundleRecompressOperation */,
	{ NULL, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_back, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_back, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ NULL, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_back, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_0_0_0 } /* UnityEngine.Networking.UploadHandlerRaw */,
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tE8AD56646A51EED70E12A2D0A542AC934BD87C02, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tE8AD56646A51EED70E12A2D0A542AC934BD87C02_0_0_0 } /* UnityEngine.AndroidJavaRunnable */,
	{ NULL, jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke, jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke_back, jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_0_0_0 } /* UnityEngine.jvalue */,
	{ NULL, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup, NULL, NULL, &Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_back, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_cleanup, NULL, NULL, &SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_0_0_0 } /* UnityEngine.SliderHandler */,
	{ NULL, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_back, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke, TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke_back, TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_marshal_pinvoke_cleanup, NULL, NULL, &TextureSheetAnimationModule_t2F7A981851D997DFEB56E31A73824CA8595A96BD_0_0_0 } /* UnityEngine.ParticleSystem/TextureSheetAnimationModule */,
	{ NULL, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_back, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_back, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C, NULL, NULL, NULL, NULL, NULL, &IdentityTokenChanged_t443D89AE742FA711130530128D0B81F4DBC4615C_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ NULL, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_back, DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_0_0_0 } /* UnityEngine.Networking.DownloadHandlerTexture */,
	{ DelegatePInvokeWrapper_OnChangeCallback_t9D1B00D54D4DB63A9DAE40AC0672DE07F126B0AF, NULL, NULL, NULL, NULL, NULL, &OnChangeCallback_t9D1B00D54D4DB63A9DAE40AC0672DE07F126B0AF_0_0_0 } /* Facebook.Unity.Settings.FacebookSettings/OnChangeCallback */,
	{ DelegatePInvokeWrapper_ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC, NULL, NULL, NULL, NULL, NULL, &ExceptionArgumentDelegate_t73BAA49451A9E35A9CA345D6D6527288627463AC_0_0_0 } /* Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate */,
	{ DelegatePInvokeWrapper_ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72, NULL, NULL, NULL, NULL, NULL, &ExceptionDelegate_tAE40B42ED1489539A951B603906BA5FA4530FA72_0_0_0 } /* Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate */,
	{ DelegatePInvokeWrapper_SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF, NULL, NULL, NULL, NULL, NULL, &SWIGStringDelegate_t68DA55FC8F49D88917EA0F5C57A90923026A68EF_0_0_0 } /* Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate */,
	{ DelegatePInvokeWrapper_Action_t0AEA826435DE89A385D7C96B24E8F25AF88DE5D9, NULL, NULL, NULL, NULL, NULL, &Action_t0AEA826435DE89A385D7C96B24E8F25AF88DE5D9_0_0_0 } /* Firebase.FutureVoid/Action */,
	{ DelegatePInvokeWrapper_SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988, NULL, NULL, NULL, NULL, NULL, &SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988_0_0_0 } /* Firebase.FutureVoid/SWIG_CompletionDelegate */,
	{ DelegatePInvokeWrapper_LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9, NULL, NULL, NULL, NULL, NULL, &LogMessageDelegate_t8FAC58A69922088EE22EF17EEA6C416894836EE9_0_0_0 } /* Firebase.LogUtil/LogMessageDelegate */,
	{ NULL, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ DelegatePInvokeWrapper_EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691, NULL, NULL, NULL, NULL, NULL, &EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691_0_0_0 } /* DG.Tweening.EaseFunction */,
	{ NULL, ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke, ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke_back, ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshal_pinvoke_cleanup, NULL, NULL, &ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_0_0_0 } /* DG.Tweening.Plugins.Options.ColorOptions */,
	{ NULL, FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke, FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke_back, FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshal_pinvoke_cleanup, NULL, NULL, &FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_0_0_0 } /* DG.Tweening.Plugins.Options.FloatOptions */,
	{ NULL, PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke, PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke_back, PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshal_pinvoke_cleanup, NULL, NULL, &PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_0_0_0 } /* DG.Tweening.Plugins.Options.PathOptions */,
	{ NULL, RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke, RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke_back, RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshal_pinvoke_cleanup, NULL, NULL, &RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_0_0_0 } /* DG.Tweening.Plugins.Options.RectOptions */,
	{ NULL, StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke, StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke_back, StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshal_pinvoke_cleanup, NULL, NULL, &StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_0_0_0 } /* DG.Tweening.Plugins.Options.StringOptions */,
	{ NULL, UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke, UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke_back, UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_marshal_pinvoke_cleanup, NULL, NULL, &UintOptions_tCD241771582D5159D0129AA82E86590D0A0FC1E6_0_0_0 } /* DG.Tweening.Plugins.Options.UintOptions */,
	{ NULL, Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke, Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke_back, Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshal_pinvoke_cleanup, NULL, NULL, &Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_0_0_0 } /* DG.Tweening.Plugins.Options.Vector3ArrayOptions */,
	{ NULL, VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke, VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke_back, VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshal_pinvoke_cleanup, NULL, NULL, &VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_0_0_0 } /* DG.Tweening.Plugins.Options.VectorOptions */,
	{ DelegatePInvokeWrapper_TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83, NULL, NULL, NULL, NULL, NULL, &TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83_0_0_0 } /* DG.Tweening.TweenCallback */,
	{ DelegatePInvokeWrapper_OnDLLLoaded_tACEA021AF4D75D93E4FC2B2F4BC942D5645262A2, NULL, NULL, NULL, NULL, NULL, &OnDLLLoaded_tACEA021AF4D75D93E4FC2B2F4BC942D5645262A2_0_0_0 } /* Facebook.Unity.FB/OnDLLLoaded */,
	{ DelegatePInvokeWrapper_HideUnityDelegate_t1CC3D2A4791A49186725C059FD6B67DB1D23C173, NULL, NULL, NULL, NULL, NULL, &HideUnityDelegate_t1CC3D2A4791A49186725C059FD6B67DB1D23C173_0_0_0 } /* Facebook.Unity.HideUnityDelegate */,
	{ DelegatePInvokeWrapper_InitDelegate_t5027853A5490CEFC4312BDCD84DB17C9E7783499, NULL, NULL, NULL, NULL, NULL, &InitDelegate_t5027853A5490CEFC4312BDCD84DB17C9E7783499_0_0_0 } /* Facebook.Unity.InitDelegate */,
	{ DelegatePInvokeWrapper_DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F, NULL, NULL, NULL, NULL, NULL, &DynamicLinkReceivedDelegate_t49E6454E255DE5CF6B8BF444F01950B06322082F_0_0_0 } /* Firebase.DynamicLinks.FirebaseDynamicLinks/Listener/DynamicLinkReceivedDelegate */,
	{ DelegatePInvokeWrapper_ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D, NULL, NULL, NULL, NULL, NULL, &ExceptionArgumentDelegate_tE083F7F63DAAB96E2EC02BE687A110333400C47D_0_0_0 } /* Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate */,
	{ DelegatePInvokeWrapper_ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2, NULL, NULL, NULL, NULL, NULL, &ExceptionDelegate_t72E7E96F197314BDCF04E9F7855BECDC2B379FC2_0_0_0 } /* Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGExceptionHelper/ExceptionDelegate */,
	{ DelegatePInvokeWrapper_SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B, NULL, NULL, NULL, NULL, NULL, &SWIGStringDelegate_tB3026352BA83FCF17B9F64844065B9594E424B3B_0_0_0 } /* Firebase.DynamicLinks.FirebaseDynamicLinksPINVOKE/SWIGStringHelper/SWIGStringDelegate */,
	{ DelegatePInvokeWrapper_MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B, NULL, NULL, NULL, NULL, NULL, &MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B_0_0_0 } /* Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate */,
	{ DelegatePInvokeWrapper_TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3, NULL, NULL, NULL, NULL, NULL, &TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3_0_0_0 } /* Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate */,
	{ DelegatePInvokeWrapper_ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8, NULL, NULL, NULL, NULL, NULL, &ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_0_0_0 } /* Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate */,
	{ DelegatePInvokeWrapper_ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B, NULL, NULL, NULL, NULL, NULL, &ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_0_0_0 } /* Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate */,
	{ DelegatePInvokeWrapper_SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4, NULL, NULL, NULL, NULL, NULL, &SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4_0_0_0 } /* Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate */,
	{ NULL, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_back, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_cleanup, NULL, NULL, &ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_0_0_0 } /* NativeGallery/ImageProperties */,
	{ DelegatePInvokeWrapper_MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B, NULL, NULL, NULL, NULL, NULL, &MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B_0_0_0 } /* NativeGallery/MediaPickCallback */,
	{ DelegatePInvokeWrapper_MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C, NULL, NULL, NULL, NULL, NULL, &MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C_0_0_0 } /* NativeGallery/MediaPickMultipleCallback */,
	{ DelegatePInvokeWrapper_MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D, NULL, NULL, NULL, NULL, NULL, &MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D_0_0_0 } /* NativeGallery/MediaSaveCallback */,
	{ NULL, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_back, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_back, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_back, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_0_0_0 } /* TMPro.FontAssetCreationSettings */,
	{ NULL, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_back, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke_back, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshal_pinvoke_cleanup, NULL, NULL, &SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker/SpriteData */,
	{ NULL, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_back, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_back, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_cleanup, NULL, NULL, &Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ NULL, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_back, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_0_0_0 } /* TMPro.TMP_FontWeightPair */,
	{ DelegatePInvokeWrapper_OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_back, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_back, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_back, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_back, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_0_0_0 } /* TMPro.WordWrapState */,
	{ DelegatePInvokeWrapper_APayAuthCallbackHandler_tA3B5F2DE29AC1B035CCE424CC63A12BBAC14B3B0, NULL, NULL, NULL, NULL, NULL, &APayAuthCallbackHandler_tA3B5F2DE29AC1B035CCE424CC63A12BBAC14B3B0_0_0_0 } /* APayBridgeiOS/APayAuthCallbackHandler */,
	{ NULL, APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke, APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke_back, APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_marshal_pinvoke_cleanup, NULL, NULL, &APayConfig_tC1D5BC9B9577F1C88AFC27F22D64EECDDBA5CD28_0_0_0 } /* APayConfig */,
	{ DelegatePInvokeWrapper_GetCredentialStateCompleted_t0B63B0FF9BD018F477A29B891A6E8012E29850EB, NULL, NULL, NULL, NULL, NULL, &GetCredentialStateCompleted_t0B63B0FF9BD018F477A29B891A6E8012E29850EB_0_0_0 } /* AbilityGames.Auth.SignInWithApple/GetCredentialStateCompleted */,
	{ DelegatePInvokeWrapper_LoginCompleted_t4790635D8B3657385B9C03CEDDE709E967D370A8, NULL, NULL, NULL, NULL, NULL, &LoginCompleted_t4790635D8B3657385B9C03CEDDE709E967D370A8_0_0_0 } /* AbilityGames.Auth.SignInWithApple/LoginCompleted */,
	{ NULL, SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke, SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke_back, SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_marshal_pinvoke_cleanup, NULL, NULL, &SocialUserInfo_tB3BBA41F644C3CF6E0BDDA63D95DEFF6A9B8E83D_0_0_0 } /* AbilityGames.Auth.SocialUserInfo */,
	{ NULL, UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke, UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke_back, UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_marshal_pinvoke_cleanup, NULL, NULL, &UserInfo_t130D27AE9C3F20204BF799FD3AB9A6407F5FFE5B_0_0_0 } /* AbilityGames.Auth.UserInfo */,
	{ NULL, BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke, BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke_back, BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_marshal_pinvoke_cleanup, NULL, NULL, &BankAndIFSC_tEABA94350443E112984AF13BE60E17643EC7545F_0_0_0 } /* AbilityGames.BankIFSCInfo/BankAndIFSC */,
	{ NULL, RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke, RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke_back, RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_marshal_pinvoke_cleanup, NULL, NULL, &RummyTypeUI_t787E00B07C15935739944F0CA35B35B906FB00CA_0_0_0 } /* AbilityGames.LobbyUI/RummyTypeUI */,
	{ NULL, SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke, SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke_back, SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_marshal_pinvoke_cleanup, NULL, NULL, &SortingIndicator_t28BB6AA8D07638C7E1754A9FA503F8CC5F5947BC_0_0_0 } /* AbilityGames.LobbyUI/SortingIndicator */,
	{ NULL, CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke, CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke_back, CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_marshal_pinvoke_cleanup, NULL, NULL, &CardStruct_t5051AAAB6A9DA78A164D61DF8D159A58F0EC82DF_0_0_0 } /* AbilityGames.Rummy.CardBase/CardStruct */,
	{ NULL, CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke, CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke_back, CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_marshal_pinvoke_cleanup, NULL, NULL, &CardStruct_t4541192892E93C52CE36F73636CC061F3E857530_0_0_0 } /* AbilityGames.Rummy.CloseDeck/CardStruct */,
	{ NULL, HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke, HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke_back, HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_marshal_pinvoke_cleanup, NULL, NULL, &HighCard_tDEA80EC5F53E592CD13C78F2405B892B5EEB280E_0_0_0 } /* AbilityGames.Rummy.HighCardUI/HighCard */,
	{ NULL, TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke, TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke_back, TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_marshal_pinvoke_cleanup, NULL, NULL, &TableBonus_t383EE7F9539E39C300E7A3FD342EB46BBC2DEBD0_0_0_0 } /* AbilityGames.Rummy.LobbyTable/TableBonus */,
	{ NULL, MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke, MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke_back, MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_marshal_pinvoke_cleanup, NULL, NULL, &MessageInfo_tF8D3A71BF5710455391E878FE3B579B1250B29A7_0_0_0 } /* AbilityGames.Rummy.MessageInfo */,
	{ NULL, ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke, ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke_back, ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_marshal_pinvoke_cleanup, NULL, NULL, &ServerInfo_tCC280E4870F7E9B9CA18436783D3F60226CF159B_0_0_0 } /* AbilityGames.ServerConfig/ServerInfo */,
	{ NULL, TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke, TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke_back, TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_marshal_pinvoke_cleanup, NULL, NULL, &TournamentListTab_t9DBFDB3E33D469A6D164A1D6040CE891719C5CE5_0_0_0 } /* AbilityGames.Tournament.TournamentLobbyUI/TournamentListTab */,
	{ DelegatePInvokeWrapper_CompressFunc_t81FC687403DA94FC5391CE904E3B1E3E0A16951B, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t81FC687403DA94FC5391CE904E3B1E3E0A16951B_0_0_0 } /* BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc */,
	{ NULL, BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke, BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke_back, BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_marshal_pinvoke_cleanup, NULL, NULL, &BufferDesc_t80ED974345EF4D73B70182DFBC813166A6987C32_0_0_0 } /* BestHTTP.Extensions.BufferDesc */,
	{ NULL, BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke, BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke_back, BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_marshal_pinvoke_cleanup, NULL, NULL, &BufferStore_t915C663C145A005973A01DD2C2B2233FE4C1875F_0_0_0 } /* BestHTTP.Extensions.BufferStore */,
	{ NULL, ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke, ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke_back, ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_marshal_pinvoke_cleanup, NULL, NULL, &ClientMessage_t58311ADBFA310AE409AA6E39AE5FD76E18EE8879_0_0_0 } /* BestHTTP.SignalR.Messages.ClientMessage */,
	{ NULL, CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke, CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke_back, CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_marshal_pinvoke_cleanup, NULL, NULL, &CallbackDescriptor_tEAFD915452D34ED265E42E2C710E266BAD8CDDE3_0_0_0 } /* BestHTTP.SignalRCore.CallbackDescriptor */,
	{ NULL, CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke, CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke_back, CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_marshal_pinvoke_cleanup, NULL, NULL, &CancelInvocationMessage_t113B32D5A78B7EC18003490C795033DD98026287_0_0_0 } /* BestHTTP.SignalRCore.Messages.CancelInvocationMessage */,
	{ NULL, InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke, InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke_back, InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_marshal_pinvoke_cleanup, NULL, NULL, &InvocationMessage_t8028ECEAA5AEF5E0B337994CC62A6DAC7699DDB7_0_0_0 } /* BestHTTP.SignalRCore.Messages.InvocationMessage */,
	{ NULL, Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke, Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke_back, Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_marshal_pinvoke_cleanup, NULL, NULL, &Message_t96EA205CB394898ACB5CC75B7FB5258F7AE9FB4A_0_0_0 } /* BestHTTP.SignalRCore.Messages.Message */,
	{ NULL, RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke, RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke_back, RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_marshal_pinvoke_cleanup, NULL, NULL, &RawFrameData_tC5C7187D95941B1554577BE9FE98BFB638843EE0_0_0_0 } /* BestHTTP.WebSocket.Frames.RawFrameData */,
	{ NULL, WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke, WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke_back, WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_marshal_pinvoke_cleanup, NULL, NULL, &WebSocketFrameReader_t6ABF9DF877D7E7DA1C1064D4D1137337DA291C23_0_0_0 } /* BestHTTP.WebSocket.Frames.WebSocketFrameReader */,
	{ DelegatePInvokeWrapper_OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398, NULL, NULL, NULL, NULL, NULL, &OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_0_0_0 } /* Google.Impl.BaseObject/OutStringMethod */,
	{ NULL, ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke, ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke_back, ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_t45750A068FF8D4EC7EEC64FCE50EA28DB3BCD7D5_0_0_0 } /* LitJson.ArrayMetadata */,
	{ NULL, ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke, ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke_back, ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_t358DFD540CA50C30225DA4451DD6B24B9B90A03D_0_0_0 } /* LitJson.ObjectMetadata */,
	{ NULL, PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke, PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke_back, PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_t08D9EFE12986756B612B04750F0F5CE878B725F6_0_0_0 } /* LitJson.PropertyMetadata */,
	{ NULL, TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke, TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke_back, TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_marshal_pinvoke_cleanup, NULL, NULL, &TypeNameKey_t8355F938E1A0D1893D986791A4E6B9228095AC56_0_0_0 } /* Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey */,
	{ NULL, ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke, ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke_back, ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_marshal_pinvoke_cleanup, NULL, NULL, &ResolverContractKey_t8FB6E04ADABA51710F7304CEEA36081A0557D66F_0_0_0 } /* Newtonsoft.Json.Serialization.ResolverContractKey */,
	{ NULL, TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke, TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke_back, TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_marshal_pinvoke_cleanup, NULL, NULL, &TypeConvertKey_t8EE69FBC1F30B931D7936EA26557DA3657740704_0_0_0 } /* Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey */,
	{ NULL, ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke, ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke_back, ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_marshal_pinvoke_cleanup, NULL, NULL, &ReorderableListEventStruct_tC682CA0A096D5C473503F24E5EA5EF6DD40EBB2A_0_0_0 } /* UnityEngine.UI.Extensions.ReorderableList/ReorderableListEventStruct */,
	{ NULL, Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke, Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke_back, Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_marshal_pinvoke_cleanup, NULL, NULL, &Snap_t4938E9528764FE9B51F6A9BEB97F3C8AEA7B46BF_0_0_0 } /* UnityEngine.UI.Extensions.ScrollPositionController/Snap */,
	{ DelegatePInvokeWrapper_PageSnapChange_tD3924B00988BFBCA67B474FF7164B0F6A5C3DE29, NULL, NULL, NULL, NULL, NULL, &PageSnapChange_tD3924B00988BFBCA67B474FF7164B0F6A5C3DE29_0_0_0 } /* UnityEngine.UI.Extensions.ScrollSnap/PageSnapChange */,
	{ NULL, IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke, IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke_back, IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_marshal_pinvoke_cleanup, NULL, NULL, &IconName_t2F8CB22FF220F36D0B91C6D837ACFC15FEAFB94A_0_0_0 } /* UnityEngine.UI.Extensions.TextPic/IconName */,
	{ NULL, FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke, FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke_back, FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t5DC81A16395042EEFF03576EC81EF9D6F96E1201_0_0_0 } /* UnityEngine.UI.Extensions.Tweens.FloatTween */,
	{ NULL, Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke, Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke_back, Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_marshal_pinvoke_cleanup, NULL, NULL, &Vector3_Array2D_t0122E29AF2278072D70C360153F25785E5AA1BDC_0_0_0 } /* UnityEngine.UI.Extensions.Vector3_Array2D */,
	{ DelegatePInvokeWrapper_Callback_t793989712FB763CF5DCE7F01FB4BFEEACC429B90, NULL, NULL, NULL, NULL, NULL, &Callback_t793989712FB763CF5DCE7F01FB4BFEEACC429B90_0_0_0 } /* iOSNativeHelper/Callback */,
	{ DelegatePInvokeWrapper_PhotosCallback_t5F7452C1F3592A1F0209CE504A02F69DD9A71F39, NULL, NULL, NULL, NULL, NULL, &PhotosCallback_t5F7452C1F3592A1F0209CE504A02F69DD9A71F39_0_0_0 } /* iOSNativeHelper/PhotosCallback */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t2F0C2A9C169C9729EA1A649DD3A2D58AFA7F7028::CLSID, &ZlibException_t2F0C2A9C169C9729EA1A649DD3A2D58AFA7F7028_0_0_0 } /* BestHTTP.Decompression.Zlib.ZlibException */,
	NULL,
};
