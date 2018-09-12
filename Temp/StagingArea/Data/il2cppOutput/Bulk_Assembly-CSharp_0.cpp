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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Elements
struct Elements_t3694204419;
// Elements[0...,0...]
struct ElementsU5BU2CU5D_t1088010899;
// Grid
struct Grid_t1081586032;
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* ElementsU5BU2CU5D_t1088010899_il2cpp_TypeInfo_var;
extern RuntimeClass* Grid_t1081586032_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1833181014;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral4141783935;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t Elements_IsCovered_m2743502523_MetadataUsageId;
extern const uint32_t Elements_LoadTexture_m3272761143_MetadataUsageId;
extern const uint32_t Elements_OnMouseUpAsButton_m2671552790_MetadataUsageId;
extern const uint32_t Elements_Start_m1644718006_MetadataUsageId;
extern const uint32_t Grid_AdjacentMines_m2128718015_MetadataUsageId;
extern const uint32_t Grid_IsFinished_m3728431176_MetadataUsageId;
extern const uint32_t Grid_MineAt_m1208780654_MetadataUsageId;
extern const uint32_t Grid_UncoverMines_m2502881434_MetadataUsageId;
extern const uint32_t Grid__cctor_m1755833324_MetadataUsageId;
extern const uint32_t Grid_uncover_m1387193023_MetadataUsageId;

struct ElementsU5BU2CU5D_t1088010899;
struct BooleanU5B0___U2C0___U5D_t2897418193;
struct SpriteU5BU5D_t2581906349;


#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef ELEMENTS_T3694204419_H
#define ELEMENTS_T3694204419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Elements
struct  Elements_t3694204419  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Elements::mine
	bool ___mine_4;
	// UnityEngine.Sprite[] Elements::emptyTextures
	SpriteU5BU5D_t2581906349* ___emptyTextures_5;
	// UnityEngine.Sprite Elements::mineTexture
	Sprite_t280657092 * ___mineTexture_6;

