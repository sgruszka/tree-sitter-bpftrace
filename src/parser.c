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
#define STATE_COUNT 252
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 1
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_return = 57,
  anon_sym_break = 58,
  anon_sym_continue = 59,
  anon_sym_if = 60,
  anon_sym_LPAREN = 61,
  anon_sym_RPAREN = 62,
  anon_sym_else = 63,
  anon_sym_while = 64,
  anon_sym_unroll = 65,
  anon_sym_for = 66,
  anon_sym_DOT_DOT = 67,
  anon_sym_LT_LT_EQ = 68,
  anon_sym_GT_GT_EQ = 69,
  anon_sym_PLUS_EQ = 70,
  anon_sym_DASH_EQ = 71,
  anon_sym_STAR_EQ = 72,
  anon_sym_SLASH_EQ = 73,
  anon_sym_PERCENT_EQ = 74,
  anon_sym_AMP_EQ = 75,
  anon_sym_PIPE_EQ = 76,
  anon_sym_CARET_EQ = 77,
  anon_sym_PERCENT = 78,
  anon_sym_STAR = 79,
  anon_sym_PLUS = 80,
  anon_sym_DASH = 81,
  anon_sym_LT_LT = 82,
  anon_sym_GT_GT = 83,
  anon_sym_LT_EQ = 84,
  anon_sym_LT = 85,
  anon_sym_GT_EQ = 86,
  anon_sym_GT = 87,
  anon_sym_EQ_EQ = 88,
  anon_sym_BANG_EQ = 89,
  anon_sym_AMP = 90,
  anon_sym_CARET = 91,
  anon_sym_PIPE = 92,
  anon_sym_AMP_AMP = 93,
  anon_sym_PIPE_PIPE = 94,
  anon_sym_LBRACK = 95,
  anon_sym_RBRACK = 96,
  anon_sym_struct = 97,
  anon_sym_bool = 98,
  anon_sym_int8 = 99,
  anon_sym_int16 = 100,
  anon_sym_int32 = 101,
  anon_sym_int64 = 102,
  anon_sym_uint8 = 103,
  anon_sym_uint16 = 104,
  anon_sym_uint32 = 105,
  anon_sym_uint64 = 106,
  anon_sym_DOT = 107,
  anon_sym_DASH_GT = 108,
  sym_args_keyword = 109,
  anon_sym_PLUS_PLUS = 110,
  anon_sym_DASH_DASH = 111,
  anon_sym_DQUOTE = 112,
  aux_sym_string_literal_token1 = 113,
  aux_sym_string_literal_token2 = 114,
  sym_integer_literal = 115,
  aux_sym_map_variable_token1 = 116,
  sym_scratch_variable = 117,
  sym_identifier = 118,
  sym_wildcard_identifier = 119,
  sym_c_struct = 120,
  sym_source_file = 121,
  sym_preamble = 122,
  sym__preamble_item = 123,
  sym_config_block = 124,
  sym__config_body = 125,
  sym_config_assignment = 126,
  sym_preproc_include = 127,
  sym_preproc_define = 128,
  sym_action_block = 129,
  sym_probes_list = 130,
  sym_predicate = 131,
  sym__predicate_expression = 132,
  sym_probe = 133,
  sym_probe_provider = 134,
  sym_action = 135,
  sym__action_body = 136,
  sym_block = 137,
  sym__block_body = 138,
  sym__statement = 139,
  sym__flow_statement = 140,
  sym__block_statement = 141,
  sym_if_statement = 142,
  sym_else_clause = 143,
  sym_while_statement = 144,
  sym_unroll_statement = 145,
  sym_for_statement = 146,
  sym_range = 147,
  sym__range_limit = 148,
  sym__assignment = 149,
  sym__expression = 150,
  sym__div_expression = 151,
  sym__div_left_side = 152,
  sym_binary_expression = 153,
  sym_call_expression = 154,
  sym_arguments = 155,
  sym_cast_expression = 156,
  sym_type_specifier = 157,
  sym_array_type = 158,
  sym_pointer_type = 159,
  sym_integer_type = 160,
  sym_field_expression = 161,
  sym_subscript_expression = 162,
  sym_tuple_expression = 163,
  sym_parenthesized_expression = 164,
  sym_update_expression = 165,
  sym__sufix_increment = 166,
  sym__sufix_decrement = 167,
  sym__prefix_increment = 168,
  sym__prefix_decrement = 169,
  sym_string_literal = 170,
  sym__variable = 171,
  sym_map_variable = 172,
  aux_sym_source_file_repeat1 = 173,
  aux_sym_preamble_repeat1 = 174,
  aux_sym__config_body_repeat1 = 175,
  aux_sym_probes_list_repeat1 = 176,
  aux_sym__action_body_repeat1 = 177,
  aux_sym__block_body_repeat1 = 178,
  aux_sym_arguments_repeat1 = 179,
  aux_sym_array_type_repeat1 = 180,
  aux_sym_pointer_type_repeat1 = 181,
  aux_sym_string_literal_repeat1 = 182,
  alias_sym_expression_statement = 183,
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
  [anon_sym_return] = "return_statement",
  [anon_sym_break] = "break_statement",
  [anon_sym_continue] = "continue_statement",
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
  [sym_action] = "action",
  [sym__action_body] = "_action_body",
  [sym_block] = "block",
  [sym__block_body] = "_block_body",
  [sym__statement] = "_statement",
  [sym__flow_statement] = "_flow_statement",
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
  [aux_sym__action_body_repeat1] = "_action_body_repeat1",
  [aux_sym__block_body_repeat1] = "_block_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_pointer_type_repeat1] = "pointer_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
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
  [sym_action] = sym_action,
  [sym__action_body] = sym__action_body,
  [sym_block] = sym_block,
  [sym__block_body] = sym__block_body,
  [sym__statement] = sym__statement,
  [sym__flow_statement] = sym__flow_statement,
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
  [aux_sym__action_body_repeat1] = aux_sym__action_body_repeat1,
  [aux_sym__block_body_repeat1] = aux_sym__block_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_pointer_type_repeat1] = aux_sym_pointer_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_return] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = true,
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
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__action_body] = {
    .visible = false,
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
  [sym__flow_statement] = {
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
  [aux_sym__action_body_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 1},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 2},
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
  [3] = {
    [0] = alias_sym_expression_statement,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [10] = 9,
  [11] = 9,
  [12] = 9,
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
  [41] = 40,
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
  [58] = 58,
  [59] = 54,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 33,
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
  [87] = 19,
  [88] = 16,
  [89] = 34,
  [90] = 35,
  [91] = 36,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 106,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 110,
  [124] = 110,
  [125] = 125,
  [126] = 111,
  [127] = 115,
  [128] = 111,
  [129] = 129,
  [130] = 112,
  [131] = 117,
  [132] = 121,
  [133] = 133,
  [134] = 122,
  [135] = 110,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 141,
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
  [161] = 158,
  [162] = 156,
  [163] = 149,
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
  [177] = 169,
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
  [200] = 185,
  [201] = 188,
  [202] = 189,
  [203] = 186,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 230,
  [235] = 235,
  [236] = 230,
  [237] = 237,
  [238] = 238,
  [239] = 222,
  [240] = 223,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 230,
  [245] = 225,
  [246] = 238,
  [247] = 216,
  [248] = 210,
  [249] = 218,
  [250] = 250,
  [251] = 250,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(211);
      ADVANCE_MAP(
        '!', 31,
        '"', 366,
        '#', 222,
        '$', 208,
        '%', 310,
        '&', 330,
        '(', 288,
        ')', 289,
        '*', 312,
        '+', 314,
        ',', 231,
        '-', 315,
        '.', 360,
        '/', 233,
        ':', 238,
        ';', 217,
        '<', 322,
        '=', 219,
        '>', 325,
        '@', 384,
        'B', 35,
        'E', 38,
        'U', 274,
        '[', 337,
        '\\', 209,
        ']', 338,
        '^', 332,
        'a', 156,
        'b', 69,
        'c', 138,
        'd', 70,
        'e', 112,
        'f', 249,
        'h', 242,
        'i', 244,
        'k', 254,
        'p', 260,
        'r', 40,
        's', 265,
        't', 267,
        'u', 269,
        'w', 277,
        '{', 220,
        '|', 333,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == '\\') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '/') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 31,
        '%', 309,
        '&', 329,
        '(', 288,
        ')', 289,
        '*', 311,
        '+', 313,
        ',', 231,
        '-', 316,
        '.', 359,
        '/', 232,
        ';', 217,
        '<', 323,
        '=', 32,
        '>', 326,
        '[', 337,
        ']', 338,
        '^', 331,
        '|', 334,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        ')', 289,
        '+', 16,
        '-', 17,
        '/', 13,
        '0', 374,
        '@', 384,
        ']', 338,
        'a', 425,
        '{', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        '+', 16,
        '-', 17,
        '.', 18,
        '/', 13,
        '0', 374,
        '@', 384,
        ']', 338,
        'a', 425,
        'b', 427,
        'c', 420,
        'f', 422,
        'i', 402,
        'r', 397,
        'u', 417,
        'w', 404,
        '{', 220,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        '+', 16,
        '-', 17,
        '/', 13,
        '0', 374,
        '@', 384,
        'a', 425,
        'b', 427,
        'c', 420,
        'e', 411,
        'f', 422,
        'i', 402,
        'r', 397,
        'u', 417,
        'w', 404,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        '+', 16,
        '-', 17,
        '/', 13,
        '0', 374,
        '@', 384,
        'a', 425,
        'b', 424,
        'i', 418,
        's', 438,
        'u', 407,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        '+', 16,
        '-', 17,
        '/', 13,
        '0', 374,
        '@', 384,
        'a', 425,
        'e', 411,
        'f', 422,
        'i', 402,
        'r', 397,
        'u', 417,
        'w', 404,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 366,
        '$', 208,
        '(', 288,
        '+', 16,
        '-', 17,
        '/', 13,
        '0', 374,
        '@', 384,
        'a', 425,
        'f', 422,
        'i', 402,
        'r', 397,
        'u', 417,
        'w', 404,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(374);
      if (lookahead == '@') ADVANCE(384);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(364);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '0') ADVANCE(374);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(298);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(374);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(351);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(347);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(355);
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(349);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(357);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(345);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(353);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(236);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(234);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(279);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(279);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 200:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 201:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 203:
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 208:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(372);
      END_STATE();
    case 210:
      if (eof) ADVANCE(211);
      ADVANCE_MAP(
        '!', 31,
        '#', 222,
        '%', 310,
        '&', 330,
        ')', 289,
        '*', 312,
        '+', 314,
        ',', 231,
        '-', 315,
        '.', 359,
        '/', 233,
        ';', 217,
        '<', 322,
        '=', 219,
        '>', 325,
        'B', 35,
        'E', 38,
        'U', 274,
        '[', 337,
        ']', 338,
        '^', 332,
        'a', 172,
        'b', 68,
        'c', 143,
        'e', 121,
        'f', 250,
        'h', 242,
        'i', 245,
        'k', 254,
        'p', 260,
        'r', 41,
        's', 264,
        't', 267,
        'u', 270,
        'w', 276,
        '|', 333,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_header_literal);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bench);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_hardware);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_interval);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_iter);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_fentry);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_fexit);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_kprobe);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_kfunc);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_kretfunc);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_software);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_uprobe);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_usdt);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_aw);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_unroll);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_unroll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '=') ADVANCE(302);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(318);
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(317);
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '>') ADVANCE(320);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '>') ADVANCE(319);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(335);
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead == '|') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(298);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_args_keyword);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_args_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 381,
        'U', 379,
        '_', 378,
        'l', 382,
        'm', 383,
        'n', 174,
        'u', 380,
        'E', 206,
        'e', 206,
        'X', 207,
        'x', 207,
        'd', 373,
        'h', 373,
        's', 373,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 381,
        'U', 379,
        '_', 378,
        'l', 382,
        'm', 383,
        'n', 174,
        'u', 380,
        'E', 206,
        'e', 206,
        'd', 373,
        'h', 373,
        's', 373,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 381,
        'U', 379,
        'd', 376,
        'l', 382,
        'm', 383,
        'n', 174,
        'u', 380,
        'h', 373,
        's', 373,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 381,
        'U', 379,
        'l', 382,
        'm', 383,
        'n', 174,
        'u', 380,
        'd', 373,
        'h', 373,
        's', 373,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 381,
        'U', 379,
        'l', 382,
        'm', 383,
        'n', 174,
        'u', 380,
        'd', 373,
        'h', 373,
        's', 373,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(373);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_scratch_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(393);
      if (lookahead == '3') ADVANCE(389);
      if (lookahead == '6') ADVANCE(391);
      if (lookahead == '8') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(394);
      if (lookahead == '3') ADVANCE(390);
      if (lookahead == '6') ADVANCE(392);
      if (lookahead == '8') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 210, .external_lex_state = 1},
  [2] = {.lex_state = 210, .external_lex_state = 1},
  [3] = {.lex_state = 210, .external_lex_state = 1},
  [4] = {.lex_state = 210},
  [5] = {.lex_state = 210},
  [6] = {.lex_state = 210},
  [7] = {.lex_state = 210},
  [8] = {.lex_state = 210, .external_lex_state = 1},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 210, .external_lex_state = 1},
  [14] = {.lex_state = 210, .external_lex_state = 1},
  [15] = {.lex_state = 210, .external_lex_state = 1},
  [16] = {.lex_state = 210, .external_lex_state = 1},
  [17] = {.lex_state = 210, .external_lex_state = 1},
  [18] = {.lex_state = 210, .external_lex_state = 1},
  [19] = {.lex_state = 210, .external_lex_state = 1},
  [20] = {.lex_state = 210, .external_lex_state = 1},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 210},
  [25] = {.lex_state = 210},
  [26] = {.lex_state = 210},
  [27] = {.lex_state = 210},
  [28] = {.lex_state = 210},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 210},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
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
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
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
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 210},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
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
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
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
    [sym_source_file] = STATE(231),
    [sym_preamble] = STATE(4),
    [sym__preamble_item] = STATE(2),
    [sym_config_block] = STATE(2),
    [sym_preproc_include] = STATE(2),
    [sym_preproc_define] = STATE(2),
    [sym_action_block] = STATE(6),
    [sym_probes_list] = STATE(152),
    [sym_probe] = STATE(155),
    [sym_probe_provider] = STATE(211),
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
    STATE(152), 1,
      sym_probes_list,
    STATE(155), 1,
      sym_probe,
    STATE(211), 1,
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
  [199] = 9,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_probes_list,
    STATE(155), 1,
      sym_probe,
    STATE(211), 1,
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
  [266] = 9,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_probes_list,
    STATE(155), 1,
      sym_probe,
    STATE(211), 1,
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
  [333] = 9,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_probes_list,
    STATE(155), 1,
      sym_probe,
    STATE(211), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(42), 4,
      anon_sym_BEGIN,
      anon_sym_begin,
      anon_sym_END,
      anon_sym_end,
    ACTIONS(48), 12,
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
    ACTIONS(45), 24,
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
  [456] = 28,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_unroll,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym__block_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(230), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(184), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(59), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(116), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [560] = 28,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_unroll,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__block_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(244), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(184), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(59), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(116), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [664] = 28,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_unroll,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__block_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(234), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(184), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(59), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(116), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [768] = 28,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_unroll,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym__block_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(236), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(184), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(59), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(116), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 12,
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
    ACTIONS(93), 32,
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
  [925] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 12,
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
    ACTIONS(97), 32,
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
  [978] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(103), 12,
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
    ACTIONS(101), 32,
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
  [1031] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 12,
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
    ACTIONS(105), 32,
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
  [1084] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 12,
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
    ACTIONS(109), 32,
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
  [1137] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 12,
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
    ACTIONS(113), 32,
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
  [1190] = 3,
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
    ACTIONS(117), 32,
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
  [1243] = 3,
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
    ACTIONS(121), 32,
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
  [1296] = 26,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_unroll,
    ACTIONS(69), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym__block_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(187), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(125), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(119), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1394] = 25,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_while,
    ACTIONS(139), 1,
      anon_sym_unroll,
    ACTIONS(142), 1,
      anon_sym_for,
    ACTIONS(145), 1,
      sym_args_keyword,
    ACTIONS(148), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(151), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_integer_literal,
    ACTIONS(160), 1,
      aux_sym_map_variable_token1,
    ACTIONS(163), 1,
      sym_scratch_variable,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(226), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(127), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(22), 6,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
      aux_sym__block_body_repeat1,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1490] = 28,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      anon_sym_return,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_unroll,
    ACTIONS(179), 1,
      anon_sym_for,
    STATE(31), 1,
      aux_sym__action_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(191), 1,
      sym__statement,
    STATE(192), 1,
      sym__assignment,
    STATE(232), 1,
      sym__action_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(129), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [1591] = 6,
    STATE(171), 1,
      sym_probe,
    STATE(211), 1,
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
  [1648] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 12,
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
    ACTIONS(181), 29,
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
  [1698] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 12,
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
    ACTIONS(185), 29,
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
  [1748] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 12,
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
    ACTIONS(189), 29,
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
  [1798] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 12,
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
    ACTIONS(193), 29,
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
  [1848] = 23,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_struct,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(101), 1,
      sym__expression,
    STATE(143), 1,
      sym_integer_type,
    STATE(170), 1,
      sym_array_type,
    STATE(209), 1,
      sym_type_specifier,
    STATE(212), 1,
      sym_pointer_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
    ACTIONS(199), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
  [1938] = 25,
    ACTIONS(201), 1,
      anon_sym_return,
    ACTIONS(204), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_while,
    ACTIONS(213), 1,
      anon_sym_unroll,
    ACTIONS(216), 1,
      anon_sym_for,
    ACTIONS(219), 1,
      sym_args_keyword,
    ACTIONS(222), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_integer_literal,
    ACTIONS(234), 1,
      aux_sym_map_variable_token1,
    ACTIONS(237), 1,
      sym_scratch_variable,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(220), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(30), 6,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
      aux_sym__action_body_repeat1,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2031] = 26,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      anon_sym_while,
    ACTIONS(177), 1,
      anon_sym_unroll,
    ACTIONS(179), 1,
      anon_sym_for,
    ACTIONS(243), 1,
      anon_sym_return,
    STATE(30), 1,
      aux_sym__action_body_repeat1,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(102), 1,
      sym__expression,
    STATE(192), 1,
      sym__assignment,
    STATE(199), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(137), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2126] = 5,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(247), 13,
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
    ACTIONS(245), 23,
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
  [2178] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(255), 13,
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
    ACTIONS(253), 23,
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
  [2226] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 13,
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
    ACTIONS(259), 23,
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
  [2271] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 13,
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
    ACTIONS(263), 23,
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
  [2316] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 13,
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
    ACTIONS(267), 23,
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
  [2361] = 7,
    ACTIONS(273), 1,
      anon_sym_EQ,
    ACTIONS(279), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(271), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(277), 10,
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
    ACTIONS(275), 12,
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
  [2411] = 18,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(109), 1,
      sym__expression,
    STATE(233), 1,
      sym__predicate_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2478] = 7,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(275), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 17,
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
  [2523] = 18,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(99), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2590] = 18,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(96), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2657] = 18,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(97), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2724] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(100), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2788] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(70), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2852] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(71), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2916] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(72), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [2980] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(73), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3044] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(74), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3108] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(75), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3172] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(103), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3236] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(93), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3300] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(65), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3364] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(67), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3428] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(108), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3492] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(69), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3556] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(98), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3620] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(107), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3684] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(68), 1,
      sym__expression,
    STATE(94), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3748] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(104), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3812] = 17,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_args_keyword,
    ACTIONS(73), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(75), 1,
      anon_sym_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_integer_literal,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    ACTIONS(83), 1,
      sym_scratch_variable,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(51), 1,
      sym__div_left_side,
    STATE(61), 1,
      sym_field_expression,
    STATE(94), 1,
      sym__div_expression,
    STATE(105), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym__variable,
      sym_map_variable,
    STATE(79), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(85), 8,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_tuple_expression,
      sym_parenthesized_expression,
      sym_update_expression,
      sym_string_literal,
  [3876] = 5,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(275), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 17,
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
  [3915] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(293), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(291), 20,
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
  [3950] = 5,
    ACTIONS(279), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 16,
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
  [3988] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(255), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(253), 18,
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
  [4023] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(297), 18,
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
  [4055] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(301), 18,
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
  [4087] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 18,
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
  [4119] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(307), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 16,
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
  [4153] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(307), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 14,
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
  [4189] = 6,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(307), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 12,
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
  [4227] = 8,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 10,
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
  [4269] = 9,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(307), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(305), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4313] = 10,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(305), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4359] = 11,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(305), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4407] = 13,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(305), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [4459] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(329), 18,
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
  [4491] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(333), 18,
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
  [4523] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(337), 18,
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
  [4555] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(341), 18,
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
  [4587] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(345), 18,
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
  [4619] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(351), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(349), 18,
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
  [4651] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(353), 18,
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
  [4683] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(357), 18,
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
  [4715] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(361), 18,
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
  [4747] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 18,
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
  [4779] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(365), 18,
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
  [4811] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(117), 18,
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
  [4843] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(105), 18,
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
  [4875] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(259), 18,
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
  [4907] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(263), 18,
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
  [4939] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(267), 18,
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
  [4971] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(369), 18,
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
  [5003] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(373), 18,
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
  [5035] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(377), 18,
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
  [5067] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(381), 18,
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
  [5099] = 16,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5155] = 16,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5211] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5263] = 16,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5319] = 16,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5375] = 15,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5428] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5479] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(407), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5530] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5580] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5630] = 5,
    ACTIONS(417), 1,
      anon_sym_else,
    STATE(117), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(413), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(415), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5662] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5712] = 14,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5762] = 13,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_CARET,
    ACTIONS(325), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_AMP_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(311), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(315), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5809] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(427), 10,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5836] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(431), 10,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5863] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(433), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(435), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5889] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(431), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5915] = 5,
    ACTIONS(437), 1,
      anon_sym_else,
    STATE(131), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(413), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [5945] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(441), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5971] = 4,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(447), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(445), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [5999] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(449), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(451), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6025] = 4,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(455), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6053] = 4,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(447), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(445), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6081] = 4,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(455), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6109] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(461), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(463), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6135] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(467), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6161] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(427), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6187] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(427), 8,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6212] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(455), 9,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6237] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(431), 8,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
  [6262] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(441), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(439), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6286] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6310] = 4,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(473), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6336] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(433), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6360] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(449), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6384] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(461), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6408] = 4,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(479), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6434] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6458] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6482] = 4,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(479), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6508] = 4,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(473), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6534] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 7,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(479), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6557] = 4,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 2,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(485), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6578] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 2,
      sym_args_keyword,
      sym_identifier,
    ACTIONS(485), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [6596] = 5,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    STATE(228), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(240), 2,
      sym_range,
      sym_map_variable,
    ACTIONS(489), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [6616] = 5,
    ACTIONS(81), 1,
      aux_sym_map_variable_token1,
    STATE(228), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(223), 2,
      sym_range,
      sym_map_variable,
    ACTIONS(489), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [6636] = 6,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_STAR,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_array_type_repeat1,
    STATE(181), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6656] = 4,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(501), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [6671] = 5,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(174), 1,
      sym_config_assignment,
    STATE(215), 1,
      sym__config_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6688] = 4,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6703] = 5,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6720] = 4,
    ACTIONS(520), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [6735] = 4,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(134), 2,
      sym_block,
      sym_if_statement,
  [6750] = 3,
    STATE(224), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [6763] = 4,
    ACTIONS(531), 1,
      anon_sym_SLASH,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [6778] = 5,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_action,
    STATE(193), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6795] = 4,
    ACTIONS(539), 1,
      aux_sym_map_variable_token1,
    ACTIONS(541), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(81), 2,
      sym__variable,
      sym_map_variable,
  [6810] = 4,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [6825] = 5,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_SLASH,
    STATE(159), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6842] = 4,
    ACTIONS(551), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [6857] = 5,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      sym_header_literal,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_string_literal,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
  [6874] = 4,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [6889] = 5,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(567), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6906] = 4,
    ACTIONS(539), 1,
      aux_sym_map_variable_token1,
    ACTIONS(569), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(83), 2,
      sym__variable,
      sym_map_variable,
  [6921] = 4,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(573), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [6936] = 4,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [6951] = 4,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    ACTIONS(579), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(122), 2,
      sym_block,
      sym_if_statement,
  [6966] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6980] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_STAR,
    STATE(165), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6994] = 4,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7008] = 4,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7022] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(595), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [7032] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7046] = 4,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_STAR,
    STATE(181), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7060] = 3,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [7072] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(518), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [7082] = 3,
    ACTIONS(601), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [7094] = 4,
    ACTIONS(603), 1,
      anon_sym_SEMI,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7108] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7122] = 3,
    ACTIONS(611), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(609), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [7134] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7148] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [7158] = 4,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7172] = 4,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_STAR,
    STATE(165), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7186] = 4,
    ACTIONS(623), 1,
      anon_sym_STAR,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7200] = 4,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7214] = 3,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      sym_preproc_arg,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
  [7225] = 3,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7236] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7247] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7258] = 3,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7269] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7280] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7291] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(637), 2,
      sym_integer_literal,
      sym_identifier,
  [7300] = 3,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7311] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(641), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7320] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7331] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [7340] = 3,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(204), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7351] = 3,
    ACTIONS(643), 1,
      anon_sym_include,
    ACTIONS(645), 1,
      anon_sym_define,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7362] = 3,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7373] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7382] = 3,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7393] = 3,
    ACTIONS(655), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7404] = 3,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7415] = 3,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7426] = 3,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7437] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(593), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7446] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 2,
      sym_integer_literal,
      sym_identifier,
  [7455] = 3,
    ACTIONS(659), 1,
      anon_sym_STAR,
    STATE(180), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7466] = 2,
    ACTIONS(661), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7474] = 2,
    ACTIONS(663), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7482] = 2,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7490] = 2,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7498] = 2,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7506] = 2,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7514] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7522] = 2,
    ACTIONS(673), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7530] = 2,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7538] = 2,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7546] = 2,
    ACTIONS(679), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7554] = 2,
    ACTIONS(681), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7562] = 2,
    ACTIONS(683), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7570] = 2,
    ACTIONS(685), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7578] = 2,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7586] = 2,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7594] = 2,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7602] = 2,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7610] = 2,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7618] = 2,
    ACTIONS(697), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7626] = 2,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7634] = 2,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7642] = 2,
    ACTIONS(703), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7650] = 2,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7658] = 2,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7666] = 2,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7674] = 2,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7682] = 2,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7690] = 2,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(497), 2,
      sym_line_comment,
      sym_block_comment,
  [7698] = 2,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7706] = 2,
    ACTIONS(719), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7714] = 2,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7722] = 2,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7730] = 2,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7738] = 2,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7746] = 2,
    ACTIONS(729), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7754] = 2,
    ACTIONS(731), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7762] = 2,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7770] = 2,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7778] = 2,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7786] = 2,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7794] = 2,
    ACTIONS(741), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7802] = 2,
    ACTIONS(743), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7810] = 2,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7818] = 2,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
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
  [SMALL_STATE(10)] = 560,
  [SMALL_STATE(11)] = 664,
  [SMALL_STATE(12)] = 768,
  [SMALL_STATE(13)] = 872,
  [SMALL_STATE(14)] = 925,
  [SMALL_STATE(15)] = 978,
  [SMALL_STATE(16)] = 1031,
  [SMALL_STATE(17)] = 1084,
  [SMALL_STATE(18)] = 1137,
  [SMALL_STATE(19)] = 1190,
  [SMALL_STATE(20)] = 1243,
  [SMALL_STATE(21)] = 1296,
  [SMALL_STATE(22)] = 1394,
  [SMALL_STATE(23)] = 1490,
  [SMALL_STATE(24)] = 1591,
  [SMALL_STATE(25)] = 1648,
  [SMALL_STATE(26)] = 1698,
  [SMALL_STATE(27)] = 1748,
  [SMALL_STATE(28)] = 1798,
  [SMALL_STATE(29)] = 1848,
  [SMALL_STATE(30)] = 1938,
  [SMALL_STATE(31)] = 2031,
  [SMALL_STATE(32)] = 2126,
  [SMALL_STATE(33)] = 2178,
  [SMALL_STATE(34)] = 2226,
  [SMALL_STATE(35)] = 2271,
  [SMALL_STATE(36)] = 2316,
  [SMALL_STATE(37)] = 2361,
  [SMALL_STATE(38)] = 2411,
  [SMALL_STATE(39)] = 2478,
  [SMALL_STATE(40)] = 2523,
  [SMALL_STATE(41)] = 2590,
  [SMALL_STATE(42)] = 2657,
  [SMALL_STATE(43)] = 2724,
  [SMALL_STATE(44)] = 2788,
  [SMALL_STATE(45)] = 2852,
  [SMALL_STATE(46)] = 2916,
  [SMALL_STATE(47)] = 2980,
  [SMALL_STATE(48)] = 3044,
  [SMALL_STATE(49)] = 3108,
  [SMALL_STATE(50)] = 3172,
  [SMALL_STATE(51)] = 3236,
  [SMALL_STATE(52)] = 3300,
  [SMALL_STATE(53)] = 3364,
  [SMALL_STATE(54)] = 3428,
  [SMALL_STATE(55)] = 3492,
  [SMALL_STATE(56)] = 3556,
  [SMALL_STATE(57)] = 3620,
  [SMALL_STATE(58)] = 3684,
  [SMALL_STATE(59)] = 3748,
  [SMALL_STATE(60)] = 3812,
  [SMALL_STATE(61)] = 3876,
  [SMALL_STATE(62)] = 3915,
  [SMALL_STATE(63)] = 3950,
  [SMALL_STATE(64)] = 3988,
  [SMALL_STATE(65)] = 4023,
  [SMALL_STATE(66)] = 4055,
  [SMALL_STATE(67)] = 4087,
  [SMALL_STATE(68)] = 4119,
  [SMALL_STATE(69)] = 4153,
  [SMALL_STATE(70)] = 4189,
  [SMALL_STATE(71)] = 4227,
  [SMALL_STATE(72)] = 4269,
  [SMALL_STATE(73)] = 4313,
  [SMALL_STATE(74)] = 4359,
  [SMALL_STATE(75)] = 4407,
  [SMALL_STATE(76)] = 4459,
  [SMALL_STATE(77)] = 4491,
  [SMALL_STATE(78)] = 4523,
  [SMALL_STATE(79)] = 4555,
  [SMALL_STATE(80)] = 4587,
  [SMALL_STATE(81)] = 4619,
  [SMALL_STATE(82)] = 4651,
  [SMALL_STATE(83)] = 4683,
  [SMALL_STATE(84)] = 4715,
  [SMALL_STATE(85)] = 4747,
  [SMALL_STATE(86)] = 4779,
  [SMALL_STATE(87)] = 4811,
  [SMALL_STATE(88)] = 4843,
  [SMALL_STATE(89)] = 4875,
  [SMALL_STATE(90)] = 4907,
  [SMALL_STATE(91)] = 4939,
  [SMALL_STATE(92)] = 4971,
  [SMALL_STATE(93)] = 5003,
  [SMALL_STATE(94)] = 5035,
  [SMALL_STATE(95)] = 5067,
  [SMALL_STATE(96)] = 5099,
  [SMALL_STATE(97)] = 5155,
  [SMALL_STATE(98)] = 5211,
  [SMALL_STATE(99)] = 5263,
  [SMALL_STATE(100)] = 5319,
  [SMALL_STATE(101)] = 5375,
  [SMALL_STATE(102)] = 5428,
  [SMALL_STATE(103)] = 5479,
  [SMALL_STATE(104)] = 5530,
  [SMALL_STATE(105)] = 5580,
  [SMALL_STATE(106)] = 5630,
  [SMALL_STATE(107)] = 5662,
  [SMALL_STATE(108)] = 5712,
  [SMALL_STATE(109)] = 5762,
  [SMALL_STATE(110)] = 5809,
  [SMALL_STATE(111)] = 5836,
  [SMALL_STATE(112)] = 5863,
  [SMALL_STATE(113)] = 5889,
  [SMALL_STATE(114)] = 5915,
  [SMALL_STATE(115)] = 5945,
  [SMALL_STATE(116)] = 5971,
  [SMALL_STATE(117)] = 5999,
  [SMALL_STATE(118)] = 6025,
  [SMALL_STATE(119)] = 6053,
  [SMALL_STATE(120)] = 6081,
  [SMALL_STATE(121)] = 6109,
  [SMALL_STATE(122)] = 6135,
  [SMALL_STATE(123)] = 6161,
  [SMALL_STATE(124)] = 6187,
  [SMALL_STATE(125)] = 6212,
  [SMALL_STATE(126)] = 6237,
  [SMALL_STATE(127)] = 6262,
  [SMALL_STATE(128)] = 6286,
  [SMALL_STATE(129)] = 6310,
  [SMALL_STATE(130)] = 6336,
  [SMALL_STATE(131)] = 6360,
  [SMALL_STATE(132)] = 6384,
  [SMALL_STATE(133)] = 6408,
  [SMALL_STATE(134)] = 6434,
  [SMALL_STATE(135)] = 6458,
  [SMALL_STATE(136)] = 6482,
  [SMALL_STATE(137)] = 6508,
  [SMALL_STATE(138)] = 6534,
  [SMALL_STATE(139)] = 6557,
  [SMALL_STATE(140)] = 6578,
  [SMALL_STATE(141)] = 6596,
  [SMALL_STATE(142)] = 6616,
  [SMALL_STATE(143)] = 6636,
  [SMALL_STATE(144)] = 6656,
  [SMALL_STATE(145)] = 6671,
  [SMALL_STATE(146)] = 6688,
  [SMALL_STATE(147)] = 6703,
  [SMALL_STATE(148)] = 6720,
  [SMALL_STATE(149)] = 6735,
  [SMALL_STATE(150)] = 6750,
  [SMALL_STATE(151)] = 6763,
  [SMALL_STATE(152)] = 6778,
  [SMALL_STATE(153)] = 6795,
  [SMALL_STATE(154)] = 6810,
  [SMALL_STATE(155)] = 6825,
  [SMALL_STATE(156)] = 6842,
  [SMALL_STATE(157)] = 6857,
  [SMALL_STATE(158)] = 6874,
  [SMALL_STATE(159)] = 6889,
  [SMALL_STATE(160)] = 6906,
  [SMALL_STATE(161)] = 6921,
  [SMALL_STATE(162)] = 6936,
  [SMALL_STATE(163)] = 6951,
  [SMALL_STATE(164)] = 6966,
  [SMALL_STATE(165)] = 6980,
  [SMALL_STATE(166)] = 6994,
  [SMALL_STATE(167)] = 7008,
  [SMALL_STATE(168)] = 7022,
  [SMALL_STATE(169)] = 7032,
  [SMALL_STATE(170)] = 7046,
  [SMALL_STATE(171)] = 7060,
  [SMALL_STATE(172)] = 7072,
  [SMALL_STATE(173)] = 7082,
  [SMALL_STATE(174)] = 7094,
  [SMALL_STATE(175)] = 7108,
  [SMALL_STATE(176)] = 7122,
  [SMALL_STATE(177)] = 7134,
  [SMALL_STATE(178)] = 7148,
  [SMALL_STATE(179)] = 7158,
  [SMALL_STATE(180)] = 7172,
  [SMALL_STATE(181)] = 7186,
  [SMALL_STATE(182)] = 7200,
  [SMALL_STATE(183)] = 7214,
  [SMALL_STATE(184)] = 7225,
  [SMALL_STATE(185)] = 7236,
  [SMALL_STATE(186)] = 7247,
  [SMALL_STATE(187)] = 7258,
  [SMALL_STATE(188)] = 7269,
  [SMALL_STATE(189)] = 7280,
  [SMALL_STATE(190)] = 7291,
  [SMALL_STATE(191)] = 7300,
  [SMALL_STATE(192)] = 7311,
  [SMALL_STATE(193)] = 7320,
  [SMALL_STATE(194)] = 7331,
  [SMALL_STATE(195)] = 7340,
  [SMALL_STATE(196)] = 7351,
  [SMALL_STATE(197)] = 7362,
  [SMALL_STATE(198)] = 7373,
  [SMALL_STATE(199)] = 7382,
  [SMALL_STATE(200)] = 7393,
  [SMALL_STATE(201)] = 7404,
  [SMALL_STATE(202)] = 7415,
  [SMALL_STATE(203)] = 7426,
  [SMALL_STATE(204)] = 7437,
  [SMALL_STATE(205)] = 7446,
  [SMALL_STATE(206)] = 7455,
  [SMALL_STATE(207)] = 7466,
  [SMALL_STATE(208)] = 7474,
  [SMALL_STATE(209)] = 7482,
  [SMALL_STATE(210)] = 7490,
  [SMALL_STATE(211)] = 7498,
  [SMALL_STATE(212)] = 7506,
  [SMALL_STATE(213)] = 7514,
  [SMALL_STATE(214)] = 7522,
  [SMALL_STATE(215)] = 7530,
  [SMALL_STATE(216)] = 7538,
  [SMALL_STATE(217)] = 7546,
  [SMALL_STATE(218)] = 7554,
  [SMALL_STATE(219)] = 7562,
  [SMALL_STATE(220)] = 7570,
  [SMALL_STATE(221)] = 7578,
  [SMALL_STATE(222)] = 7586,
  [SMALL_STATE(223)] = 7594,
  [SMALL_STATE(224)] = 7602,
  [SMALL_STATE(225)] = 7610,
  [SMALL_STATE(226)] = 7618,
  [SMALL_STATE(227)] = 7626,
  [SMALL_STATE(228)] = 7634,
  [SMALL_STATE(229)] = 7642,
  [SMALL_STATE(230)] = 7650,
  [SMALL_STATE(231)] = 7658,
  [SMALL_STATE(232)] = 7666,
  [SMALL_STATE(233)] = 7674,
  [SMALL_STATE(234)] = 7682,
  [SMALL_STATE(235)] = 7690,
  [SMALL_STATE(236)] = 7698,
  [SMALL_STATE(237)] = 7706,
  [SMALL_STATE(238)] = 7714,
  [SMALL_STATE(239)] = 7722,
  [SMALL_STATE(240)] = 7730,
  [SMALL_STATE(241)] = 7738,
  [SMALL_STATE(242)] = 7746,
  [SMALL_STATE(243)] = 7754,
  [SMALL_STATE(244)] = 7762,
  [SMALL_STATE(245)] = 7770,
  [SMALL_STATE(246)] = 7778,
  [SMALL_STATE(247)] = 7786,
  [SMALL_STATE(248)] = 7794,
  [SMALL_STATE(249)] = 7802,
  [SMALL_STATE(250)] = 7810,
  [SMALL_STATE(251)] = 7818,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 4, 0, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 4, 0, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 5, 0, 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 5, 0, 9),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 5, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 5, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 14),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 14),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, 0, 15),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, 0, 15),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 6),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_expression, 2, 0, 8),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_expression, 2, 0, 8),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, 0, 11),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 16),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 16),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 17),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, 0, 17),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 19),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 19),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroll_statement, 5, 0, 18),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroll_statement, 5, 0, 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__predicate_expression, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_left_side, 2, 0, 7),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_left_side, 2, 0, 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 3, 0, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 3, 0, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 3, 0, 0),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 5, 0, 12),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 5, 0, 12),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_assignment, 3, 0, 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 21),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [707] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe_provider, 1, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
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
