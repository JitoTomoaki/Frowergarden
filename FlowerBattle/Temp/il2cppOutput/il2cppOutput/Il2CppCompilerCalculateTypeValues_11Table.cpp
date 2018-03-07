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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1298116880;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Delegate
struct Delegate_t3022476291;
// System.ComponentModel.ListEntry
struct ListEntry_t935815304;
// System.ComponentModel.LicenseContext
struct LicenseContext_t192650050;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1185541675;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t941110040;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t839864825;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2492476920;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;
// System.Void
struct Void_t1841601450;
// System.Exception
struct Exception_t1927440687;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t540457070;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;




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
#ifndef CUSTOMTYPEDESCRIPTOR_T1720788626_H
#define CUSTOMTYPEDESCRIPTOR_T1720788626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t1720788626  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t1720788626, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T1720788626_H
#ifndef CULTUREINFOCOMPARER_T2714931249_H
#define CULTUREINFOCOMPARER_T2714931249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t2714931249  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T2714931249_H
#ifndef MARSHALBYVALUECOMPONENT_T3997823175_H
#define MARSHALBYVALUECOMPONENT_T3997823175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3997823175  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1298116880 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3997823175, ___eventList_0)); }
	inline EventHandlerList_t1298116880 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1298116880 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1298116880 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3997823175, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3997823175, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T3997823175_H
#ifndef MEMBERDESCRIPTOR_T3749827553_H
#define MEMBERDESCRIPTOR_T3749827553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3749827553  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t4255796347* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t1925812292 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attrs_1)); }
	inline AttributeU5BU5D_t4255796347* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t4255796347** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t4255796347* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attrCollection_2)); }
	inline AttributeCollection_t1925812292 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t1925812292 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t1925812292 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3749827553_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3749827553_H
#ifndef MEMBERDESCRIPTORCOMPARER_T856477673_H
#define MEMBERDESCRIPTORCOMPARER_T856477673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t856477673  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T856477673_H
#ifndef EVENTARGS_T3289624707_H
#define EVENTARGS_T3289624707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3289624707  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3289624707_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3289624707 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3289624707_StaticFields, ___Empty_0)); }
	inline EventArgs_t3289624707 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3289624707 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3289624707 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3289624707_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T2357028590_H
#define LISTSORTDESCRIPTIONCOLLECTION_T2357028590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t2357028590  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t2357028590, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T2357028590_H
#ifndef ENUMCOMPARER_T2635778853_H
#define ENUMCOMPARER_T2635778853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t2635778853  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T2635778853_H
#ifndef LISTENTRY_T935815304_H
#define LISTENTRY_T935815304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t935815304  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t3022476291 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t935815304 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t935815304, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t935815304, ___value_1)); }
	inline Delegate_t3022476291 * get_value_1() const { return ___value_1; }
	inline Delegate_t3022476291 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t3022476291 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t935815304, ___next_2)); }
	inline ListEntry_t935815304 * get_next_2() const { return ___next_2; }
	inline ListEntry_t935815304 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t935815304 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T935815304_H
#ifndef EVENTHANDLERLIST_T1298116880_H
#define EVENTHANDLERLIST_T1298116880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1298116880  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t935815304 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t3022476291 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___entries_0)); }
	inline ListEntry_t935815304 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t935815304 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t935815304 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___null_entry_1)); }
	inline Delegate_t3022476291 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t3022476291 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t3022476291 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1298116880_H
