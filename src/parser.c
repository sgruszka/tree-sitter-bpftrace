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
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 2
#define TOKEN_COUNT 118
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  sym_line_comment = 1,
  sym_block_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_config = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_POUND = 8,
  anon_sym_include = 9,
  anon_sym_LF = 10,
  sym_header_literal = 11,
  anon_sym_define = 12,
  sym_preproc_arg = 13,
  anon_sym_COMMA = 14,
  anon_sym_SLASH = 15,
  anon_sym_BEGIN = 16,
  anon_sym_begin = 17,
  anon_sym_END = 18,
  anon_sym_end = 19,
  anon_sym_COLON = 20,
  anon_sym_bench = 21,
  anon_sym_self = 22,
  anon_sym_hardware = 23,
  anon_sym_h = 24,
  anon_sym_interval = 25,
  anon_sym_i = 26,
  anon_sym_iter = 27,
  anon_sym_it = 28,
  anon_sym_fentry = 29,
  anon_sym_f = 30,
  anon_sym_fexit = 31,
  anon_sym_fr = 32,
  anon_sym_kprobe = 33,
  anon_sym_k = 34,
  anon_sym_kretprobe = 35,
  anon_sym_kr = 36,
  anon_sym_kfunc = 37,
  anon_sym_kretfunc = 38,
  anon_sym_profile = 39,
  anon_sym_p = 40,
  anon_sym_rawtracepoint = 41,
  anon_sym_rt = 42,
  anon_sym_software = 43,
  anon_sym_s = 44,
  anon_sym_tracepoint = 45,
  anon_sym_t = 46,
  anon_sym_uprobe = 47,
  anon_sym_u = 48,
  anon_sym_uretprobe = 49,
  anon_sym_ur = 50,
  anon_sym_usdt = 51,
  anon_sym_U = 52,
  anon_sym_watchpoint = 53,
  anon_sym_w = 54,
  anon_sym_asyncwatchpoint = 55,
  anon_sym_aw = 56,
  anon_sym_if = 57,
  anon_sym_LPAREN = 58,
  anon_sym_RPAREN = 59,
  anon_sym_else = 60,
  anon_sym_while = 61,
  anon_sym_unroll = 62,
  anon_sym_for = 63,
  anon_sym_DOT_DOT = 64,
  anon_sym_LT_LT_EQ = 65,
  anon_sym_GT_GT_EQ = 66,
  anon_sym_PLUS_EQ = 67,
  anon_sym_DASH_EQ = 68,
  anon_sym_STAR_EQ = 69,
  anon_sym_SLASH_EQ = 70,
  anon_sym_PERCENT_EQ = 71,
  anon_sym_AMP_EQ = 72,
  anon_sym_PIPE_EQ = 73,
  anon_sym_CARET_EQ = 74,
  anon_sym_PERCENT = 75,
  anon_sym_STAR = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_LT_LT = 79,
  anon_sym_GT_GT = 80,
  anon_sym_LT_EQ = 81,
  anon_sym_LT = 82,
  anon_sym_GT_EQ = 83,
  anon_sym_GT = 84,
  anon_sym_EQ_EQ = 85,
  anon_sym_BANG_EQ = 86,
  anon_sym_AMP = 87,
  anon_sym_CARET = 88,
  anon_sym_PIPE = 89,
  anon_sym_AMP_AMP = 90,
  anon_sym_PIPE_PIPE = 91,
  anon_sym_LBRACK = 92,
  anon_sym_RBRACK = 93,
  anon_sym_struct = 94,
  anon_sym_bool = 95,
  anon_sym_int8 = 96,
  anon_sym_int16 = 97,
  anon_sym_int32 = 98,
  anon_sym_int64 = 99,
  anon_sym_uint8 = 100,
  anon_sym_uint16 = 101,
  anon_sym_uint32 = 102,
  anon_sym_uint64 = 103,
  anon_sym_DOT = 104,
  anon_sym_DASH_GT = 105,
  sym_args_keyword = 106,
  anon_sym_PLUS_PLUS = 107,
  anon_sym_DASH_DASH = 108,
  anon_sym_DQUOTE = 109,
  aux_sym_string_literal_token1 = 110,
  aux_sym_string_literal_token2 = 111,
  sym_integer_literal = 112,
  aux_sym_map_variable_token1 = 113,
  sym_scratch_variable = 114,
  sym_identifier = 115,
  sym_wildcard_identifier = 116,
  sym_c_struct = 117,
  sym_source_file = 118,
  sym_preamble = 119,
  sym__preamble_item = 120,
  sym_config_block = 121,
  sym__config_body = 122,
  sym_config_assignment = 123,
  sym_preproc_include = 124,
  sym_preproc_define = 125,
  sym_action_block = 126,
  sym_probes_list = 127,
  sym_predicate = 128,
  sym__predicate_expression = 129,
  sym_probe = 130,
  sym_probe_provider = 131,
  sym_block = 132,
  sym__block_body = 133,
  sym__statement = 134,
  sym__block_statement = 135,
  sym_if_statement = 136,
  sym_else_clause = 137,
  sym_while_statement = 138,
  sym_unroll_statement = 139,
  sym_for_statement = 140,
  sym_range = 141,
  sym__range_limit = 142,
  sym__assignment = 143,
  sym__expression = 144,
  sym__div_expression = 145,
  sym__div_left_side = 146,
  sym_binary_expression = 147,
  sym_call_expression = 148,
  sym_arguments = 149,
  sym_cast_expression = 150,
  sym_type_specifier = 151,
  sym_array_type = 152,
  sym_pointer_type = 153,
  sym_integer_type = 154,
  sym_field_expression = 155,
  sym_subscript_expression = 156,
  sym_tuple_expression = 157,
  sym_parenthesized_expression = 158,
  sym_update_expression = 159,
  sym__sufix_increment = 160,
  sym__sufix_decrement = 161,
  sym__prefix_increment = 162,
  sym__prefix_decrement = 163,
  sym_string_literal = 164,
  sym__variable = 165,
  sym_map_variable = 166,
  aux_sym_source_file_repeat1 = 167,
  aux_sym_preamble_repeat1 = 168,
  aux_sym__config_body_repeat1 = 169,
  aux_sym_probes_list_repeat1 = 170,
  aux_sym__block_body_repeat1 = 171,
  aux_sym_arguments_repeat1 = 172,
  aux_sym_array_type_repeat1 = 173,
  aux_sym_pointer_type_repeat1 = 174,
  aux_sym_string_literal_repeat1 = 175,
  alias_sym_action = 176,
  alias_sym_expression_statement = 177,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_config] = "config",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_include] = "include",
  [anon_sym_LF] = "\n",
  [sym_header_literal] = "header_literal",
  [anon_sym_define] = "define",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_begin] = "begin",
  [anon_sym_END] = "END",
  [anon_sym_end] = "end",
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
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_unroll] = "unroll",
  [anon_sym_for] = "for",
  [anon_sym_DOT_DOT] = "..",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_struct] = "struct",
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
  [sym_args_keyword] = "args_keyword",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [aux_sym_string_literal_token2] = "escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_map_variable_token1] = "map_variable_token1",
  [sym_scratch_variable] = "scratch_variable",
  [sym_identifier] = "identifier",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [sym_c_struct] = "c_struct",
  [sym_source_file] = "source_file",
  [sym_preamble] = "preamble",
  [sym__preamble_item] = "_preamble_item",
  [sym_config_block] = "config_block",
  [sym__config_body] = "_config_body",
  [sym_config_assignment] = "config_assignment",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_define] = "preproc_define",
  [sym_action_block] = "action_block",
  [sym_probes_list] = "probes_list",
  [sym_predicate] = "predicate",
  [sym__predicate_expression] = "_predicate_expression",
  [sym_probe] = "probe",
  [sym_probe_provider] = "probe_provider",
  [sym_block] = "block",
  [sym__block_body] = "_block_body",
  [sym__statement] = "_statement",
  [sym__block_statement] = "_block_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_while_statement] = "while_statement",
  [sym_unroll_statement] = "unroll_statement",
  [sym_for_statement] = "for_statement",
  [sym_range] = "range",
  [sym__range_limit] = "_range_limit",
  [sym__assignment] = "assignment_statement",
  [sym__expression] = "_expression",
  [sym__div_expression] = "binary_expression",
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
  [sym_subscript_expression] = "subscript_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_update_expression] = "update_expression",
  [sym__sufix_increment] = "_sufix_increment",
  [sym__sufix_decrement] = "_sufix_decrement",
  [sym__prefix_increment] = "_prefix_increment",
  [sym__prefix_decrement] = "_prefix_decrement",
  [sym_string_literal] = "string_literal",
  [sym__variable] = "_variable",
  [sym_map_variable] = "map_variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym__config_body_repeat1] = "_config_body_repeat1",
  [aux_sym_probes_list_repeat1] = "probes_list_repeat1",
  [aux_sym__block_body_repeat1] = "_block_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_pointer_type_repeat1] = "pointer_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_action] = "action",
  [alias_sym_expression_statement] = "expression_statement",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_LF] = anon_sym_LF,
  [sym_header_literal] = sym_header_literal,
  [anon_sym_define] = anon_sym_define,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_end] = anon_sym_end,
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_unroll] = anon_sym_unroll,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_struct] = anon_sym_struct,
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
  [sym_args_keyword] = sym_args_keyword,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_map_variable_token1] = aux_sym_map_variable_token1,
  [sym_scratch_variable] = sym_scratch_variable,
  [sym_identifier] = sym_identifier,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [sym_c_struct] = sym_c_struct,
  [sym_source_file] = sym_source_file,
  [sym_preamble] = sym_preamble,
  [sym__preamble_item] = sym__preamble_item,
  [sym_config_block] = sym_config_block,
  [sym__config_body] = sym__config_body,
  [sym_config_assignment] = sym_config_assignment,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_define] = sym_preproc_define,
  [sym_action_block] = sym_action_block,
  [sym_probes_list] = sym_probes_list,
  [sym_predicate] = sym_predicate,
  [sym__predicate_expression] = sym__predicate_expression,
  [sym_probe] = sym_probe,
  [sym_probe_provider] = sym_probe_provider,
  [sym_block] = sym_block,
  [sym__block_body] = sym__block_body,
  [sym__statement] = sym__statement,
  [sym__block_statement] = sym__block_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_while_statement] = sym_while_statement,
  [sym_unroll_statement] = sym_unroll_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_range] = sym_range,
  [sym__range_limit] = sym__range_limit,
  [sym__assignment] = sym__assignment,
  [sym__expression] = sym__expression,
  [sym__div_expression] = sym_binary_expression,
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
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_update_expression] = sym_update_expression,
  [sym__sufix_increment] = sym__sufix_increment,
  [sym__sufix_decrement] = sym__sufix_decrement,
  [sym__prefix_increment] = sym__prefix_increment,
  [sym__prefix_decrement] = sym__prefix_decrement,
  [sym_string_literal] = sym_string_literal,
  [sym__variable] = sym__variable,
  [sym_map_variable] = sym_map_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym__config_body_repeat1] = aux_sym__config_body_repeat1,
  [aux_sym_probes_list_repeat1] = aux_sym_probes_list_repeat1,
  [aux_sym__block_body_repeat1] = aux_sym__block_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_pointer_type_repeat1] = aux_sym_pointer_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_action] = alias_sym_action,
  [alias_sym_expression_statement] = alias_sym_expression_statement,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [anon_sym_if] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
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
  [sym_args_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
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
  [aux_sym_map_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_scratch_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_c_struct] = {
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
  [sym_action_block] = {
    .visible = true,
    .named = true,
  },
  [sym_probes_list] = {
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block_body] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__block_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unroll_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__range_limit] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__div_expression] = {
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
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__sufix_increment] = {
    .visible = false,
    .named = true,
  },
  [sym__sufix_decrement] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_increment] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_decrement] = {
    .visible = false,
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
  [aux_sym_probes_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_body_repeat1] = {
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
  [alias_sym_action] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_event = 7,
  field_field = 8,
  field_function = 9,
  field_index = 10,
  field_left = 11,
  field_module = 12,
  field_name = 13,
  field_operator = 14,
  field_path = 15,
  field_provider = 16,
  field_right = 17,
  field_type = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_event] = "event",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_left] = "left",
  [field_module] = "module",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_path] = "path",
  [field_provider] = "provider",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 3},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 3},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 1},
  [21] = {.index = 35, .length = 3},
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 2},
  [1] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [4] =
    {field_event, 2},
    {field_provider, 0},
  [6] =
    {field_name, 2},
  [7] =
    {field_arguments, 1},
    {field_function, 0},
  [9] =
    {field_left, 0},
    {field_operator, 1},
  [11] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 1},
  [14] =
    {field_name, 2},
    {field_value, 3},
  [16] =
    {field_argument, 0},
    {field_field, 2},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_event, 4},
    {field_module, 2},
    {field_provider, 0},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_type, 1},
    {field_value, 3},
  [28] =
    {field_argument, 0},
    {field_index, 2},
  [30] =
    {field_condition, 2},
    {field_consequence, 4},
  [32] =
    {field_body, 4},
    {field_condition, 2},
  [34] =
    {field_body, 4},
  [35] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [38] =
    {field_body, 6},
  [39] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_action,
  },
  [4] = {
    [0] = alias_sym_expression_statement,
  },
  [5] = {
    [2] = alias_sym_action,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_block, 2,
    sym_block,
    alias_sym_action,
  sym__expression, 2,
    sym__expression,
    alias_sym_expression_statement,
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
  [24] = 18,
  [25] = 18,
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
  [38] = 34,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 29,
  [59] = 59,
  [60] = 31,
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
  [85] = 11,
  [86] = 14,
  [87] = 32,
  [88] = 30,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 23,
  [103] = 20,
  [104] = 104,
  [105] = 23,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 20,
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
  [137] = 135,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
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
  [153] = 147,
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
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 187,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 187,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(194);
      ADVANCE_MAP(
        '!', 29,
        '"', 343,
        '#', 205,
        '$', 191,
        '%', 287,
        '&', 307,
        '(', 265,
        ')', 266,
        '*', 289,
        '+', 291,
        ',', 214,
        '-', 292,
        '.', 337,
        '/', 216,
        ':', 221,
        ';', 200,
        '<', 299,
        '=', 202,
        '>', 302,
        '@', 361,
        'B', 33,
        'E', 36,
        'U', 257,
        '[', 314,
        '\\', 192,
        ']', 315,
        '^', 309,
        'a', 143,
        'b', 65,
        'c', 126,
        'd', 66,
        'e', 103,
        'f', 232,
        'h', 225,
        'i', 227,
        'k', 237,
        'p', 243,
        'r', 38,
        's', 248,
        't', 250,
        'u', 252,
        'w', 260,
        '{', 203,
        '|', 310,
        '}', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '/') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 29,
        '%', 286,
        '&', 306,
        '(', 265,
        ')', 266,
        '*', 288,
        '+', 290,
        ',', 214,
        '-', 293,
        '.', 336,
        '/', 215,
        ';', 200,
        '<', 300,
        '=', 30,
        '>', 303,
        '[', 314,
        ']', 315,
        '^', 308,
        '|', 311,
        '}', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 343,
        '$', 191,
        '(', 265,
        ')', 266,
        '+', 14,
        '-', 15,
        '/', 11,
        '0', 351,
        '@', 361,
        ']', 315,
        'a', 392,
        '{', 203,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 343,
        '$', 191,
        '(', 265,
        '+', 14,
        '-', 15,
        '.', 16,
        '/', 11,
        '0', 351,
        '@', 361,
        ']', 315,
        'a', 392,
        'f', 388,
        'i', 375,
        'u', 386,
        'w', 377,
        '{', 203,
        '}', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 343,
        '$', 191,
        '(', 265,
        '+', 14,
        '-', 15,
        '/', 11,
        '0', 351,
        '@', 361,
        'a', 392,
        'b', 391,
        'i', 385,
        's', 401,
        'u', 379,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 343,
        '$', 191,
        '(', 265,
        '+', 14,
        '-', 15,
        '/', 11,
        '0', 351,
        '@', 361,
        'a', 392,
        'e', 383,
        'f', 388,
        'i', 375,
        'u', 386,
        'w', 377,
        '}', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '@') ADVANCE(361);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(341);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '0') ADVANCE(351);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(275);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(351);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(328);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(324);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(332);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(326);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(334);
      END_STATE();
    case 27:
      if (lookahead == '6') ADVANCE(322);
      END_STATE();
    case 28:
      if (lookahead == '6') ADVANCE(330);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(305);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(219);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 182:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 183:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 184:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 185:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 187:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 191:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 193:
      if (eof) ADVANCE(194);
      ADVANCE_MAP(
        '!', 29,
        '#', 205,
        '%', 287,
        '&', 307,
        ')', 266,
        '*', 289,
        '+', 291,
        ',', 214,
        '-', 292,
        '.', 336,
        '/', 216,
        ';', 200,
        '<', 299,
        '=', 202,
        '>', 302,
        'B', 33,
        'E', 36,
        'U', 257,
        '[', 314,
        ']', 315,
        '^', 309,
        'a', 158,
        'b', 64,
        'c', 126,
        'e', 112,
        'f', 233,
        'h', 225,
        'i', 228,
        'k', 237,
        'p', 243,
        'r', 38,
        's', 247,
        't', 250,
        'u', 253,
        'w', 259,
        '|', 310,
        '}', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(348);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_literal);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_bench);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_hardware);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_interval);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_iter);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_fentry);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_fexit);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_kprobe);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_kfunc);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_kretfunc);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_software);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_uprobe);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_usdt);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_aw);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_unroll);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_unroll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(341);
      if (lookahead == '=') ADVANCE(278);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(276);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(294);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '>') ADVANCE(297);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(312);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '|') ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(275);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_args_keyword);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_args_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 358,
        'U', 356,
        '_', 355,
        'l', 359,
        'm', 360,
        'n', 160,
        'u', 357,
        'E', 189,
        'e', 189,
        'X', 190,
        'x', 190,
        'd', 350,
        'h', 350,
        's', 350,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 358,
        'U', 356,
        '_', 355,
        'l', 359,
        'm', 360,
        'n', 160,
        'u', 357,
        'E', 189,
        'e', 189,
        'd', 350,
        'h', 350,
        's', 350,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 358,
        'U', 356,
        'd', 353,
        'l', 359,
        'm', 360,
        'n', 160,
        'u', 357,
        'h', 350,
        's', 350,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 358,
        'U', 356,
        'l', 359,
        'm', 360,
        'n', 160,
        'u', 357,
        'd', 350,
        'h', 350,
        's', 350,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 358,
        'U', 356,
        'l', 359,
        'm', 360,
        'n', 160,
        'u', 357,
        'd', 350,
        'h', 350,
        's', 350,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(350);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_scratch_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(370);
      if (lookahead == '3') ADVANCE(366);
      if (lookahead == '6') ADVANCE(368);
      if (lookahead == '8') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(371);
      if (lookahead == '3') ADVANCE(367);
      if (lookahead == '6') ADVANCE(369);
      if (lookahead == '8') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 193, .external_lex_state = 1},
  [2] = {.lex_state = 193, .external_lex_state = 1},
  [3] = {.lex_state = 193, .external_lex_state = 1},
  [4] = {.lex_state = 193},
  [5] = {.lex_state = 193},
  [6] = {.lex_state = 193},
  [7] = {.lex_state = 193},
  [8] = {.lex_state = 193, .external_lex_state = 1},
  [9] = {.lex_state = 193, .external_lex_state = 1},
  [10] = {.lex_state = 193, .external_lex_state = 1},
  [11] = {.lex_state = 193, .external_lex_state = 1},
  [12] = {.lex_state = 193, .external_lex_state = 1},
  [13] = {.lex_state = 193, .external_lex_state = 1},
  [14] = {.lex_state = 193, .external_lex_state = 1},
  [15] = {.lex_state = 193, .external_lex_state = 1},
  [16] = {.lex_state = 193, .external_lex_state = 1},
  [17] = {.lex_state = 193},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 193},
  [20] = {.lex_state = 193},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 193},
  [23] = {.lex_state = 193},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 193},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 193},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bench] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_hardware] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_interval] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_unroll] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
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
    [sym_args_keyword] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [aux_sym_map_variable_token1] = ACTIONS(1),
    [sym_scratch_variable] = ACTIONS(1),
    [sym_c_struct] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(179),
    [sym_preamble] = STATE(4),
    [sym__preamble_item] = STATE(2),
    [sym_config_block] = STATE(2),
    [sym_preproc_include] = STATE(2),
    [sym_preproc_define] = STATE(2),
    [sym_action_block] = STATE(6),
    [sym_probes_list] = STATE(126),
    [sym_probe] = STATE(128),
    [sym_probe_provider] = STATE(176),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_preamble_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_BEGIN] = ACTIONS(11),
    [anon_sym_begin] = ACTIONS(11),
    [anon_sym_END] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_bench] = ACTIONS(13),
    [anon_sym_self] = ACTIONS(13),
    [anon_sym_hardware] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(15),
    [anon_sym_interval] = ACTIONS(13),
    [anon_sym_i] = ACTIONS(15),
    [anon_sym_iter] = ACTIONS(13),
    [anon_sym_it] = ACTIONS(15),
    [anon_sym_fentry] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(15),
    [anon_sym_fexit] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_kprobe] = ACTIONS(13),
    [anon_sym_k] = ACTIONS(15),
    [anon_sym_kretprobe] = ACTIONS(13),
    [anon_sym_kr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(13),
    [anon_sym_kretfunc] = ACTIONS(13),
    [anon_sym_profile] = ACTIONS(13),
    [anon_sym_p] = ACTIONS(15),
    [anon_sym_rawtracepoint] = ACTIONS(13),
    [anon_sym_rt] = ACTIONS(13),
    [anon_sym_software] = ACTIONS(13),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_tracepoint] = ACTIONS(13),
    [anon_sym_t] = ACTIONS(15),
    [anon_sym_uprobe] = ACTIONS(13),
    [anon_sym_u] = ACTIONS(15),
    [anon_sym_uretprobe] = ACTIONS(13),
    [anon_sym_ur] = ACTIONS(15),
    [anon_sym_usdt] = ACTIONS(13),
    [anon_sym_U] = ACTIONS(13),
    [anon_sym_watchpoint] = ACTIONS(13),
    [anon_sym_w] = ACTIONS(15),
    [anon_sym_asyncwatchpoint] = ACTIONS(13),
    [anon_sym_aw] = ACTIONS(13),
    [sym_c_struct] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_config,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_c_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 5,
      sym__preamble_item,
      sym_config_block,
      sym_preproc_include,
      sym_preproc_define,
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
    ACTIONS(19), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [66] = 7,
    ACTIONS(25), 1,
      anon_sym_config,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_c_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 5,
      sym__preamble_item,
      sym_config_block,
      sym_preproc_include,
      sym_preproc_define,
      aux_sym_preamble_repeat1,
    ACTIONS(31), 12,
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
    ACTIONS(23), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [132] = 9,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_probes_list,
    STATE(128), 1,
      sym_probe,
    STATE(176), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
    ACTIONS(15), 12,
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
    ACTIONS(13), 24,
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
  [199] = 9,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_probes_list,
    STATE(128), 1,
      sym_probe,
    STATE(176), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(40), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [266] = 9,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_probes_list,
    STATE(128), 1,
      sym_probe,
    STATE(176), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
    ACTIONS(15), 12,
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
    ACTIONS(13), 24,
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
  [333] = 9,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_probes_list,
    STATE(128), 1,
      sym_probe,
    STATE(176), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
    ACTIONS(15), 12,
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
    ACTIONS(13), 24,
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
  [400] = 4,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 12,
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
    ACTIONS(51), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [456] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 12,
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
    ACTIONS(57), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [509] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 12,
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
    ACTIONS(61), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [562] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 12,
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
    ACTIONS(65), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [615] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 12,
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
    ACTIONS(69), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [668] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 12,
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
    ACTIONS(73), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [721] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 12,
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
    ACTIONS(77), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [774] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 12,
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
    ACTIONS(81), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [827] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 12,
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
    ACTIONS(85), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      anon_sym_POUND,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [880] = 6,
    STATE(157), 1,
      sym_probe,
    STATE(176), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
    ACTIONS(15), 12,
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
    ACTIONS(13), 24,
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
  [937] = 27,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_while,
    ACTIONS(97), 1,
      anon_sym_unroll,
    ACTIONS(99), 1,
      anon_sym_for,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__block_body_repeat1,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    STATE(163), 1,
      sym__assignment,
    STATE(167), 1,
      sym__statement,
    STATE(187), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(113), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1035] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 12,
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
    ACTIONS(117), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [1085] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 12,
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
    ACTIONS(121), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [1135] = 23,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_struct,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(95), 1,
      sym__expression,
    STATE(119), 1,
      sym_integer_type,
    STATE(154), 1,
      sym_array_type,
    STATE(193), 1,
      sym_type_specifier,
    STATE(195), 1,
      sym_pointer_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
    ACTIONS(127), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
  [1225] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 12,
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
    ACTIONS(129), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [1275] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 12,
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
    ACTIONS(133), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
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
  [1325] = 27,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_while,
    ACTIONS(97), 1,
      anon_sym_unroll,
    ACTIONS(99), 1,
      anon_sym_for,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym__block_body_repeat1,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    STATE(163), 1,
      sym__assignment,
    STATE(167), 1,
      sym__statement,
    STATE(202), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(113), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1423] = 27,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_while,
    ACTIONS(97), 1,
      anon_sym_unroll,
    ACTIONS(99), 1,
      anon_sym_for,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym__block_body_repeat1,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    STATE(163), 1,
      sym__assignment,
    STATE(167), 1,
      sym__statement,
    STATE(208), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(113), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1521] = 24,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_while,
    ACTIONS(150), 1,
      anon_sym_unroll,
    ACTIONS(153), 1,
      anon_sym_for,
    ACTIONS(156), 1,
      sym_args_keyword,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(162), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym_integer_literal,
    ACTIONS(171), 1,
      aux_sym_map_variable_token1,
    ACTIONS(174), 1,
      sym_scratch_variable,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    STATE(163), 1,
      sym__assignment,
    STATE(180), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(26), 6,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
      aux_sym__block_body_repeat1,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1611] = 25,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_while,
    ACTIONS(97), 1,
      anon_sym_unroll,
    ACTIONS(99), 1,
      anon_sym_for,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym__block_body_repeat1,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    STATE(163), 1,
      sym__assignment,
    STATE(168), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(109), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1703] = 5,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(182), 13,
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
    ACTIONS(180), 23,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1755] = 4,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 13,
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
    ACTIONS(188), 23,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1803] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 13,
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
    ACTIONS(194), 23,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1848] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 13,
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
    ACTIONS(198), 23,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1893] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 13,
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
    ACTIONS(202), 23,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1938] = 7,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(216), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(212), 10,
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
    ACTIONS(210), 12,
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
  [1988] = 18,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(90), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2055] = 18,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(100), 1,
      sym__expression,
    STATE(191), 1,
      sym__predicate_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2122] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(210), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(206), 17,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [2167] = 18,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(94), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2234] = 18,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(91), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2301] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(78), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2365] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(76), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2429] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(77), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2493] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(96), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2557] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(98), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2621] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(99), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2685] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(65), 1,
      sym__expression,
    STATE(68), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2749] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(93), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2813] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(70), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2877] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(89), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2941] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(71), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3005] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(92), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3069] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(72), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3133] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(73), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3197] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(74), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3261] = 17,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_args_keyword,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_integer_literal,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    ACTIONS(113), 1,
      sym_scratch_variable,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(45), 1,
      sym__div_left_side,
    STATE(55), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__div_expression,
    STATE(75), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(64), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3325] = 5,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(210), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(206), 17,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3364] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(226), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [3399] = 5,
    ACTIONS(214), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(216), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(206), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [3437] = 4,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(188), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3472] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(232), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3504] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(198), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3536] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(236), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3568] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(240), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3600] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(244), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3632] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(206), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3664] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(248), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3696] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(252), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3728] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(256), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3760] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(260), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3792] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(264), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3824] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3856] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(270), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [3890] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(270), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [3926] = 6,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(270), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [3964] = 9,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4008] = 10,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(268), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4054] = 11,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(268), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4102] = 13,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(268), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4154] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(292), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4186] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(296), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4218] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(300), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4250] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(304), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4282] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(308), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4314] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(312), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4346] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(316), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4378] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(65), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4410] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4442] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(202), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4474] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(194), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_RBRACK,
  [4506] = 8,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(268), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4548] = 16,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4604] = 16,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4660] = 14,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(330), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4712] = 16,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4768] = 16,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4824] = 15,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4877] = 14,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4928] = 14,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(342), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4979] = 14,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5029] = 14,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5079] = 13,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_AMP_AMP,
    ACTIONS(324), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(274), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(278), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5126] = 5,
    ACTIONS(354), 1,
      anon_sym_else,
    STATE(112), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(350), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5155] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 7,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(133), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5179] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 7,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(121), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5203] = 4,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(360), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5228] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(133), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5251] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(362), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5274] = 4,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(360), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5299] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(370), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(368), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5322] = 4,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(372), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(374), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5347] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(378), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(376), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5370] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(380), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5393] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(384), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5416] = 4,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(372), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(374), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5441] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(121), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5464] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 6,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(360), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5486] = 4,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(394), 2,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(392), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5507] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(394), 2,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(392), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5525] = 5,
    ACTIONS(111), 1,
      aux_sym_map_variable_token1,
    STATE(206), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(205), 2,
      sym_range,
      sym_map_variable,
    ACTIONS(396), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [5545] = 6,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_STAR,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      aux_sym_array_type_repeat1,
    STATE(149), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5565] = 5,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      sym_header_literal,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string_literal,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
  [5582] = 4,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [5597] = 4,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [5612] = 4,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [5627] = 4,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5642] = 4,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(106), 2,
      sym_block,
      sym_if_statement,
  [5657] = 5,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      sym_block,
    STATE(166), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5674] = 3,
    STATE(189), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [5687] = 5,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_SLASH,
    STATE(129), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5704] = 5,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5721] = 4,
    ACTIONS(449), 1,
      anon_sym_SLASH,
    ACTIONS(451), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(447), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [5736] = 5,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(139), 1,
      sym_config_assignment,
    STATE(198), 1,
      sym__config_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5753] = 4,
    ACTIONS(457), 1,
      aux_sym_map_variable_token1,
    ACTIONS(459), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym__variable,
      sym_map_variable,
  [5768] = 4,
    ACTIONS(457), 1,
      aux_sym_map_variable_token1,
    ACTIONS(461), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
  [5783] = 5,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_SLASH,
    STATE(134), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5800] = 4,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [5815] = 4,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [5830] = 4,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(480), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [5845] = 4,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [5860] = 4,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5874] = 3,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(488), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [5886] = 3,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(492), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [5898] = 4,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5912] = 4,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5926] = 4,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_STAR,
    STATE(145), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5940] = 4,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_STAR,
    STATE(145), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5954] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [5964] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5978] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5992] = 4,
    ACTIONS(505), 1,
      anon_sym_STAR,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6006] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6020] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(520), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [6030] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [6040] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6054] = 4,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_STAR,
    STATE(149), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6068] = 4,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6082] = 4,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6096] = 3,
    ACTIONS(468), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [6108] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [6117] = 3,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      sym_preproc_arg,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
  [6128] = 3,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6139] = 3,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6150] = 3,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    ACTIONS(536), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6161] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6170] = 3,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6181] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(540), 2,
      sym_integer_literal,
      sym_identifier,
  [6190] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6201] = 3,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6212] = 3,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6223] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6232] = 3,
    ACTIONS(548), 1,
      anon_sym_STAR,
    STATE(144), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6243] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6252] = 3,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(171), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6263] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(550), 2,
      sym_integer_literal,
      sym_identifier,
  [6272] = 3,
    ACTIONS(552), 1,
      anon_sym_include,
    ACTIONS(554), 1,
      anon_sym_define,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6283] = 3,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6294] = 2,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6302] = 2,
    ACTIONS(560), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6310] = 2,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6318] = 2,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6326] = 2,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6334] = 2,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6342] = 2,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6350] = 2,
    ACTIONS(572), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6358] = 2,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6366] = 2,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6374] = 2,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(404), 2,
      sym_line_comment,
      sym_block_comment,
  [6382] = 2,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6390] = 2,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6398] = 2,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6406] = 2,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6414] = 2,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6422] = 2,
    ACTIONS(590), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6430] = 2,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6438] = 2,
    ACTIONS(594), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6446] = 2,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6454] = 2,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6462] = 2,
    ACTIONS(598), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6470] = 2,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6478] = 2,
    ACTIONS(602), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6486] = 2,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6494] = 2,
    ACTIONS(606), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6502] = 2,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6510] = 2,
    ACTIONS(610), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6518] = 2,
    ACTIONS(612), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6526] = 2,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6534] = 2,
    ACTIONS(616), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6542] = 2,
    ACTIONS(618), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6550] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 199,
  [SMALL_STATE(6)] = 266,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 400,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 509,
  [SMALL_STATE(11)] = 562,
  [SMALL_STATE(12)] = 615,
  [SMALL_STATE(13)] = 668,
  [SMALL_STATE(14)] = 721,
  [SMALL_STATE(15)] = 774,
  [SMALL_STATE(16)] = 827,
  [SMALL_STATE(17)] = 880,
  [SMALL_STATE(18)] = 937,
  [SMALL_STATE(19)] = 1035,
  [SMALL_STATE(20)] = 1085,
  [SMALL_STATE(21)] = 1135,
  [SMALL_STATE(22)] = 1225,
  [SMALL_STATE(23)] = 1275,
  [SMALL_STATE(24)] = 1325,
  [SMALL_STATE(25)] = 1423,
  [SMALL_STATE(26)] = 1521,
  [SMALL_STATE(27)] = 1611,
  [SMALL_STATE(28)] = 1703,
  [SMALL_STATE(29)] = 1755,
  [SMALL_STATE(30)] = 1803,
  [SMALL_STATE(31)] = 1848,
  [SMALL_STATE(32)] = 1893,
  [SMALL_STATE(33)] = 1938,
  [SMALL_STATE(34)] = 1988,
  [SMALL_STATE(35)] = 2055,
  [SMALL_STATE(36)] = 2122,
  [SMALL_STATE(37)] = 2167,
  [SMALL_STATE(38)] = 2234,
  [SMALL_STATE(39)] = 2301,
  [SMALL_STATE(40)] = 2365,
  [SMALL_STATE(41)] = 2429,
  [SMALL_STATE(42)] = 2493,
  [SMALL_STATE(43)] = 2557,
  [SMALL_STATE(44)] = 2621,
  [SMALL_STATE(45)] = 2685,
  [SMALL_STATE(46)] = 2749,
  [SMALL_STATE(47)] = 2813,
  [SMALL_STATE(48)] = 2877,
  [SMALL_STATE(49)] = 2941,
  [SMALL_STATE(50)] = 3005,
  [SMALL_STATE(51)] = 3069,
  [SMALL_STATE(52)] = 3133,
  [SMALL_STATE(53)] = 3197,
  [SMALL_STATE(54)] = 3261,
  [SMALL_STATE(55)] = 3325,
  [SMALL_STATE(56)] = 3364,
  [SMALL_STATE(57)] = 3399,
  [SMALL_STATE(58)] = 3437,
  [SMALL_STATE(59)] = 3472,
  [SMALL_STATE(60)] = 3504,
  [SMALL_STATE(61)] = 3536,
  [SMALL_STATE(62)] = 3568,
  [SMALL_STATE(63)] = 3600,
  [SMALL_STATE(64)] = 3632,
  [SMALL_STATE(65)] = 3664,
  [SMALL_STATE(66)] = 3696,
  [SMALL_STATE(67)] = 3728,
  [SMALL_STATE(68)] = 3760,
  [SMALL_STATE(69)] = 3792,
  [SMALL_STATE(70)] = 3824,
  [SMALL_STATE(71)] = 3856,
  [SMALL_STATE(72)] = 3890,
  [SMALL_STATE(73)] = 3926,
  [SMALL_STATE(74)] = 3964,
  [SMALL_STATE(75)] = 4008,
  [SMALL_STATE(76)] = 4054,
  [SMALL_STATE(77)] = 4102,
  [SMALL_STATE(78)] = 4154,
  [SMALL_STATE(79)] = 4186,
  [SMALL_STATE(80)] = 4218,
  [SMALL_STATE(81)] = 4250,
  [SMALL_STATE(82)] = 4282,
  [SMALL_STATE(83)] = 4314,
  [SMALL_STATE(84)] = 4346,
  [SMALL_STATE(85)] = 4378,
  [SMALL_STATE(86)] = 4410,
  [SMALL_STATE(87)] = 4442,
  [SMALL_STATE(88)] = 4474,
  [SMALL_STATE(89)] = 4506,
  [SMALL_STATE(90)] = 4548,
  [SMALL_STATE(91)] = 4604,
  [SMALL_STATE(92)] = 4660,
  [SMALL_STATE(93)] = 4712,
  [SMALL_STATE(94)] = 4768,
  [SMALL_STATE(95)] = 4824,
  [SMALL_STATE(96)] = 4877,
  [SMALL_STATE(97)] = 4928,
  [SMALL_STATE(98)] = 4979,
  [SMALL_STATE(99)] = 5029,
  [SMALL_STATE(100)] = 5079,
  [SMALL_STATE(101)] = 5126,
  [SMALL_STATE(102)] = 5155,
  [SMALL_STATE(103)] = 5179,
  [SMALL_STATE(104)] = 5203,
  [SMALL_STATE(105)] = 5228,
  [SMALL_STATE(106)] = 5251,
  [SMALL_STATE(107)] = 5274,
  [SMALL_STATE(108)] = 5299,
  [SMALL_STATE(109)] = 5322,
  [SMALL_STATE(110)] = 5347,
  [SMALL_STATE(111)] = 5370,
  [SMALL_STATE(112)] = 5393,
  [SMALL_STATE(113)] = 5416,
  [SMALL_STATE(114)] = 5441,
  [SMALL_STATE(115)] = 5464,
  [SMALL_STATE(116)] = 5486,
  [SMALL_STATE(117)] = 5507,
  [SMALL_STATE(118)] = 5525,
  [SMALL_STATE(119)] = 5545,
  [SMALL_STATE(120)] = 5565,
  [SMALL_STATE(121)] = 5582,
  [SMALL_STATE(122)] = 5597,
  [SMALL_STATE(123)] = 5612,
  [SMALL_STATE(124)] = 5627,
  [SMALL_STATE(125)] = 5642,
  [SMALL_STATE(126)] = 5657,
  [SMALL_STATE(127)] = 5674,
  [SMALL_STATE(128)] = 5687,
  [SMALL_STATE(129)] = 5704,
  [SMALL_STATE(130)] = 5721,
  [SMALL_STATE(131)] = 5736,
  [SMALL_STATE(132)] = 5753,
  [SMALL_STATE(133)] = 5768,
  [SMALL_STATE(134)] = 5783,
  [SMALL_STATE(135)] = 5800,
  [SMALL_STATE(136)] = 5815,
  [SMALL_STATE(137)] = 5830,
  [SMALL_STATE(138)] = 5845,
  [SMALL_STATE(139)] = 5860,
  [SMALL_STATE(140)] = 5874,
  [SMALL_STATE(141)] = 5886,
  [SMALL_STATE(142)] = 5898,
  [SMALL_STATE(143)] = 5912,
  [SMALL_STATE(144)] = 5926,
  [SMALL_STATE(145)] = 5940,
  [SMALL_STATE(146)] = 5954,
  [SMALL_STATE(147)] = 5964,
  [SMALL_STATE(148)] = 5978,
  [SMALL_STATE(149)] = 5992,
  [SMALL_STATE(150)] = 6006,
  [SMALL_STATE(151)] = 6020,
  [SMALL_STATE(152)] = 6030,
  [SMALL_STATE(153)] = 6040,
  [SMALL_STATE(154)] = 6054,
  [SMALL_STATE(155)] = 6068,
  [SMALL_STATE(156)] = 6082,
  [SMALL_STATE(157)] = 6096,
  [SMALL_STATE(158)] = 6108,
  [SMALL_STATE(159)] = 6117,
  [SMALL_STATE(160)] = 6128,
  [SMALL_STATE(161)] = 6139,
  [SMALL_STATE(162)] = 6150,
  [SMALL_STATE(163)] = 6161,
  [SMALL_STATE(164)] = 6170,
  [SMALL_STATE(165)] = 6181,
  [SMALL_STATE(166)] = 6190,
  [SMALL_STATE(167)] = 6201,
  [SMALL_STATE(168)] = 6212,
  [SMALL_STATE(169)] = 6223,
  [SMALL_STATE(170)] = 6232,
  [SMALL_STATE(171)] = 6243,
  [SMALL_STATE(172)] = 6252,
  [SMALL_STATE(173)] = 6263,
  [SMALL_STATE(174)] = 6272,
  [SMALL_STATE(175)] = 6283,
  [SMALL_STATE(176)] = 6294,
  [SMALL_STATE(177)] = 6302,
  [SMALL_STATE(178)] = 6310,
  [SMALL_STATE(179)] = 6318,
  [SMALL_STATE(180)] = 6326,
  [SMALL_STATE(181)] = 6334,
  [SMALL_STATE(182)] = 6342,
  [SMALL_STATE(183)] = 6350,
  [SMALL_STATE(184)] = 6358,
  [SMALL_STATE(185)] = 6366,
  [SMALL_STATE(186)] = 6374,
  [SMALL_STATE(187)] = 6382,
  [SMALL_STATE(188)] = 6390,
  [SMALL_STATE(189)] = 6398,
  [SMALL_STATE(190)] = 6406,
  [SMALL_STATE(191)] = 6414,
  [SMALL_STATE(192)] = 6422,
  [SMALL_STATE(193)] = 6430,
  [SMALL_STATE(194)] = 6438,
  [SMALL_STATE(195)] = 6446,
  [SMALL_STATE(196)] = 6454,
  [SMALL_STATE(197)] = 6462,
  [SMALL_STATE(198)] = 6470,
  [SMALL_STATE(199)] = 6478,
  [SMALL_STATE(200)] = 6486,
  [SMALL_STATE(201)] = 6494,
  [SMALL_STATE(202)] = 6502,
  [SMALL_STATE(203)] = 6510,
  [SMALL_STATE(204)] = 6518,
  [SMALL_STATE(205)] = 6526,
  [SMALL_STATE(206)] = 6534,
  [SMALL_STATE(207)] = 6542,
  [SMALL_STATE(208)] = 6550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 4, 0, 7),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 4, 0, 7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 5, 0, 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 5, 0, 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 2, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 2, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 3, 0, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 3, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 12),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, 0, 12),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 8),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_expression, 2, 0, 10),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_expression, 2, 0, 10),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 13),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 13),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 16),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, 0, 17),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, 0, 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, 0, 13),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 18),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 18),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 19),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, 0, 19),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 22),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 22),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroll_statement, 5, 0, 20),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroll_statement, 5, 0, 20),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 21),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 21),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__predicate_expression, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_left_side, 2, 0, 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_left_side, 2, 0, 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 3, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 3, 0, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 5, 0, 14),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 5, 0, 14),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 3, 0, 0),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_assignment, 3, 0, 15),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [564] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe_provider, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 23),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_c_struct = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_c_struct] = sym_c_struct,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_c_struct] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bpftrace_external_scanner_create(void);
void tree_sitter_bpftrace_external_scanner_destroy(void *);
bool tree_sitter_bpftrace_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bpftrace_external_scanner_serialize(void *, char *);
void tree_sitter_bpftrace_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bpftrace_external_scanner_create,
      tree_sitter_bpftrace_external_scanner_destroy,
      tree_sitter_bpftrace_external_scanner_scan,
      tree_sitter_bpftrace_external_scanner_serialize,
      tree_sitter_bpftrace_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
