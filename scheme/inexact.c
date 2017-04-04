/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.5 
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_c_91log_191_191inline_191_191_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
object __glo_finite_127_scheme_inexact = NULL;
object __glo_infinite_127_scheme_inexact = NULL;
object __glo_nan_127_scheme_inexact = NULL;
#include "cyclone/runtime.h"
static void __lambda_17(void *data, int argc, closure _,object k_737) ;
static void __lambda_16(void *data, int argc, closure _, object k, object z) ;
static void __lambda_15(void *data, int argc, closure _, object k, object z) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static object __lambda_13(void *data, object ptr, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static void __lambda_11(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) ;
static void __lambda_10(void *data, int argc, object self_7319, object r_7313) ;
static void __lambda_9(void *data, int argc, object self_7320, object r_7314) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_7(void *data, int argc, closure _, object k, object z) ;
static void __lambda_6(void *data, int argc, closure _, object k, object z) ;
static void __lambda_5(void *data, int argc, closure _, object k, object z) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) ;
static void __lambda_2(void *data, int argc, object self_7321, object r_7318) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_17(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_737,  obj_int2obj(0));; 
}

static void __lambda_16(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_15(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static object __lambda_13(void *data, object ptr, object z) { unboxed_inexact_double_op(data, ptr, log, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_11(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_731)) ){ 
  
common_type local_7342; object c_7343 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_7342,z1_732);
return_closcall1(data,  k_7310,  c_7343);
} else { 
  
closureN_type c_7345;
c_7345.hdr.mark = gc_color_red;
 c_7345.hdr.grayed = 0;
c_7345.tag = closureN_tag;
 c_7345.fn = (function_type)__lambda_10;
c_7345.num_args = 1;
c_7345.num_elements = 2;
c_7345.elements = (object *)alloca(sizeof(object) * 2);
c_7345.elements[0] = k_7310;
c_7345.elements[1] = z2_731;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7345, z1_732);}
; 
}

static void __lambda_10(void *data, int argc, object self_7319, object r_7313) {
  
closureN_type c_7347;
c_7347.hdr.mark = gc_color_red;
 c_7347.hdr.grayed = 0;
c_7347.tag = closureN_tag;
 c_7347.fn = (function_type)__lambda_9;
c_7347.num_args = 1;
c_7347.num_elements = 2;
c_7347.elements = (object *)alloca(sizeof(object) * 2);
c_7347.elements[0] = ((closureN)self_7319)->elements[0];
c_7347.elements[1] = r_7313;

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7347, Cyc_car(data, ((closureN)self_7319)->elements[1]));; 
}

static void __lambda_9(void *data, int argc, object self_7320, object r_7314) {
  
common_type local_7352; object c_7353 = Cyc_fast_div(data,&local_7352,((closureN)self_7320)->elements[1], r_7314);
return_closcall1(data,  ((closureN)self_7320)->elements[0],  c_7353);; 
}