#ifndef LICENSE_T3326651051_H
#define LICENSE_T3326651051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t3326651051  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T3326651051_H
#ifndef LICENSECONTEXT_T192650050_H
#define LICENSECONTEXT_T192650050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t192650050  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T192650050_H
#ifndef LICENSEMANAGER_T764408642_H
#define LICENSEMANAGER_T764408642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t764408642  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t764408642_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t192650050 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t764408642_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t192650050 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t192650050 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t192650050 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t764408642_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t764408642_StaticFields, ___lockObject_2)); }
	inline RuntimeObject * get_lockObject_2() const { return ___lockObject_2; }
	inline RuntimeObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(RuntimeObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T764408642_H
#ifndef EVENTDESCRIPTORCOLLECTION_T3053042509_H
#define EVENTDESCRIPTORCOLLECTION_T3053042509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t3053042509  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t4252133567 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___eventList_0)); }
	inline ArrayList_t4252133567 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t4252133567 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t4252133567 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t3053042509_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t3053042509 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t3053042509 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t3053042509 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t3053042509 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T3053042509_H
#ifndef LICENSEPROVIDER_T3536803528_H
#define LICENSEPROVIDER_T3536803528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t3536803528  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T3536803528_H
#ifndef READONLYCOLLECTIONBASE_T22281769_H
#define READONLYCOLLECTIONBASE_T22281769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t22281769  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t22281769, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T22281769_H
#ifndef BACKGROUNDWORKER_T4230068110_H
#define BACKGROUNDWORKER_T4230068110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t4230068110  : public RuntimeObject
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t1185541675 * ___async_0;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_1;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_2;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_3;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t941110040 * ___DoWork_4;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t839864825 * ___ProgressChanged_5;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t2492476920 * ___RunWorkerCompleted_6;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___async_0)); }
	inline AsyncOperation_t1185541675 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t1185541675 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t1185541675 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_0), value);
	}

	inline static int32_t get_offset_of_cancel_pending_1() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___cancel_pending_1)); }
	inline bool get_cancel_pending_1() const { return ___cancel_pending_1; }
	inline bool* get_address_of_cancel_pending_1() { return &___cancel_pending_1; }
	inline void set_cancel_pending_1(bool value)
	{
		___cancel_pending_1 = value;
	}

	inline static int32_t get_offset_of_report_progress_2() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___report_progress_2)); }
	inline bool get_report_progress_2() const { return ___report_progress_2; }
	inline bool* get_address_of_report_progress_2() { return &___report_progress_2; }
	inline void set_report_progress_2(bool value)
	{
		___report_progress_2 = value;
	}

	inline static int32_t get_offset_of_support_cancel_3() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___support_cancel_3)); }
	inline bool get_support_cancel_3() const { return ___support_cancel_3; }
	inline bool* get_address_of_support_cancel_3() { return &___support_cancel_3; }
	inline void set_support_cancel_3(bool value)
	{
		___support_cancel_3 = value;
	}

	inline static int32_t get_offset_of_DoWork_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___DoWork_4)); }
	inline DoWorkEventHandler_t941110040 * get_DoWork_4() const { return ___DoWork_4; }
	inline DoWorkEventHandler_t941110040 ** get_address_of_DoWork_4() { return &___DoWork_4; }
	inline void set_DoWork_4(DoWorkEventHandler_t941110040 * value)
	{
		___DoWork_4 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_4), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___ProgressChanged_5)); }
	inline ProgressChangedEventHandler_t839864825 * get_ProgressChanged_5() const { return ___ProgressChanged_5; }
	inline ProgressChangedEventHandler_t839864825 ** get_address_of_ProgressChanged_5() { return &___ProgressChanged_5; }
	inline void set_ProgressChanged_5(ProgressChangedEventHandler_t839864825 * value)
	{
		___ProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t4230068110, ___RunWorkerCompleted_6)); }
	inline RunWorkerCompletedEventHandler_t2492476920 * get_RunWorkerCompleted_6() const { return ___RunWorkerCompleted_6; }
	inline RunWorkerCompletedEventHandler_t2492476920 ** get_address_of_RunWorkerCompleted_6() { return &___RunWorkerCompleted_6; }
	inline void set_RunWorkerCompleted_6(RunWorkerCompletedEventHandler_t2492476920 * value)
	{
		___RunWorkerCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T4230068110_H
#ifndef ATTRIBUTECOLLECTION_T1925812292_H
#define ATTRIBUTECOLLECTION_T1925812292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t1925812292  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t4252133567 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292, ___attrList_0)); }
	inline ArrayList_t4252133567 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t4252133567 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t4252133567 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t1925812292_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t1925812292 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t1925812292 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t1925812292 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t1925812292 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T1925812292_H
#ifndef ASYNCOPERATIONMANAGER_T3553158318_H
#define ASYNCOPERATIONMANAGER_T3553158318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t3553158318  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T3553158318_H
#ifndef ASYNCOPERATION_T1185541675_H
#define ASYNCOPERATION_T1185541675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t1185541675  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t3857790437 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1185541675, ___ctx_0)); }
	inline SynchronizationContext_t3857790437 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t3857790437 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1185541675, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t1185541675, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATION_T1185541675_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1285298191  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1656058977 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1285298191, ____identity_0)); }
	inline ServerIdentity_t1656058977 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1656058977 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1656058977 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef TYPECONVERTER_T745995970_H
