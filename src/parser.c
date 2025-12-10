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
#define STATE_COUNT 346
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 226
#define ALIAS_COUNT 1
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 49

enum ts_symbol_identifiers {
  sym_line_comment = 1,
  sym_block_comment = 2,
  sym_hashbang = 3,
  anon_sym_SEMI = 4,
  anon_sym_config = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_c_preproc = 9,
  anon_sym_COMMA = 10,
  anon_sym_SLASH = 11,
  anon_sym_BEGIN = 12,
  anon_sym_END = 13,
  anon_sym_begin = 14,
  anon_sym_end = 15,
  anon_sym_COLON = 16,
  anon_sym_fentry = 17,
  anon_sym_f = 18,
  anon_sym_fexit = 19,
  anon_sym_fr = 20,
  anon_sym_kfunc = 21,
  anon_sym_kretfunc = 22,
  anon_sym_kprobe = 23,
  anon_sym_k = 24,
  anon_sym_kretprobe = 25,
  anon_sym_kr = 26,
  anon_sym_uprobe = 27,
  anon_sym_u = 28,
  anon_sym_uretprobe = 29,
  anon_sym_ur = 30,
  anon_sym_tracepoint = 31,
  anon_sym_t = 32,
  anon_sym_rawtracepoint = 33,
  anon_sym_rt = 34,
  anon_sym_hardware = 35,
  anon_sym_h = 36,
  anon_sym_software = 37,
  anon_sym_s = 38,
  anon_sym_bench = 39,
  anon_sym_test = 40,
  anon_sym_us = 41,
  anon_sym_ms = 42,
  anon_sym_profile = 43,
  anon_sym_p = 44,
  anon_sym_interval = 45,
  anon_sym_i = 46,
  anon_sym_iter = 47,
  anon_sym_it = 48,
  anon_sym_usdt = 49,
  anon_sym_U = 50,
  anon_sym_watchpoint = 51,
  anon_sym_w = 52,
  anon_sym_asyncwatchpoint = 53,
  anon_sym_aw = 54,
  anon_sym_r = 55,
  anon_sym_x = 56,
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
  anon_sym_GT_EQ = 85,
  anon_sym_LT = 86,
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
  anon_sym_bool = 97,
  anon_sym_int8 = 98,
  anon_sym_int16 = 99,
  anon_sym_int32 = 100,
  anon_sym_int64 = 101,
  anon_sym_uint8 = 102,
  anon_sym_uint16 = 103,
  anon_sym_uint32 = 104,
  anon_sym_uint64 = 105,
  anon_sym_struct = 106,
  anon_sym_DOT = 107,
  anon_sym_DASH_GT = 108,
  sym_args_keyword = 109,
  anon_sym_sizeof = 110,
  anon_sym_offsetof = 111,
  anon_sym_QMARK = 112,
  anon_sym_BANG = 113,
  anon_sym_TILDE = 114,
  anon_sym_PLUS_PLUS = 115,
  anon_sym_DASH_DASH = 116,
  anon_sym_DQUOTE = 117,
  aux_sym_string_literal_token1 = 118,
  aux_sym_string_literal_token2 = 119,
  sym_integer_literal = 120,
  anon_sym_true = 121,
  anon_sym_false = 122,
  aux_sym_map_variable_token1 = 123,
  sym_scratch_variable = 124,
  sym_identifier = 125,
  sym_wildcard_identifier = 126,
  sym_file_identifier = 127,
  sym_identifier_with_dash = 128,
  sym_c_struct = 129,
  sym_source_file = 130,
  sym_preamble = 131,
  sym__preamble_item = 132,
  sym_config_block = 133,
  sym__config_body = 134,
  sym_config_assignment = 135,
  sym_action_block = 136,
  sym_probes_list = 137,
  sym_predicate = 138,
  sym__predicate_expression = 139,
  sym_probe = 140,
  sym_begin_end_provider = 141,
  sym__fentry_fexit = 142,
  sym__probe_arguments__optional_module_and_function = 143,
  sym_fentry_fexit_provider = 144,
  sym__kprobe_kretprobe = 145,
  sym_kprobe_kretprobe_provider = 146,
  sym__uprobe_uretprobe = 147,
  sym_uprobe_uretprobe_provider = 148,
  sym__tracepoint = 149,
  sym_tracepoint_provider = 150,
  sym__rawtracepoint = 151,
  sym_rawtracepoint_provider = 152,
  sym__hardware_event = 153,
  sym__software_event = 154,
  sym_hardware_event_provider = 155,
  sym_software_event_provider = 156,
  sym__probe_arguments__event_and_optional_count = 157,
  sym__bench_test = 158,
  sym_bench_test_provider = 159,
  sym__profile_interval = 160,
  sym_time_unit = 161,
  sym_profile_interval_provider = 162,
  sym__iter = 163,
  sym_iter_provider = 164,
  sym__usdt = 165,
  sym_ustd_provider = 166,
  sym__watchpoint = 167,
  sym_watchpoint_provider = 168,
  sym_watchpoint_mode = 169,
  sym_action = 170,
  sym__action_body = 171,
  sym_block = 172,
  sym__block_body = 173,
  sym__statement = 174,
  sym__flow_statement = 175,
  sym__block_statement = 176,
  sym_if_statement = 177,
  sym_else_clause = 178,
  sym_while_statement = 179,
  sym_unroll_statement = 180,
  sym_for_statement = 181,
  sym_range = 182,
  sym__range_limit = 183,
  sym__assignment = 184,
  sym__expression = 185,
  sym__div_expression = 186,
  sym__div_left_side = 187,
  sym_binary_expression = 188,
  sym_call_expression = 189,
  sym_arguments = 190,
  sym_cast_expression = 191,
  sym_type_specifier = 192,
  sym_array_type = 193,
  sym_pointer_type = 194,
  sym_integer_type = 195,
  sym_struct_type = 196,
  sym_field_expression = 197,
  sym_subscript_expression = 198,
  sym_sizeof_expression = 199,
  sym_offsetof_expression = 200,
  sym_pointer_expression = 201,
  sym_conditional_expression = 202,
  sym_unary_expression = 203,
  sym_tuple_expression = 204,
  sym_parenthesized_expression = 205,
  sym_update_expression = 206,
  sym__sufix_increment = 207,
  sym__sufix_decrement = 208,
  sym__prefix_increment = 209,
  sym__prefix_decrement = 210,
  sym_string_literal = 211,
  sym_boolean_literal = 212,
  sym__variable = 213,
  sym_map_variable = 214,
  aux_sym_source_file_repeat1 = 215,
  aux_sym_preamble_repeat1 = 216,
  aux_sym__config_body_repeat1 = 217,
  aux_sym_probes_list_repeat1 = 218,
  aux_sym__action_body_repeat1 = 219,
  aux_sym__block_body_repeat1 = 220,
  aux_sym_arguments_repeat1 = 221,
  aux_sym_array_type_repeat1 = 222,
  aux_sym_pointer_type_repeat1 = 223,
  aux_sym_offsetof_expression_repeat1 = 224,
  aux_sym_string_literal_repeat1 = 225,
  alias_sym_expression_statement = 226,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_hashbang] = "hashbang",
  [anon_sym_SEMI] = ";",
  [anon_sym_config] = "config",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_c_preproc] = "c_preproc",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_fentry] = "fentry",
  [anon_sym_f] = "f",
  [anon_sym_fexit] = "fexit",
  [anon_sym_fr] = "fr",
  [anon_sym_kfunc] = "kfunc",
  [anon_sym_kretfunc] = "kretfunc",
  [anon_sym_kprobe] = "kprobe",
  [anon_sym_k] = "k",
  [anon_sym_kretprobe] = "kretprobe",
  [anon_sym_kr] = "kr",
  [anon_sym_uprobe] = "uprobe",
  [anon_sym_u] = "u",
  [anon_sym_uretprobe] = "uretprobe",
  [anon_sym_ur] = "ur",
  [anon_sym_tracepoint] = "tracepoint",
  [anon_sym_t] = "t",
  [anon_sym_rawtracepoint] = "rawtracepoint",
  [anon_sym_rt] = "rt",
  [anon_sym_hardware] = "hardware",
  [anon_sym_h] = "h",
  [anon_sym_software] = "software",
  [anon_sym_s] = "s",
  [anon_sym_bench] = "bench",
  [anon_sym_test] = "test",
  [anon_sym_us] = "us",
  [anon_sym_ms] = "ms",
  [anon_sym_profile] = "profile",
  [anon_sym_p] = "p",
  [anon_sym_interval] = "interval",
  [anon_sym_i] = "i",
  [anon_sym_iter] = "iter",
  [anon_sym_it] = "it",
  [anon_sym_usdt] = "usdt",
  [anon_sym_U] = "U",
  [anon_sym_watchpoint] = "watchpoint",
  [anon_sym_w] = "w",
  [anon_sym_asyncwatchpoint] = "asyncwatchpoint",
  [anon_sym_aw] = "aw",
  [anon_sym_r] = "r",
  [anon_sym_x] = "x",
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
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
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
  [anon_sym_bool] = "bool",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_struct] = "struct",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [sym_args_keyword] = "args_keyword",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_offsetof] = "offsetof",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [aux_sym_string_literal_token2] = "escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_map_variable_token1] = "map_variable_token1",
  [sym_scratch_variable] = "scratch_variable",
  [sym_identifier] = "identifier",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [sym_file_identifier] = "file_identifier",
  [sym_identifier_with_dash] = "identifier_with_dash",
  [sym_c_struct] = "c_struct",
  [sym_source_file] = "source_file",
  [sym_preamble] = "preamble",
  [sym__preamble_item] = "_preamble_item",
  [sym_config_block] = "config_block",
  [sym__config_body] = "_config_body",
  [sym_config_assignment] = "config_assignment",
  [sym_action_block] = "action_block",
  [sym_probes_list] = "probes_list",
  [sym_predicate] = "predicate",
  [sym__predicate_expression] = "_predicate_expression",
  [sym_probe] = "probe",
  [sym_begin_end_provider] = "begin_end_provider",
  [sym__fentry_fexit] = "_fentry_fexit",
  [sym__probe_arguments__optional_module_and_function] = "_probe_arguments__optional_module_and_function",
  [sym_fentry_fexit_provider] = "fentry_fexit_provider",
  [sym__kprobe_kretprobe] = "_kprobe_kretprobe",
  [sym_kprobe_kretprobe_provider] = "kprobe_kretprobe_provider",
  [sym__uprobe_uretprobe] = "_uprobe_uretprobe",
  [sym_uprobe_uretprobe_provider] = "uprobe_uretprobe_provider",
  [sym__tracepoint] = "_tracepoint",
  [sym_tracepoint_provider] = "tracepoint_provider",
  [sym__rawtracepoint] = "_rawtracepoint",
  [sym_rawtracepoint_provider] = "rawtracepoint_provider",
  [sym__hardware_event] = "_hardware_event",
  [sym__software_event] = "_software_event",
  [sym_hardware_event_provider] = "hardware_event_provider",
  [sym_software_event_provider] = "software_event_provider",
  [sym__probe_arguments__event_and_optional_count] = "_probe_arguments__event_and_optional_count",
  [sym__bench_test] = "_bench_test",
  [sym_bench_test_provider] = "bench_test_provider",
  [sym__profile_interval] = "_profile_interval",
  [sym_time_unit] = "time_unit",
  [sym_profile_interval_provider] = "profile_interval_provider",
  [sym__iter] = "_iter",
  [sym_iter_provider] = "iter_provider",
  [sym__usdt] = "_usdt",
  [sym_ustd_provider] = "ustd_provider",
  [sym__watchpoint] = "_watchpoint",
  [sym_watchpoint_provider] = "watchpoint_provider",
  [sym_watchpoint_mode] = "watchpoint_mode",
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
  [sym_struct_type] = "struct_type",
  [sym_field_expression] = "field_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_sizeof_expression] = "sizeof_expression",
  [sym_offsetof_expression] = "offsetof_expression",
  [sym_pointer_expression] = "pointer_expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_update_expression] = "update_expression",
  [sym__sufix_increment] = "_sufix_increment",
  [sym__sufix_decrement] = "_sufix_decrement",
  [sym__prefix_increment] = "_prefix_increment",
  [sym__prefix_decrement] = "_prefix_decrement",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
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
  [aux_sym_offsetof_expression_repeat1] = "offsetof_expression_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_expression_statement] = "expression_statement",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_hashbang] = sym_hashbang,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_c_preproc] = sym_c_preproc,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fentry] = anon_sym_fentry,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_fexit] = anon_sym_fexit,
  [anon_sym_fr] = anon_sym_fr,
  [anon_sym_kfunc] = anon_sym_kfunc,
  [anon_sym_kretfunc] = anon_sym_kretfunc,
  [anon_sym_kprobe] = anon_sym_kprobe,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_kretprobe] = anon_sym_kretprobe,
  [anon_sym_kr] = anon_sym_kr,
  [anon_sym_uprobe] = anon_sym_uprobe,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_uretprobe] = anon_sym_uretprobe,
  [anon_sym_ur] = anon_sym_ur,
  [anon_sym_tracepoint] = anon_sym_tracepoint,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_rawtracepoint] = anon_sym_rawtracepoint,
  [anon_sym_rt] = anon_sym_rt,
  [anon_sym_hardware] = anon_sym_hardware,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_software] = anon_sym_software,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_bench] = anon_sym_bench,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_interval] = anon_sym_interval,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_iter] = anon_sym_iter,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_usdt] = anon_sym_usdt,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_watchpoint] = anon_sym_watchpoint,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_asyncwatchpoint] = anon_sym_asyncwatchpoint,
  [anon_sym_aw] = anon_sym_aw,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_x] = anon_sym_x,
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
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
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
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_args_keyword] = sym_args_keyword,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [anon_sym_offsetof] = anon_sym_offsetof,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_map_variable_token1] = aux_sym_map_variable_token1,
  [sym_scratch_variable] = sym_scratch_variable,
  [sym_identifier] = sym_identifier,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [sym_file_identifier] = sym_file_identifier,
  [sym_identifier_with_dash] = sym_identifier_with_dash,
  [sym_c_struct] = sym_c_struct,
  [sym_source_file] = sym_source_file,
  [sym_preamble] = sym_preamble,
  [sym__preamble_item] = sym__preamble_item,
  [sym_config_block] = sym_config_block,
  [sym__config_body] = sym__config_body,
  [sym_config_assignment] = sym_config_assignment,
  [sym_action_block] = sym_action_block,
  [sym_probes_list] = sym_probes_list,
  [sym_predicate] = sym_predicate,
  [sym__predicate_expression] = sym__predicate_expression,
  [sym_probe] = sym_probe,
  [sym_begin_end_provider] = sym_begin_end_provider,
  [sym__fentry_fexit] = sym__fentry_fexit,
  [sym__probe_arguments__optional_module_and_function] = sym__probe_arguments__optional_module_and_function,
  [sym_fentry_fexit_provider] = sym_fentry_fexit_provider,
  [sym__kprobe_kretprobe] = sym__kprobe_kretprobe,
  [sym_kprobe_kretprobe_provider] = sym_kprobe_kretprobe_provider,
  [sym__uprobe_uretprobe] = sym__uprobe_uretprobe,
  [sym_uprobe_uretprobe_provider] = sym_uprobe_uretprobe_provider,
  [sym__tracepoint] = sym__tracepoint,
  [sym_tracepoint_provider] = sym_tracepoint_provider,
  [sym__rawtracepoint] = sym__rawtracepoint,
  [sym_rawtracepoint_provider] = sym_rawtracepoint_provider,
  [sym__hardware_event] = sym__hardware_event,
  [sym__software_event] = sym__software_event,
  [sym_hardware_event_provider] = sym_hardware_event_provider,
  [sym_software_event_provider] = sym_software_event_provider,
  [sym__probe_arguments__event_and_optional_count] = sym__probe_arguments__event_and_optional_count,
  [sym__bench_test] = sym__bench_test,
  [sym_bench_test_provider] = sym_bench_test_provider,
  [sym__profile_interval] = sym__profile_interval,
  [sym_time_unit] = sym_time_unit,
  [sym_profile_interval_provider] = sym_profile_interval_provider,
  [sym__iter] = sym__iter,
  [sym_iter_provider] = sym_iter_provider,
  [sym__usdt] = sym__usdt,
  [sym_ustd_provider] = sym_ustd_provider,
  [sym__watchpoint] = sym__watchpoint,
  [sym_watchpoint_provider] = sym_watchpoint_provider,
  [sym_watchpoint_mode] = sym_watchpoint_mode,
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
  [sym_struct_type] = sym_struct_type,
  [sym_field_expression] = sym_field_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_sizeof_expression] = sym_sizeof_expression,
  [sym_offsetof_expression] = sym_offsetof_expression,
  [sym_pointer_expression] = sym_pointer_expression,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_update_expression] = sym_update_expression,
  [sym__sufix_increment] = sym__sufix_increment,
  [sym__sufix_decrement] = sym__sufix_decrement,
  [sym__prefix_increment] = sym__prefix_increment,
  [sym__prefix_decrement] = sym__prefix_decrement,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
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
  [aux_sym_offsetof_expression_repeat1] = aux_sym_offsetof_expression_repeat1,
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
  [sym_hashbang] = {
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
  [sym_c_preproc] = {
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
  [anon_sym_begin] = {
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
  [anon_sym_kfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kretfunc] = {
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
  [anon_sym_tracepoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
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
  [anon_sym_hardware] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
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
  [anon_sym_bench] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
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
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
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
  [anon_sym_struct] = {
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
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offsetof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_file_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_with_dash] = {
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
  [sym_begin_end_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__fentry_fexit] = {
    .visible = false,
    .named = true,
  },
  [sym__probe_arguments__optional_module_and_function] = {
    .visible = false,
    .named = true,
  },
  [sym_fentry_fexit_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__kprobe_kretprobe] = {
    .visible = false,
    .named = true,
  },
  [sym_kprobe_kretprobe_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__uprobe_uretprobe] = {
    .visible = false,
    .named = true,
  },
  [sym_uprobe_uretprobe_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__tracepoint] = {
    .visible = false,
    .named = true,
  },
  [sym_tracepoint_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__rawtracepoint] = {
    .visible = false,
    .named = true,
  },
  [sym_rawtracepoint_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__hardware_event] = {
    .visible = false,
    .named = true,
  },
  [sym__software_event] = {
    .visible = false,
    .named = true,
  },
  [sym_hardware_event_provider] = {
    .visible = true,
    .named = true,
  },
  [sym_software_event_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__probe_arguments__event_and_optional_count] = {
    .visible = false,
    .named = true,
  },
  [sym__bench_test] = {
    .visible = false,
    .named = true,
  },
  [sym_bench_test_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__profile_interval] = {
    .visible = false,
    .named = true,
  },
  [sym_time_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_profile_interval_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__iter] = {
    .visible = false,
    .named = true,
  },
  [sym_iter_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__usdt] = {
    .visible = false,
    .named = true,
  },
  [sym_ustd_provider] = {
    .visible = true,
    .named = true,
  },
  [sym__watchpoint] = {
    .visible = false,
    .named = true,
  },
  [sym_watchpoint_provider] = {
    .visible = true,
    .named = true,
  },
  [sym_watchpoint_mode] = {
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
  [sym_struct_type] = {
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
  [sym_sizeof_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_offsetof_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
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
  [sym_boolean_literal] = {
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
  [aux_sym_offsetof_expression_repeat1] = {
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
  field_address = 1,
  field_alternative = 2,
  field_argument = 3,
  field_arguments = 4,
  field_binary = 5,
  field_body = 6,
  field_condition = 7,
  field_consequence = 8,
  field_count = 9,
  field_event = 10,
  field_field = 11,
  field_function = 12,
  field_index = 13,
  field_left = 14,
  field_length = 15,
  field_member = 16,
  field_mode = 17,
  field_module = 18,
  field_name = 19,
  field_namespace = 20,
  field_object = 21,
  field_operator = 22,
  field_pin = 23,
  field_provider = 24,
  field_right = 25,
  field_subsys = 26,
  field_type = 27,
  field_unit = 28,
  field_value = 29,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_binary] = "binary",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_count] = "count",
  [field_event] = "event",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_left] = "left",
  [field_length] = "length",
  [field_member] = "member",
  [field_mode] = "mode",
  [field_module] = "module",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_object] = "object",
  [field_operator] = "operator",
  [field_pin] = "pin",
  [field_provider] = "provider",
  [field_right] = "right",
  [field_subsys] = "subsys",
  [field_type] = "type",
  [field_unit] = "unit",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 2},
  [7] = {.index = 15, .length = 3},
  [8] = {.index = 18, .length = 3},
  [9] = {.index = 21, .length = 4},
  [10] = {.index = 25, .length = 4},
  [11] = {.index = 29, .length = 3},
  [12] = {.index = 32, .length = 3},
  [13] = {.index = 35, .length = 3},
  [15] = {.index = 38, .length = 1},
  [16] = {.index = 39, .length = 1},
  [17] = {.index = 40, .length = 2},
  [18] = {.index = 42, .length = 2},
  [19] = {.index = 44, .length = 2},
  [20] = {.index = 46, .length = 1},
  [21] = {.index = 47, .length = 2},
  [22] = {.index = 49, .length = 2},
  [23] = {.index = 51, .length = 2},
  [24] = {.index = 53, .length = 3},
  [25] = {.index = 56, .length = 2},
  [26] = {.index = 58, .length = 3},
  [27] = {.index = 61, .length = 2},
  [28] = {.index = 63, .length = 3},
  [29] = {.index = 66, .length = 3},
  [30] = {.index = 69, .length = 2},
  [31] = {.index = 71, .length = 3},
  [32] = {.index = 74, .length = 3},
  [33] = {.index = 77, .length = 2},
  [34] = {.index = 79, .length = 2},
  [35] = {.index = 81, .length = 1},
  [36] = {.index = 82, .length = 1},
  [37] = {.index = 83, .length = 2},
  [38] = {.index = 85, .length = 2},
  [39] = {.index = 87, .length = 2},
  [40] = {.index = 89, .length = 1},
  [41] = {.index = 90, .length = 3},
  [42] = {.index = 93, .length = 4},
  [43] = {.index = 97, .length = 4},
  [44] = {.index = 101, .length = 3},
  [45] = {.index = 104, .length = 2},
  [46] = {.index = 106, .length = 1},
  [47] = {.index = 107, .length = 2},
  [48] = {.index = 109, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_provider, 0},
  [1] =
    {field_function, 0, .inherited = true},
    {field_module, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [4] =
    {field_binary, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [7] =
    {field_event, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
    {field_subsys, 0, .inherited = true},
  [10] =
    {field_count, 0, .inherited = true},
    {field_event, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [13] =
    {field_function, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [15] =
    {field_count, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [18] =
    {field_object, 0, .inherited = true},
    {field_pin, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [21] =
    {field_binary, 0, .inherited = true},
    {field_function, 0, .inherited = true},
    {field_namespace, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [25] =
    {field_address, 0, .inherited = true},
    {field_length, 0, .inherited = true},
    {field_mode, 0, .inherited = true},
    {field_provider, 0, .inherited = true},
  [29] =
    {field_function, 1, .inherited = true},
    {field_module, 1, .inherited = true},
    {field_provider, 0},
  [32] =
    {field_count, 1, .inherited = true},
    {field_event, 1, .inherited = true},
    {field_provider, 0},
  [35] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [38] =
    {field_function, 1},
  [39] =
    {field_event, 1},
  [40] =
    {field_function, 2},
    {field_provider, 0},
  [42] =
    {field_count, 2},
    {field_provider, 0},
  [44] =
    {field_object, 2},
    {field_provider, 0},
  [46] =
    {field_argument, 1},
  [47] =
    {field_argument, 1},
    {field_operator, 0},
  [49] =
    {field_arguments, 1},
    {field_function, 0},
  [51] =
    {field_left, 0},
    {field_operator, 1},
  [53] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 1},
  [56] =
    {field_argument, 0},
    {field_field, 2},
  [58] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [61] =
    {field_function, 3},
    {field_module, 1},
  [63] =
    {field_binary, 2},
    {field_function, 4},
    {field_provider, 0},
  [66] =
    {field_event, 4},
    {field_provider, 0},
    {field_subsys, 2},
  [69] =
    {field_count, 3},
    {field_event, 1},
  [71] =
    {field_count, 4},
    {field_provider, 0},
    {field_unit, 2},
  [74] =
    {field_object, 2},
    {field_pin, 4},
    {field_provider, 0},
  [77] =
    {field_name, 0},
    {field_value, 2},
  [79] =
    {field_type, 1},
    {field_value, 3},
  [81] =
    {field_value, 2},
  [82] =
    {field_type, 2},
  [83] =
    {field_argument, 0},
    {field_index, 2},
  [85] =
    {field_condition, 2},
    {field_consequence, 4},
  [87] =
    {field_body, 4},
    {field_condition, 2},
  [89] =
    {field_body, 4},
  [90] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [93] =
    {field_binary, 2},
    {field_function, 6},
    {field_namespace, 4},
    {field_provider, 0},
  [97] =
    {field_address, 2},
    {field_length, 4},
    {field_mode, 6},
    {field_provider, 0},
  [101] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [104] =
    {field_member, 4},
    {field_type, 2},
  [106] =
    {field_body, 6},
  [107] =
    {field_left, 0},
    {field_right, 2},
  [109] =
    {field_member, 4},
    {field_member, 5},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
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
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 10,
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
  [29] = 27,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 47,
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
  [72] = 64,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 58,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 71,
  [84] = 70,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 71,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 70,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 61,
  [111] = 59,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 60,
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
  [127] = 79,
  [128] = 78,
  [129] = 129,
  [130] = 70,
  [131] = 82,
  [132] = 71,
  [133] = 80,
  [134] = 81,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 150,
  [151] = 147,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 155,
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
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
  [228] = 200,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 249,
  [253] = 236,
  [254] = 240,
  [255] = 255,
  [256] = 256,
  [257] = 234,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 258,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 258,
  [329] = 329,
  [330] = 258,
  [331] = 331,
  [332] = 332,
  [333] = 265,
  [334] = 263,
  [335] = 335,
  [336] = 336,
  [337] = 336,
  [338] = 338,
  [339] = 304,
  [340] = 313,
  [341] = 314,
  [342] = 266,
  [343] = 259,
  [344] = 319,
  [345] = 345,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '!', 359,
        '"', 363,
        '#', 2,
        '$', 169,
        '%', 308,
        '&', 331,
        '(', 290,
        ')', 291,
        '*', 310,
        '+', 313,
        ',', 192,
        '-', 314,
        '.', 352,
        '/', 194,
        '0', 371,
        ':', 203,
        ';', 181,
        '<', 324,
        '=', 184,
        '>', 326,
        '?', 357,
        '@', 383,
        'B', 396,
        'E', 399,
        'U', 272,
        '[', 338,
        '\\', 170,
        ']', 339,
        '^', 333,
        'a', 520,
        'b', 425,
        'c', 499,
        'e', 477,
        'f', 206,
        'h', 243,
        'i', 263,
        'k', 218,
        'm', 539,
        'o', 447,
        'p', 260,
        'r', 283,
        's', 247,
        't', 235,
        'u', 226,
        'w', 277,
        'x', 285,
        '{', 185,
        '|', 334,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '\\') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 20,
        '%', 307,
        '&', 330,
        '(', 290,
        ')', 291,
        '*', 309,
        '+', 311,
        ',', 192,
        '-', 317,
        '.', 351,
        '/', 193,
        ':', 203,
        ';', 181,
        '<', 325,
        '=', 21,
        '>', 327,
        '?', 357,
        '[', 338,
        ']', 339,
        '^', 332,
        'r', 282,
        's', 153,
        'w', 275,
        'x', 284,
        '|', 335,
        '}', 186,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        ')', 291,
        '*', 309,
        '+', 312,
        '-', 315,
        '/', 11,
        '0', 371,
        '@', 383,
        ']', 339,
        'a', 521,
        'f', 402,
        'o', 447,
        's', 461,
        't', 531,
        '{', 185,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        '*', 309,
        '+', 312,
        '-', 315,
        '.', 15,
        '/', 11,
        '0', 371,
        '@', 383,
        'a', 521,
        'b', 522,
        'c', 511,
        'f', 401,
        'i', 444,
        'o', 447,
        'r', 439,
        's', 461,
        't', 531,
        'u', 490,
        'w', 456,
        '{', 185,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        '*', 309,
        '+', 312,
        '-', 315,
        '/', 11,
        '0', 371,
        '@', 383,
        'a', 521,
        'b', 501,
        'f', 402,
        'i', 498,
        'o', 447,
        's', 460,
        't', 531,
        'u', 463,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        '*', 309,
        '+', 312,
        '-', 315,
        '/', 11,
        '0', 371,
        '@', 383,
        'a', 521,
        'b', 522,
        'c', 511,
        'e', 478,
        'f', 401,
        'i', 444,
        'o', 447,
        'r', 439,
        's', 461,
        't', 531,
        'u', 490,
        'w', 456,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        '*', 309,
        '+', 312,
        '-', 315,
        '/', 11,
        '0', 371,
        '@', 383,
        'a', 521,
        'e', 478,
        'f', 401,
        'i', 444,
        'o', 447,
        'r', 439,
        's', 461,
        't', 531,
        'u', 490,
        'w', 456,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 358,
        '"', 363,
        '$', 169,
        '(', 290,
        '*', 309,
        '+', 312,
        '-', 315,
        '/', 11,
        '0', 371,
        '@', 383,
        'a', 521,
        'f', 401,
        'i', 444,
        'o', 447,
        'r', 439,
        's', 461,
        't', 531,
        'u', 490,
        'w', 456,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '@') ADVANCE(383);
      if (lookahead == '}') ADVANCE(186);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(296);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(582);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(371);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'G') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(280);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 163:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 169:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 171:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '!', 359,
        '"', 363,
        '#', 49,
        '$', 169,
        '%', 308,
        '&', 331,
        '(', 290,
        ')', 291,
        '*', 310,
        '+', 313,
        ',', 192,
        '-', 314,
        '.', 352,
        '/', 194,
        '0', 371,
        ':', 203,
        ';', 181,
        '<', 324,
        '=', 184,
        '>', 326,
        '?', 357,
        '@', 383,
        'B', 396,
        'E', 399,
        'U', 272,
        '[', 338,
        '\\', 170,
        ']', 339,
        '^', 333,
        'a', 520,
        'b', 425,
        'c', 499,
        'e', 477,
        'f', 206,
        'h', 243,
        'i', 263,
        'k', 218,
        'm', 539,
        'o', 447,
        'p', 260,
        'r', 283,
        's', 247,
        't', 235,
        'u', 226,
        'w', 277,
        'x', 285,
        '{', 185,
        '|', 334,
        '}', 186,
        '~', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 172:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '!', 20,
        '#', 2,
        '%', 308,
        '&', 331,
        ')', 291,
        '*', 310,
        '+', 313,
        ',', 192,
        '-', 316,
        '.', 351,
        '/', 194,
        ':', 203,
        ';', 181,
        '<', 324,
        '=', 184,
        '>', 326,
        '?', 357,
        'B', 23,
        'E', 26,
        'U', 271,
        '[', 338,
        ']', 339,
        '^', 333,
        'a', 135,
        'b', 57,
        'c', 108,
        'e', 97,
        'f', 207,
        'h', 242,
        'i', 264,
        'k', 219,
        'p', 259,
        'r', 28,
        's', 248,
        't', 234,
        'u', 227,
        'w', 276,
        '|', 334,
        '}', 186,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      END_STATE();
    case 173:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '!', 20,
        '#', 49,
        '%', 308,
        '&', 331,
        ')', 291,
        '*', 310,
        '+', 313,
        ',', 192,
        '-', 316,
        '.', 351,
        '/', 194,
        ':', 203,
        ';', 181,
        '<', 324,
        '=', 184,
        '>', 326,
        '?', 357,
        'B', 23,
        'E', 26,
        'U', 271,
        '[', 338,
        ']', 339,
        '^', 333,
        'a', 135,
        'b', 57,
        'c', 108,
        'e', 97,
        'f', 207,
        'h', 242,
        'i', 264,
        'k', 219,
        'p', 259,
        'r', 28,
        's', 248,
        't', 234,
        'u', 227,
        'w', 276,
        '|', 334,
        '}', 186,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line_comment);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_hashbang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_c_preproc);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_c_preproc);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_c_preproc);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_c_preproc);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_c_preproc);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '=') ADVANCE(302);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_fentry);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_fentry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_fexit);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_fexit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_kfunc);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_kfunc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_kretfunc);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_kretfunc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_kprobe);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_kprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_uprobe);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_uprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_rt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_hardware);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_hardware);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_software);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_software);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_bench);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_bench);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == 'd') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_profile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_interval);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_interval);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_iter);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_iter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_usdt);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_usdt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_U);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_aw);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_aw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_unroll);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(301);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(361);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(361);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '0') ADVANCE(371);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(353);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '0') ADVANCE(371);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead == '>') ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(353);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(322);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(318);
      if (lookahead == '=') ADVANCE(322);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(321);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(320);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(336);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '|') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(296);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_args_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_sizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_offsetof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(364);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 378,
        'U', 376,
        '_', 375,
        'l', 379,
        'm', 380,
        'n', 134,
        'u', 377,
        'E', 167,
        'e', 167,
        'X', 168,
        'x', 168,
        'd', 370,
        'h', 370,
        's', 370,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 378,
        'U', 376,
        '_', 375,
        'l', 379,
        'm', 380,
        'n', 134,
        'u', 377,
        'E', 167,
        'e', 167,
        'd', 370,
        'h', 370,
        's', 370,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 378,
        'U', 376,
        'd', 373,
        'l', 379,
        'm', 380,
        'n', 134,
        'u', 377,
        'h', 370,
        's', 370,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 378,
        'U', 376,
        'l', 379,
        'm', 380,
        'n', 134,
        'u', 377,
        'd', 370,
        'h', 370,
        's', 370,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 378,
        'U', 376,
        'l', 379,
        'm', 380,
        'n', 134,
        'u', 377,
        'd', 370,
        'h', 370,
        's', 370,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(370);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_scratch_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(393);
      if (lookahead == '3') ADVANCE(389);
      if (lookahead == '6') ADVANCE(391);
      if (lookahead == '8') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(393);
      if (lookahead == '3') ADVANCE(389);
      if (lookahead == '6') ADVANCE(391);
      if (lookahead == '8') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(394);
      if (lookahead == '3') ADVANCE(390);
      if (lookahead == '6') ADVANCE(392);
      if (lookahead == '8') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'x') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == 'w') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_file_identifier);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(176);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_file_identifier);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier_with_dash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 172, .external_lex_state = 1},
  [2] = {.lex_state = 172, .external_lex_state = 1},
  [3] = {.lex_state = 172},
  [4] = {.lex_state = 172},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 172, .external_lex_state = 1},
  [22] = {.lex_state = 172, .external_lex_state = 1},
  [23] = {.lex_state = 172, .external_lex_state = 1},
  [24] = {.lex_state = 172, .external_lex_state = 1},
  [25] = {.lex_state = 172, .external_lex_state = 1},
  [26] = {.lex_state = 172, .external_lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 172},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 172},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 172},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 172},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 172},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 172},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 172},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 172},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 18},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 18},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_hashbang] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_c_preproc] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fentry] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_fexit] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [anon_sym_kfunc] = ACTIONS(1),
    [anon_sym_kretfunc] = ACTIONS(1),
    [anon_sym_kprobe] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_kretprobe] = ACTIONS(1),
    [anon_sym_kr] = ACTIONS(1),
    [anon_sym_uprobe] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_uretprobe] = ACTIONS(1),
    [anon_sym_ur] = ACTIONS(1),
    [anon_sym_tracepoint] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_rawtracepoint] = ACTIONS(1),
    [anon_sym_rt] = ACTIONS(1),
    [anon_sym_hardware] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_software] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_bench] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_interval] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_iter] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_usdt] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_watchpoint] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_asyncwatchpoint] = ACTIONS(1),
    [anon_sym_aw] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
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
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_args_keyword] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_offsetof] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_map_variable_token1] = ACTIONS(1),
    [sym_scratch_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_c_struct] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(312),
    [sym_preamble] = STATE(3),
    [sym__preamble_item] = STATE(21),
    [sym_config_block] = STATE(21),
    [sym_action_block] = STATE(4),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_preamble_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_hashbang] = ACTIONS(7),
    [anon_sym_config] = ACTIONS(9),
    [sym_c_preproc] = ACTIONS(11),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
    [sym_c_struct] = ACTIONS(57),
  },
  [2] = {
    [sym_preamble] = STATE(5),
    [sym__preamble_item] = STATE(21),
    [sym_config_block] = STATE(21),
    [sym_action_block] = STATE(6),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_preamble_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(9),
    [sym_c_preproc] = ACTIONS(11),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
    [sym_c_struct] = ACTIONS(57),
  },
  [3] = {
    [sym_action_block] = STATE(6),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
  [4] = {
    [sym_action_block] = STATE(7),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
  [5] = {
    [sym_action_block] = STATE(8),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
  [6] = {
    [sym_action_block] = STATE(7),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
  [7] = {
    [sym_action_block] = STATE(7),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(65),
    [anon_sym_END] = ACTIONS(65),
    [anon_sym_begin] = ACTIONS(65),
    [anon_sym_end] = ACTIONS(65),
    [anon_sym_fentry] = ACTIONS(68),
    [anon_sym_f] = ACTIONS(71),
    [anon_sym_fexit] = ACTIONS(68),
    [anon_sym_fr] = ACTIONS(68),
    [anon_sym_kfunc] = ACTIONS(68),
    [anon_sym_kretfunc] = ACTIONS(68),
    [anon_sym_kprobe] = ACTIONS(74),
    [anon_sym_k] = ACTIONS(77),
    [anon_sym_kretprobe] = ACTIONS(74),
    [anon_sym_kr] = ACTIONS(77),
    [anon_sym_uprobe] = ACTIONS(80),
    [anon_sym_u] = ACTIONS(83),
    [anon_sym_uretprobe] = ACTIONS(80),
    [anon_sym_ur] = ACTIONS(83),
    [anon_sym_tracepoint] = ACTIONS(86),
    [anon_sym_t] = ACTIONS(89),
    [anon_sym_rawtracepoint] = ACTIONS(92),
    [anon_sym_rt] = ACTIONS(92),
    [anon_sym_hardware] = ACTIONS(95),
    [anon_sym_h] = ACTIONS(98),
    [anon_sym_software] = ACTIONS(101),
    [anon_sym_s] = ACTIONS(104),
    [anon_sym_bench] = ACTIONS(107),
    [anon_sym_test] = ACTIONS(107),
    [anon_sym_profile] = ACTIONS(110),
    [anon_sym_p] = ACTIONS(113),
    [anon_sym_interval] = ACTIONS(110),
    [anon_sym_i] = ACTIONS(113),
    [anon_sym_iter] = ACTIONS(116),
    [anon_sym_it] = ACTIONS(119),
    [anon_sym_usdt] = ACTIONS(122),
    [anon_sym_U] = ACTIONS(122),
    [anon_sym_watchpoint] = ACTIONS(125),
    [anon_sym_w] = ACTIONS(128),
    [anon_sym_asyncwatchpoint] = ACTIONS(125),
    [anon_sym_aw] = ACTIONS(125),
  },
  [8] = {
    [sym_action_block] = STATE(7),
    [sym_probes_list] = STATE(179),
    [sym_probe] = STATE(165),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
  [9] = {
    [sym_probe] = STATE(221),
    [sym_begin_end_provider] = STATE(203),
    [sym__fentry_fexit] = STATE(204),
    [sym_fentry_fexit_provider] = STATE(231),
    [sym__kprobe_kretprobe] = STATE(205),
    [sym_kprobe_kretprobe_provider] = STATE(238),
    [sym__uprobe_uretprobe] = STATE(210),
    [sym_uprobe_uretprobe_provider] = STATE(274),
    [sym__tracepoint] = STATE(215),
    [sym_tracepoint_provider] = STATE(278),
    [sym__rawtracepoint] = STATE(216),
    [sym_rawtracepoint_provider] = STATE(233),
    [sym__hardware_event] = STATE(217),
    [sym__software_event] = STATE(220),
    [sym_hardware_event_provider] = STATE(241),
    [sym_software_event_provider] = STATE(248),
    [sym__bench_test] = STATE(226),
    [sym_bench_test_provider] = STATE(335),
    [sym__profile_interval] = STATE(214),
    [sym_profile_interval_provider] = STATE(326),
    [sym__iter] = STATE(201),
    [sym_iter_provider] = STATE(338),
    [sym__usdt] = STATE(184),
    [sym_ustd_provider] = STATE(280),
    [sym__watchpoint] = STATE(188),
    [sym_watchpoint_provider] = STATE(276),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_BEGIN] = ACTIONS(13),
    [anon_sym_END] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(15),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_fexit] = ACTIONS(15),
    [anon_sym_fr] = ACTIONS(15),
    [anon_sym_kfunc] = ACTIONS(15),
    [anon_sym_kretfunc] = ACTIONS(15),
    [anon_sym_kprobe] = ACTIONS(19),
    [anon_sym_k] = ACTIONS(21),
    [anon_sym_kretprobe] = ACTIONS(19),
    [anon_sym_kr] = ACTIONS(21),
    [anon_sym_uprobe] = ACTIONS(23),
    [anon_sym_u] = ACTIONS(25),
    [anon_sym_uretprobe] = ACTIONS(23),
    [anon_sym_ur] = ACTIONS(25),
    [anon_sym_tracepoint] = ACTIONS(27),
    [anon_sym_t] = ACTIONS(29),
    [anon_sym_rawtracepoint] = ACTIONS(31),
    [anon_sym_rt] = ACTIONS(31),
    [anon_sym_hardware] = ACTIONS(33),
    [anon_sym_h] = ACTIONS(35),
    [anon_sym_software] = ACTIONS(37),
    [anon_sym_s] = ACTIONS(39),
    [anon_sym_bench] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(41),
    [anon_sym_profile] = ACTIONS(43),
    [anon_sym_p] = ACTIONS(45),
    [anon_sym_interval] = ACTIONS(43),
    [anon_sym_i] = ACTIONS(45),
    [anon_sym_iter] = ACTIONS(47),
    [anon_sym_it] = ACTIONS(49),
    [anon_sym_usdt] = ACTIONS(51),
    [anon_sym_U] = ACTIONS(51),
    [anon_sym_watchpoint] = ACTIONS(53),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_asyncwatchpoint] = ACTIONS(53),
    [anon_sym_aw] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_while,
    ACTIONS(143), 1,
      anon_sym_unroll,
    ACTIONS(145), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    STATE(258), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(256), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(135), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(73), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [133] = 35,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_while,
    ACTIONS(143), 1,
      anon_sym_unroll,
    ACTIONS(145), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    STATE(324), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(256), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(135), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(73), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [266] = 35,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_while,
    ACTIONS(143), 1,
      anon_sym_unroll,
    ACTIONS(145), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    STATE(328), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(256), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(135), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(73), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [399] = 35,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_while,
    ACTIONS(143), 1,
      anon_sym_unroll,
    ACTIONS(145), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym__block_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    STATE(330), 1,
      sym__block_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(256), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(135), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(73), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [532] = 33,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_while,
    ACTIONS(143), 1,
      anon_sym_unroll,
    ACTIONS(145), 1,
      anon_sym_for,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym__block_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(239), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(181), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(75), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [659] = 32,
    ACTIONS(186), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_unroll,
    ACTIONS(198), 1,
      anon_sym_for,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      sym_args_keyword,
    ACTIONS(210), 1,
      anon_sym_sizeof,
    ACTIONS(213), 1,
      anon_sym_offsetof,
    ACTIONS(219), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(222), 1,
      anon_sym_DASH_DASH,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      sym_integer_literal,
    ACTIONS(234), 1,
      aux_sym_map_variable_token1,
    ACTIONS(237), 1,
      sym_scratch_variable,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(216), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(231), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(299), 2,
      sym__statement,
      sym__flow_statement,
    ACTIONS(183), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(15), 6,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
      aux_sym__block_body_repeat1,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [784] = 35,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_return,
    ACTIONS(247), 1,
      anon_sym_if,
    ACTIONS(249), 1,
      anon_sym_while,
    ACTIONS(251), 1,
      anon_sym_unroll,
    ACTIONS(253), 1,
      anon_sym_for,
    STATE(20), 1,
      aux_sym__action_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(237), 1,
      sym__statement,
    STATE(245), 1,
      sym__assignment,
    STATE(302), 1,
      sym__action_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(136), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [914] = 30,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_struct,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(145), 1,
      sym__expression,
    STATE(158), 1,
      sym_integer_type,
    STATE(317), 1,
      sym_type_specifier,
    STATE(327), 1,
      sym_pointer_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(229), 2,
      sym_array_type,
      sym_struct_type,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    ACTIONS(255), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1034] = 30,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_struct,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(150), 1,
      sym__expression,
    STATE(158), 1,
      sym_integer_type,
    STATE(270), 1,
      sym_type_specifier,
    STATE(327), 1,
      sym_pointer_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(229), 2,
      sym_array_type,
      sym_struct_type,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    ACTIONS(255), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1154] = 32,
    ACTIONS(259), 1,
      anon_sym_return,
    ACTIONS(262), 1,
      anon_sym_if,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_while,
    ACTIONS(271), 1,
      anon_sym_unroll,
    ACTIONS(274), 1,
      anon_sym_for,
    ACTIONS(277), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      sym_args_keyword,
    ACTIONS(286), 1,
      anon_sym_sizeof,
    ACTIONS(289), 1,
      anon_sym_offsetof,
    ACTIONS(295), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(298), 1,
      anon_sym_DASH_DASH,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      sym_integer_literal,
    ACTIONS(310), 1,
      aux_sym_map_variable_token1,
    ACTIONS(313), 1,
      sym_scratch_variable,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(245), 1,
      sym__assignment,
    STATE(261), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(292), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(307), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(19), 6,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
      aux_sym__action_body_repeat1,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1276] = 33,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_if,
    ACTIONS(249), 1,
      anon_sym_while,
    ACTIONS(251), 1,
      anon_sym_unroll,
    ACTIONS(253), 1,
      anon_sym_for,
    ACTIONS(319), 1,
      anon_sym_return,
    STATE(19), 1,
      aux_sym__action_body_repeat1,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(143), 1,
      sym__expression,
    STATE(235), 1,
      sym__statement,
    STATE(245), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(135), 5,
      sym__block_statement,
      sym_if_statement,
      sym_while_statement,
      sym_unroll_statement,
      sym_for_statement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1400] = 7,
    ACTIONS(9), 1,
      anon_sym_config,
    ACTIONS(57), 1,
      sym_c_struct,
    ACTIONS(323), 1,
      sym_c_preproc,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(22), 3,
      sym__preamble_item,
      sym_config_block,
      aux_sym_preamble_repeat1,
    ACTIONS(325), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(321), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1464] = 7,
    ACTIONS(329), 1,
      anon_sym_config,
    ACTIONS(332), 1,
      sym_c_preproc,
    ACTIONS(337), 1,
      sym_c_struct,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(22), 3,
      sym__preamble_item,
      sym_config_block,
      aux_sym_preamble_repeat1,
    ACTIONS(335), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(327), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1528] = 4,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(340), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      sym_c_preproc,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1584] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(346), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      sym_c_preproc,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1637] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(350), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      sym_c_preproc,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1690] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(354), 32,
      sym_c_struct,
      ts_builtin_sym_end,
      anon_sym_config,
      sym_c_preproc,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [1743] = 25,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(142), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1839] = 25,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(138), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [1935] = 25,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(140), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2031] = 25,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(153), 1,
      sym__expression,
    STATE(287), 1,
      sym__predicate_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2127] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(149), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2220] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(113), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2313] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(104), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2406] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(107), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2499] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(109), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2592] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(116), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2685] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(114), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2778] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(144), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2871] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(117), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [2964] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(118), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3057] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3150] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(122), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3243] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(147), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3336] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(141), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3429] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(120), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3522] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(96), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3615] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(148), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3708] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(139), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3801] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(90), 1,
      sym__expression,
    STATE(92), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3894] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(91), 1,
      sym__expression,
    STATE(92), 1,
      sym__div_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [3987] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(151), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [4080] = 24,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      sym_args_keyword,
    ACTIONS(153), 1,
      anon_sym_sizeof,
    ACTIONS(155), 1,
      anon_sym_offsetof,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_integer_literal,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    ACTIONS(171), 1,
      sym_scratch_variable,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(42), 1,
      sym__div_left_side,
    STATE(65), 1,
      sym_field_expression,
    STATE(69), 1,
      sym_parenthesized_expression,
    STATE(92), 1,
      sym__div_expression,
    STATE(146), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(167), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym__variable,
      sym_map_variable,
    STATE(94), 4,
      sym__sufix_increment,
      sym__sufix_decrement,
      sym__prefix_increment,
      sym__prefix_decrement,
    STATE(123), 13,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_sizeof_expression,
      sym_offsetof_expression,
      sym_pointer_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_tuple_expression,
      sym_update_expression,
      sym_string_literal,
      sym_boolean_literal,
  [4173] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(364), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [4223] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(370), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(368), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [4273] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(372), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [4323] = 5,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(378), 13,
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
    ACTIONS(376), 25,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [4377] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 12,
      anon_sym_f,
      anon_sym_k,
      anon_sym_kr,
      anon_sym_u,
      anon_sym_ur,
      anon_sym_t,
      anon_sym_h,
      anon_sym_s,
      anon_sym_p,
      anon_sym_i,
      anon_sym_it,
      anon_sym_w,
    ACTIONS(384), 29,
      ts_builtin_sym_end,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_fentry,
      anon_sym_fexit,
      anon_sym_fr,
      anon_sym_kfunc,
      anon_sym_kretfunc,
      anon_sym_kprobe,
      anon_sym_kretprobe,
      anon_sym_uprobe,
      anon_sym_uretprobe,
      anon_sym_tracepoint,
      anon_sym_rawtracepoint,
      anon_sym_rt,
      anon_sym_hardware,
      anon_sym_software,
      anon_sym_bench,
      anon_sym_test,
      anon_sym_profile,
      anon_sym_interval,
      anon_sym_iter,
      anon_sym_usdt,
      anon_sym_U,
      anon_sym_watchpoint,
      anon_sym_asyncwatchpoint,
      anon_sym_aw,
  [4427] = 4,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 13,
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
    ACTIONS(388), 25,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [4477] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 13,
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
    ACTIONS(394), 25,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [4524] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 13,
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
    ACTIONS(398), 25,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [4571] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(404), 13,
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
    ACTIONS(402), 25,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [4618] = 7,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 9,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
    ACTIONS(412), 10,
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
    ACTIONS(410), 12,
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
  [4669] = 7,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(410), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(406), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [4716] = 5,
    ACTIONS(424), 1,
      anon_sym_else,
    STATE(78), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(422), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4757] = 5,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(410), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(406), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [4798] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(426), 22,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [4835] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(430), 21,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_QMARK,
  [4871] = 5,
    ACTIONS(414), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 7,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(406), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [4911] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
    ACTIONS(410), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(406), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [4949] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(436), 16,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4985] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(440), 16,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5021] = 5,
    ACTIONS(442), 1,
      anon_sym_else,
    STATE(128), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(422), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5060] = 4,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(448), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(446), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5097] = 4,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(452), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5134] = 4,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(448), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(446), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5171] = 4,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(452), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5208] = 4,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(388), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5245] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(460), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(462), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5280] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(466), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5315] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(470), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5350] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(474), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5385] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(478), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5420] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(440), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5455] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(436), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5490] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(480), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5524] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(486), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(484), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5558] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(490), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(488), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5592] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(494), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(492), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5626] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(498), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(496), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5660] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(502), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(500), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5694] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(506), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(504), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5728] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(508), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5762] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(514), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(512), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5796] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(518), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(516), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5830] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(520), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5864] = 15,
    ACTIONS(526), 1,
      anon_sym_SLASH,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(524), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5922] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(440), 14,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5956] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(552), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [5990] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(558), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(556), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6024] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(562), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(560), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6058] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(564), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6092] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(436), 14,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6126] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(570), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(568), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6160] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6194] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(578), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(576), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6228] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(580), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6262] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(574), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6298] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(452), 15,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6332] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(574), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6370] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(404), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(402), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6404] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(394), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6438] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(584), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6472] = 6,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(574), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6512] = 8,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(574), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6556] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(398), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6590] = 9,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(574), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(572), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6636] = 10,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(574), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(572), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6684] = 11,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(574), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(572), 9,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6734] = 13,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(574), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(572), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [6788] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(590), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(588), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6822] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(592), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6856] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(596), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6890] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(406), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6924] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(600), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6958] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(604), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
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
      anon_sym_QMARK,
  [6992] = 4,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(610), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7027] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(466), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7060] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(460), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(462), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7093] = 4,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(610), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7128] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(436), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7161] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(478), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7194] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(440), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7227] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(470), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7260] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(474), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7293] = 4,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(616), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7328] = 4,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(616), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7363] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
    ACTIONS(610), 13,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_unroll,
      anon_sym_for,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7395] = 17,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7454] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(628), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7509] = 17,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7568] = 17,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7627] = 17,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7686] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(636), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7740] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(638), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7794] = 16,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7850] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7903] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7956] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8009] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8062] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8115] = 15,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8168] = 4,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(658), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [8198] = 14,
    ACTIONS(540), 1,
      anon_sym_AMP,
    ACTIONS(542), 1,
      anon_sym_CARET,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_AMP_AMP,
    ACTIONS(548), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_QMARK,
    ACTIONS(662), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(530), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(534), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(538), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [8248] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_args_keyword,
      anon_sym_sizeof,
      anon_sym_offsetof,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(658), 10,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DQUOTE,
      sym_integer_literal,
      aux_sym_map_variable_token1,
      sym_scratch_variable,
  [8275] = 5,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    STATE(264), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(334), 2,
      sym_range,
      sym_map_variable,
    ACTIONS(664), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [8295] = 5,
    ACTIONS(169), 1,
      aux_sym_map_variable_token1,
    STATE(264), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(263), 2,
      sym_range,
      sym_map_variable,
    ACTIONS(664), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [8315] = 4,
    ACTIONS(668), 1,
      sym_integer_literal,
    STATE(305), 1,
      sym_time_unit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 3,
      anon_sym_s,
      anon_sym_us,
      anon_sym_ms,
  [8331] = 6,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(672), 1,
      anon_sym_STAR,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      aux_sym_array_type_repeat1,
    STATE(187), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8351] = 5,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8368] = 4,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    STATE(160), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [8383] = 4,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(687), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(691), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [8398] = 4,
    ACTIONS(693), 1,
      aux_sym_map_variable_token1,
    ACTIONS(695), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(99), 2,
      sym__variable,
      sym_map_variable,
  [8413] = 4,
    ACTIONS(693), 1,
      aux_sym_map_variable_token1,
    ACTIONS(697), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(125), 2,
      sym__variable,
      sym_map_variable,
  [8428] = 4,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(687), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [8443] = 5,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      anon_sym_SLASH,
    STATE(159), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8460] = 3,
    STATE(213), 1,
      sym_watchpoint_mode,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(707), 3,
      anon_sym_w,
      anon_sym_r,
      anon_sym_x,
  [8473] = 4,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(687), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(711), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [8488] = 4,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8503] = 4,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
    ACTIONS(719), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(133), 2,
      sym_block,
      sym_if_statement,
  [8518] = 5,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(225), 1,
      sym_config_assignment,
    STATE(311), 1,
      sym__config_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8535] = 5,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      aux_sym_probes_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8552] = 4,
    ACTIONS(734), 1,
      anon_sym_SLASH,
    ACTIONS(736), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8567] = 4,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(738), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8582] = 4,
    ACTIONS(746), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(744), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8597] = 4,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    STATE(160), 1,
      aux_sym_array_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(750), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [8612] = 4,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(752), 2,
      sym_integer_literal,
      sym_identifier,
  [8627] = 4,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(80), 2,
      sym_block,
      sym_if_statement,
  [8642] = 3,
    STATE(294), 1,
      sym__range_limit,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(758), 3,
      sym_integer_literal,
      sym_scratch_variable,
      sym_identifier,
  [8655] = 5,
    ACTIONS(760), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_action,
    STATE(242), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8672] = 4,
    ACTIONS(766), 1,
      anon_sym_SLASH,
    ACTIONS(768), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(764), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8687] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8701] = 4,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8715] = 4,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8729] = 3,
    ACTIONS(778), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(776), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8741] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(780), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [8751] = 3,
    ACTIONS(784), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(782), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8763] = 4,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      anon_sym_STAR,
    STATE(198), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8777] = 3,
    ACTIONS(792), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8789] = 3,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(794), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8801] = 3,
    ACTIONS(800), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(798), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8813] = 3,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(802), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8825] = 3,
    ACTIONS(808), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8837] = 3,
    ACTIONS(812), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8849] = 3,
    ACTIONS(816), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(814), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8861] = 3,
    ACTIONS(820), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8873] = 4,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8887] = 4,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8901] = 4,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(831), 1,
      anon_sym_STAR,
    STATE(198), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8915] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [8925] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8939] = 3,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(836), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8951] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8965] = 3,
    ACTIONS(844), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(842), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8977] = 3,
    ACTIONS(848), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [8989] = 3,
    ACTIONS(848), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9001] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(850), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [9011] = 4,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(854), 1,
      anon_sym_DOT,
    STATE(218), 1,
      aux_sym_offsetof_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9025] = 3,
    ACTIONS(858), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9037] = 3,
    ACTIONS(862), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9049] = 3,
    ACTIONS(866), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(864), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9061] = 3,
    ACTIONS(870), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9073] = 3,
    ACTIONS(874), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(872), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9085] = 3,
    ACTIONS(878), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(876), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9097] = 3,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(880), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9109] = 3,
    ACTIONS(886), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(884), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9121] = 3,
    ACTIONS(848), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9133] = 3,
    ACTIONS(890), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9145] = 4,
    ACTIONS(854), 1,
      anon_sym_DOT,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_offsetof_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9159] = 3,
    ACTIONS(896), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9171] = 3,
    ACTIONS(890), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(888), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9183] = 3,
    ACTIONS(730), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9195] = 4,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(900), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_offsetof_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9209] = 3,
    ACTIONS(905), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9221] = 3,
    ACTIONS(909), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(907), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9233] = 4,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9247] = 3,
    ACTIONS(917), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(915), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9259] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(919), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LBRACK,
  [9269] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9283] = 4,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(672), 1,
      anon_sym_STAR,
    STATE(187), 1,
      aux_sym_pointer_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9297] = 3,
    ACTIONS(925), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(923), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [9309] = 3,
    ACTIONS(927), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym__probe_arguments__optional_module_and_function,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9320] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9329] = 3,
    ACTIONS(927), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym__probe_arguments__optional_module_and_function,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9340] = 3,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9351] = 3,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9362] = 3,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9373] = 3,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9384] = 3,
    ACTIONS(927), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym__probe_arguments__optional_module_and_function,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9395] = 3,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9406] = 3,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9417] = 3,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym__probe_arguments__event_and_optional_count,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9428] = 3,
    ACTIONS(760), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9439] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(898), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [9448] = 3,
    ACTIONS(937), 1,
      anon_sym_struct,
    STATE(273), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9459] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(939), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9468] = 3,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    ACTIONS(943), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9479] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(945), 2,
      sym_integer_literal,
      sym_identifier,
  [9488] = 3,
    ACTIONS(935), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym__probe_arguments__event_and_optional_count,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9499] = 3,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9510] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(382), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [9519] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(949), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9528] = 3,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9539] = 3,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9550] = 3,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9561] = 3,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(232), 1,
      sym_config_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9572] = 3,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(953), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9583] = 3,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9594] = 2,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9602] = 2,
    ACTIONS(957), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9610] = 2,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9618] = 2,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9626] = 2,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9634] = 2,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9642] = 2,
    ACTIONS(967), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9650] = 2,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9658] = 2,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9666] = 2,
    ACTIONS(973), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9674] = 2,
    ACTIONS(975), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9682] = 2,
    ACTIONS(977), 1,
      sym_file_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9690] = 2,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9698] = 2,
    ACTIONS(981), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9706] = 2,
    ACTIONS(983), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9714] = 2,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9722] = 2,
    ACTIONS(987), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9730] = 2,
    ACTIONS(989), 1,
      sym_file_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9738] = 2,
    ACTIONS(991), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9746] = 2,
    ACTIONS(993), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9754] = 2,
    ACTIONS(995), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9762] = 2,
    ACTIONS(997), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9770] = 2,
    ACTIONS(999), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9778] = 2,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9786] = 2,
    ACTIONS(1003), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9794] = 2,
    ACTIONS(1005), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9802] = 2,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9810] = 2,
    ACTIONS(1009), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9818] = 2,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9826] = 2,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9834] = 2,
    ACTIONS(1015), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9842] = 2,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9850] = 2,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9858] = 2,
    ACTIONS(1021), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9866] = 2,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9874] = 2,
    ACTIONS(1025), 1,
      sym_identifier_with_dash,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9882] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9890] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9898] = 2,
    ACTIONS(1031), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9906] = 2,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9914] = 2,
    ACTIONS(1035), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9922] = 2,
    ACTIONS(1037), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9930] = 2,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9938] = 2,
    ACTIONS(1041), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9946] = 2,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9954] = 2,
    ACTIONS(1045), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9962] = 2,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9970] = 2,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9978] = 2,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9986] = 2,
    ACTIONS(1053), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9994] = 2,
    ACTIONS(1055), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10002] = 2,
    ACTIONS(1057), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10010] = 2,
    ACTIONS(1059), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10018] = 2,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10026] = 2,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10034] = 2,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10042] = 2,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10050] = 2,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10058] = 2,
    ACTIONS(1071), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10066] = 2,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10074] = 2,
    ACTIONS(1075), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10082] = 2,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10090] = 2,
    ACTIONS(1079), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10098] = 2,
    ACTIONS(1081), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10106] = 2,
    ACTIONS(1083), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10114] = 2,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10122] = 2,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10130] = 2,
    ACTIONS(1089), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10138] = 2,
    ACTIONS(1091), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10146] = 2,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10154] = 2,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10162] = 2,
    ACTIONS(1095), 1,
      sym_file_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10170] = 2,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10178] = 2,
    ACTIONS(1099), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10186] = 2,
    ACTIONS(1101), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10194] = 2,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10202] = 2,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10210] = 2,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10218] = 2,
    ACTIONS(1109), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10226] = 2,
    ACTIONS(1111), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10234] = 2,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10242] = 2,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10250] = 2,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10258] = 2,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10266] = 2,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10274] = 2,
    ACTIONS(1123), 1,
      sym_scratch_variable,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10282] = 2,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10290] = 2,
    ACTIONS(1127), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 532,
  [SMALL_STATE(15)] = 659,
  [SMALL_STATE(16)] = 784,
  [SMALL_STATE(17)] = 914,
  [SMALL_STATE(18)] = 1034,
  [SMALL_STATE(19)] = 1154,
  [SMALL_STATE(20)] = 1276,
  [SMALL_STATE(21)] = 1400,
  [SMALL_STATE(22)] = 1464,
  [SMALL_STATE(23)] = 1528,
  [SMALL_STATE(24)] = 1584,
  [SMALL_STATE(25)] = 1637,
  [SMALL_STATE(26)] = 1690,
  [SMALL_STATE(27)] = 1743,
  [SMALL_STATE(28)] = 1839,
  [SMALL_STATE(29)] = 1935,
  [SMALL_STATE(30)] = 2031,
  [SMALL_STATE(31)] = 2127,
  [SMALL_STATE(32)] = 2220,
  [SMALL_STATE(33)] = 2313,
  [SMALL_STATE(34)] = 2406,
  [SMALL_STATE(35)] = 2499,
  [SMALL_STATE(36)] = 2592,
  [SMALL_STATE(37)] = 2685,
  [SMALL_STATE(38)] = 2778,
  [SMALL_STATE(39)] = 2871,
  [SMALL_STATE(40)] = 2964,
  [SMALL_STATE(41)] = 3057,
  [SMALL_STATE(42)] = 3150,
  [SMALL_STATE(43)] = 3243,
  [SMALL_STATE(44)] = 3336,
  [SMALL_STATE(45)] = 3429,
  [SMALL_STATE(46)] = 3522,
  [SMALL_STATE(47)] = 3615,
  [SMALL_STATE(48)] = 3708,
  [SMALL_STATE(49)] = 3801,
  [SMALL_STATE(50)] = 3894,
  [SMALL_STATE(51)] = 3987,
  [SMALL_STATE(52)] = 4080,
  [SMALL_STATE(53)] = 4173,
  [SMALL_STATE(54)] = 4223,
  [SMALL_STATE(55)] = 4273,
  [SMALL_STATE(56)] = 4323,
  [SMALL_STATE(57)] = 4377,
  [SMALL_STATE(58)] = 4427,
  [SMALL_STATE(59)] = 4477,
  [SMALL_STATE(60)] = 4524,
  [SMALL_STATE(61)] = 4571,
  [SMALL_STATE(62)] = 4618,
  [SMALL_STATE(63)] = 4669,
  [SMALL_STATE(64)] = 4716,
  [SMALL_STATE(65)] = 4757,
  [SMALL_STATE(66)] = 4798,
  [SMALL_STATE(67)] = 4835,
  [SMALL_STATE(68)] = 4871,
  [SMALL_STATE(69)] = 4911,
  [SMALL_STATE(70)] = 4949,
  [SMALL_STATE(71)] = 4985,
  [SMALL_STATE(72)] = 5021,
  [SMALL_STATE(73)] = 5060,
  [SMALL_STATE(74)] = 5097,
  [SMALL_STATE(75)] = 5134,
  [SMALL_STATE(76)] = 5171,
  [SMALL_STATE(77)] = 5208,
  [SMALL_STATE(78)] = 5245,
  [SMALL_STATE(79)] = 5280,
  [SMALL_STATE(80)] = 5315,
  [SMALL_STATE(81)] = 5350,
  [SMALL_STATE(82)] = 5385,
  [SMALL_STATE(83)] = 5420,
  [SMALL_STATE(84)] = 5455,
  [SMALL_STATE(85)] = 5490,
  [SMALL_STATE(86)] = 5524,
  [SMALL_STATE(87)] = 5558,
  [SMALL_STATE(88)] = 5592,
  [SMALL_STATE(89)] = 5626,
  [SMALL_STATE(90)] = 5660,
  [SMALL_STATE(91)] = 5694,
  [SMALL_STATE(92)] = 5728,
  [SMALL_STATE(93)] = 5762,
  [SMALL_STATE(94)] = 5796,
  [SMALL_STATE(95)] = 5830,
  [SMALL_STATE(96)] = 5864,
  [SMALL_STATE(97)] = 5922,
  [SMALL_STATE(98)] = 5956,
  [SMALL_STATE(99)] = 5990,
  [SMALL_STATE(100)] = 6024,
  [SMALL_STATE(101)] = 6058,
  [SMALL_STATE(102)] = 6092,
  [SMALL_STATE(103)] = 6126,
  [SMALL_STATE(104)] = 6160,
  [SMALL_STATE(105)] = 6194,
  [SMALL_STATE(106)] = 6228,
  [SMALL_STATE(107)] = 6262,
  [SMALL_STATE(108)] = 6298,
  [SMALL_STATE(109)] = 6332,
  [SMALL_STATE(110)] = 6370,
  [SMALL_STATE(111)] = 6404,
  [SMALL_STATE(112)] = 6438,
  [SMALL_STATE(113)] = 6472,
  [SMALL_STATE(114)] = 6512,
  [SMALL_STATE(115)] = 6556,
  [SMALL_STATE(116)] = 6590,
  [SMALL_STATE(117)] = 6636,
  [SMALL_STATE(118)] = 6684,
  [SMALL_STATE(119)] = 6734,
  [SMALL_STATE(120)] = 6788,
  [SMALL_STATE(121)] = 6822,
  [SMALL_STATE(122)] = 6856,
  [SMALL_STATE(123)] = 6890,
  [SMALL_STATE(124)] = 6924,
  [SMALL_STATE(125)] = 6958,
  [SMALL_STATE(126)] = 6992,
  [SMALL_STATE(127)] = 7027,
  [SMALL_STATE(128)] = 7060,
  [SMALL_STATE(129)] = 7093,
  [SMALL_STATE(130)] = 7128,
  [SMALL_STATE(131)] = 7161,
  [SMALL_STATE(132)] = 7194,
  [SMALL_STATE(133)] = 7227,
  [SMALL_STATE(134)] = 7260,
  [SMALL_STATE(135)] = 7293,
  [SMALL_STATE(136)] = 7328,
  [SMALL_STATE(137)] = 7363,
  [SMALL_STATE(138)] = 7395,
  [SMALL_STATE(139)] = 7454,
  [SMALL_STATE(140)] = 7509,
  [SMALL_STATE(141)] = 7568,
  [SMALL_STATE(142)] = 7627,
  [SMALL_STATE(143)] = 7686,
  [SMALL_STATE(144)] = 7740,
  [SMALL_STATE(145)] = 7794,
  [SMALL_STATE(146)] = 7850,
  [SMALL_STATE(147)] = 7903,
  [SMALL_STATE(148)] = 7956,
  [SMALL_STATE(149)] = 8009,
  [SMALL_STATE(150)] = 8062,
  [SMALL_STATE(151)] = 8115,
  [SMALL_STATE(152)] = 8168,
  [SMALL_STATE(153)] = 8198,
  [SMALL_STATE(154)] = 8248,
  [SMALL_STATE(155)] = 8275,
  [SMALL_STATE(156)] = 8295,
  [SMALL_STATE(157)] = 8315,
  [SMALL_STATE(158)] = 8331,
  [SMALL_STATE(159)] = 8351,
  [SMALL_STATE(160)] = 8368,
  [SMALL_STATE(161)] = 8383,
  [SMALL_STATE(162)] = 8398,
  [SMALL_STATE(163)] = 8413,
  [SMALL_STATE(164)] = 8428,
  [SMALL_STATE(165)] = 8443,
  [SMALL_STATE(166)] = 8460,
  [SMALL_STATE(167)] = 8473,
  [SMALL_STATE(168)] = 8488,
  [SMALL_STATE(169)] = 8503,
  [SMALL_STATE(170)] = 8518,
  [SMALL_STATE(171)] = 8535,
  [SMALL_STATE(172)] = 8552,
  [SMALL_STATE(173)] = 8567,
  [SMALL_STATE(174)] = 8582,
  [SMALL_STATE(175)] = 8597,
  [SMALL_STATE(176)] = 8612,
  [SMALL_STATE(177)] = 8627,
  [SMALL_STATE(178)] = 8642,
  [SMALL_STATE(179)] = 8655,
  [SMALL_STATE(180)] = 8672,
  [SMALL_STATE(181)] = 8687,
  [SMALL_STATE(182)] = 8701,
  [SMALL_STATE(183)] = 8715,
  [SMALL_STATE(184)] = 8729,
  [SMALL_STATE(185)] = 8741,
  [SMALL_STATE(186)] = 8751,
  [SMALL_STATE(187)] = 8763,
  [SMALL_STATE(188)] = 8777,
  [SMALL_STATE(189)] = 8789,
  [SMALL_STATE(190)] = 8801,
  [SMALL_STATE(191)] = 8813,
  [SMALL_STATE(192)] = 8825,
  [SMALL_STATE(193)] = 8837,
  [SMALL_STATE(194)] = 8849,
  [SMALL_STATE(195)] = 8861,
  [SMALL_STATE(196)] = 8873,
  [SMALL_STATE(197)] = 8887,
  [SMALL_STATE(198)] = 8901,
  [SMALL_STATE(199)] = 8915,
  [SMALL_STATE(200)] = 8925,
  [SMALL_STATE(201)] = 8939,
  [SMALL_STATE(202)] = 8951,
  [SMALL_STATE(203)] = 8965,
  [SMALL_STATE(204)] = 8977,
  [SMALL_STATE(205)] = 8989,
  [SMALL_STATE(206)] = 9001,
  [SMALL_STATE(207)] = 9011,
  [SMALL_STATE(208)] = 9025,
  [SMALL_STATE(209)] = 9037,
  [SMALL_STATE(210)] = 9049,
  [SMALL_STATE(211)] = 9061,
  [SMALL_STATE(212)] = 9073,
  [SMALL_STATE(213)] = 9085,
  [SMALL_STATE(214)] = 9097,
  [SMALL_STATE(215)] = 9109,
  [SMALL_STATE(216)] = 9121,
  [SMALL_STATE(217)] = 9133,
  [SMALL_STATE(218)] = 9145,
  [SMALL_STATE(219)] = 9159,
  [SMALL_STATE(220)] = 9171,
  [SMALL_STATE(221)] = 9183,
  [SMALL_STATE(222)] = 9195,
  [SMALL_STATE(223)] = 9209,
  [SMALL_STATE(224)] = 9221,
  [SMALL_STATE(225)] = 9233,
  [SMALL_STATE(226)] = 9247,
  [SMALL_STATE(227)] = 9259,
  [SMALL_STATE(228)] = 9269,
  [SMALL_STATE(229)] = 9283,
  [SMALL_STATE(230)] = 9297,
  [SMALL_STATE(231)] = 9309,
  [SMALL_STATE(232)] = 9320,
  [SMALL_STATE(233)] = 9329,
  [SMALL_STATE(234)] = 9340,
  [SMALL_STATE(235)] = 9351,
  [SMALL_STATE(236)] = 9362,
  [SMALL_STATE(237)] = 9373,
  [SMALL_STATE(238)] = 9384,
  [SMALL_STATE(239)] = 9395,
  [SMALL_STATE(240)] = 9406,
  [SMALL_STATE(241)] = 9417,
  [SMALL_STATE(242)] = 9428,
  [SMALL_STATE(243)] = 9439,
  [SMALL_STATE(244)] = 9448,
  [SMALL_STATE(245)] = 9459,
  [SMALL_STATE(246)] = 9468,
  [SMALL_STATE(247)] = 9479,
  [SMALL_STATE(248)] = 9488,
  [SMALL_STATE(249)] = 9499,
  [SMALL_STATE(250)] = 9510,
  [SMALL_STATE(251)] = 9519,
  [SMALL_STATE(252)] = 9528,
  [SMALL_STATE(253)] = 9539,
  [SMALL_STATE(254)] = 9550,
  [SMALL_STATE(255)] = 9561,
  [SMALL_STATE(256)] = 9572,
  [SMALL_STATE(257)] = 9583,
  [SMALL_STATE(258)] = 9594,
  [SMALL_STATE(259)] = 9602,
  [SMALL_STATE(260)] = 9610,
  [SMALL_STATE(261)] = 9618,
  [SMALL_STATE(262)] = 9626,
  [SMALL_STATE(263)] = 9634,
  [SMALL_STATE(264)] = 9642,
  [SMALL_STATE(265)] = 9650,
  [SMALL_STATE(266)] = 9658,
  [SMALL_STATE(267)] = 9666,
  [SMALL_STATE(268)] = 9674,
  [SMALL_STATE(269)] = 9682,
  [SMALL_STATE(270)] = 9690,
  [SMALL_STATE(271)] = 9698,
  [SMALL_STATE(272)] = 9706,
  [SMALL_STATE(273)] = 9714,
  [SMALL_STATE(274)] = 9722,
  [SMALL_STATE(275)] = 9730,
  [SMALL_STATE(276)] = 9738,
  [SMALL_STATE(277)] = 9746,
  [SMALL_STATE(278)] = 9754,
  [SMALL_STATE(279)] = 9762,
  [SMALL_STATE(280)] = 9770,
  [SMALL_STATE(281)] = 9778,
  [SMALL_STATE(282)] = 9786,
  [SMALL_STATE(283)] = 9794,
  [SMALL_STATE(284)] = 9802,
  [SMALL_STATE(285)] = 9810,
  [SMALL_STATE(286)] = 9818,
  [SMALL_STATE(287)] = 9826,
  [SMALL_STATE(288)] = 9834,
  [SMALL_STATE(289)] = 9842,
  [SMALL_STATE(290)] = 9850,
  [SMALL_STATE(291)] = 9858,
  [SMALL_STATE(292)] = 9866,
  [SMALL_STATE(293)] = 9874,
  [SMALL_STATE(294)] = 9882,
  [SMALL_STATE(295)] = 9890,
  [SMALL_STATE(296)] = 9898,
  [SMALL_STATE(297)] = 9906,
  [SMALL_STATE(298)] = 9914,
  [SMALL_STATE(299)] = 9922,
  [SMALL_STATE(300)] = 9930,
  [SMALL_STATE(301)] = 9938,
  [SMALL_STATE(302)] = 9946,
  [SMALL_STATE(303)] = 9954,
  [SMALL_STATE(304)] = 9962,
  [SMALL_STATE(305)] = 9970,
  [SMALL_STATE(306)] = 9978,
  [SMALL_STATE(307)] = 9986,
  [SMALL_STATE(308)] = 9994,
  [SMALL_STATE(309)] = 10002,
  [SMALL_STATE(310)] = 10010,
  [SMALL_STATE(311)] = 10018,
  [SMALL_STATE(312)] = 10026,
  [SMALL_STATE(313)] = 10034,
  [SMALL_STATE(314)] = 10042,
  [SMALL_STATE(315)] = 10050,
  [SMALL_STATE(316)] = 10058,
  [SMALL_STATE(317)] = 10066,
  [SMALL_STATE(318)] = 10074,
  [SMALL_STATE(319)] = 10082,
  [SMALL_STATE(320)] = 10090,
  [SMALL_STATE(321)] = 10098,
  [SMALL_STATE(322)] = 10106,
  [SMALL_STATE(323)] = 10114,
  [SMALL_STATE(324)] = 10122,
  [SMALL_STATE(325)] = 10130,
  [SMALL_STATE(326)] = 10138,
  [SMALL_STATE(327)] = 10146,
  [SMALL_STATE(328)] = 10154,
  [SMALL_STATE(329)] = 10162,
  [SMALL_STATE(330)] = 10170,
  [SMALL_STATE(331)] = 10178,
  [SMALL_STATE(332)] = 10186,
  [SMALL_STATE(333)] = 10194,
  [SMALL_STATE(334)] = 10202,
  [SMALL_STATE(335)] = 10210,
  [SMALL_STATE(336)] = 10218,
  [SMALL_STATE(337)] = 10226,
  [SMALL_STATE(338)] = 10234,
  [SMALL_STATE(339)] = 10242,
  [SMALL_STATE(340)] = 10250,
  [SMALL_STATE(341)] = 10258,
  [SMALL_STATE(342)] = 10266,
  [SMALL_STATE(343)] = 10274,
  [SMALL_STATE(344)] = 10282,
  [SMALL_STATE(345)] = 10290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__preamble_item, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 5, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 5, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 38),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 38),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 25),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, 0, 25),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_body, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 44),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 44),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroll_statement, 5, 0, 40),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroll_statement, 5, 0, 40),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 46),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 46),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 39),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, 0, 39),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 6, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_decrement, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, 0, 37),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, 0, 37),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_expression, 2, 0, 20),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_expression, 2, 0, 20),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 21),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 21),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 13),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 13),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, 0, 41),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, 0, 41),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_increment, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 22),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 22),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offsetof_expression, 6, 0, 45),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offsetof_expression, 6, 0, 45),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 26),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 26),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sizeof_expression, 4, 0, 36),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sizeof_expression, 4, 0, 36),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offsetof_expression, 7, 0, 48),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offsetof_expression, 7, 0, 48),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 34),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 34),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sizeof_expression, 4, 0, 35),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sizeof_expression, 4, 0, 35),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_expression, 2, 0, 24),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_expression, 2, 0, 24),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sufix_increment, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_decrement, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 3, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__action_body_repeat1, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 1, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 14),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, 0, 26),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__predicate_expression, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_left_side, 2, 0, 23),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_left_side, 2, 0, 23),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 2, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes_list, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes_list, 1, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_probes_list_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__probe_arguments__optional_module_and_function, 2, 0, 15),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__probe_arguments__optional_module_and_function, 2, 0, 15),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__probe_arguments__event_and_optional_count, 2, 0, 16),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__probe_arguments__event_and_optional_count, 2, 0, 16),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iter, 3, 0, 19),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__iter, 3, 0, 19),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__usdt, 5, 0, 28),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__usdt, 5, 0, 28),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 2, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 9),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 9),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__software_event, 2, 0, 12),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__software_event, 2, 0, 12),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 10),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 10),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_end_provider, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_end_provider, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__probe_arguments__optional_module_and_function, 4, 0, 27),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__probe_arguments__optional_module_and_function, 4, 0, 27),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uprobe_uretprobe, 5, 0, 28),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uprobe_uretprobe, 5, 0, 28),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tracepoint, 5, 0, 29),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tracepoint, 5, 0, 29),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__probe_arguments__event_and_optional_count, 4, 0, 30),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__probe_arguments__event_and_optional_count, 4, 0, 30),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__profile_interval, 5, 0, 31),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__profile_interval, 5, 0, 31),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iter, 5, 0, 32),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__iter, 5, 0, 32),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 3, 0, 0),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 8),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 8),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 2),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 3, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hardware_event, 2, 0, 12),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hardware_event, 2, 0, 12),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__kprobe_kretprobe, 2, 0, 11),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__kprobe_kretprobe, 2, 0, 11),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 3),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__usdt, 7, 0, 42),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__usdt, 7, 0, 42),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_watchpoint_mode, 1, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_watchpoint_mode, 1, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__watchpoint, 7, 0, 43),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__watchpoint, 7, 0, 43),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 7),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 7),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 4),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 4),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 5),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 5),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rawtracepoint, 2, 0, 11),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rawtracepoint, 2, 0, 11),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_offsetof_expression_repeat1, 2, 0, 0),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_offsetof_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bench_test, 3, 0, 17),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bench_test, 3, 0, 17),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__profile_interval, 3, 0, 18),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__profile_interval, 3, 0, 18),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 1, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 6),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 6),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fentry_fexit, 2, 0, 11),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fentry_fexit, 2, 0, 11),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 13),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_assignment, 3, 0, 33),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uprobe_uretprobe_provider, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tracepoint_provider, 1, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile_interval_provider, 1, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iter_provider, 1, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rawtracepoint_provider, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ustd_provider, 1, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fentry_fexit_provider, 1, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hardware_event_provider, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 47),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_watchpoint_provider, 1, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_unit, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bench_test_provider, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1063] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kprobe_kretprobe_provider, 1, 0, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_event_provider, 1, 0, 0),
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