static void __lambda_8(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_7(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_6(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_5(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) {
  Cyc_st_add(data, "scheme/inexact.sld:finite?");

closureN_type c_7326;
c_7326.hdr.mark = gc_color_red;
 c_7326.hdr.grayed = 0;
c_7326.tag = closureN_tag;
 c_7326.fn = (function_type)__lambda_2;
c_7326.num_args = 1;
c_7326.num_elements = 1;
c_7326.elements = (object *)alloca(sizeof(object) * 1);
c_7326.elements[0] = k_7317;

return_closcall2(data,  __glo_infinite_127_scheme_inexact,  &c_7326, z_734);; 
}

static void __lambda_2(void *data, int argc, object self_7321, object r_7318) {
  if( (boolean_f != r_7318) ){ 
  return_closcall1(data,  ((closureN)self_7321)->elements[0],  boolean_f);
} else { 
  return_closcall1(data,  ((closureN)self_7321)->elements[0],  boolean_t);}
; 
}

static void __lambda_1(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isnan(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
void c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_c_91log_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  add_global((object *) &__glo_finite_127_scheme_inexact);
  add_global((object *) &__glo_infinite_127_scheme_inexact);
  add_global((object *) &__glo_nan_127_scheme_inexact);
  mclosure0(c_7363, (function_type)__lambda_17);c_7363.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7363; 
  mclosure0(c_7362, (function_type)__lambda_16);c_7362.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7362; 
  mclosure0(c_7361, (function_type)__lambda_15);c_7361.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7361; 
  mclosure0(c_7360, (function_type)__lambda_14);c_7360.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7360; 
  mclosure0(c_7359, (function_type)__lambda_12);c_7359.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7359; 
  mclosure0(c_7358, (function_type)__lambda_13);c_7358.num_args = -1; 
  __glo_c_91log_191_191inline_191_191_scheme_inexact = &c_7358; 
  mclosure0(c_7336, (function_type)__lambda_11);c_7336.num_args = 1; 
  __glo_log_scheme_inexact = &c_7336; 
  mclosure0(c_7335, (function_type)__lambda_8);c_7335.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7335; 
  mclosure0(c_7334, (function_type)__lambda_7);c_7334.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7334; 
  mclosure0(c_7333, (function_type)__lambda_6);c_7333.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7333; 
  mclosure0(c_7332, (function_type)__lambda_5);c_7332.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7332; 
  mclosure0(c_7331, (function_type)__lambda_4);c_7331.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7331; 
  mclosure0(c_7324, (function_type)__lambda_3);c_7324.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_7324; 
  mclosure0(c_7323, (function_type)__lambda_1);c_7323.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_7323; 
  mclosure0(c_7322, (function_type)__lambda_0);c_7322.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_7322; 

  make_cvar(cvar_7365, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_7366, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7365);
  make_cvar(cvar_7367, (object *)&__glo_tan_scheme_inexact);make_pair(pair_7368, find_or_add_symbol("tan"), &cvar_7367);
  make_cvar(cvar_7369, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_7370, find_or_add_symbol("sqrt"), &cvar_7369);
  make_cvar(cvar_7371, (object *)&__glo_sin_scheme_inexact);make_pair(pair_7372, find_or_add_symbol("sin"), &cvar_7371);
  make_cvar(cvar_7373, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_7374, find_or_add_symbol("c-log"), &cvar_7373);
  make_cvar(cvar_7375, (object *)&__glo_c_91log_191_191inline_191_191_scheme_inexact);make_pair(pair_7376, find_or_add_symbol("c-log__inline__"), &cvar_7375);
  make_cvar(cvar_7377, (object *)&__glo_log_scheme_inexact);make_pair(pair_7378, find_or_add_symbol("log"), &cvar_7377);
  make_cvar(cvar_7379, (object *)&__glo_exp_scheme_inexact);make_pair(pair_7380, find_or_add_symbol("exp"), &cvar_7379);
  make_cvar(cvar_7381, (object *)&__glo_cos_scheme_inexact);make_pair(pair_7382, find_or_add_symbol("cos"), &cvar_7381);
  make_cvar(cvar_7383, (object *)&__glo_atan_scheme_inexact);make_pair(pair_7384, find_or_add_symbol("atan"), &cvar_7383);
  make_cvar(cvar_7385, (object *)&__glo_asin_scheme_inexact);make_pair(pair_7386, find_or_add_symbol("asin"), &cvar_7385);
  make_cvar(cvar_7387, (object *)&__glo_acos_scheme_inexact);make_pair(pair_7388, find_or_add_symbol("acos"), &cvar_7387);
  make_cvar(cvar_7389, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_7390, find_or_add_symbol("finite?"), &cvar_7389);
  make_cvar(cvar_7391, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_7392, find_or_add_symbol("infinite?"), &cvar_7391);
  make_cvar(cvar_7393, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_7394, find_or_add_symbol("nan?"), &cvar_7393);
make_pair(c_7395, &pair_7366,Cyc_global_variables);
make_pair(c_7396, &pair_7368, &c_7395);
make_pair(c_7397, &pair_7370, &c_7396);
make_pair(c_7398, &pair_7372, &c_7397);
make_pair(c_7399, &pair_7374, &c_7398);
make_pair(c_73100, &pair_7376, &c_7399);
make_pair(c_73101, &pair_7378, &c_73100);
make_pair(c_73102, &pair_7380, &c_73101);
make_pair(c_73103, &pair_7382, &c_73102);
make_pair(c_73104, &pair_7384, &c_73103);
make_pair(c_73105, &pair_7386, &c_73104);
make_pair(c_73106, &pair_7388, &c_73105);
make_pair(c_73107, &pair_7390, &c_73106);
make_pair(c_73108, &pair_7392, &c_73107);
make_pair(c_73109, &pair_7394, &c_73108);
Cyc_global_variables = &c_73109;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_inexact");
  c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value);
}