#define TYPECONVERTER_T745995970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t745995970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T745995970_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T1990201979_H
#define IMMUTABLEOBJECTATTRIBUTE_T1990201979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t1990201979  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1990201979, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t1990201979_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t1990201979 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t1990201979 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t1990201979 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1990201979_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t1990201979 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t1990201979 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t1990201979 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1990201979_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t1990201979 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t1990201979 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t1990201979 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t1990201979_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t1990201979 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t1990201979 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t1990201979 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T1990201979_H
#ifndef GUIDCONVERTER_T1547586607_H
#define GUIDCONVERTER_T1547586607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1547586607  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1547586607_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1139197709_H
#define EXPANDABLEOBJECTCONVERTER_T1139197709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1139197709  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1139197709_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef PROPERTYDESCRIPTOR_T4250402154_H
#define PROPERTYDESCRIPTOR_T4250402154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4250402154  : public MemberDescriptor_t3749827553
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t745995970 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t909839986 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___converter_4)); }
	inline TypeConverter_t745995970 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t745995970 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t745995970 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___notifiers_5)); }
	inline Hashtable_t909839986 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t909839986 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t909839986 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T4250402154_H
#ifndef RUNTIMELICENSECONTEXT_T1397748562_H
#define RUNTIMELICENSECONTEXT_T1397748562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t1397748562  : public LicenseContext_t192650050
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t909839986 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t909839986 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1397748562, ___extraassemblies_0)); }
	inline Hashtable_t909839986 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t909839986 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t909839986 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraassemblies_0), value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1397748562, ___keys_1)); }
	inline Hashtable_t909839986 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t909839986 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t909839986 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___keys_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T1397748562_H
#ifndef EVENTDESCRIPTOR_T962731901_H
#define EVENTDESCRIPTOR_T962731901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t962731901  : public MemberDescriptor_t3749827553
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T962731901_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef LICFILELICENSEPROVIDER_T2962157156_H
#define LICFILELICENSEPROVIDER_T2962157156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t2962157156  : public LicenseProvider_t3536803528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T2962157156_H
#ifndef LOCALIZABLEATTRIBUTE_T1267247394_H
#define LOCALIZABLEATTRIBUTE_T1267247394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LocalizableAttribute
struct  LocalizableAttribute_t1267247394  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.LocalizableAttribute::localizable
	bool ___localizable_0;

public:
	inline static int32_t get_offset_of_localizable_0() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t1267247394, ___localizable_0)); }
	inline bool get_localizable_0() const { return ___localizable_0; }
	inline bool* get_address_of_localizable_0() { return &___localizable_0; }
	inline void set_localizable_0(bool value)
	{
		___localizable_0 = value;
	}
};

struct LocalizableAttribute_t1267247394_StaticFields
{
public:
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Default
	LocalizableAttribute_t1267247394 * ___Default_1;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::No
	LocalizableAttribute_t1267247394 * ___No_2;
	// System.ComponentModel.LocalizableAttribute System.ComponentModel.LocalizableAttribute::Yes
	LocalizableAttribute_t1267247394 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t1267247394_StaticFields, ___Default_1)); }
	inline LocalizableAttribute_t1267247394 * get_Default_1() const { return ___Default_1; }
	inline LocalizableAttribute_t1267247394 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LocalizableAttribute_t1267247394 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t1267247394_StaticFields, ___No_2)); }
	inline LocalizableAttribute_t1267247394 * get_No_2() const { return ___No_2; }
	inline LocalizableAttribute_t1267247394 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(LocalizableAttribute_t1267247394 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(LocalizableAttribute_t1267247394_StaticFields, ___Yes_3)); }
	inline LocalizableAttribute_t1267247394 * get_Yes_3() const { return ___Yes_3; }
	inline LocalizableAttribute_t1267247394 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(LocalizableAttribute_t1267247394 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZABLEATTRIBUTE_T1267247394_H
#ifndef REFERENCECONVERTER_T3131270729_H
#define REFERENCECONVERTER_T3131270729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3131270729  : public TypeConverter_t745995970
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3131270729, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T3131270729_H
#ifndef LISTBINDABLEATTRIBUTE_T1092011273_H
#define LISTBINDABLEATTRIBUTE_T1092011273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t1092011273  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t1092011273_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t1092011273 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t1092011273 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t1092011273 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t1092011273 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t1092011273 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t1092011273 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t1092011273 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t1092011273_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t1092011273 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t1092011273 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t1092011273 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T1092011273_H
#ifndef LICENSEPROVIDERATTRIBUTE_T1207066332_H
#define LICENSEPROVIDERATTRIBUTE_T1207066332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t1207066332  : public Attribute_t542643598
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1207066332, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t1207066332_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t1207066332 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t1207066332_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t1207066332 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t1207066332 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t1207066332 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T1207066332_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T1597820506_H
#define MERGABLEPROPERTYATTRIBUTE_T1597820506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1597820506  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1597820506_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1597820506 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1597820506 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1597820506 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1597820506 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1597820506 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1597820506 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1597820506 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1597820506_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1597820506 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1597820506 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1597820506 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T1597820506_H
#ifndef MULTILINESTRINGCONVERTER_T3643519256_H
#define MULTILINESTRINGCONVERTER_T3643519256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MultilineStringConverter
struct  MultilineStringConverter_t3643519256  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTILINESTRINGCONVERTER_T3643519256_H
#ifndef LICFILELICENSE_T1222627691_H
#define LICFILELICENSE_T1222627691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t1222627691  : public License_t3326651051
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t1222627691, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T1222627691_H
#ifndef ENUMCONVERTER_T2538808523_H
#define ENUMCONVERTER_T2538808523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t2538808523  : public TypeConverter_t745995970
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t191679357 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t2538808523, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t2538808523, ___stdValues_1)); }
	inline StandardValuesCollection_t191679357 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t191679357 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t191679357 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T2538808523_H
