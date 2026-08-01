// Lean compiler output
// Module: JOffice
// Imports: Init JOffice.Symbol32 JOffice.UI JOffice.Binary.OLE2 JOffice.Binary.Excel JOffice.Binary.Word JOffice.Binary.Access JOffice.Binary.PowerPoint
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
LEAN_EXPORT lean_object* l_JOffice_version;
static lean_object* l_JOffice_version___closed__1;
static lean_object* _init_l_JOffice_version___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0.1.0", 5, 5);
return x_1;
}
}
static lean_object* _init_l_JOffice_version() {
_start:
{
lean_object* x_1; 
x_1 = l_JOffice_version___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Symbol32(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_UI(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_OLE2(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_Excel(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_Word(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_Access(uint8_t builtin, lean_object*);
lean_object* initialize_JOffice_Binary_PowerPoint(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_JOffice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Symbol32(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_UI(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_OLE2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_Excel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_Word(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_Access(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_JOffice_Binary_PowerPoint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_JOffice_version___closed__1 = _init_l_JOffice_version___closed__1();
lean_mark_persistent(l_JOffice_version___closed__1);
l_JOffice_version = _init_l_JOffice_version();
lean_mark_persistent(l_JOffice_version);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
