// Lean compiler output
// Module: JOffice.Binary.OLE2Tree
// Imports: Init JOffice.Binary.OLE2 JOffice.Binary.OLE2Writer
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2;
static lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3;
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1;
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___boxed(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName(lean_object*);
lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
extern lean_object* l_ByteArray_empty;
static lean_object* l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2;
lean_object* l_List_range(lean_object*);
uint8_t lean_byte_array_uget(lean_object*, size_t);
uint16_t lean_uint16_shift_right(uint16_t, uint16_t);
uint16_t lean_uint16_of_nat(lean_object*);
static lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4;
uint32_t lean_uint64_to_uint32(uint64_t);
uint8_t lean_uint16_to_uint8(uint16_t);
static lean_object* l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1;
static lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2;
static lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1;
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode;
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_JOffice_Binary_OLE2Writer_pushUInt32LE(lean_object*, uint32_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry(lean_object*, uint8_t);
static lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_6 = lean_byte_array_uget(x_1, x_2);
x_7 = lean_byte_array_push(x_4, x_6);
x_8 = 0;
x_9 = lean_byte_array_push(x_7, x_8);
x_10 = 1;
x_11 = lean_usize_add(x_2, x_10);
x_2 = x_11;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ByteArray_empty;
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(64u);
x_2 = l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1;
x_3 = lean_nat_sub(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2;
x_2 = l_List_range(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ByteArray_empty;
x_2 = l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3;
x_3 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_string_to_utf8(x_1);
x_3 = lean_byte_array_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_ByteArray_empty;
x_12 = l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1(x_2, x_9, x_10, x_11);
lean_dec(x_2);
x_13 = lean_byte_array_size(x_12);
x_14 = lean_unsigned_to_nat(64u);
x_15 = lean_nat_sub(x_14, x_13);
lean_dec(x_13);
x_16 = l_List_range(x_15);
x_17 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_12, x_16);
lean_dec(x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_ByteArray_foldlMUnsafe_fold___at_JOffice_Binary_OLE2Tree_encodeStreamName___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeStreamName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_JOffice_Binary_OLE2Tree_encodeStreamName(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1;
x_3 = l_ByteArray_empty;
x_4 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint32(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode() {
_start:
{
lean_object* x_1; 
x_1 = l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = 255;
x_5 = lean_byte_array_push(x_1, x_4);
x_1 = x_5;
x_2 = x_3;
goto _start;
}
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(12u);
x_2 = l_List_range(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(16u);
x_2 = l_List_range(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_List_range(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint16_t x_9; uint8_t x_10; lean_object* x_11; uint16_t x_12; uint16_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint32_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; uint32_t x_31; lean_object* x_32; uint64_t x_33; uint64_t x_34; uint32_t x_35; lean_object* x_36; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_JOffice_Binary_OLE2Tree_encodeStreamName(x_3);
x_5 = lean_string_length(x_3);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_mul(x_5, x_6);
lean_dec(x_5);
x_8 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
x_9 = lean_uint16_of_nat(x_8);
lean_dec(x_8);
x_10 = lean_uint16_to_uint8(x_9);
x_11 = lean_byte_array_push(x_4, x_10);
x_12 = 8;
x_13 = lean_uint16_shift_right(x_9, x_12);
x_14 = lean_uint16_to_uint8(x_13);
x_15 = lean_byte_array_push(x_11, x_14);
x_16 = lean_byte_array_push(x_15, x_2);
x_17 = 1;
x_18 = lean_byte_array_push(x_16, x_17);
x_19 = l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1;
x_20 = l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1(x_18, x_19);
x_21 = l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2;
x_22 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_20, x_21);
x_23 = l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3;
x_24 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_22, x_23);
x_25 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_24, x_21);
x_26 = lean_ctor_get_uint32(x_1, sizeof(void*)*2);
x_27 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_25, x_26);
x_28 = lean_ctor_get(x_1, 1);
x_29 = lean_byte_array_size(x_28);
x_30 = lean_uint64_of_nat(x_29);
lean_dec(x_29);
x_31 = lean_uint64_to_uint32(x_30);
x_32 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_27, x_31);
x_33 = 32;
x_34 = lean_uint64_shift_right(x_30, x_33);
x_35 = lean_uint64_to_uint32(x_34);
x_36 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_32, x_35);
return x_36;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_OLE2(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_OLE2Writer(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_JOffice_Binary_OLE2Tree(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_OLE2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_OLE2Writer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1 = _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__1);
l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2 = _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__2);
l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3 = _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__3);
l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4 = _init_l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeStreamName___closed__4);
l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1 = _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__1);
l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2 = _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode___closed__2);
l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode = _init_l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_instInhabitedOLE2StreamNode);
l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1 = _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__1);
l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2 = _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__2);
l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3 = _init_l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3();
lean_mark_persistent(l_JOffice_Binary_OLE2Tree_encodeDirectoryEntry___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