#ifndef COMPONENTCOLLECTION_T737017907_H
#define COMPONENTCOLLECTION_T737017907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t737017907  : public ReadOnlyCollectionBase_t22281769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T737017907_H
#ifndef CULTUREINFOCONVERTER_T2239982248_H
#define CULTUREINFOCONVERTER_T2239982248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2239982248  : public TypeConverter_t745995970
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t191679357 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t2239982248, ____standardValues_0)); }
	inline StandardValuesCollection_t191679357 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t191679357 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t191679357 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2239982248_H
#ifndef DATETIMECONVERTER_T2436647419_H
#define DATETIMECONVERTER_T2436647419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2436647419  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2436647419_H
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
#ifndef DEFAULTEVENTATTRIBUTE_T1079704873_H
#define DEFAULTEVENTATTRIBUTE_T1079704873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t1079704873  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1079704873, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t1079704873_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t1079704873 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1079704873_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t1079704873 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t1079704873 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t1079704873 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T1079704873_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1962767338_H
#define DEFAULTPROPERTYATTRIBUTE_T1962767338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1962767338  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1962767338, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1962767338_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1962767338 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1962767338_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1962767338 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1962767338 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1962767338 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1962767338_H
#ifndef DEFAULTVALUEATTRIBUTE_T1302720498_H
#define DEFAULTVALUEATTRIBUTE_T1302720498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1302720498  : public Attribute_t542643598
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1302720498, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T1302720498_H
#ifndef COMPONENT_T2826673791_H
#define COMPONENT_T2826673791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2826673791  : public MarshalByRefObject_t1285298191
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1298116880 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t2826673791, ___event_handlers_1)); }
	inline EventHandlerList_t1298116880 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1298116880 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1298116880 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t2826673791, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t2826673791, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2826673791_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T83270938_H
#define ASYNCCOMPLETEDEVENTARGS_T83270938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t83270938  : public EventArgs_t3289624707
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t1927440687 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t83270938, ____error_1)); }
	inline Exception_t1927440687 * get__error_1() const { return ____error_1; }
	inline Exception_t1927440687 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t1927440687 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t83270938, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t83270938, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T83270938_H
#ifndef BASENUMBERCONVERTER_T1130358776_H
#define BASENUMBERCONVERTER_T1130358776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1130358776  : public TypeConverter_t745995970
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1130358776, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T1130358776_H
#ifndef BOOLEANCONVERTER_T284715810_H
#define BOOLEANCONVERTER_T284715810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t284715810  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T284715810_H
#ifndef BROWSABLEATTRIBUTE_T2487167291_H
#define BROWSABLEATTRIBUTE_T2487167291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t2487167291  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t2487167291_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t2487167291 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t2487167291 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t2487167291 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t2487167291 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t2487167291 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t2487167291 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t2487167291 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t2487167291 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t2487167291 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T2487167291_H
#ifndef CANCELEVENTARGS_T1976499267_H
#define CANCELEVENTARGS_T1976499267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1976499267  : public EventArgs_t3289624707
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1976499267, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1976499267_H
#ifndef CATEGORYATTRIBUTE_T540457070_H
#define CATEGORYATTRIBUTE_T540457070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t540457070  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t540457070_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t540457070 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t540457070 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t540457070 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t540457070 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t540457070 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t540457070 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t540457070 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t540457070 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t540457070 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t540457070 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t540457070 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t540457070 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t540457070 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t540457070 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___action_2)); }
	inline CategoryAttribute_t540457070 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t540457070 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t540457070 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t540457070 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t540457070 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t540457070 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t540457070 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t540457070 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t540457070 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___data_5)); }
	inline CategoryAttribute_t540457070 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t540457070 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t540457070 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___def_6)); }
	inline CategoryAttribute_t540457070 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t540457070 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t540457070 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___design_7)); }
	inline CategoryAttribute_t540457070 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t540457070 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t540457070 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t540457070 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t540457070 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t540457070 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t540457070 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t540457070 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t540457070 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___format_10)); }
	inline CategoryAttribute_t540457070 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t540457070 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t540457070 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___key_11)); }
	inline CategoryAttribute_t540457070 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t540457070 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t540457070 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t540457070 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t540457070 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t540457070 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t540457070 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t540457070 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t540457070 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t540457070 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t540457070 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t540457070 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___async_15)); }
	inline CategoryAttribute_t540457070 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t540457070 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t540457070 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t540457070_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T540457070_H
