// Lean compiler output
// Module: JOffice.UI.NativeBridge
// Imports: Init JOffice.UI.Events
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
LEAN_EXPORT lean_object* l_JOffice_UI_NativeBridge_renderButtonToQuad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_JOffice_UI_getButtonBackgroundRGB(lean_object*);
static lean_object* l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_JOffice_UI_NativeBridge_instInhabitedRenderQuad;
LEAN_EXPORT lean_object* l_JOffice_UI_NativeBridge_renderButtonToQuad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1;
static lean_object* _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1;
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 4, 4);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set_uint32(x_4, sizeof(void*)*4, x_1);
return x_4;
}
}
static lean_object* _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad() {
_start:
{
lean_object* x_1; 
x_1 = l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_JOffice_UI_NativeBridge_renderButtonToQuad(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; 
x_6 = l_JOffice_UI_getButtonBackgroundRGB(x_1);
x_7 = lean_alloc_ctor(0, 4, 4);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_5);
lean_ctor_set_uint32(x_7, sizeof(void*)*4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_JOffice_UI_NativeBridge_renderButtonToQuad___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_JOffice_UI_NativeBridge_renderButtonToQuad(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_UI_Events(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_JOffice_UI_NativeBridge(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_UI_Events(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1 = _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1();
lean_mark_persistent(l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__1);
l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2 = _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2();
lean_mark_persistent(l_JOffice_UI_NativeBridge_instInhabitedRenderQuad___closed__2);
l_JOffice_UI_NativeBridge_instInhabitedRenderQuad = _init_l_JOffice_UI_NativeBridge_instInhabitedRenderQuad();
lean_mark_persistent(l_JOffice_UI_NativeBridge_instInhabitedRenderQuad);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
