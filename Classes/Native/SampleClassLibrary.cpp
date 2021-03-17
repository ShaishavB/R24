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


// SampleClassLibrary.SampleExternalClass
struct SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SampleExternalClass__ctor_m38D0BFA4C00825A5D770487D05826A625F8EC4D0_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9CB53200C34F1BBDC9031A4DCDA5C2C93111AAF2 
{
public:

public:
};


// System.Object


// SampleClassLibrary.SampleExternalClass
struct  SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE  : public RuntimeObject
{
public:
	// System.String SampleClassLibrary.SampleExternalClass::<SampleString>k__BackingField
	String_t* ___U3CSampleStringU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SampleClassLibrary.SampleExternalClass::<SampleDictionary>k__BackingField
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___U3CSampleDictionaryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSampleStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE, ___U3CSampleStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CSampleStringU3Ek__BackingField_0() const { return ___U3CSampleStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSampleStringU3Ek__BackingField_0() { return &___U3CSampleStringU3Ek__BackingField_0; }
	inline void set_U3CSampleStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CSampleStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSampleStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSampleDictionaryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE, ___U3CSampleDictionaryU3Ek__BackingField_1)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_U3CSampleDictionaryU3Ek__BackingField_1() const { return ___U3CSampleDictionaryU3Ek__BackingField_1; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_U3CSampleDictionaryU3Ek__BackingField_1() { return &___U3CSampleDictionaryU3Ek__BackingField_1; }
	inline void set_U3CSampleDictionaryU3Ek__BackingField_1(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___U3CSampleDictionaryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSampleDictionaryU3Ek__BackingField_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___entries_1)); }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___keys_7)); }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___values_8)); }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void SampleClassLibrary.SampleExternalClass::set_SampleDictionary(System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SampleExternalClass_set_SampleDictionary_m57EB726AFF69FD7853DC85917E1BF9EAB3AC992E_inline (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___value0, const RuntimeMethod* method);
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
// System.String SampleClassLibrary.SampleExternalClass::get_SampleString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SampleExternalClass_get_SampleString_m138B6D2D2485E33D7C45272D3B84D4BF13953EA6 (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSampleStringU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::set_SampleString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleExternalClass_set_SampleString_mCC827BA852F16C8C65471A4BDFDAF507AAF2D0CF (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSampleStringU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> SampleClassLibrary.SampleExternalClass::get_SampleDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * SampleExternalClass_get_SampleDictionary_mE7A795A5ECD1FF285A6F07F9ADBE4FFC3494E542 (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = __this->get_U3CSampleDictionaryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::set_SampleDictionary(System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleExternalClass_set_SampleDictionary_m57EB726AFF69FD7853DC85917E1BF9EAB3AC992E (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = ___value0;
		__this->set_U3CSampleDictionaryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void SampleClassLibrary.SampleExternalClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleExternalClass__ctor_m38D0BFA4C00825A5D770487D05826A625F8EC4D0 (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleExternalClass__ctor_m38D0BFA4C00825A5D770487D05826A625F8EC4D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *)il2cpp_codegen_object_new(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C(L_0, /*hidden argument*/Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var);
		SampleExternalClass_set_SampleDictionary_m57EB726AFF69FD7853DC85917E1BF9EAB3AC992E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SampleExternalClass_set_SampleDictionary_m57EB726AFF69FD7853DC85917E1BF9EAB3AC992E_inline (SampleExternalClass_t344BE1094FC84D999E5DF2302E74DB2D195AC2CE * __this, Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = ___value0;
		__this->set_U3CSampleDictionaryU3Ek__BackingField_1(L_0);
		return;
	}
}