#ifndef CHARCONVERTER_T437233350_H
#define CHARCONVERTER_T437233350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t437233350  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T437233350_H
#ifndef COLLECTIONCONVERTER_T2459375096_H
#define COLLECTIONCONVERTER_T2459375096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t2459375096  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T2459375096_H
#ifndef DESCRIPTIONATTRIBUTE_T3207779672_H
#define DESCRIPTIONATTRIBUTE_T3207779672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3207779672  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3207779672, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t3207779672_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3207779672 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3207779672_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t3207779672 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t3207779672 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t3207779672 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3207779672_H
#ifndef DOWORKEVENTARGS_T62745097_H
#define DOWORKEVENTARGS_T62745097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t62745097  : public EventArgs_t3289624707
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t62745097, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t62745097, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t62745097, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T62745097_H
#ifndef DISPLAYNAMEATTRIBUTE_T1935407093_H
#define DISPLAYNAMEATTRIBUTE_T1935407093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t1935407093  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1935407093, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t1935407093_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t1935407093 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1935407093_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t1935407093 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t1935407093 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t1935407093 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T1935407093_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#define DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t1270090451  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t1270090451_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t1270090451 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t1270090451 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t1270090451 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t1270090451 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#ifndef DESIGNERATTRIBUTE_T2778719479_H
#define DESIGNERATTRIBUTE_T2778719479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2778719479  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2778719479, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2778719479, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2778719479_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T2120749151_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T2120749151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t2120749151  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2120749151, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t2120749151_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t2120749151 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t2120749151 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t2120749151 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2120749151_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t2120749151 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t2120749151 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t2120749151 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2120749151_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t2120749151 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t2120749151 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t2120749151 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2120749151_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t2120749151 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t2120749151 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t2120749151 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T2120749151_H
#ifndef DESIGNONLYATTRIBUTE_T2394309572_H
#define DESIGNONLYATTRIBUTE_T2394309572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t2394309572  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2394309572, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t2394309572_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t2394309572 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t2394309572 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t2394309572 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2394309572_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t2394309572 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t2394309572 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t2394309572 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2394309572_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t2394309572 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t2394309572 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t2394309572 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2394309572_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t2394309572 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t2394309572 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t2394309572 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T2394309572_H
#ifndef EDITORATTRIBUTE_T3559776959_H
#define EDITORATTRIBUTE_T3559776959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t3559776959  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t3559776959, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t3559776959, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T3559776959_H
#ifndef COLLECTIONCHANGEACTION_T3495844100_H
#define COLLECTIONCHANGEACTION_T3495844100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t3495844100 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t3495844100, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEACTION_T3495844100_H
#ifndef BYTECONVERTER_T1265255600_H
#define BYTECONVERTER_T1265255600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1265255600  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1265255600_H
#ifndef DOUBLECONVERTER_T864652623_H
#define DOUBLECONVERTER_T864652623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t864652623  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T864652623_H
#ifndef ARRAYCONVERTER_T2804512129_H
#define ARRAYCONVERTER_T2804512129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t2804512129  : public CollectionConverter_t2459375096
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T2804512129_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T599180064_H
#define ARRAYPROPERTYDESCRIPTOR_T599180064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t599180064  : public PropertyDescriptor_t4250402154
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t599180064, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t599180064, ___array_type_7)); }
	inline Type_t * get_array_type_7() const { return ___array_type_7; }
	inline Type_t ** get_address_of_array_type_7() { return &___array_type_7; }
	inline void set_array_type_7(Type_t * value)
	{
		___array_type_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T599180064_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef EDITORBROWSABLESTATE_T373498655_H
#define EDITORBROWSABLESTATE_T373498655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t373498655 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t373498655, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T373498655_H
#ifndef ARGUMENTEXCEPTION_T3259014390_H
#define ARGUMENTEXCEPTION_T3259014390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3259014390  : public SystemException_t3877406272
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3259014390, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3259014390_H
#ifndef BINDABLESUPPORT_T1735231582_H
#define BINDABLESUPPORT_T1735231582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t1735231582 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t1735231582, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDABLESUPPORT_T1735231582_H
#ifndef LISTCHANGEDTYPE_T3463990274_H
#define LISTCHANGEDTYPE_T3463990274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t3463990274 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t3463990274, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDTYPE_T3463990274_H
#ifndef LICENSEEXCEPTION_T1281499302_H
#define LICENSEEXCEPTION_T1281499302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t1281499302  : public SystemException_t3877406272
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t1281499302, ___type_11)); }
	inline Type_t * get_type_11() const { return ___type_11; }
	inline Type_t ** get_address_of_type_11() { return &___type_11; }
	inline void set_type_11(Type_t * value)
	{
		___type_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T1281499302_H
#ifndef LICENSEUSAGEMODE_T2996119499_H
#define LICENSEUSAGEMODE_T2996119499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t2996119499 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t2996119499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEUSAGEMODE_T2996119499_H
#ifndef DECIMALCONVERTER_T1618403211_H
#define DECIMALCONVERTER_T1618403211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1618403211  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1618403211_H
#ifndef INT64CONVERTER_T3186343659_H
#define INT64CONVERTER_T3186343659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t3186343659  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T3186343659_H
#ifndef LISTSORTDIRECTION_T4186912589_H
#define LISTSORTDIRECTION_T4186912589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t4186912589 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t4186912589, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T4186912589_H
#ifndef INT32CONVERTER_T957938388_H
#define INT32CONVERTER_T957938388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t957938388  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T957938388_H
#ifndef COMPONENTCONVERTER_T3121608223_H
#define COMPONENTCONVERTER_T3121608223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t3121608223  : public ReferenceConverter_t3131270729
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T3121608223_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3751360903 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3751360903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#ifndef INT16CONVERTER_T903627590_H
#define INT16CONVERTER_T903627590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t903627590  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T903627590_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t2980019899  : public Attribute_t542643598
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t2980019899_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#ifndef LISTCHANGEDEVENTARGS_T3132270315_H
#define LISTCHANGEDEVENTARGS_T3132270315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t3132270315  : public EventArgs_t3289624707
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t4250402154 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t3132270315, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t3132270315, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t3132270315, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t3132270315, ___propDesc_4)); }
	inline PropertyDescriptor_t4250402154 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t4250402154 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t4250402154 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T3132270315_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T3709744516_H
