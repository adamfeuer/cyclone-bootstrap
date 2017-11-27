/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.7.1 
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
object __glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros = NULL;
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
extern object __glo_error_91object_127_scheme_base;
extern object __glo_error_91object_91message_scheme_base;
extern object __glo_error_91object_91irritants_scheme_base;
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
extern object __glo_peek_91char_scheme_base;
extern object __glo_read_91char_scheme_base;
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
extern object __glo_eval_scheme_eval;
extern object __glo_eval_91from_91c_scheme_eval;
extern object __glo_create_91environment_scheme_eval;
extern object __glo_setup_91environment_scheme_eval;
extern object __glo__75import_scheme_eval;
extern object __glo_imported_127_scheme_eval;
extern object __glo__75set_91import_91dirs_67_scheme_eval;
extern object __glo_macro_117macro_127_scheme_eval;
extern object __glo_macro_117expand_scheme_eval;
extern object __glo_macro_117add_67_scheme_eval;
extern object __glo_macro_117cleanup_scheme_eval;
extern object __glo_macro_117load_91env_67_scheme_eval;
extern object __glo_macro_117get_91env_scheme_eval;
extern object __glo_macro_117get_91defined_91macros_scheme_eval;
extern object __glo_define_91syntax_127_scheme_cyclone_util;
extern object __glo_let_91syntax_127_scheme_cyclone_util;
extern object __glo_letrec_91syntax_127_scheme_cyclone_util;
extern object __glo_tagged_91list_127_scheme_cyclone_util;
extern object __glo_if_127_scheme_cyclone_util;
extern object __glo_if_91syntax_127_scheme_cyclone_util;
extern object __glo_begin_127_scheme_cyclone_util;
extern object __glo_lambda_127_scheme_cyclone_util;
extern object __glo_pair_91_125list_scheme_cyclone_util;
extern object __glo_define_91lambda_127_scheme_cyclone_util;
extern object __glo_define_91_125lambda_scheme_cyclone_util;
extern object __glo_formals_91_125list_scheme_cyclone_util;
extern object __glo_lambda_91formals_91_125list_scheme_cyclone_util;
extern object __glo_lambda_91varargs_127_scheme_cyclone_util;
extern object __glo_lambda_91_125formals_scheme_cyclone_util;
extern object __glo_lambda_91_125exp_scheme_cyclone_util;
extern object __glo_lambda_91formals_91type_scheme_cyclone_util;
extern object __glo_lambda_91varargs_91var_scheme_cyclone_util;
extern object __glo_pack_91lambda_91arguments_scheme_cyclone_util;
extern object __glo_if_91_125condition_scheme_cyclone_util;
extern object __glo_if_91_125then_scheme_cyclone_util;
extern object __glo_if_91else_127_scheme_cyclone_util;
extern object __glo_if_91_125else_scheme_cyclone_util;
extern object __glo_const_127_scheme_cyclone_util;
extern object __glo_ref_127_scheme_cyclone_util;
extern object __glo_quote_127_scheme_cyclone_util;
extern object __glo_define_91c_127_scheme_cyclone_util;
extern object __glo_set_67_127_scheme_cyclone_util;
extern object __glo_set_67_91_125var_scheme_cyclone_util;
extern object __glo_set_67_91_125exp_scheme_cyclone_util;
extern object __glo_define_127_scheme_cyclone_util;
extern object __glo_define_91_125var_scheme_cyclone_util;
extern object __glo_define_91_125exp_scheme_cyclone_util;
extern object __glo_app_127_scheme_cyclone_util;
extern object __glo_env_117enclosing_91environment_scheme_cyclone_util;
extern object __glo_env_117first_91frame_scheme_cyclone_util;
extern object __glo_env_117the_91empty_91environment_scheme_cyclone_util;
extern object __glo_env_117make_91frame_scheme_cyclone_util;
extern object __glo_env_117frame_91variables_scheme_cyclone_util;
extern object __glo_env_117frame_91values_scheme_cyclone_util;
extern object __glo_env_117add_91binding_91to_91frame_67_scheme_cyclone_util;
extern object __glo_env_117all_91variables_scheme_cyclone_util;
extern object __glo_env_117all_91values_scheme_cyclone_util;
extern object __glo_env_117extend_91environment_scheme_cyclone_util;
extern object __glo_env_117lookup_scheme_cyclone_util;
extern object __glo_env_117lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117_191lookup_91variable_91value_scheme_cyclone_util;
extern object __glo_env_117set_91variable_91value_67_scheme_cyclone_util;
extern object __glo_env_117define_91variable_67_scheme_cyclone_util;
extern object __glo_make_91syntactic_91closure_scheme_cyclone_util;
extern object __glo_strip_91syntactic_91closures_scheme_cyclone_util;
extern object __glo_identifier_91_125symbol_scheme_cyclone_util;
extern object __glo_identifier_127_scheme_cyclone_util;
extern object __glo_identifier_123_127_scheme_cyclone_util;
extern object __glo_Cyc_91er_91rename_scheme_cyclone_util;
extern object __glo_Cyc_91er_91compare_127_scheme_cyclone_util;
extern object __glo_mangle_scheme_cyclone_util;
extern object __glo_mangle_91global_scheme_cyclone_util;
extern object __glo_define_91c_91inline_127_scheme_cyclone_util;
extern object __glo_define_91c_91_125inline_91var_scheme_cyclone_util;
extern object __glo_string_91join_scheme_cyclone_util;
extern object __glo_string_91split_scheme_cyclone_util;
extern object __glo_gensym_scheme_cyclone_util;
extern object __glo_delete_scheme_cyclone_util;
extern object __glo_delete_91duplicates_scheme_cyclone_util;
extern object __glo_flatten_scheme_cyclone_util;
extern object __glo_length_95obj_scheme_cyclone_util;
extern object __glo_list_91index2_scheme_cyclone_util;
extern object __glo_list_91insert_91at_67_scheme_cyclone_util;
extern object __glo_list_91prefix_127_scheme_cyclone_util;
extern object __glo_string_91replace_91all_scheme_cyclone_util;
extern object __glo_take_scheme_cyclone_util;
extern object __glo_filter_scheme_cyclone_util;
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
extern object __glo_variable_127_191_191inline_191_191_scheme_eval;
extern object __glo_assignment_91variable_191_191inline_191_191_scheme_eval;
extern object __glo_assignment_91value_191_191inline_191_191_scheme_eval;
extern object __glo_definition_91variable_191_191inline_191_191_scheme_eval;
extern object __glo_lambda_91parameters_191_191inline_191_191_scheme_eval;
extern object __glo_lambda_91body_191_191inline_191_191_scheme_eval;
extern object __glo_if_91predicate_191_191inline_191_191_scheme_eval;
extern object __glo_if_91consequent_191_191inline_191_191_scheme_eval;
extern object __glo_if_91alternative_191_191inline_191_191_scheme_eval;
extern object __glo_application_127_191_191inline_191_191_scheme_eval;
extern object __glo_operator_191_191inline_191_191_scheme_eval;
extern object __glo_operands_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91parameters_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91body_191_191inline_191_191_scheme_eval;
extern object __glo_procedure_91environment_191_191inline_191_191_scheme_eval;
extern object __glo_primitive_91implementation_191_191inline_191_191_scheme_eval;
extern object __glo_macro_117macro_127_191_191inline_191_191_scheme_eval;
extern object __glo_tagged_91list_127_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_if_91_125condition_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_if_91_125then_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_if_91_125else_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_app_127_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_ref_127_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_set_67_91_125var_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_set_67_91_125exp_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_define_91_125exp_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_lambda_91_125formals_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_lambda_91_125exp_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_env_117enclosing_91environment_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_env_117first_91frame_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_env_117frame_91variables_191_191inline_191_191_scheme_cyclone_util;
extern object __glo_env_117frame_91values_191_191inline_191_191_scheme_cyclone_util;
#include "cyclone/runtime.h"
static void __lambda_0(void *data, int argc, closure _,object k_733) ;

static void __lambda_0(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/cyclone/macros.sld:lib-init:schemecyclonemacros");
return_closcall1(data,  k_733,  boolean_f);; 
}

void c_schemecyclonemacros_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonemacros_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros);
  mclosure0(c_735, (function_type)__lambda_0);c_735.num_args = 0; 
  __glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros = &c_735; 

  mclosure0(clo_738, c_schemecyclonemacros_inlinable_lambdas); make_pair(pair_737, find_or_add_symbol("c_schemecyclonemacros_inlinable_lambdas"), &clo_738);
  make_cvar(cvar_739, (object *)&__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros);make_pair(pair_7310, find_or_add_symbol("lib-init:schemecyclonemacros"), &cvar_739);
make_pair(c_7311, &pair_737,Cyc_global_variables);
make_pair(c_7312, &pair_7310, &c_7311);
Cyc_global_variables = &c_7312;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonemacros_scheme_cyclone_macros)->fn)(data, 1, cont, cont);
}
void c_schemecyclonemacros_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_macros");
  c_schemecyclonemacros_entry_pt_first_lambda(data, argc, cont,value);
}
