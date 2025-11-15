#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  sym_line_comment = 1,
  sym_block_comment = 2,
  anon_sym_config = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  anon_sym_POUND = 8,
  anon_sym_include = 9,
  anon_sym_LF = 10,
  sym_header_literal = 11,
  anon_sym_define = 12,
  sym_preproc_arg = 13,
  anon_sym_struct = 14,
  sym_c_primitive_type = 15,
  sym_c_linux_type = 16,
  anon_sym_COMMA = 17,
  anon_sym_SLASH = 18,
  anon_sym_BEGIN = 19,
  anon_sym_END = 20,
  anon_sym_COLON = 21,
  anon_sym_bench = 22,
  anon_sym_self = 23,
  anon_sym_hardware = 24,
  anon_sym_h = 25,
  anon_sym_interval = 26,
  anon_sym_i = 27,
  anon_sym_iter = 28,
  anon_sym_it = 29,
  anon_sym_fentry = 30,
  anon_sym_f = 31,
  anon_sym_fexit = 32,
  anon_sym_fr = 33,
  anon_sym_kprobe = 34,
  anon_sym_k = 35,
  anon_sym_kretprobe = 36,
  anon_sym_kr = 37,
  anon_sym_kfunc = 38,
  anon_sym_kretfunc = 39,
  anon_sym_profile = 40,
  anon_sym_p = 41,
  anon_sym_rawtracepoint = 42,
  anon_sym_rt = 43,
  anon_sym_software = 44,
  anon_sym_s = 45,
  anon_sym_tracepoint = 46,
  anon_sym_t = 47,
  anon_sym_uprobe = 48,
  anon_sym_u = 49,
  anon_sym_uretprobe = 50,
  anon_sym_ur = 51,
  anon_sym_usdt = 52,
  anon_sym_U = 53,
  anon_sym_watchpoint = 54,
  anon_sym_w = 55,
  anon_sym_asyncwatchpoint = 56,
  anon_sym_aw = 57,
  anon_sym_LT_LT_EQ = 58,
  anon_sym_GT_GT_EQ = 59,
  anon_sym_PLUS_EQ = 60,
  anon_sym_DASH_EQ = 61,
  anon_sym_STAR_EQ = 62,
  anon_sym_SLASH_EQ = 63,
  anon_sym_PERCENT_EQ = 64,
  anon_sym_AMP_EQ = 65,
  anon_sym_PIPE_EQ = 66,
  anon_sym_CARET_EQ = 67,
  anon_sym_PERCENT = 68,
  anon_sym_STAR = 69,
  anon_sym_PLUS = 70,
  anon_sym_DASH = 71,
  anon_sym_LT_LT = 72,
  anon_sym_GT_GT = 73,
  anon_sym_LT_EQ = 74,
  anon_sym_LT = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_GT = 77,
  anon_sym_EQ_EQ = 78,
  anon_sym_BANG_EQ = 79,
  anon_sym_AMP = 80,
  anon_sym_CARET = 81,
  anon_sym_PIPE = 82,
  anon_sym_AMP_AMP = 83,
  anon_sym_PIPE_PIPE = 84,
  anon_sym_LPAREN = 85,
  anon_sym_RPAREN = 86,
  anon_sym_LBRACK = 87,
  anon_sym_RBRACK = 88,
  anon_sym_bool = 89,
  anon_sym_int8 = 90,
  anon_sym_int16 = 91,
  anon_sym_int32 = 92,
  anon_sym_int64 = 93,
  anon_sym_uint8 = 94,
  anon_sym_uint16 = 95,
  anon_sym_uint32 = 96,
  anon_sym_uint64 = 97,
  anon_sym_DOT = 98,
  anon_sym_DASH_GT = 99,
  anon_sym_args = 100,
  anon_sym_DQUOTE = 101,
  aux_sym_string_literal_token1 = 102,
  aux_sym_string_literal_token2 = 103,
  sym_integer_literal = 104,
  anon_sym_AT = 105,
  aux_sym_map_variable_token1 = 106,
  sym_scratch_variable = 107,
  sym_wildcard_identifier = 108,
  sym_source_file = 109,
  sym_preamble = 110,
  sym__preamble_item = 111,
  sym_config_block = 112,
  sym__config_body = 113,
  sym_config_assignment = 114,
  sym_preproc_include = 115,
  sym_preproc_define = 116,
  sym_struct_definition = 117,
  sym_struct_fields = 118,
  sym_field_declaration = 119,
  sym__c_type_specifier = 120,
  sym_c_struct_specifier = 121,
  sym_action_block = 122,
  sym_probes = 123,
  sym_predicate = 124,
  sym__predicate_expression = 125,
  sym_probe = 126,
  sym_probe_provider = 127,
  sym_action = 128,
  sym__action_body = 129,
  sym_statement = 130,
  sym_assignment = 131,
  sym__expression = 132,
  sym_div_expression = 133,
  sym__div_left_side = 134,
  sym_binary_expression = 135,
  sym_call_expression = 136,
  sym_arguments = 137,
  sym_cast_expression = 138,
  sym_type_specifier = 139,
  sym_array_type = 140,
  sym_pointer_type = 141,
  sym_integer_type = 142,
  sym_field_expression = 143,
  sym_args_item = 144,
  sym_string_literal = 145,
  sym__variable = 146,
  sym_map_variable = 147,
  sym_identifier = 148,
  aux_sym_source_file_repeat1 = 149,
  aux_sym_preamble_repeat1 = 150,
  aux_sym__config_body_repeat1 = 151,
  aux_sym_struct_fields_repeat1 = 152,
  aux_sym_probes_repeat1 = 153,
  aux_sym__action_body_repeat1 = 154,
  aux_sym_arguments_repeat1 = 155,
  aux_sym_array_type_repeat1 = 156,
  aux_sym_pointer_type_repeat1 = 157,
  aux_sym_string_literal_repeat1 = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_config] = "config",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [anon_sym_include] = "include",
  [anon_sym_LF] = "\n",
  [sym_header_literal] = "header_literal",
  [anon_sym_define] = "define",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_struct] = "struct",
  [sym_c_primitive_type] = "c_primitive_type",
  [sym_c_linux_type] = "c_linux_type",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_COLON] = ":",
  [anon_sym_bench] = "bench",
  [anon_sym_self] = "self",
  [anon_sym_hardware] = "hardware",
  [anon_sym_h] = "h",
  [anon_sym_interval] = "interval",
  [anon_sym_i] = "i",
  [anon_sym_iter] = "iter",
  [anon_sym_it] = "it",
  [anon_sym_fentry] = "fentry",
  [anon_sym_f] = "f",
  [anon_sym_fexit] = "fexit",
  [anon_sym_fr] = "fr",
  [anon_sym_kprobe] = "kprobe",
  [anon_sym_k] = "k",
  [anon_sym_kretprobe] = "kretprobe",
  [anon_sym_kr] = "kr",
  [anon_sym_kfunc] = "kfunc",
  [anon_sym_kretfunc] = "kretfunc",
  [anon_sym_profile] = "profile",
  [anon_sym_p] = "p",
  [anon_sym_rawtracepoint] = "rawtracepoint",
  [anon_sym_rt] = "rt",
  [anon_sym_software] = "software",
  [anon_sym_s] = "s",
  [anon_sym_tracepoint] = "tracepoint",
  [anon_sym_t] = "t",
  [anon_sym_uprobe] = "uprobe",
  [anon_sym_u] = "u",
  [anon_sym_uretprobe] = "uretprobe",
  [anon_sym_ur] = "ur",
  [anon_sym_usdt] = "usdt",
  [anon_sym_U] = "U",
  [anon_sym_watchpoint] = "watchpoint",
  [anon_sym_w] = "w",
  [anon_sym_asyncwatchpoint] = "asyncwatchpoint",
  [anon_sym_aw] = "aw",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_bool] = "bool",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_args] = "args",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [aux_sym_string_literal_token2] = "escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_AT] = "@",
  [aux_sym_map_variable_token1] = "map_variable_token1",
  [sym_scratch_variable] = "scratch_variable",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [sym_source_file] = "source_file",
  [sym_preamble] = "preamble",
  [sym__preamble_item] = "_preamble_item",
  [sym_config_block] = "config_block",
  [sym__config_body] = "_config_body",
  [sym_config_assignment] = "config_assignment",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_define] = "preproc_define",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_fields] = "struct_fields",
  [sym_field_declaration] = "field_declaration",
  [sym__c_type_specifier] = "_c_type_specifier",
  [sym_c_struct_specifier] = "c_struct_specifier",
  [sym_action_block] = "action_block",
  [sym_probes] = "probes",
  [sym_predicate] = "predicate",
  [sym__predicate_expression] = "_predicate_expression",
  [sym_probe] = "probe",
  [sym_probe_provider] = "probe_provider",
  [sym_action] = "action",
  [sym__action_body] = "_action_body",
  [sym_statement] = "statement",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_div_expression] = "div_expression",
  [sym__div_left_side] = "_div_left_side",
  [sym_binary_expression] = "binary_expression",
  [sym_call_expression] = "call_expression",
  [sym_arguments] = "arguments",
  [sym_cast_expression] = "cast_expression",
  [sym_type_specifier] = "type_specifier",
  [sym_array_type] = "array_type",
  [sym_pointer_type] = "pointer_type",
  [sym_integer_type] = "integer_type",
  [sym_field_expression] = "field_expression",
  [sym_args_item] = "args_item",
  [sym_string_literal] = "string_literal",
  [sym__variable] = "_variable",
  [sym_map_variable] = "map_variable",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym__config_body_repeat1] = "_config_body_repeat1",
  [aux_sym_struct_fields_repeat1] = "struct_fields_repeat1",
  [aux_sym_probes_repeat1] = "probes_repeat1",
  [aux_sym__action_body_repeat1] = "_action_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_pointer_type_repeat1] = "pointer_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_literal] = sym_header_literal,
  [anon_sym_define] = anon_sym_define,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_struct] = anon_sym_struct,
  [sym_c_primitive_type] = sym_c_primitive_type,
  [sym_c_linux_type] = sym_c_linux_type,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bench] = anon_sym_bench,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_hardware] = anon_sym_hardware,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_interval] = anon_sym_interval,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_iter] = anon_sym_iter,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_fentry] = anon_sym_fentry,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_fexit] = anon_sym_fexit,
  [anon_sym_fr] = anon_sym_fr,
  [anon_sym_kprobe] = anon_sym_kprobe,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_kretprobe] = anon_sym_kretprobe,
  [anon_sym_kr] = anon_sym_kr,
  [anon_sym_kfunc] = anon_sym_kfunc,
  [anon_sym_kretfunc] = anon_sym_kretfunc,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_rawtracepoint] = anon_sym_rawtracepoint,
  [anon_sym_rt] = anon_sym_rt,
  [anon_sym_software] = anon_sym_software,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_tracepoint] = anon_sym_tracepoint,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_uprobe] = anon_sym_uprobe,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_uretprobe] = anon_sym_uretprobe,
  [anon_sym_ur] = anon_sym_ur,
  [anon_sym_usdt] = anon_sym_usdt,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_watchpoint] = anon_sym_watchpoint,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_asyncwatchpoint] = anon_sym_asyncwatchpoint,
  [anon_sym_aw] = anon_sym_aw,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_map_variable_token1] = aux_sym_map_variable_token1,
  [sym_scratch_variable] = sym_scratch_variable,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [sym_source_file] = sym_source_file,
  [sym_preamble] = sym_preamble,
  [sym__preamble_item] = sym__preamble_item,
  [sym_config_block] = sym_config_block,
  [sym__config_body] = sym__config_body,
  [sym_config_assignment] = sym_config_assignment,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_define] = sym_preproc_define,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_fields] = sym_struct_fields,
  [sym_field_declaration] = sym_field_declaration,
  [sym__c_type_specifier] = sym__c_type_specifier,
  [sym_c_struct_specifier] = sym_c_struct_specifier,
  [sym_action_block] = sym_action_block,
  [sym_probes] = sym_probes,
  [sym_predicate] = sym_predicate,
  [sym__predicate_expression] = sym__predicate_expression,
  [sym_probe] = sym_probe,
  [sym_probe_provider] = sym_probe_provider,
  [sym_action] = sym_action,
  [sym__action_body] = sym__action_body,
  [sym_statement] = sym_statement,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_div_expression] = sym_div_expression,
  [sym__div_left_side] = sym__div_left_side,
  [sym_binary_expression] = sym_binary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_arguments] = sym_arguments,
  [sym_cast_expression] = sym_cast_expression,
  [sym_type_specifier] = sym_type_specifier,
  [sym_array_type] = sym_array_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_integer_type] = sym_integer_type,
  [sym_field_expression] = sym_field_expression,
  [sym_args_item] = sym_args_item,
  [sym_string_literal] = sym_string_literal,
  [sym__variable] = sym__variable,
  [sym_map_variable] = sym_map_variable,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym__config_body_repeat1] = aux_sym__config_body_repeat1,
  [aux_sym_struct_fields_repeat1] = aux_sym_struct_fields_repeat1,
  [aux_sym_probes_repeat1] = aux_sym_probes_repeat1,
  [aux_sym__action_body_repeat1] = aux_sym__action_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_pointer_type_repeat1] = aux_sym_pointer_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_header_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [sym_c_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_c_linux_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bench] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hardware] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fentry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kprobe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kretprobe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kretfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawtracepoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_software] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tracepoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uprobe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uretprobe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usdt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_watchpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asyncwatchpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_map_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_scratch_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym__preamble_item] = {
    .visible = false,
    .named = true,
  },
  [sym_config_block] = {
    .visible = true,
    .named = true,
  },
  [sym__config_body] = {
    .visible = false,
    .named = true,
  },
  [sym_config_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_define] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__c_type_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_c_struct_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_action_block] = {
    .visible = true,
    .named = true,
  },
  [sym_probes] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym__predicate_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_probe] = {
    .visible = true,
    .named = true,
  },
  [sym_probe_provider] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_body] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_div_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__div_left_side] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_args_item] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_map_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preamble_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__config_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_probes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__action_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pointer_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_arguments = 2,
  field_body = 3,
  field_event = 4,
  field_field = 5,
  field_function = 6,
  field_left = 7,
  field_module = 8,
  field_name = 9,
  field_path = 10,
  field_provider = 11,
  field_right = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_event] = "event",
  [field_field] = "field",
  [field_function] = "function",
  [field_left] = "left",
  [field_module] = "module",
  [field_name] = "name",
  [field_path] = "path",
  [field_provider] = "provider",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 2},
  [1] =
    {field_event, 2},
    {field_provider, 0},
  [3] =
    {field_name, 2},
  [4] =
    {field_left, 0},
  [5] =
    {field_left, 0, .inherited = true},
    {field_right, 1},
  [7] =
    {field_arguments, 1},
    {field_function, 0},
  [9] =
    {field_name, 2},
    {field_value, 3},
  [11] =
    {field_name, 1},
  [12] =
    {field_argument, 0},
    {field_field, 2},
  [14] =
    {field_left, 0},
    {field_right, 2},
  [16] =
    {field_event, 4},
    {field_module, 2},
    {field_provider, 0},
  [19] =
    {field_name, 0},
    {field_value, 2},
  [21] =
    {field_body, 3},
    {field_name, 1},
  [23] =
    {field_type, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 10,
  [49] = 49,
  [50] = 50,
  [51] = 14,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 89,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 94,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 29,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      ADVANCE_MAP(
        '!', 41,
        '"', 337,
        '#', 227,
        '$', 213,
        '%', 295,
        '&', 307,
        '(', 312,
        ')', 313,
        '*', 296,
        '+', 297,
        ',', 241,
        '-', 298,
        '.', 333,
        '/', 242,
        ':', 245,
        ';', 226,
        '<', 302,
        '=', 223,
        '>', 304,
        '@', 353,
        'B', 44,
        'E', 47,
        'U', 280,
        '[', 314,
        '\\', 214,
        ']', 315,
        '^', 308,
        '_', 49,
        'a', 162,
        'b', 80,
        'c', 105,
        'd', 81,
        'f', 256,
        'h', 249,
        'i', 251,
        'k', 260,
        'p', 266,
        'r', 51,
        's', 270,
        't', 273,
        'u', 275,
        'v', 146,
        'w', 282,
        '{', 224,
        '|', 309,
        '}', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '/') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 41,
        '$', 213,
        '%', 295,
        '&', 307,
        '(', 312,
        ')', 313,
        '*', 296,
        '+', 297,
        ',', 241,
        '-', 298,
        '.', 333,
        '/', 242,
        ';', 226,
        '<', 302,
        '=', 223,
        '>', 304,
        '[', 314,
        ']', 315,
        '^', 308,
        '{', 224,
        '|', 309,
        '}', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 337,
        '$', 213,
        '(', 312,
        ')', 313,
        '-', 15,
        '/', 7,
        '0', 345,
        '@', 353,
        'a', 355,
        '{', 224,
        '}', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(345);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '/', 7,
        '_', 49,
        'b', 150,
        'c', 104,
        'i', 139,
        's', 17,
        'u', 18,
        'v', 146,
        '}', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(345);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == '8') ADVANCE(240);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == '8') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == '8') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(326);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(317);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(325);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(240);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(322);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(330);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(321);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(329);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(240);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(324);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(332);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(323);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(331);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(240);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(320);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(328);
      END_STATE();
    case 38:
      if (lookahead == '6') ADVANCE(319);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(327);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(244);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(284);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(284);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 203:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 204:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 205:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 206:
      if (lookahead == 'w') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 210:
      if (lookahead == 'z') ADVANCE(92);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 213:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 214:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(343);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      ADVANCE_MAP(
        '#', 227,
        '-', 15,
        '/', 7,
        '0', 345,
        'B', 44,
        'E', 47,
        'U', 280,
        ']', 315,
        'a', 176,
        'b', 79,
        'c', 144,
        'f', 256,
        'h', 249,
        'i', 252,
        'k', 260,
        'p', 266,
        'r', 51,
        's', 271,
        't', 273,
        'u', 276,
        'w', 282,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_header_literal);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_c_primitive_type);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_c_primitive_type);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == '8') ADVANCE(318);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_c_primitive_type);
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(50);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_c_linux_type);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_bench);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_hardware);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_interval);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_iter);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_fentry);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_fexit);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_kprobe);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_kfunc);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_kretfunc);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_software);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_s);
      ADVANCE_MAP(
        '1', 35,
        '3', 23,
        '6', 29,
        '8', 240,
        'e', 123,
        'i', 210,
        'o', 98,
        's', 109,
        't', 166,
      );
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_uprobe);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_u);
      ADVANCE_MAP(
        '1', 35,
        '3', 23,
        '6', 29,
        '8', 240,
        'i', 132,
        'p', 172,
        'r', 278,
        's', 77,
      );
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_usdt);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_aw);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(291);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(289);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(310);
      if (lookahead == '=') ADVANCE(292);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(294);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '|') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_args);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(339);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(339);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 351,
        '_', 349,
        'l', 352,
        'E', 211,
        'e', 211,
        'U', 347,
        'u', 347,
        'X', 212,
        'x', 212,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(344);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'g') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_scratch_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 215},
  [4] = {.lex_state = 215},
  [5] = {.lex_state = 215},
  [6] = {.lex_state = 215},
  [7] = {.lex_state = 215},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 215},
  [10] = {.lex_state = 215},
  [11] = {.lex_state = 215},
  [12] = {.lex_state = 215},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 215},
  [15] = {.lex_state = 215},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 215},
  [18] = {.lex_state = 215},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 215},
  [21] = {.lex_state = 215},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 215},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [sym_c_primitive_type] = ACTIONS(1),
    [sym_c_linux_type] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bench] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_hardware] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_iter] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_fentry] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_fexit] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [anon_sym_kprobe] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_kretprobe] = ACTIONS(1),
    [anon_sym_kr] = ACTIONS(1),
    [anon_sym_kfunc] = ACTIONS(1),
    [anon_sym_kretfunc] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_rawtracepoint] = ACTIONS(1),
    [anon_sym_rt] = ACTIONS(1),
    [anon_sym_software] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_tracepoint] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_uprobe] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_uretprobe] = ACTIONS(1),
    [anon_sym_ur] = ACTIONS(1),
    [anon_sym_usdt] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_watchpoint] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_asyncwatchpoint] = ACTIONS(1),
    [anon_sym_aw] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_scratch_variable] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(161),
    [sym_preamble] = STATE(4),
    [sym__preamble_item] = STATE(2),
    [sym_config_block] = STATE(2),
    [sym_preproc_include] = STATE(2),
    [sym_preproc_define] = STATE(2),
    [sym_struct_definition] = STATE(2),
    [sym_action_block] = STATE(5),
    [sym_probes] = STATE(100),
    [sym_probe] = STATE(88),
    [sym_probe_provider] = STATE(143),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_preamble_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_bench] = ACTIONS(15),
    [anon_sym_self] = ACTIONS(15),
    [anon_sym_hardware] = ACTIONS(15),
    [anon_sym_h] = ACTIONS(17),
    [anon_sym_interval] = ACTIONS(15),
    [anon_sym_i] = ACTIONS(17),
    [anon_sym_iter] = ACTIONS(15),
    [anon_sym_it] = ACTIONS(17),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(15),
    [anon_sym_k] = ACTIONS(17),
    [anon_sym_kretprobe] = ACTIONS(15),
    [anon_sym_kr] = ACTIONS(17),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_profile] = ACTIONS(15),
    [anon_sym_p] = ACTIONS(17),
    [anon_sym_rawtracepoint] = ACTIONS(15),
    [anon_sym_rt] = ACTIONS(15),
    [anon_sym_software] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(17),
    [anon_sym_tracepoint] = ACTIONS(15),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_uprobe] = ACTIONS(15),
    [anon_sym_u] = ACTIONS(17),
    [anon_sym_uretprobe] = ACTIONS(15),
    [anon_sym_ur] = ACTIONS(17),
    [anon_sym_usdt] = ACTIONS(15),
    [anon_sym_U] = ACTIONS(15),
    [anon_sym_watchpoint] = ACTIONS(15),
    [anon_sym_w] = ACTIONS(17),
    [anon_sym_asyncwatchpoint] = ACTIONS(15),
    [anon_sym_aw] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_config,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 6,
      sym__preamble_item,
      sym_config_block,
      sym_preproc_include,
      sym_preproc_define,
      sym_struct_definition,
      aux_sym_preamble_repeat1,
    ACTIONS(21), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(19), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [65] = 7,
    ACTIONS(25), 1,
      anon_sym_config,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 6,
      sym__preamble_item,
      sym_config_block,
      sym_preproc_include,
      sym_preproc_define,
      sym_struct_definition,
      aux_sym_preamble_repeat1,
    ACTIONS(34), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(23), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [130] = 9,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_probe,
    STATE(100), 1,
      sym_probes,
    STATE(143), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(7), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(17), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(15), 24,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [195] = 9,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_probe,
    STATE(100), 1,
      sym_probes,
    STATE(143), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(6), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(17), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(15), 24,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [260] = 9,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_probe,
    STATE(100), 1,
      sym_probes,
    STATE(143), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(40), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(6), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(46), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(43), 24,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [325] = 9,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_probe,
    STATE(100), 1,
      sym_probes,
    STATE(143), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(6), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(17), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(15), 24,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [390] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(51), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [441] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(55), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [492] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(59), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [543] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(65), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(63), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [594] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(67), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [645] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(71), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [696] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(75), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [747] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(79), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [798] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(83), 30,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_struct,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [849] = 6,
    STATE(123), 1,
      sym_probe,
    STATE(143), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    ACTIONS(17), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(15), 24,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [904] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(87), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [952] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(91), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1000] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(95), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1048] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 12,
      anon_sym_h,
      anon_sym_i,
      anon_sym_it,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_p,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_w,
    ACTIONS(99), 27,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_bench,
      anon_sym_self,
      anon_sym_hardware,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_profile,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_software,
      anon_sym_tracepoint,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1096] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(103), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(105), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1143] = 5,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_map_variable_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(111), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1192] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(119), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1238] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(125), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1281] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(129), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1324] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 13,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
    ACTIONS(133), 21,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1367] = 5,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(141), 10,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
    ACTIONS(139), 12,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
  [1411] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 7,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(145), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      aux_sym_map_variable_token1,
  [1449] = 6,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(139), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(137), 17,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1491] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(139), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(137), 17,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1527] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(151), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(149), 17,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1563] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(153), 19,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [1597] = 13,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(157), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1649] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 16,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1683] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 14,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1719] = 6,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 12,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1757] = 8,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1799] = 9,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(159), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1843] = 10,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(157), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1889] = 11,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(157), 7,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(181), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1969] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(185), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2001] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2033] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(193), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2065] = 17,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_integer_literal,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    STATE(108), 1,
      sym_statement,
    STATE(130), 1,
      sym_assignment,
    STATE(149), 1,
      sym__action_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym__variable,
      sym_map_variable,
    STATE(62), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [2125] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(213), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2157] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(59), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2189] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(217), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2221] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(157), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2253] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2285] = 16,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_integer_literal,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    STATE(130), 1,
      sym_assignment,
    STATE(138), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym__variable,
      sym_map_variable,
    STATE(62), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [2342] = 16,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_integer_literal,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    STATE(130), 1,
      sym_assignment,
    STATE(138), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym__variable,
      sym_map_variable,
    STATE(62), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [2399] = 14,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(225), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2451] = 16,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2507] = 16,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2563] = 16,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2619] = 15,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_integer_literal,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    STATE(130), 1,
      sym_assignment,
    STATE(138), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym__variable,
      sym_map_variable,
    STATE(62), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [2673] = 13,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(239), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    STATE(146), 1,
      sym__predicate_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(78), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2722] = 13,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(56), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2771] = 14,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2822] = 14,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2873] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(249), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(40), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2919] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(251), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2965] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(253), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3011] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(255), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3057] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(257), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3103] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(259), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3149] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(261), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(39), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3195] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(263), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(38), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3241] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(265), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3287] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(267), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(41), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3333] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(269), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3379] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(271), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(54), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3425] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(273), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(42), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3471] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(275), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(55), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3517] = 12,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_args,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      aux_sym_map_variable_token1,
    ACTIONS(211), 1,
      sym_scratch_variable,
    ACTIONS(277), 1,
      sym_integer_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(45), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [3563] = 13,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(175), 1,
      anon_sym_CARET,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP_AMP,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(279), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(167), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3610] = 7,
    ACTIONS(281), 1,
      anon_sym_struct,
    STATE(86), 1,
      sym_integer_type,
    STATE(125), 1,
      sym_array_type,
    STATE(153), 1,
      sym_pointer_type,
    STATE(156), 1,
      sym_type_specifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
  [3641] = 7,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_struct,
    STATE(152), 1,
      sym_struct_fields,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(289), 2,
      sym_c_primitive_type,
      sym_c_linux_type,
    STATE(81), 2,
      sym_field_declaration,
      aux_sym_struct_fields_repeat1,
    STATE(131), 2,
      sym__c_type_specifier,
      sym_c_struct_specifier,
  [3667] = 6,
    ACTIONS(287), 1,
      anon_sym_struct,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(289), 2,
      sym_c_primitive_type,
      sym_c_linux_type,
    STATE(82), 2,
      sym_field_declaration,
      aux_sym_struct_fields_repeat1,
    STATE(131), 2,
      sym__c_type_specifier,
      sym_c_struct_specifier,
  [3690] = 6,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      anon_sym_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 2,
      sym_c_primitive_type,
      sym_c_linux_type,
    STATE(82), 2,
      sym_field_declaration,
      aux_sym_struct_fields_repeat1,
    STATE(131), 2,
      sym__c_type_specifier,
      sym_c_struct_specifier,
  [3713] = 4,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 2,
      anon_sym_args,
      aux_sym_map_variable_token1,
    ACTIONS(303), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_AT,
      sym_scratch_variable,
  [3732] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 2,
      anon_sym_args,
      aux_sym_map_variable_token1,
    ACTIONS(303), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_AT,
      sym_scratch_variable,
  [3748] = 6,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(122), 1,
      sym_config_assignment,
    STATE(148), 1,
      sym_identifier,
    STATE(162), 1,
      sym__config_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3768] = 6,
    ACTIONS(311), 1,
      anon_sym_STAR,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      aux_sym_array_type_repeat1,
    STATE(106), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3788] = 4,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    ACTIONS(317), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 2,
      sym_field_expression,
      sym_identifier,
  [3803] = 5,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3820] = 4,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3835] = 5,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(333), 1,
      sym_header_literal,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_string_literal,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
  [3852] = 5,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_config_assignment,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3869] = 4,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3884] = 4,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3899] = 4,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3914] = 5,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_config_assignment,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3931] = 4,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
  [3946] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 4,
      anon_sym_RBRACE,
      anon_sym_struct,
      sym_c_primitive_type,
      sym_c_linux_type,
  [3957] = 5,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3974] = 4,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
  [3989] = 5,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_action,
    STATE(142), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4006] = 4,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4021] = 5,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4038] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4053] = 4,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [4068] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [4078] = 4,
    ACTIONS(391), 1,
      anon_sym_STAR,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4092] = 4,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4106] = 4,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4120] = 4,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4134] = 3,
    ACTIONS(408), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4146] = 4,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4160] = 3,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4172] = 4,
    ACTIONS(391), 1,
      anon_sym_STAR,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4186] = 4,
    ACTIONS(421), 1,
      anon_sym_STAR,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4200] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [4210] = 4,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4224] = 4,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    ACTIONS(428), 1,
      sym_integer_literal,
    STATE(139), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4238] = 4,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4252] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [4262] = 4,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4276] = 4,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(126), 1,
      sym_config_assignment,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4290] = 4,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4304] = 3,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(372), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4316] = 4,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4330] = 4,
    ACTIONS(311), 1,
      anon_sym_STAR,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4344] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [4353] = 3,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    ACTIONS(442), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4364] = 3,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4375] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [4384] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [4393] = 3,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4404] = 3,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      sym_preproc_arg,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
  [4415] = 3,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(137), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4426] = 3,
    ACTIONS(448), 1,
      aux_sym_map_variable_token1,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4437] = 3,
    ACTIONS(450), 1,
      anon_sym_include,
    ACTIONS(452), 1,
      anon_sym_define,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4448] = 3,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(158), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4459] = 3,
    ACTIONS(454), 1,
      anon_sym_STAR,
    STATE(113), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4470] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [4479] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(456), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [4488] = 3,
    ACTIONS(309), 1,
      aux_sym_map_variable_token1,
    STATE(155), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4499] = 3,
    ACTIONS(143), 1,
      sym_preproc_arg,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
  [4510] = 3,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4521] = 2,
    ACTIONS(458), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4529] = 2,
    ACTIONS(460), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4537] = 2,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4545] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4553] = 2,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4561] = 2,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4569] = 2,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4577] = 2,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      sym_line_comment,
      sym_block_comment,
  [4585] = 2,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4593] = 2,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4601] = 2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4609] = 2,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4617] = 2,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4625] = 2,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4633] = 2,
    ACTIONS(484), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4641] = 2,
    ACTIONS(486), 1,
      aux_sym_map_variable_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4649] = 2,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4657] = 2,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4665] = 2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4673] = 2,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4681] = 2,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4689] = 2,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 441,
  [SMALL_STATE(10)] = 492,
  [SMALL_STATE(11)] = 543,
  [SMALL_STATE(12)] = 594,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 798,
  [SMALL_STATE(17)] = 849,
  [SMALL_STATE(18)] = 904,
  [SMALL_STATE(19)] = 952,
  [SMALL_STATE(20)] = 1000,
  [SMALL_STATE(21)] = 1048,
  [SMALL_STATE(22)] = 1096,
  [SMALL_STATE(23)] = 1143,
  [SMALL_STATE(24)] = 1192,
  [SMALL_STATE(25)] = 1238,
  [SMALL_STATE(26)] = 1281,
  [SMALL_STATE(27)] = 1324,
  [SMALL_STATE(28)] = 1367,
  [SMALL_STATE(29)] = 1411,
  [SMALL_STATE(30)] = 1449,
  [SMALL_STATE(31)] = 1491,
  [SMALL_STATE(32)] = 1527,
  [SMALL_STATE(33)] = 1563,
  [SMALL_STATE(34)] = 1597,
  [SMALL_STATE(35)] = 1649,
  [SMALL_STATE(36)] = 1683,
  [SMALL_STATE(37)] = 1719,
  [SMALL_STATE(38)] = 1757,
  [SMALL_STATE(39)] = 1799,
  [SMALL_STATE(40)] = 1843,
  [SMALL_STATE(41)] = 1889,
  [SMALL_STATE(42)] = 1937,
  [SMALL_STATE(43)] = 1969,
  [SMALL_STATE(44)] = 2001,
  [SMALL_STATE(45)] = 2033,
  [SMALL_STATE(46)] = 2065,
  [SMALL_STATE(47)] = 2125,
  [SMALL_STATE(48)] = 2157,
  [SMALL_STATE(49)] = 2189,
  [SMALL_STATE(50)] = 2221,
  [SMALL_STATE(51)] = 2253,
  [SMALL_STATE(52)] = 2285,
  [SMALL_STATE(53)] = 2342,
  [SMALL_STATE(54)] = 2399,
  [SMALL_STATE(55)] = 2451,
  [SMALL_STATE(56)] = 2507,
  [SMALL_STATE(57)] = 2563,
  [SMALL_STATE(58)] = 2619,
  [SMALL_STATE(59)] = 2673,
  [SMALL_STATE(60)] = 2722,
  [SMALL_STATE(61)] = 2771,
  [SMALL_STATE(62)] = 2822,
  [SMALL_STATE(63)] = 2873,
  [SMALL_STATE(64)] = 2919,
  [SMALL_STATE(65)] = 2965,
  [SMALL_STATE(66)] = 3011,
  [SMALL_STATE(67)] = 3057,
  [SMALL_STATE(68)] = 3103,
  [SMALL_STATE(69)] = 3149,
  [SMALL_STATE(70)] = 3195,
  [SMALL_STATE(71)] = 3241,
  [SMALL_STATE(72)] = 3287,
  [SMALL_STATE(73)] = 3333,
  [SMALL_STATE(74)] = 3379,
  [SMALL_STATE(75)] = 3425,
  [SMALL_STATE(76)] = 3471,
  [SMALL_STATE(77)] = 3517,
  [SMALL_STATE(78)] = 3563,
  [SMALL_STATE(79)] = 3610,
  [SMALL_STATE(80)] = 3641,
  [SMALL_STATE(81)] = 3667,
  [SMALL_STATE(82)] = 3690,
  [SMALL_STATE(83)] = 3713,
  [SMALL_STATE(84)] = 3732,
  [SMALL_STATE(85)] = 3748,
  [SMALL_STATE(86)] = 3768,
  [SMALL_STATE(87)] = 3788,
  [SMALL_STATE(88)] = 3803,
  [SMALL_STATE(89)] = 3820,
  [SMALL_STATE(90)] = 3835,
  [SMALL_STATE(91)] = 3852,
  [SMALL_STATE(92)] = 3869,
  [SMALL_STATE(93)] = 3884,
  [SMALL_STATE(94)] = 3899,
  [SMALL_STATE(95)] = 3914,
  [SMALL_STATE(96)] = 3931,
  [SMALL_STATE(97)] = 3946,
  [SMALL_STATE(98)] = 3957,
  [SMALL_STATE(99)] = 3974,
  [SMALL_STATE(100)] = 3989,
  [SMALL_STATE(101)] = 4006,
  [SMALL_STATE(102)] = 4021,
  [SMALL_STATE(103)] = 4038,
  [SMALL_STATE(104)] = 4053,
  [SMALL_STATE(105)] = 4068,
  [SMALL_STATE(106)] = 4078,
  [SMALL_STATE(107)] = 4092,
  [SMALL_STATE(108)] = 4106,
  [SMALL_STATE(109)] = 4120,
  [SMALL_STATE(110)] = 4134,
  [SMALL_STATE(111)] = 4146,
  [SMALL_STATE(112)] = 4160,
  [SMALL_STATE(113)] = 4172,
  [SMALL_STATE(114)] = 4186,
  [SMALL_STATE(115)] = 4200,
  [SMALL_STATE(116)] = 4210,
  [SMALL_STATE(117)] = 4224,
  [SMALL_STATE(118)] = 4238,
  [SMALL_STATE(119)] = 4252,
  [SMALL_STATE(120)] = 4262,
  [SMALL_STATE(121)] = 4276,
  [SMALL_STATE(122)] = 4290,
  [SMALL_STATE(123)] = 4304,
  [SMALL_STATE(124)] = 4316,
  [SMALL_STATE(125)] = 4330,
  [SMALL_STATE(126)] = 4344,
  [SMALL_STATE(127)] = 4353,
  [SMALL_STATE(128)] = 4364,
  [SMALL_STATE(129)] = 4375,
  [SMALL_STATE(130)] = 4384,
  [SMALL_STATE(131)] = 4393,
  [SMALL_STATE(132)] = 4404,
  [SMALL_STATE(133)] = 4415,
  [SMALL_STATE(134)] = 4426,
  [SMALL_STATE(135)] = 4437,
  [SMALL_STATE(136)] = 4448,
  [SMALL_STATE(137)] = 4459,
  [SMALL_STATE(138)] = 4470,
  [SMALL_STATE(139)] = 4479,
  [SMALL_STATE(140)] = 4488,
  [SMALL_STATE(141)] = 4499,
  [SMALL_STATE(142)] = 4510,
  [SMALL_STATE(143)] = 4521,
  [SMALL_STATE(144)] = 4529,
  [SMALL_STATE(145)] = 4537,
  [SMALL_STATE(146)] = 4545,
  [SMALL_STATE(147)] = 4553,
  [SMALL_STATE(148)] = 4561,
  [SMALL_STATE(149)] = 4569,
  [SMALL_STATE(150)] = 4577,
  [SMALL_STATE(151)] = 4585,
  [SMALL_STATE(152)] = 4593,
  [SMALL_STATE(153)] = 4601,
  [SMALL_STATE(154)] = 4609,
  [SMALL_STATE(155)] = 4617,
  [SMALL_STATE(156)] = 4625,
  [SMALL_STATE(157)] = 4633,
  [SMALL_STATE(158)] = 4641,
  [SMALL_STATE(159)] = 4649,
  [SMALL_STATE(160)] = 4657,
  [SMALL_STATE(161)] = 4665,
  [SMALL_STATE(162)] = 4673,
  [SMALL_STATE(163)] = 4681,
  [SMALL_STATE(164)] = 4689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, 0, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 4, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 4, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6, 0, 13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6, 0, 13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 5, 0, 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 5, 0, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5, 0, 8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5, 0, 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 6, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_item, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_args_item, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 9),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, 0, 9),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 10),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expression, 2, 0, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expression, 2, 0, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 14),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 14),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 10),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_fields, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_fields_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__predicate_expression, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_left_side, 2, 0, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_left_side, 2, 0, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 3, 0, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 3, 0, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 5, 0, 11),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 5, 0, 11),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_assignment, 3, 0, 12),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe_provider, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_struct_specifier, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bpftrace(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