public:
	inline static int32_t get_offset_of_mine_4() { return static_cast<int32_t>(offsetof(Elements_t3694204419, ___mine_4)); }
	inline bool get_mine_4() const { return ___mine_4; }
	inline bool* get_address_of_mine_4() { return &___mine_4; }
	inline void set_mine_4(bool value)
	{
		___mine_4 = value;
	}

	inline static int32_t get_offset_of_emptyTextures_5() { return static_cast<int32_t>(offsetof(Elements_t3694204419, ___emptyTextures_5)); }
	inline SpriteU5BU5D_t2581906349* get_emptyTextures_5() const { return ___emptyTextures_5; }
	inline SpriteU5BU5D_t2581906349** get_address_of_emptyTextures_5() { return &___emptyTextures_5; }
	inline void set_emptyTextures_5(SpriteU5BU5D_t2581906349* value)
	{
		___emptyTextures_5 = value;
		Il2CppCodeGenWriteBarrier((&___emptyTextures_5), value);
	}

	inline static int32_t get_offset_of_mineTexture_6() { return static_cast<int32_t>(offsetof(Elements_t3694204419, ___mineTexture_6)); }
	inline Sprite_t280657092 * get_mineTexture_6() const { return ___mineTexture_6; }
	inline Sprite_t280657092 ** get_address_of_mineTexture_6() { return &___mineTexture_6; }
	inline void set_mineTexture_6(Sprite_t280657092 * value)
	{
		___mineTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___mineTexture_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTS_T3694204419_H
#ifndef GRID_T1081586032_H
#define GRID_T1081586032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grid
struct  Grid_t1081586032  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Grid_t1081586032_StaticFields
{
public:
	// System.Int32 Grid::w
	int32_t ___w_4;
	// System.Int32 Grid::h
	int32_t ___h_5;
	// Elements[0...,0...] Grid::elements
	ElementsU5BU2CU5D_t1088010899* ___elements_6;

public:
	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___w_4)); }
	inline int32_t get_w_4() const { return ___w_4; }
	inline int32_t* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(int32_t value)
	{
		___w_4 = value;
	}

	inline static int32_t get_offset_of_h_5() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___h_5)); }
	inline int32_t get_h_5() const { return ___h_5; }
	inline int32_t* get_address_of_h_5() { return &___h_5; }
	inline void set_h_5(int32_t value)
	{
		___h_5 = value;
	}

	inline static int32_t get_offset_of_elements_6() { return static_cast<int32_t>(offsetof(Grid_t1081586032_StaticFields, ___elements_6)); }
	inline ElementsU5BU2CU5D_t1088010899* get_elements_6() const { return ___elements_6; }
	inline ElementsU5BU2CU5D_t1088010899** get_address_of_elements_6() { return &___elements_6; }
	inline void set_elements_6(ElementsU5BU2CU5D_t1088010899* value)
	{
		___elements_6 = value;
		Il2CppCodeGenWriteBarrier((&___elements_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRID_T1081586032_H
// Elements[,]
struct ElementsU5BU2CU5D_t1088010899  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Elements_t3694204419 * m_Items[1];

public:
	inline Elements_t3694204419 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Elements_t3694204419 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Elements_t3694204419 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Elements_t3694204419 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Elements_t3694204419 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Elements_t3694204419 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Elements_t3694204419 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Elements_t3694204419 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Elements_t3694204419 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Elements_t3694204419 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Elements_t3694204419 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Elements_t3694204419 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
extern "C" IL2CPP_METHOD_ATTR float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3235626157 * Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C" IL2CPP_METHOD_ATTR Sprite_t280657092 * SpriteRenderer_get_sprite_m663386871 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Sprite_get_texture_m3976398399 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Grid::UncoverMines()
extern "C" IL2CPP_METHOD_ATTR void Grid_UncoverMines_m2502881434 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 Grid::AdjacentMines(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Grid_AdjacentMines_m2128718015 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Elements::LoadTexture(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Elements_LoadTexture_m3272761143 (Elements_t3694204419 * __this, int32_t ___adjacentCount0, const RuntimeMethod* method);
// System.Void Grid::uncover(System.Int32,System.Int32,System.Boolean[0...,0...])
extern "C" IL2CPP_METHOD_ATTR void Grid_uncover_m1387193023 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BooleanU5B0___U2C0___U5D_t2897418193* ___visited2, const RuntimeMethod* method);
// System.Boolean Grid::IsFinished()
extern "C" IL2CPP_METHOD_ATTR bool Grid_IsFinished_m3728431176 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean Grid::MineAt(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Grid_MineAt_m1208780654 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Boolean Elements::IsCovered()
extern "C" IL2CPP_METHOD_ATTR bool Elements_IsCovered_m2743502523 (Elements_t3694204419 * __this, const RuntimeMethod* method);
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
// System.Void Elements::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Elements__ctor_m1487984450 (Elements_t3694204419 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Elements::Start()
extern "C" IL2CPP_METHOD_ATTR void Elements_Start_m1644718006 (Elements_t3694204419 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Elements_Start_m1644718006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mine_4((bool)((((double)(((double)((double)L_0)))) < ((double)(0.15)))? 1 : 0));
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		V_0 = (((int32_t)((int32_t)L_3)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = (&V_3)->get_y_1();
		V_2 = (((int32_t)((int32_t)L_6)));
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		ElementsU5BU2CU5D_t1088010899* L_7 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_6();
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		((ElementsU5BU2CU5D_t1088010899*)(ElementsU5BU2CU5D_t1088010899*)L_7)->SetAtUnchecked(L_8, L_9, __this);
		return;
	}
}
// System.Void Elements::LoadTexture(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Elements_LoadTexture_m3272761143 (Elements_t3694204419 * __this, int32_t ___adjacentCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Elements_LoadTexture_m3272761143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mine_4();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_2 = __this->get_mineTexture_6();
		SpriteRenderer_set_sprite_m1286893786(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0021:
	{
		SpriteRenderer_t3235626157 * L_3 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		SpriteU5BU5D_t2581906349* L_4 = __this->get_emptyTextures_5();
		int32_t L_5 = ___adjacentCount0;
		int32_t L_6 = L_5;
		Sprite_t280657092 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		SpriteRenderer_set_sprite_m1286893786(L_3, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean Elements::IsCovered()
extern "C" IL2CPP_METHOD_ATTR bool Elements_IsCovered_m2743502523 (Elements_t3694204419 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Elements_IsCovered_m2743502523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_1 = SpriteRenderer_get_sprite_m663386871(L_0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_2 = Sprite_get_texture_m3976398399(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral1948332219, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Elements::OnMouseUpAsButton()
extern "C" IL2CPP_METHOD_ATTR void Elements_OnMouseUpAsButton_m2671552790 (Elements_t3694204419 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Elements_OnMouseUpAsButton_m2671552790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_mine_4();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		Grid_UncoverMines_m2502881434(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4141783935, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_001f:
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		V_0 = (((int32_t)((int32_t)L_3)));
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = (&V_3)->get_y_1();
		V_2 = (((int32_t)((int32_t)L_6)));
		int32_t L_7 = V_0;
		int32_t L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_9 = Grid_AdjacentMines_m2128718015(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Elements_LoadTexture_m3272761143(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_4();
		int32_t L_13 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_5();
		il2cpp_array_size_t L_15[] = { (il2cpp_array_size_t)L_12, (il2cpp_array_size_t)L_13 };
		BooleanU5B0___U2C0___U5D_t2897418193* L_14 = (BooleanU5B0___U2C0___U5D_t2897418193*)GenArrayNew(BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var, L_15);
		Grid_uncover_m1387193023(NULL /*static, unused*/, L_10, L_11, L_14, /*hidden argument*/NULL);
		bool L_16 = Grid_IsFinished_m3728431176(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1833181014, /*hidden argument*/NULL);
	}

IL_0080:
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
// System.Void Grid::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Grid__ctor_m209885941 (Grid_t1081586032 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grid::UncoverMines()
extern "C" IL2CPP_METHOD_ATTR void Grid_UncoverMines_m2502881434 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_UncoverMines_m2502881434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Elements_t3694204419 * V_0 = NULL;
	ElementsU5BU2CU5D_t1088010899* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		ElementsU5BU2CU5D_t1088010899* L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_6();
		V_1 = (ElementsU5BU2CU5D_t1088010899*)L_0;
		ElementsU5BU2CU5D_t1088010899* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		ElementsU5BU2CU5D_t1088010899* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0057;
	}

IL_001e:
	{
		V_5 = 0;
		goto IL_0049;
	}

IL_0026:
	{
		ElementsU5BU2CU5D_t1088010899* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		Elements_t3694204419 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		Elements_t3694204419 * L_9 = V_0;
		bool L_10 = L_9->get_mine_4();
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		Elements_t3694204419 * L_11 = V_0;
		Elements_LoadTexture_m3272761143(L_11, 0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_5;
		int32_t L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Boolean Grid::MineAt(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Grid_MineAt_m1208780654 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_MineAt_m1208780654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_4();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_5();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		ElementsU5BU2CU5D_t1088010899* L_6 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_6();
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		Elements_t3694204419 * L_9 = ((ElementsU5BU2CU5D_t1088010899*)(ElementsU5BU2CU5D_t1088010899*)L_6)->GetAtUnchecked(L_7, L_8);
		bool L_10 = L_9->get_mine_4();
		return L_10;
	}

IL_0036:
	{
		return (bool)0;
	}
}
// System.Int32 Grid::AdjacentMines(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Grid_AdjacentMines_m2128718015 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_AdjacentMines_m2128718015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_2 = Grid_MineAt_m1208780654(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = ___x0;
		int32_t L_5 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_6 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = ___x0;
		int32_t L_9 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_10 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = ___x0;
		int32_t L_13 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_14 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_16 = ___x0;
		int32_t L_17 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_18 = Grid_MineAt_m1208780654(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_20 = ___x0;
		int32_t L_21 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_22 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_24 = ___x0;
		int32_t L_25 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_26 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_28 = ___x0;
		int32_t L_29 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		bool L_30 = Grid_MineAt_m1208780654(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_32 = V_0;
		return L_32;
	}
}
// System.Void Grid::uncover(System.Int32,System.Int32,System.Boolean[0...,0...])
extern "C" IL2CPP_METHOD_ATTR void Grid_uncover_m1387193023 (RuntimeObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, BooleanU5B0___U2C0___U5D_t2897418193* ___visited2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_uncover_m1387193023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_4();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_4 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_5();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0089;
		}
	}
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_6 = ___visited2;
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		bool L_9 = (L_6)->GetAtUnchecked(L_7, L_8);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		ElementsU5BU2CU5D_t1088010899* L_10 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_6();
		int32_t L_11 = ___x0;
		int32_t L_12 = ___y1;
		Elements_t3694204419 * L_13 = ((ElementsU5BU2CU5D_t1088010899*)(ElementsU5BU2CU5D_t1088010899*)L_10)->GetAtUnchecked(L_11, L_12);
		int32_t L_14 = ___x0;
		int32_t L_15 = ___y1;
		int32_t L_16 = Grid_AdjacentMines_m2128718015(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Elements_LoadTexture_m3272761143(L_13, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___x0;
		int32_t L_18 = ___y1;
		int32_t L_19 = Grid_AdjacentMines_m2128718015(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		return;
	}

IL_0058:
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_20 = ___visited2;
		int32_t L_21 = ___x0;
		int32_t L_22 = ___y1;
		(L_20)->SetAtUnchecked(L_21, L_22, (bool)1);
		int32_t L_23 = ___x0;
		int32_t L_24 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_25 = ___visited2;
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		Grid_uncover_m1387193023(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = ___x0;
		int32_t L_27 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_28 = ___visited2;
		Grid_uncover_m1387193023(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = ___x0;
		int32_t L_30 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_31 = ___visited2;
		Grid_uncover_m1387193023(NULL /*static, unused*/, L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), L_31, /*hidden argument*/NULL);
		int32_t L_32 = ___x0;
		int32_t L_33 = ___y1;
		BooleanU5B0___U2C0___U5D_t2897418193* L_34 = ___visited2;
		Grid_uncover_m1387193023(NULL /*static, unused*/, L_32, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), L_34, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Boolean Grid::IsFinished()
extern "C" IL2CPP_METHOD_ATTR bool Grid_IsFinished_m3728431176 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_IsFinished_m3728431176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Elements_t3694204419 * V_0 = NULL;
	ElementsU5BU2CU5D_t1088010899* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Grid_t1081586032_il2cpp_TypeInfo_var);
		ElementsU5BU2CU5D_t1088010899* L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_elements_6();
		V_1 = (ElementsU5BU2CU5D_t1088010899*)L_0;
		ElementsU5BU2CU5D_t1088010899* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		ElementsU5BU2CU5D_t1088010899* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_005d;
	}

IL_001e:
	{
		V_5 = 0;
		goto IL_004f;
	}

IL_0026:
	{
		ElementsU5BU2CU5D_t1088010899* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		Elements_t3694204419 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		Elements_t3694204419 * L_9 = V_0;
		bool L_10 = Elements_IsCovered_m2743502523(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Elements_t3694204419 * L_11 = V_0;
		bool L_12 = L_11->get_mine_4();
		if (L_12)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Grid::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Grid__cctor_m1755833324 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid__cctor_m1755833324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_w_4(((int32_t)10));
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_h_5(((int32_t)14));
		int32_t L_0 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_w_4();
		int32_t L_1 = ((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->get_h_5();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		ElementsU5BU2CU5D_t1088010899* L_2 = (ElementsU5BU2CU5D_t1088010899*)GenArrayNew(ElementsU5BU2CU5D_t1088010899_il2cpp_TypeInfo_var, L_3);
		((Grid_t1081586032_StaticFields*)il2cpp_codegen_static_fields_for(Grid_t1081586032_il2cpp_TypeInfo_var))->set_elements_6((ElementsU5BU2CU5D_t1088010899*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