#define INVALIDENUMARGUMENTEXCEPTION_T3709744516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t3709744516  : public ArgumentException_t3259014390
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T3709744516_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1734749345_H
#define COLLECTIONCHANGEEVENTARGS_T1734749345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1734749345  : public EventArgs_t3289624707
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1734749345, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1734749345, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1734749345_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1050682502_H
#define EDITORBROWSABLEATTRIBUTE_T1050682502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1050682502  : public Attribute_t542643598
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1050682502, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1050682502_H
#ifndef LISTSORTDESCRIPTION_T3194554012_H
#define LISTSORTDESCRIPTION_T3194554012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t3194554012  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t4250402154 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t3194554012, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t4250402154 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t4250402154 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t4250402154 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t3194554012, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T3194554012_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef PROCESSWORKEREVENTHANDLER_T308732489_H
#define PROCESSWORKEREVENTHANDLER_T308732489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t308732489  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T308732489_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (RuntimeLicenseContext_t1397748562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1104[2] = 
{
	RuntimeLicenseContext_t1397748562::get_offset_of_extraassemblies_0(),
	RuntimeLicenseContext_t1397748562::get_offset_of_keys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (ArrayConverter_t2804512129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (ArrayPropertyDescriptor_t599180064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1106[2] = 
{
	ArrayPropertyDescriptor_t599180064::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t599180064::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { sizeof (AsyncCompletedEventArgs_t83270938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1107[3] = 
{
	AsyncCompletedEventArgs_t83270938::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t83270938::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t83270938::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (AsyncOperation_t1185541675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	AsyncOperation_t1185541675::get_offset_of_ctx_0(),
	AsyncOperation_t1185541675::get_offset_of_state_1(),
	AsyncOperation_t1185541675::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (AsyncOperationManager_t3553158318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (AttributeCollection_t1925812292), -1, sizeof(AttributeCollection_t1925812292_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1110[2] = 
{
	AttributeCollection_t1925812292::get_offset_of_attrList_0(),
	AttributeCollection_t1925812292_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (BackgroundWorker_t4230068110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[7] = 
{
	BackgroundWorker_t4230068110::get_offset_of_async_0(),
	BackgroundWorker_t4230068110::get_offset_of_cancel_pending_1(),
	BackgroundWorker_t4230068110::get_offset_of_report_progress_2(),
	BackgroundWorker_t4230068110::get_offset_of_support_cancel_3(),
	BackgroundWorker_t4230068110::get_offset_of_DoWork_4(),
	BackgroundWorker_t4230068110::get_offset_of_ProgressChanged_5(),
	BackgroundWorker_t4230068110::get_offset_of_RunWorkerCompleted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (ProcessWorkerEventHandler_t308732489), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (BaseNumberConverter_t1130358776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[1] = 
{
	BaseNumberConverter_t1130358776::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (BindableSupport_t1735231582)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1114[4] = 
{
	BindableSupport_t1735231582::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (BooleanConverter_t284715810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (BrowsableAttribute_t2487167291), -1, sizeof(BrowsableAttribute_t2487167291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1116[4] = 
{
	BrowsableAttribute_t2487167291::get_offset_of_browsable_0(),
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (ByteConverter_t1265255600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (CancelEventArgs_t1976499267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[1] = 
{
	CancelEventArgs_t1976499267::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (CategoryAttribute_t540457070), -1, sizeof(CategoryAttribute_t540457070_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1119[17] = 
{
	CategoryAttribute_t540457070::get_offset_of_category_0(),
	CategoryAttribute_t540457070::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t540457070_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (CharConverter_t437233350), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (CollectionChangeAction_t3495844100)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1121[4] = 
{
	CollectionChangeAction_t3495844100::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (CollectionChangeEventArgs_t1734749345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[2] = 
{
	CollectionChangeEventArgs_t1734749345::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1734749345::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (CollectionConverter_t2459375096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (Component_t2826673791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1124[3] = 
{
	Component_t2826673791::get_offset_of_event_handlers_1(),
	Component_t2826673791::get_offset_of_mySite_2(),
	Component_t2826673791::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (ComponentCollection_t737017907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (ComponentConverter_t3121608223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (CultureInfoConverter_t2239982248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1127[1] = 
{
	CultureInfoConverter_t2239982248::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (CultureInfoComparer_t2714931249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (CustomTypeDescriptor_t1720788626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[1] = 
{
	CustomTypeDescriptor_t1720788626::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (DateTimeConverter_t2436647419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (DecimalConverter_t1618403211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (DefaultEventAttribute_t1079704873), -1, sizeof(DefaultEventAttribute_t1079704873_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1132[2] = 
{
	DefaultEventAttribute_t1079704873::get_offset_of_eventName_0(),
	DefaultEventAttribute_t1079704873_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (DefaultPropertyAttribute_t1962767338), -1, sizeof(DefaultPropertyAttribute_t1962767338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1133[2] = 
{
	DefaultPropertyAttribute_t1962767338::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1962767338_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (DefaultValueAttribute_t1302720498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1134[1] = 
{
	DefaultValueAttribute_t1302720498::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (DescriptionAttribute_t3207779672), -1, sizeof(DescriptionAttribute_t3207779672_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1135[2] = 
{
	DescriptionAttribute_t3207779672::get_offset_of_desc_0(),
	DescriptionAttribute_t3207779672_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (DesignOnlyAttribute_t2394309572), -1, sizeof(DesignOnlyAttribute_t2394309572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1136[4] = 
{
	DesignOnlyAttribute_t2394309572::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t2394309572_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t2394309572_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t2394309572_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (DesignTimeVisibleAttribute_t2120749151), -1, sizeof(DesignTimeVisibleAttribute_t2120749151_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1137[4] = 
{
	DesignTimeVisibleAttribute_t2120749151::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t2120749151_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t2120749151_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t2120749151_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (DesignerAttribute_t2778719479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	DesignerAttribute_t2778719479::get_offset_of_name_0(),
	DesignerAttribute_t2778719479::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (DesignerCategoryAttribute_t1270090451), -1, sizeof(DesignerCategoryAttribute_t1270090451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1139[5] = 
{
	DesignerCategoryAttribute_t1270090451::get_offset_of_category_0(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (DesignerSerializationVisibility_t3751360903)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1140[4] = 
{
	DesignerSerializationVisibility_t3751360903::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (DesignerSerializationVisibilityAttribute_t2980019899), -1, sizeof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1141[5] = 
{
	DesignerSerializationVisibilityAttribute_t2980019899::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (DisplayNameAttribute_t1935407093), -1, sizeof(DisplayNameAttribute_t1935407093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1142[2] = 
{
	DisplayNameAttribute_t1935407093_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t1935407093::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (DoWorkEventArgs_t62745097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[3] = 
{
	DoWorkEventArgs_t62745097::get_offset_of_arg_1(),
	DoWorkEventArgs_t62745097::get_offset_of_result_2(),
	DoWorkEventArgs_t62745097::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (DoubleConverter_t864652623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (EditorAttribute_t3559776959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[2] = 
{
	EditorAttribute_t3559776959::get_offset_of_name_0(),
	EditorAttribute_t3559776959::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (EditorBrowsableAttribute_t1050682502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1146[1] = 
{
	EditorBrowsableAttribute_t1050682502::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (EditorBrowsableState_t373498655)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1147[4] = 
{
	EditorBrowsableState_t373498655::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (EnumConverter_t2538808523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	EnumConverter_t2538808523::get_offset_of_type_0(),
	EnumConverter_t2538808523::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (EnumComparer_t2635778853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (EventDescriptor_t962731901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (EventDescriptorCollection_t3053042509), -1, sizeof(EventDescriptorCollection_t3053042509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1151[3] = 
{
	EventDescriptorCollection_t3053042509::get_offset_of_eventList_0(),
	EventDescriptorCollection_t3053042509::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t3053042509_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (ListEntry_t935815304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1152[3] = 
{
	ListEntry_t935815304::get_offset_of_key_0(),
	ListEntry_t935815304::get_offset_of_value_1(),
	ListEntry_t935815304::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (EventHandlerList_t1298116880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	EventHandlerList_t1298116880::get_offset_of_entries_0(),
	EventHandlerList_t1298116880::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (ExpandableObjectConverter_t1139197709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (GuidConverter_t1547586607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (ImmutableObjectAttribute_t1990201979), -1, sizeof(ImmutableObjectAttribute_t1990201979_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1174[4] = 
{
	ImmutableObjectAttribute_t1990201979::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t1990201979_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t1990201979_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t1990201979_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (Int16Converter_t903627590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (Int32Converter_t957938388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Int64Converter_t3186343659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (InvalidEnumArgumentException_t3709744516), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (LicFileLicenseProvider_t2962157156), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (LicFileLicense_t1222627691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1180[1] = 
{
	LicFileLicense_t1222627691::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (License_t3326651051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (LicenseContext_t192650050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (LicenseException_t1281499302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1183[1] = 
{
	LicenseException_t1281499302::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (LicenseManager_t764408642), -1, sizeof(LicenseManager_t764408642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1184[3] = 
{
	LicenseManager_t764408642_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t764408642_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t764408642_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (LicenseProvider_t3536803528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (LicenseProviderAttribute_t1207066332), -1, sizeof(LicenseProviderAttribute_t1207066332_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1186[2] = 
{
	LicenseProviderAttribute_t1207066332::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t1207066332_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (LicenseUsageMode_t2996119499)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1187[3] = 
{
	LicenseUsageMode_t2996119499::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (ListBindableAttribute_t1092011273), -1, sizeof(ListBindableAttribute_t1092011273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1188[4] = 
{
	ListBindableAttribute_t1092011273_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t1092011273_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t1092011273_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t1092011273::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (ListChangedEventArgs_t3132270315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1189[4] = 
{
	ListChangedEventArgs_t3132270315::get_offset_of_changedType_1(),
	ListChangedEventArgs_t3132270315::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t3132270315::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t3132270315::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ListChangedType_t3463990274)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1190[9] = 
{
	ListChangedType_t3463990274::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (ListSortDescription_t3194554012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[2] = 
{
	ListSortDescription_t3194554012::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t3194554012::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ListSortDescriptionCollection_t2357028590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[1] = 
{
	ListSortDescriptionCollection_t2357028590::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (ListSortDirection_t4186912589)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[3] = 
{
	ListSortDirection_t4186912589::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (LocalizableAttribute_t1267247394), -1, sizeof(LocalizableAttribute_t1267247394_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1194[4] = 
{
	LocalizableAttribute_t1267247394::get_offset_of_localizable_0(),
	LocalizableAttribute_t1267247394_StaticFields::get_offset_of_Default_1(),
	LocalizableAttribute_t1267247394_StaticFields::get_offset_of_No_2(),
	LocalizableAttribute_t1267247394_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (MarshalByValueComponent_t3997823175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1195[3] = 
{
	MarshalByValueComponent_t3997823175::get_offset_of_eventList_0(),
	MarshalByValueComponent_t3997823175::get_offset_of_mySite_1(),
	MarshalByValueComponent_t3997823175::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (MemberDescriptor_t3749827553), -1, sizeof(MemberDescriptor_t3749827553_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1196[4] = 
{
	MemberDescriptor_t3749827553::get_offset_of_name_0(),
	MemberDescriptor_t3749827553::get_offset_of_attrs_1(),
	MemberDescriptor_t3749827553::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3749827553_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (MemberDescriptorComparer_t856477673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (MergablePropertyAttribute_t1597820506), -1, sizeof(MergablePropertyAttribute_t1597820506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1198[4] = 
{
	MergablePropertyAttribute_t1597820506::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t1597820506_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t1597820506_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t1597820506_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (MultilineStringConverter_t3643519256), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
