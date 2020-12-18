#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000018 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000019 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000043 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000045 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000046 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000047 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000048 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000049 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000050 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000056 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000057 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000058 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000075 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000076 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000078 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000079 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007A System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[123] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[123] = 
{
	3463,
	3614,
	3614,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[44] = 
{
	{ 0x02000004, { 70, 4 } },
	{ 0x02000005, { 74, 9 } },
	{ 0x02000006, { 85, 7 } },
	{ 0x02000007, { 94, 10 } },
	{ 0x02000008, { 106, 11 } },
	{ 0x02000009, { 120, 9 } },
	{ 0x0200000A, { 132, 12 } },
	{ 0x0200000B, { 147, 1 } },
	{ 0x0200000C, { 148, 2 } },
	{ 0x0200000D, { 150, 2 } },
	{ 0x0200000F, { 152, 3 } },
	{ 0x02000010, { 157, 5 } },
	{ 0x02000011, { 162, 7 } },
	{ 0x02000012, { 169, 3 } },
	{ 0x02000013, { 172, 7 } },
	{ 0x02000014, { 179, 4 } },
	{ 0x02000015, { 183, 21 } },
	{ 0x02000017, { 204, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 4 } },
	{ 0x0600000F, { 50, 3 } },
	{ 0x06000010, { 53, 1 } },
	{ 0x06000011, { 54, 1 } },
	{ 0x06000012, { 55, 3 } },
	{ 0x06000013, { 58, 3 } },
	{ 0x06000014, { 61, 2 } },
	{ 0x06000015, { 63, 2 } },
	{ 0x06000016, { 65, 5 } },
	{ 0x06000026, { 83, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000030, { 104, 2 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 129, 3 } },
	{ 0x06000040, { 144, 3 } },
	{ 0x0600004B, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[206] = 
{
	{ (Il2CppRGCTXDataType)2, 1823 },
	{ (Il2CppRGCTXDataType)3, 6975 },
	{ (Il2CppRGCTXDataType)2, 2919 },
	{ (Il2CppRGCTXDataType)2, 2454 },
	{ (Il2CppRGCTXDataType)3, 11809 },
	{ (Il2CppRGCTXDataType)2, 1911 },
	{ (Il2CppRGCTXDataType)2, 2461 },
	{ (Il2CppRGCTXDataType)3, 11844 },
	{ (Il2CppRGCTXDataType)2, 2456 },
	{ (Il2CppRGCTXDataType)3, 11821 },
	{ (Il2CppRGCTXDataType)2, 1824 },
	{ (Il2CppRGCTXDataType)3, 6976 },
	{ (Il2CppRGCTXDataType)2, 2945 },
	{ (Il2CppRGCTXDataType)2, 2463 },
	{ (Il2CppRGCTXDataType)3, 11856 },
	{ (Il2CppRGCTXDataType)2, 1927 },
	{ (Il2CppRGCTXDataType)2, 2471 },
	{ (Il2CppRGCTXDataType)3, 11998 },
	{ (Il2CppRGCTXDataType)2, 2467 },
	{ (Il2CppRGCTXDataType)3, 11921 },
	{ (Il2CppRGCTXDataType)2, 635 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1089 },
	{ (Il2CppRGCTXDataType)3, 4664 },
	{ (Il2CppRGCTXDataType)2, 636 },
	{ (Il2CppRGCTXDataType)3, 39 },
	{ (Il2CppRGCTXDataType)3, 40 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)3, 4669 },
	{ (Il2CppRGCTXDataType)2, 2226 },
	{ (Il2CppRGCTXDataType)3, 10538 },
	{ (Il2CppRGCTXDataType)3, 5199 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 787 },
	{ (Il2CppRGCTXDataType)3, 788 },
	{ (Il2CppRGCTXDataType)2, 1912 },
	{ (Il2CppRGCTXDataType)3, 7521 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)2, 1232 },
	{ (Il2CppRGCTXDataType)2, 1334 },
	{ (Il2CppRGCTXDataType)2, 1427 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)2, 1335 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)2, 1635 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)2, 1336 },
	{ (Il2CppRGCTXDataType)2, 1429 },
	{ (Il2CppRGCTXDataType)2, 1337 },
	{ (Il2CppRGCTXDataType)2, 1430 },
	{ (Il2CppRGCTXDataType)3, 4665 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)2, 1326 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)2, 1425 },
	{ (Il2CppRGCTXDataType)3, 4663 },
	{ (Il2CppRGCTXDataType)2, 1325 },
	{ (Il2CppRGCTXDataType)2, 1424 },
	{ (Il2CppRGCTXDataType)3, 4662 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)2, 1333 },
	{ (Il2CppRGCTXDataType)2, 1230 },
	{ (Il2CppRGCTXDataType)3, 14356 },
	{ (Il2CppRGCTXDataType)3, 4137 },
	{ (Il2CppRGCTXDataType)2, 999 },
	{ (Il2CppRGCTXDataType)2, 1329 },
	{ (Il2CppRGCTXDataType)2, 1426 },
	{ (Il2CppRGCTXDataType)2, 1512 },
	{ (Il2CppRGCTXDataType)3, 6977 },
	{ (Il2CppRGCTXDataType)3, 6979 },
	{ (Il2CppRGCTXDataType)2, 472 },
	{ (Il2CppRGCTXDataType)3, 6978 },
	{ (Il2CppRGCTXDataType)3, 6987 },
	{ (Il2CppRGCTXDataType)2, 1827 },
	{ (Il2CppRGCTXDataType)2, 2457 },
	{ (Il2CppRGCTXDataType)3, 11822 },
	{ (Il2CppRGCTXDataType)3, 6988 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)2, 1455 },
	{ (Il2CppRGCTXDataType)3, 4676 },
	{ (Il2CppRGCTXDataType)3, 14325 },
	{ (Il2CppRGCTXDataType)2, 2468 },
	{ (Il2CppRGCTXDataType)3, 11922 },
	{ (Il2CppRGCTXDataType)3, 6980 },
	{ (Il2CppRGCTXDataType)2, 1826 },
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)3, 11810 },
	{ (Il2CppRGCTXDataType)3, 4675 },
	{ (Il2CppRGCTXDataType)3, 6981 },
	{ (Il2CppRGCTXDataType)3, 14324 },
	{ (Il2CppRGCTXDataType)2, 2464 },
	{ (Il2CppRGCTXDataType)3, 11857 },
	{ (Il2CppRGCTXDataType)3, 6994 },
	{ (Il2CppRGCTXDataType)2, 1828 },
	{ (Il2CppRGCTXDataType)2, 2462 },
	{ (Il2CppRGCTXDataType)3, 11845 },
	{ (Il2CppRGCTXDataType)3, 7561 },
	{ (Il2CppRGCTXDataType)3, 3233 },
	{ (Il2CppRGCTXDataType)3, 4677 },
	{ (Il2CppRGCTXDataType)3, 3232 },
	{ (Il2CppRGCTXDataType)3, 6995 },
	{ (Il2CppRGCTXDataType)3, 14326 },
	{ (Il2CppRGCTXDataType)2, 2472 },
	{ (Il2CppRGCTXDataType)3, 11999 },
	{ (Il2CppRGCTXDataType)3, 7008 },
	{ (Il2CppRGCTXDataType)2, 1830 },
	{ (Il2CppRGCTXDataType)2, 2470 },
	{ (Il2CppRGCTXDataType)3, 11924 },
	{ (Il2CppRGCTXDataType)3, 7009 },
	{ (Il2CppRGCTXDataType)2, 1379 },
	{ (Il2CppRGCTXDataType)2, 1458 },
	{ (Il2CppRGCTXDataType)3, 4681 },
	{ (Il2CppRGCTXDataType)3, 4680 },
	{ (Il2CppRGCTXDataType)2, 2459 },
	{ (Il2CppRGCTXDataType)3, 11824 },
	{ (Il2CppRGCTXDataType)3, 14331 },
	{ (Il2CppRGCTXDataType)2, 2469 },
	{ (Il2CppRGCTXDataType)3, 11923 },
	{ (Il2CppRGCTXDataType)3, 7001 },
	{ (Il2CppRGCTXDataType)2, 1829 },
	{ (Il2CppRGCTXDataType)2, 2466 },
	{ (Il2CppRGCTXDataType)3, 11859 },
	{ (Il2CppRGCTXDataType)3, 4679 },
	{ (Il2CppRGCTXDataType)3, 4678 },
	{ (Il2CppRGCTXDataType)3, 7002 },
	{ (Il2CppRGCTXDataType)2, 2458 },
	{ (Il2CppRGCTXDataType)3, 11823 },
	{ (Il2CppRGCTXDataType)3, 14330 },
	{ (Il2CppRGCTXDataType)2, 2465 },
	{ (Il2CppRGCTXDataType)3, 11858 },
	{ (Il2CppRGCTXDataType)3, 7015 },
	{ (Il2CppRGCTXDataType)2, 1831 },
	{ (Il2CppRGCTXDataType)2, 2474 },
	{ (Il2CppRGCTXDataType)3, 12001 },
	{ (Il2CppRGCTXDataType)3, 7562 },
	{ (Il2CppRGCTXDataType)3, 3235 },
	{ (Il2CppRGCTXDataType)3, 4683 },
	{ (Il2CppRGCTXDataType)3, 4682 },
	{ (Il2CppRGCTXDataType)3, 3234 },
	{ (Il2CppRGCTXDataType)3, 7016 },
	{ (Il2CppRGCTXDataType)2, 2460 },
	{ (Il2CppRGCTXDataType)3, 11825 },
	{ (Il2CppRGCTXDataType)3, 14332 },
	{ (Il2CppRGCTXDataType)2, 2473 },
	{ (Il2CppRGCTXDataType)3, 12000 },
	{ (Il2CppRGCTXDataType)3, 4673 },
	{ (Il2CppRGCTXDataType)3, 4674 },
	{ (Il2CppRGCTXDataType)3, 4684 },
	{ (Il2CppRGCTXDataType)2, 2952 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)2, 637 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)3, 10525 },
	{ (Il2CppRGCTXDataType)2, 2227 },
	{ (Il2CppRGCTXDataType)3, 10539 },
	{ (Il2CppRGCTXDataType)2, 746 },
	{ (Il2CppRGCTXDataType)3, 789 },
	{ (Il2CppRGCTXDataType)3, 10531 },
	{ (Il2CppRGCTXDataType)3, 3211 },
	{ (Il2CppRGCTXDataType)2, 497 },
	{ (Il2CppRGCTXDataType)3, 10526 },
	{ (Il2CppRGCTXDataType)2, 2223 },
	{ (Il2CppRGCTXDataType)3, 821 },
	{ (Il2CppRGCTXDataType)2, 758 },
	{ (Il2CppRGCTXDataType)2, 972 },
	{ (Il2CppRGCTXDataType)3, 3217 },
	{ (Il2CppRGCTXDataType)3, 10527 },
	{ (Il2CppRGCTXDataType)3, 3206 },
	{ (Il2CppRGCTXDataType)3, 3207 },
	{ (Il2CppRGCTXDataType)3, 3205 },
	{ (Il2CppRGCTXDataType)3, 3208 },
	{ (Il2CppRGCTXDataType)2, 968 },
	{ (Il2CppRGCTXDataType)2, 2995 },
	{ (Il2CppRGCTXDataType)3, 4671 },
	{ (Il2CppRGCTXDataType)3, 3210 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 3209 },
	{ (Il2CppRGCTXDataType)2, 1236 },
	{ (Il2CppRGCTXDataType)2, 2948 },
	{ (Il2CppRGCTXDataType)2, 1350 },
	{ (Il2CppRGCTXDataType)2, 1433 },
	{ (Il2CppRGCTXDataType)3, 4153 },
	{ (Il2CppRGCTXDataType)2, 1007 },
	{ (Il2CppRGCTXDataType)3, 5049 },
	{ (Il2CppRGCTXDataType)3, 5050 },
	{ (Il2CppRGCTXDataType)3, 5055 },
	{ (Il2CppRGCTXDataType)2, 1520 },
	{ (Il2CppRGCTXDataType)3, 5052 },
	{ (Il2CppRGCTXDataType)3, 14900 },
	{ (Il2CppRGCTXDataType)2, 973 },
	{ (Il2CppRGCTXDataType)3, 3224 },
	{ (Il2CppRGCTXDataType)1, 1303 },
	{ (Il2CppRGCTXDataType)2, 2958 },
	{ (Il2CppRGCTXDataType)3, 5051 },
	{ (Il2CppRGCTXDataType)1, 2958 },
	{ (Il2CppRGCTXDataType)1, 1520 },
	{ (Il2CppRGCTXDataType)2, 3013 },
	{ (Il2CppRGCTXDataType)2, 2958 },
	{ (Il2CppRGCTXDataType)3, 5056 },
	{ (Il2CppRGCTXDataType)3, 5054 },
	{ (Il2CppRGCTXDataType)3, 5053 },
	{ (Il2CppRGCTXDataType)2, 366 },
	{ (Il2CppRGCTXDataType)3, 3236 },
	{ (Il2CppRGCTXDataType)2, 481 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	123,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	44,
	s_rgctxIndices,
	206,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
