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

// Facebook.Unity.Utilities/<>c
struct U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m2D1E30C7DD7902F4ABB302193C7E4121D56D8797_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Facebook.Unity.Utilities_<>c
struct  U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_StaticFields
{
public:
	// Facebook.Unity.Utilities_<>c Facebook.Unity.Utilities_<>c::<>9
	U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities_<>c::<>9__18_0
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24A18F69F6F06BA6697811BFECF2BB7A1D8E48B2 (U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.Utilities_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2D1E30C7DD7902F4ABB302193C7E4121D56D8797 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2D1E30C7DD7902F4ABB302193C7E4121D56D8797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * L_0 = (U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A *)il2cpp_codegen_object_new(U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m24A18F69F6F06BA6697811BFECF2BB7A1D8E48B2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Utilities_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m24A18F69F6F06BA6697811BFECF2BB7A1D8E48B2 (U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.Utilities_<>c::<ParsePermissionFromResult>b__18_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CParsePermissionFromResultU3Eb__18_0_m00A80EB0337291868EAEF35189A3F446DD24595C (U3CU3Ec_tE060434EA574EA80DDCDB1A0B657D09FF39C2F3A * __this, RuntimeObject * ___permission0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___permission0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
