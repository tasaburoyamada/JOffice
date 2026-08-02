// Lean compiler output
// Module: JOffice.UI.Events
// Imports: Init JOffice.UI
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
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_JOffice_UI_Events_instInhabitedUIEvent;
LEAN_EXPORT lean_object* l_JOffice_UI_Events_dispatchButtonEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_JOffice_UI_Events_instInhabitedUIEvent___closed__1;
LEAN_EXPORT lean_object* l_JOffice_UI_Events_dispatchButtonEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_JOffice_UI_Events_instInhabitedUIEvent___closed__2;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JOffice_UI_Events_isPointInRect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_JOffice_UI_Events_isPointInRect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_JOffice_UI_Events_instInhabitedUIEvent___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_UI_Events_instInhabitedUIEvent___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_JOffice_UI_Events_instInhabitedUIEvent___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_UI_Events_instInhabitedUIEvent() {
_start:
{
lean_object* x_1; 
x_1 = l_JOffice_UI_Events_instInhabitedUIEvent___closed__2;
return x_1;
}
}
LEAN_EXPORT uint8_t l_JOffice_UI_Events_isPointInRect(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_nat_to_int(x_5);
x_8 = lean_nat_to_int(x_6);
x_9 = lean_int_dec_le(x_3, x_1);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_8);
lean_dec(x_7);
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_int_add(x_3, x_7);
lean_dec(x_7);
x_12 = lean_int_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_8);
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_int_dec_le(x_4, x_2);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = 0;
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_int_add(x_4, x_8);
lean_dec(x_8);
x_17 = lean_int_dec_lt(x_2, x_16);
lean_dec(x_16);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_JOffice_UI_Events_isPointInRect___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_JOffice_UI_Events_isPointInRect(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_JOffice_UI_Events_dispatchButtonEvent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_ctor_get(x_6, 1);
x_9 = l_JOffice_UI_Events_isPointInRect(x_7, x_8, x_2, x_3, x_4, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*1 + 4, x_9);
lean_ctor_set_uint8(x_1, sizeof(void*)*1 + 5, x_11);
return x_1;
}
else
{
uint32_t x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_12 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 6);
lean_inc(x_13);
lean_dec(x_1);
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set_uint32(x_16, sizeof(void*)*1, x_12);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 4, x_9);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 5, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 6, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_1);
if (x_17 == 0)
{
lean_ctor_set_uint8(x_1, sizeof(void*)*1 + 4, x_9);
return x_1;
}
else
{
uint32_t x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 5);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 6);
lean_inc(x_19);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set_uint32(x_22, sizeof(void*)*1, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*1 + 4, x_9);
lean_ctor_set_uint8(x_22, sizeof(void*)*1 + 5, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*1 + 6, x_21);
return x_22;
}
}
}
case 1:
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_6, 0);
x_24 = lean_ctor_get(x_6, 1);
x_25 = l_JOffice_UI_Events_isPointInRect(x_23, x_24, x_2, x_3, x_4, x_5);
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_ctor_set_uint8(x_1, sizeof(void*)*1 + 5, x_25);
return x_1;
}
else
{
uint32_t x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 4);
x_30 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 6);
lean_inc(x_28);
lean_dec(x_1);
x_31 = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set_uint32(x_31, sizeof(void*)*1, x_27);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 4, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 5, x_25);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 6, x_30);
return x_31;
}
}
case 2:
{
uint8_t x_32; 
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_1);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*1 + 5, x_33);
return x_1;
}
else
{
uint32_t x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; 
x_34 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_35 = lean_ctor_get(x_1, 0);
x_36 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 4);
x_37 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 6);
lean_inc(x_35);
lean_dec(x_1);
x_38 = 0;
x_39 = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set_uint32(x_39, sizeof(void*)*1, x_34);
lean_ctor_set_uint8(x_39, sizeof(void*)*1 + 4, x_36);
lean_ctor_set_uint8(x_39, sizeof(void*)*1 + 5, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*1 + 6, x_37);
return x_39;
}
}
default: 
{
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_JOffice_UI_Events_dispatchButtonEvent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_JOffice_UI_Events_dispatchButtonEvent(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_UI(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_JOffice_UI_Events(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_UI(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_JOffice_UI_Events_instInhabitedUIEvent___closed__1 = _init_l_JOffice_UI_Events_instInhabitedUIEvent___closed__1();
lean_mark_persistent(l_JOffice_UI_Events_instInhabitedUIEvent___closed__1);
l_JOffice_UI_Events_instInhabitedUIEvent___closed__2 = _init_l_JOffice_UI_Events_instInhabitedUIEvent___closed__2();
lean_mark_persistent(l_JOffice_UI_Events_instInhabitedUIEvent___closed__2);
l_JOffice_UI_Events_instInhabitedUIEvent = _init_l_JOffice_UI_Events_instInhabitedUIEvent();
lean_mark_persistent(l_JOffice_UI_Events_instInhabitedUIEvent);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
