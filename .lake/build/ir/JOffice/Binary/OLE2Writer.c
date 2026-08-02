// Lean compiler output
// Module: JOffice.Binary.OLE2Writer
// Imports: Init JOffice.Binary.OLE2
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
uint8_t lean_uint32_to_uint8(uint32_t);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader(lean_object*);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4;
lean_object* lean_byte_array_push(lean_object*, uint8_t);
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10;
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9;
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5;
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(lean_object*, lean_object*);
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1___boxed(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_pushUInt32LE___boxed(lean_object*, lean_object*);
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1;
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8;
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_pushUInt32LE(lean_object*, uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___boxed(lean_object*);
uint32_t lean_uint32_land(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2;
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6;
static lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7;
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_pushUInt32LE(lean_object* x_1, uint32_t x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint8_t x_5; uint32_t x_6; uint32_t x_7; uint32_t x_8; uint8_t x_9; uint32_t x_10; uint32_t x_11; uint32_t x_12; uint8_t x_13; uint32_t x_14; uint32_t x_15; uint32_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_3 = 255;
x_4 = lean_uint32_land(x_2, x_3);
x_5 = lean_uint32_to_uint8(x_4);
x_6 = 8;
x_7 = lean_uint32_shift_right(x_2, x_6);
x_8 = lean_uint32_land(x_7, x_3);
x_9 = lean_uint32_to_uint8(x_8);
x_10 = 16;
x_11 = lean_uint32_shift_right(x_2, x_10);
x_12 = lean_uint32_land(x_11, x_3);
x_13 = lean_uint32_to_uint8(x_12);
x_14 = 24;
x_15 = lean_uint32_shift_right(x_2, x_14);
x_16 = lean_uint32_land(x_15, x_3);
x_17 = lean_uint32_to_uint8(x_16);
x_18 = lean_byte_array_push(x_1, x_5);
x_19 = lean_byte_array_push(x_18, x_9);
x_20 = lean_byte_array_push(x_19, x_13);
x_21 = lean_byte_array_push(x_20, x_17);
return x_21;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_pushUInt32LE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(lean_object* x_1, lean_object* x_2) {
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
x_4 = 0;
x_5 = lean_byte_array_push(x_1, x_4);
x_1 = x_5;
x_2 = x_3;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 1);
x_5 = lean_byte_array_push(x_2, x_1);
x_2 = x_5;
x_3 = x_4;
goto _start;
}
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 208;
x_2 = l_ByteArray_empty;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 207;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 17;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 224;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 161;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 177;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 26;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 225;
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7;
x_3 = lean_byte_array_push(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(16u);
x_2 = l_List_range(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_List_range(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint32_t x_30; lean_object* x_31; uint32_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint32_t x_40; lean_object* x_41; uint32_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8;
x_3 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9;
x_4 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_2, x_3);
x_5 = 62;
x_6 = lean_byte_array_push(x_4, x_5);
x_7 = 0;
x_8 = lean_byte_array_push(x_6, x_7);
x_9 = 3;
x_10 = lean_byte_array_push(x_8, x_9);
x_11 = lean_byte_array_push(x_10, x_7);
x_12 = 254;
x_13 = lean_byte_array_push(x_11, x_12);
x_14 = 255;
x_15 = lean_byte_array_push(x_13, x_14);
x_16 = 9;
x_17 = lean_byte_array_push(x_15, x_16);
x_18 = lean_byte_array_push(x_17, x_7);
x_19 = 6;
x_20 = lean_byte_array_push(x_18, x_19);
x_21 = lean_byte_array_push(x_20, x_7);
x_22 = lean_byte_array_push(x_21, x_7);
x_23 = lean_byte_array_push(x_22, x_7);
x_24 = l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10;
x_25 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_23, x_24);
x_26 = lean_byte_array_push(x_25, x_7);
x_27 = lean_byte_array_push(x_26, x_7);
x_28 = lean_byte_array_push(x_27, x_7);
x_29 = lean_byte_array_push(x_28, x_7);
x_30 = lean_ctor_get_uint32(x_1, 8);
x_31 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_29, x_30);
x_32 = lean_ctor_get_uint32(x_1, 12);
x_33 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_31, x_32);
x_34 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_33, x_24);
x_35 = lean_byte_array_push(x_34, x_7);
x_36 = 16;
x_37 = lean_byte_array_push(x_35, x_36);
x_38 = lean_byte_array_push(x_37, x_7);
x_39 = lean_byte_array_push(x_38, x_7);
x_40 = lean_ctor_get_uint32(x_1, 16);
x_41 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_39, x_40);
x_42 = lean_ctor_get_uint32(x_1, 20);
x_43 = l_JOffice_Binary_OLE2Writer_pushUInt32LE(x_41, x_42);
x_44 = lean_byte_array_push(x_43, x_12);
x_45 = lean_byte_array_push(x_44, x_14);
x_46 = lean_byte_array_push(x_45, x_14);
x_47 = lean_byte_array_push(x_46, x_14);
x_48 = lean_byte_array_push(x_47, x_7);
x_49 = lean_byte_array_push(x_48, x_7);
x_50 = lean_byte_array_push(x_49, x_7);
x_51 = lean_byte_array_push(x_50, x_7);
x_52 = lean_byte_array_size(x_51);
x_53 = lean_unsigned_to_nat(512u);
x_54 = lean_nat_sub(x_53, x_52);
lean_dec(x_52);
x_55 = l_List_range(x_54);
x_56 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2(x_14, x_51, x_55);
lean_dec(x_55);
return x_56;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_List_foldl___at_JOffice_Binary_OLE2Writer_encodeHeader___spec__2(x_4, x_2, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_JOffice_Binary_OLE2Writer_encodeHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_JOffice_Binary_OLE2Writer_encodeHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_OLE2(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_JOffice_Binary_OLE2Writer(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_OLE2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__1);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__2);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__3);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__4);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__5);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__6);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__7);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__8);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__9);
l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10 = _init_l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10();
lean_mark_persistent(l_JOffice_Binary_OLE2Writer_encodeHeader___closed__10);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
