/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.5.4 
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

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi143_srfi_143 = NULL;
object __glo_fxnegative_127_srfi_143 = NULL;
object __glo_fxpositive_127_srfi_143 = NULL;
object __glo_fxzero_127_srfi_143 = NULL;
object __glo_fx_125_123_127_srfi_143 = NULL;
object __glo_fx_121_123_127_srfi_143 = NULL;
object __glo_fx_125_127_srfi_143 = NULL;
object __glo_fx_121_127_srfi_143 = NULL;
object __glo_fx_123_127_srfi_143 = NULL;
object __glo_fx_85_srfi_143 = NULL;
object __glo_fx_91_srfi_143 = NULL;
object __glo_fx_87_srfi_143 = NULL;
object __glo_cmp_91op_srfi_143 = NULL;
object __glo_bin_91num_91op_srfi_143 = NULL;
object __glo_fixnum_127_srfi_143 = NULL;
object __glo_fx_91least_191_191inline_191_191_srfi_143 = NULL;
object __glo_fx_91least_srfi_143 = NULL;
object __glo_fx_91greatest_191_191inline_191_191_srfi_143 = NULL;
object __glo_fx_91greatest_srfi_143 = NULL;
object __glo_fx_91width_191_191inline_191_191_srfi_143 = NULL;
object __glo_fx_91width_srfi_143 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91handler_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
extern object __glo_zero_127_191_191inline_191_191_scheme_base;
extern object __glo_positive_127_191_191inline_191_191_scheme_base;
extern object __glo_negative_127_191_191inline_191_191_scheme_base;
extern object __glo_floor_191_191inline_191_191_scheme_base;
extern object __glo_ceiling_191_191inline_191_191_scheme_base;
extern object __glo_truncate_191_191inline_191_191_scheme_base;
extern object __glo_round_191_191inline_191_191_scheme_base;
extern object __glo_inexact_191_191inline_191_191_scheme_base;
extern object __glo_sqrt_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(define_91c);
static void __lambda_22(void *data, int argc, closure _,object k_73139) ;
static void __lambda_21(void *data, int argc, closure _,object k_73142, object i_73121) ;
static void __lambda_20(void *data, int argc, closure _,object k_73145, object i_73122) ;
static void __lambda_19(void* data, int argc, closure _, object k, object i) ;
static void __lambda_18(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_17(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_16(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_15(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_14(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_13(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_12(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_11(void* data, int argc, closure _, object k, object i, object j) ;
static void __lambda_10(void *data, int argc, closure _,object k_73148, object expr_73125, object rename_73124, object compare_73123) ;
static void __lambda_9(void *data, int argc, object self_73177, object body_73129) ;
static void __lambda_8(void *data, int argc, closure _,object k_73159, object expr_73132, object rename_73131, object compare_73130) ;
static void __lambda_7(void *data, int argc, object self_73178, object body_73136) ;
static void __lambda_6(void *data, int argc, closure _, object k, object obj) ;
static object __lambda_5(void *data, object ptr) ;
static void __lambda_4(void *data, int argc, closure _,object k_73170) ;
static object __lambda_3(void *data, object ptr) ;
static void __lambda_2(void *data, int argc, closure _,object k_73173) ;
static object __lambda_1(void *data, object ptr) ;
static void __lambda_0(void *data, int argc, closure _,object k_73176) ;

static void __lambda_22(void *data, int argc, closure _,object k_73139) {
  Cyc_st_add(data, "srfi/143.sld:lib-init:srfi143");
return_closcall1(data,  k_73139,  obj_int2obj(0));; 
}

static void __lambda_21(void *data, int argc, closure _,object k_73142, object i_73121) {
  Cyc_st_add(data, "srfi/143.sld:fxnegative?");
return_closcall3(data,  __glo_fx_121_127_srfi_143,  k_73142, i_73121, obj_int2obj(0));; 
}

static void __lambda_20(void *data, int argc, closure _,object k_73145, object i_73122) {
  Cyc_st_add(data, "srfi/143.sld:fxpositive?");
return_closcall3(data,  __glo_fx_125_127_srfi_143,  k_73145, i_73122, obj_int2obj(0));; 
}

static void __lambda_19(void* data, int argc, closure _, object k, object i) { Cyc_check_fixnum(data, i);
        return_closcall1(data, k, obj_obj2int(i) == 0 ? boolean_t : boolean_f);  }
static void __lambda_18(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = (obj_obj2int(i) >= obj_obj2int(j)) ? boolean_t : boolean_f;
                      return_closcall1(data, k, result);  }
static void __lambda_17(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = (obj_obj2int(i) <= obj_obj2int(j)) ? boolean_t : boolean_f;
                      return_closcall1(data, k, result);  }
static void __lambda_16(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = (obj_obj2int(i) > obj_obj2int(j)) ? boolean_t : boolean_f;
                      return_closcall1(data, k, result);  }
static void __lambda_15(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = (obj_obj2int(i) < obj_obj2int(j)) ? boolean_t : boolean_f;
                      return_closcall1(data, k, result);  }
static void __lambda_14(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = (obj_obj2int(i) == obj_obj2int(j)) ? boolean_t : boolean_f;
                      return_closcall1(data, k, result);  }
static void __lambda_13(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = obj_int2obj(obj_obj2int(i) * obj_obj2int(j));
                      return_closcall1(data, k, result);  }
static void __lambda_12(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = obj_int2obj(obj_obj2int(i) - obj_obj2int(j));
                      return_closcall1(data, k, result);  }
static void __lambda_11(void* data, int argc, closure _, object k, object i, object j) { Cyc_check_fixnum(data, i);
                      Cyc_check_fixnum(data, j);
                      object result = obj_int2obj(obj_obj2int(i) + obj_obj2int(j));
                      return_closcall1(data, k, result);  }
static void __lambda_10(void *data, int argc, closure _,object k_73148, object expr_73125, object rename_73124, object compare_73123) {
  Cyc_st_add(data, "srfi/143.sld:cmp-op");

closureN_type c_73222;
c_73222.hdr.mark = gc_color_red;
 c_73222.hdr.grayed = 0;
c_73222.tag = closureN_tag;
 c_73222.fn = (function_type)__lambda_9;
c_73222.num_args = 1;
c_73222.num_elements = 2;
c_73222.elements = (object *)alloca(sizeof(object) * 2);
c_73222.elements[0] = expr_73125;
c_73222.elements[1] = k_73148;


make_string(c_73244, " Cyc_check_fixnum(data, i);\n                      Cyc_check_fixnum(data, j);\n                      object result = (obj_obj2int(i) ");

make_string(c_73247, " obj_obj2int(j)) ? boolean_t : boolean_f;\n                      return_closcall1(data, k, result); ");

object c_73243 = Cyc_string_append(data,(closure)&c_73222,3,&c_73244, Cyc_caddr(data, expr_73125), &c_73247);
return_closcall1(data,(closure)&c_73222,  c_73243);; 
}

static void __lambda_9(void *data, int argc, object self_73177, object body_73129) {
  
make_string(c_73237, "(void* data, int argc, closure _, object k, object i, object j)");

make_pair(c_73240,body_73129, NULL);

make_pair(c_73236,&c_73237, &c_73240);

make_pair(c_73230,Cyc_cadr(data, ((closureN)self_73177)->elements[0]), &c_73236);

make_pair(c_73227,quote_define_91c, &c_73230);
return_closcall1(data,  ((closureN)self_73177)->elements[1],  &c_73227);; 
}

static void __lambda_8(void *data, int argc, closure _,object k_73159, object expr_73132, object rename_73131, object compare_73130) {
  Cyc_st_add(data, "srfi/143.sld:bin-num-op");

closureN_type c_73194;
c_73194.hdr.mark = gc_color_red;
 c_73194.hdr.grayed = 0;
c_73194.tag = closureN_tag;
 c_73194.fn = (function_type)__lambda_7;
c_73194.num_args = 1;
c_73194.num_elements = 2;
c_73194.elements = (object *)alloca(sizeof(object) * 2);
c_73194.elements[0] = expr_73132;
c_73194.elements[1] = k_73159;


make_string(c_73216, " Cyc_check_fixnum(data, i);\n                      Cyc_check_fixnum(data, j);\n                      object result = obj_int2obj(obj_obj2int(i) ");

make_string(c_73219, " obj_obj2int(j));\n                      return_closcall1(data, k, result); ");

object c_73215 = Cyc_string_append(data,(closure)&c_73194,3,&c_73216, Cyc_caddr(data, expr_73132), &c_73219);
return_closcall1(data,(closure)&c_73194,  c_73215);; 
}

static void __lambda_7(void *data, int argc, object self_73178, object body_73136) {
  
make_string(c_73209, "(void* data, int argc, closure _, object k, object i, object j)");

make_pair(c_73212,body_73136, NULL);

make_pair(c_73208,&c_73209, &c_73212);

make_pair(c_73202,Cyc_cadr(data, ((closureN)self_73178)->elements[0]), &c_73208);

make_pair(c_73199,quote_define_91c, &c_73202);
return_closcall1(data,  ((closureN)self_73178)->elements[1],  &c_73199);; 
}

static void __lambda_6(void *data, int argc, closure _, object k, object obj) { return_closcall1(data, k, 
          obj_is_int(obj) ? boolean_t : boolean_f);  }
static object __lambda_5(void *data, object ptr) {
  Cyc_st_add(data, "srfi/143.sld:fx-least");
return_copy(ptr,  obj_int2obj(-1073741824));; 
}

static void __lambda_4(void *data, int argc, closure _,object k_73170) {
  Cyc_st_add(data, "srfi/143.sld:fx-least");
return_closcall1(data,  k_73170,  obj_int2obj(-1073741824));; 
}

static object __lambda_3(void *data, object ptr) {
  Cyc_st_add(data, "srfi/143.sld:fx-greatest");
return_copy(ptr,  obj_int2obj(1073741823));; 
}

static void __lambda_2(void *data, int argc, closure _,object k_73173) {
  Cyc_st_add(data, "srfi/143.sld:fx-greatest");
return_closcall1(data,  k_73173,  obj_int2obj(1073741823));; 
}

static object __lambda_1(void *data, object ptr) {
  Cyc_st_add(data, "srfi/143.sld:fx-width");
return_copy(ptr,  obj_int2obj(31));; 
}

static void __lambda_0(void *data, int argc, closure _,object k_73176) {
  Cyc_st_add(data, "srfi/143.sld:fx-width");
return_closcall1(data,  k_73176,  obj_int2obj(31));; 
}

void c_srfi143_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
make_pair(pair_73263, find_or_add_symbol("fx-least"), find_or_add_symbol("fx-least__inline__"));
make_pair(pair_73264, find_or_add_symbol("fx-greatest"), find_or_add_symbol("fx-greatest__inline__"));
make_pair(pair_73265, find_or_add_symbol("fx-width"), find_or_add_symbol("fx-width__inline__"));
make_pair(c_73266, &pair_73263, NULL);
make_pair(c_73267, &pair_73264, &c_73266);
make_pair(c_73268, &pair_73265, &c_73267);
(((closure)cont)->fn)(data, 1, cont, &c_73268);
 } 
void c_srfi143_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote_define_91c = find_or_add_symbol("define-c");

  add_global((object *) &__glo_lib_91init_117srfi143_srfi_143);
  add_global((object *) &__glo_fxnegative_127_srfi_143);
  add_global((object *) &__glo_fxpositive_127_srfi_143);
  add_global((object *) &__glo_fxzero_127_srfi_143);
  add_global((object *) &__glo_fx_125_123_127_srfi_143);
  add_global((object *) &__glo_fx_121_123_127_srfi_143);
  add_global((object *) &__glo_fx_125_127_srfi_143);
  add_global((object *) &__glo_fx_121_127_srfi_143);
  add_global((object *) &__glo_fx_123_127_srfi_143);
  add_global((object *) &__glo_fx_85_srfi_143);
  add_global((object *) &__glo_fx_91_srfi_143);
  add_global((object *) &__glo_fx_87_srfi_143);
  add_global((object *) &__glo_cmp_91op_srfi_143);
  add_global((object *) &__glo_bin_91num_91op_srfi_143);
  add_global((object *) &__glo_fixnum_127_srfi_143);
  add_global((object *) &__glo_fx_91least_191_191inline_191_191_srfi_143);
  add_global((object *) &__glo_fx_91least_srfi_143);
  add_global((object *) &__glo_fx_91greatest_191_191inline_191_191_srfi_143);
  add_global((object *) &__glo_fx_91greatest_srfi_143);
  add_global((object *) &__glo_fx_91width_191_191inline_191_191_srfi_143);
  add_global((object *) &__glo_fx_91width_srfi_143);
  add_symbol(quote_define_91c);
  mclosure0(c_73261, (function_type)__lambda_22);c_73261.num_args = 0; 
  __glo_lib_91init_117srfi143_srfi_143 = &c_73261; 
  mclosure0(c_73259, (function_type)__lambda_21);c_73259.num_args = 1; 
  __glo_fxnegative_127_srfi_143 = &c_73259; 
  mclosure0(c_73257, (function_type)__lambda_20);c_73257.num_args = 1; 
  __glo_fxpositive_127_srfi_143 = &c_73257; 
  mclosure0(c_73256, (function_type)__lambda_19);c_73256.num_args = 1; 
  __glo_fxzero_127_srfi_143 = &c_73256; 
  mclosure0(c_73255, (function_type)__lambda_18);c_73255.num_args = 2; 
  __glo_fx_125_123_127_srfi_143 = &c_73255; 
  mclosure0(c_73254, (function_type)__lambda_17);c_73254.num_args = 2; 
  __glo_fx_121_123_127_srfi_143 = &c_73254; 
  mclosure0(c_73253, (function_type)__lambda_16);c_73253.num_args = 2; 
  __glo_fx_125_127_srfi_143 = &c_73253; 
  mclosure0(c_73252, (function_type)__lambda_15);c_73252.num_args = 2; 
  __glo_fx_121_127_srfi_143 = &c_73252; 
  mclosure0(c_73251, (function_type)__lambda_14);c_73251.num_args = 2; 
  __glo_fx_123_127_srfi_143 = &c_73251; 
  mclosure0(c_73250, (function_type)__lambda_13);c_73250.num_args = 2; 
  __glo_fx_85_srfi_143 = &c_73250; 
  mclosure0(c_73249, (function_type)__lambda_12);c_73249.num_args = 2; 
  __glo_fx_91_srfi_143 = &c_73249; 
  mclosure0(c_73248, (function_type)__lambda_11);c_73248.num_args = 2; 
  __glo_fx_87_srfi_143 = &c_73248; 
  mmacro(c_73220, (function_type)__lambda_10);c_73220.num_args = 3; 
  __glo_cmp_91op_srfi_143 = &c_73220; 
  mmacro(c_73192, (function_type)__lambda_8);c_73192.num_args = 3; 
  __glo_bin_91num_91op_srfi_143 = &c_73192; 
  mclosure0(c_73191, (function_type)__lambda_6);c_73191.num_args = 1; 
  __glo_fixnum_127_srfi_143 = &c_73191; 
  mclosure0(c_73189, (function_type)__lambda_5);c_73189.num_args = 0; 
  __glo_fx_91least_191_191inline_191_191_srfi_143 = &c_73189; 
  mclosure0(c_73187, (function_type)__lambda_4);c_73187.num_args = 0; 
  __glo_fx_91least_srfi_143 = &c_73187; 
  mclosure0(c_73185, (function_type)__lambda_3);c_73185.num_args = 0; 
  __glo_fx_91greatest_191_191inline_191_191_srfi_143 = &c_73185; 
  mclosure0(c_73183, (function_type)__lambda_2);c_73183.num_args = 0; 
  __glo_fx_91greatest_srfi_143 = &c_73183; 
  mclosure0(c_73181, (function_type)__lambda_1);c_73181.num_args = 0; 
  __glo_fx_91width_191_191inline_191_191_srfi_143 = &c_73181; 
  mclosure0(c_73179, (function_type)__lambda_0);c_73179.num_args = 0; 
  __glo_fx_91width_srfi_143 = &c_73179; 

  mclosure0(clo_73270, c_srfi143_inlinable_lambdas); make_pair(pair_73269, find_or_add_symbol("c_srfi143_inlinable_lambdas"), &clo_73270);
  make_cvar(cvar_73271, (object *)&__glo_lib_91init_117srfi143_srfi_143);make_pair(pair_73272, find_or_add_symbol("lib-init:srfi143"), &cvar_73271);
  make_cvar(cvar_73273, (object *)&__glo_fxnegative_127_srfi_143);make_pair(pair_73274, find_or_add_symbol("fxnegative?"), &cvar_73273);
  make_cvar(cvar_73275, (object *)&__glo_fxpositive_127_srfi_143);make_pair(pair_73276, find_or_add_symbol("fxpositive?"), &cvar_73275);
  make_cvar(cvar_73277, (object *)&__glo_fxzero_127_srfi_143);make_pair(pair_73278, find_or_add_symbol("fxzero?"), &cvar_73277);
  make_cvar(cvar_73279, (object *)&__glo_fx_125_123_127_srfi_143);make_pair(pair_73280, find_or_add_symbol("fx>=?"), &cvar_73279);
  make_cvar(cvar_73281, (object *)&__glo_fx_121_123_127_srfi_143);make_pair(pair_73282, find_or_add_symbol("fx<=?"), &cvar_73281);
  make_cvar(cvar_73283, (object *)&__glo_fx_125_127_srfi_143);make_pair(pair_73284, find_or_add_symbol("fx>?"), &cvar_73283);
  make_cvar(cvar_73285, (object *)&__glo_fx_121_127_srfi_143);make_pair(pair_73286, find_or_add_symbol("fx<?"), &cvar_73285);
  make_cvar(cvar_73287, (object *)&__glo_fx_123_127_srfi_143);make_pair(pair_73288, find_or_add_symbol("fx=?"), &cvar_73287);
  make_cvar(cvar_73289, (object *)&__glo_fx_85_srfi_143);make_pair(pair_73290, find_or_add_symbol("fx*"), &cvar_73289);
  make_cvar(cvar_73291, (object *)&__glo_fx_91_srfi_143);make_pair(pair_73292, find_or_add_symbol("fx-"), &cvar_73291);
  make_cvar(cvar_73293, (object *)&__glo_fx_87_srfi_143);make_pair(pair_73294, find_or_add_symbol("fx+"), &cvar_73293);
  make_cvar(cvar_73295, (object *)&__glo_cmp_91op_srfi_143);make_pair(pair_73296, find_or_add_symbol("cmp-op"), &cvar_73295);
  make_cvar(cvar_73297, (object *)&__glo_bin_91num_91op_srfi_143);make_pair(pair_73298, find_or_add_symbol("bin-num-op"), &cvar_73297);
  make_cvar(cvar_73299, (object *)&__glo_fixnum_127_srfi_143);make_pair(pair_73300, find_or_add_symbol("fixnum?"), &cvar_73299);
  make_cvar(cvar_73301, (object *)&__glo_fx_91least_191_191inline_191_191_srfi_143);make_pair(pair_73302, find_or_add_symbol("fx-least__inline__"), &cvar_73301);
  make_cvar(cvar_73303, (object *)&__glo_fx_91least_srfi_143);make_pair(pair_73304, find_or_add_symbol("fx-least"), &cvar_73303);
  make_cvar(cvar_73305, (object *)&__glo_fx_91greatest_191_191inline_191_191_srfi_143);make_pair(pair_73306, find_or_add_symbol("fx-greatest__inline__"), &cvar_73305);
  make_cvar(cvar_73307, (object *)&__glo_fx_91greatest_srfi_143);make_pair(pair_73308, find_or_add_symbol("fx-greatest"), &cvar_73307);
  make_cvar(cvar_73309, (object *)&__glo_fx_91width_191_191inline_191_191_srfi_143);make_pair(pair_73310, find_or_add_symbol("fx-width__inline__"), &cvar_73309);
  make_cvar(cvar_73311, (object *)&__glo_fx_91width_srfi_143);make_pair(pair_73312, find_or_add_symbol("fx-width"), &cvar_73311);
make_pair(c_73313, &pair_73269,Cyc_global_variables);
make_pair(c_73314, &pair_73272, &c_73313);
make_pair(c_73315, &pair_73274, &c_73314);
make_pair(c_73316, &pair_73276, &c_73315);
make_pair(c_73317, &pair_73278, &c_73316);
make_pair(c_73318, &pair_73280, &c_73317);
make_pair(c_73319, &pair_73282, &c_73318);
make_pair(c_73320, &pair_73284, &c_73319);
make_pair(c_73321, &pair_73286, &c_73320);
make_pair(c_73322, &pair_73288, &c_73321);
make_pair(c_73323, &pair_73290, &c_73322);
make_pair(c_73324, &pair_73292, &c_73323);
make_pair(c_73325, &pair_73294, &c_73324);
make_pair(c_73326, &pair_73296, &c_73325);
make_pair(c_73327, &pair_73298, &c_73326);
make_pair(c_73328, &pair_73300, &c_73327);
make_pair(c_73329, &pair_73302, &c_73328);
make_pair(c_73330, &pair_73304, &c_73329);
make_pair(c_73331, &pair_73306, &c_73330);
make_pair(c_73332, &pair_73308, &c_73331);
make_pair(c_73333, &pair_73310, &c_73332);
make_pair(c_73334, &pair_73312, &c_73333);
Cyc_global_variables = &c_73334;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi143_srfi_143)->fn)(data, 1, cont, cont);
}
void c_srfi143_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("srfi_143");
  c_srfi143_entry_pt_first_lambda(data, argc, cont,value);
}
