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
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_line_comment = 1,
  sym_block_comment = 2,
  anon_sym_config = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  aux_sym_config_assignment_token1 = 8,
  anon_sym_COMMA = 9,
  anon_sym_SLASH = 10,
  anon_sym_BEGIN = 11,
  anon_sym_END = 12,
  anon_sym_COLON = 13,
  anon_sym_bench = 14,
  anon_sym_self = 15,
  anon_sym_hardware = 16,
  anon_sym_h = 17,
  anon_sym_interval = 18,
  anon_sym_i = 19,
  anon_sym_iter = 20,
  anon_sym_it = 21,
  anon_sym_fentry = 22,
  anon_sym_f = 23,
  anon_sym_fexit = 24,
  anon_sym_fr = 25,
  anon_sym_kprobe = 26,
  anon_sym_k = 27,
  anon_sym_kretprobe = 28,
  anon_sym_kr = 29,
  anon_sym_profile = 30,
  anon_sym_p = 31,
  anon_sym_rawtracepoint = 32,
  anon_sym_rt = 33,
  anon_sym_software = 34,
  anon_sym_s = 35,
  anon_sym_tracepoint = 36,
  anon_sym_t = 37,
  anon_sym_uprobe = 38,
  anon_sym_u = 39,
  anon_sym_uretprobe = 40,
  anon_sym_ur = 41,
  anon_sym_usdt = 42,
  anon_sym_U = 43,
  anon_sym_watchpoint = 44,
  anon_sym_w = 45,
  anon_sym_asyncwatchpoint = 46,
  anon_sym_aw = 47,
  anon_sym_LT_LT_EQ = 48,
  anon_sym_GT_GT_EQ = 49,
  anon_sym_PLUS_EQ = 50,
  anon_sym_DASH_EQ = 51,
  anon_sym_STAR_EQ = 52,
  anon_sym_SLASH_EQ = 53,
  anon_sym_PERCENT_EQ = 54,
  anon_sym_AMP_EQ = 55,
  anon_sym_PIPE_EQ = 56,
  anon_sym_CARET_EQ = 57,
  anon_sym_PERCENT = 58,
  anon_sym_STAR = 59,
  anon_sym_PLUS = 60,
  anon_sym_DASH = 61,
  anon_sym_LT_LT = 62,
  anon_sym_GT_GT = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_LT = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_AMP = 70,
  anon_sym_CARET = 71,
  anon_sym_PIPE = 72,
  anon_sym_AMP_AMP = 73,
  anon_sym_PIPE_PIPE = 74,
  anon_sym_LPAREN = 75,
  anon_sym_RPAREN = 76,
  anon_sym_bool = 77,
  anon_sym_int8 = 78,
  anon_sym_int16 = 79,
  anon_sym_int32 = 80,
  anon_sym_int64 = 81,
  anon_sym_uint8 = 82,
  anon_sym_uint16 = 83,
  anon_sym_uint32 = 84,
  anon_sym_uint64 = 85,
  anon_sym_args = 86,
  anon_sym_DOT = 87,
  anon_sym_DQUOTE = 88,
  aux_sym_string_literal_token1 = 89,
  aux_sym_string_literal_token2 = 90,
  sym_integer_literal = 91,
  anon_sym_AT = 92,
  aux_sym_map_variable_token1 = 93,
  anon_sym_LBRACK = 94,
  anon_sym_RBRACK = 95,
  sym_scratch_variable = 96,
  sym_wildcard_identifier = 97,
  sym_source_file = 98,
  sym_preamble = 99,
  sym__preamble_item = 100,
  sym_config_block = 101,
  sym__config_body = 102,
  sym_config_assignment = 103,
  sym_action_block = 104,
  sym_probes = 105,
  sym_predicate = 106,
  sym__predicate_expression = 107,
  sym_probe = 108,
  sym_probe_provider = 109,
  sym_action = 110,
  sym__action_body = 111,
  sym_statement = 112,
  sym_assignment = 113,
  sym__expression = 114,
  sym_div_expression = 115,
  sym__div_left_side = 116,
  sym_binary_expression = 117,
  sym_call_expression = 118,
  sym_arguments = 119,
  sym_cast_expression = 120,
  sym_integer_type = 121,
  sym_args_item = 122,
  sym_string_literal = 123,
  sym__variable = 124,
  sym_map_variable = 125,
  sym_identifier = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_preamble_repeat1 = 128,
  aux_sym__config_body_repeat1 = 129,
  aux_sym_probes_repeat1 = 130,
  aux_sym__action_body_repeat1 = 131,
  aux_sym_arguments_repeat1 = 132,
  aux_sym_string_literal_repeat1 = 133,
  alias_sym_config_variable = 134,
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
  [aux_sym_config_assignment_token1] = "config_value",
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
  [anon_sym_bool] = "bool",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_args] = "args",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [aux_sym_string_literal_token2] = "escape_sequence",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_AT] = "@",
  [aux_sym_map_variable_token1] = "map_variable_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_scratch_variable] = "scratch_variable",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [sym_source_file] = "source_file",
  [sym_preamble] = "preamble",
  [sym__preamble_item] = "_preamble_item",
  [sym_config_block] = "config_block",
  [sym__config_body] = "_config_body",
  [sym_config_assignment] = "config_assignment",
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
  [sym_integer_type] = "integer_type",
  [sym_args_item] = "args_item",
  [sym_string_literal] = "string_literal",
  [sym__variable] = "_variable",
  [sym_map_variable] = "map_variable",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_preamble_repeat1] = "preamble_repeat1",
  [aux_sym__config_body_repeat1] = "_config_body_repeat1",
  [aux_sym_probes_repeat1] = "probes_repeat1",
  [aux_sym__action_body_repeat1] = "_action_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_config_variable] = "config_variable",
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
  [aux_sym_config_assignment_token1] = aux_sym_config_assignment_token1,
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
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_map_variable_token1] = aux_sym_map_variable_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_scratch_variable] = sym_scratch_variable,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [sym_source_file] = sym_source_file,
  [sym_preamble] = sym_preamble,
  [sym__preamble_item] = sym__preamble_item,
  [sym_config_block] = sym_config_block,
  [sym__config_body] = sym__config_body,
  [sym_config_assignment] = sym_config_assignment,
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
  [sym_integer_type] = sym_integer_type,
  [sym_args_item] = sym_args_item,
  [sym_string_literal] = sym_string_literal,
  [sym__variable] = sym__variable,
  [sym_map_variable] = sym_map_variable,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_preamble_repeat1] = aux_sym_preamble_repeat1,
  [aux_sym__config_body_repeat1] = aux_sym__config_body_repeat1,
  [aux_sym_probes_repeat1] = aux_sym_probes_repeat1,
  [aux_sym__action_body_repeat1] = aux_sym__action_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_config_variable] = alias_sym_config_variable,
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
  [aux_sym_config_assignment_token1] = {
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
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_integer_type] = {
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_config_variable] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_event = 2,
  field_function = 3,
  field_left = 4,
  field_module = 5,
  field_provider = 6,
  field_right = 7,
  field_type = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_event] = "event",
  [field_function] = "function",
  [field_left] = "left",
  [field_module] = "module",
  [field_provider] = "provider",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_event, 2},
    {field_provider, 0},
  [2] =
    {field_left, 0},
  [3] =
    {field_left, 0, .inherited = true},
    {field_right, 1},
  [5] =
    {field_arguments, 1},
    {field_function, 0},
  [7] =
    {field_left, 0},
    {field_right, 2},
  [9] =
    {field_event, 4},
    {field_module, 2},
    {field_provider, 0},
  [12] =
    {field_type, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_config_variable,
    [2] = aux_sym_config_assignment_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 3,
    sym_identifier,
    alias_sym_config_variable,
    aux_sym_config_assignment_token1,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '!', 18,
        '"', 279,
        '$', 140,
        '%', 240,
        '&', 252,
        '(', 257,
        ')', 258,
        '*', 241,
        '+', 242,
        ',', 155,
        '-', 243,
        '.', 278,
        '/', 156,
        ':', 161,
        ';', 153,
        '<', 247,
        '=', 150,
        '>', 249,
        '@', 295,
        'B', 305,
        'E', 308,
        'U', 221,
        '[', 422,
        '\\', 141,
        ']', 423,
        '^', 253,
        'a', 385,
        'b', 329,
        'c', 369,
        'f', 180,
        'h', 168,
        'i', 172,
        'k', 188,
        'p', 197,
        'r', 310,
        's', 204,
        't', 208,
        'u', 212,
        'w', 224,
        '{', 151,
        '|', 254,
        '}', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 18,
        '%', 240,
        '&', 252,
        ')', 258,
        '*', 241,
        '+', 242,
        ',', 155,
        '-', 243,
        '/', 156,
        ';', 153,
        '<', 247,
        '=', 150,
        '>', 249,
        '[', 422,
        ']', 423,
        '^', 253,
        '|', 254,
        '}', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 279,
        '$', 140,
        '(', 257,
        ')', 258,
        '-', 9,
        '/', 4,
        '0', 287,
        '@', 295,
        'a', 386,
        '{', 151,
        '}', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(287);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(261);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(269);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(273);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(267);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(271);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 131:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 132:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 134:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 135:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 140:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '/', 4,
        'B', 20,
        'E', 23,
        'U', 220,
        'a', 114,
        'b', 44,
        'c', 86,
        'f', 181,
        'h', 169,
        'i', 173,
        'k', 189,
        'p', 196,
        'r', 25,
        's', 205,
        't', 209,
        'u', 213,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_config_assignment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bench);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bench);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_hardware);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_hardware);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_interval);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_interval);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_iter);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_iter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_fentry);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_fentry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_fexit);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_fexit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_fr);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_fr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_kprobe);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_kprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_kretprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_kr);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_profile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_rawtracepoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_rt);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_rt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_software);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_software);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_tracepoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uprobe);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_uprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uretprobe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ur);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_usdt);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_usdt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_U);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_watchpoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_asyncwatchpoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_aw);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_aw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(230);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(231);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(244);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(255);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(238);
      if (lookahead == '|') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_args);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'L', 293,
        '_', 291,
        'l', 294,
        'E', 138,
        'e', 138,
        'U', 289,
        'u', 289,
        'X', 139,
        'x', 139,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(293);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'L') ADVANCE(286);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '1') ADVANCE(302);
      if (lookahead == '3') ADVANCE(298);
      if (lookahead == '6') ADVANCE(300);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '1') ADVANCE(303);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead == '6') ADVANCE(301);
      if (lookahead == '8') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '2') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '2') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '4') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '4') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == '6') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'D') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'E') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'G') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'I') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'N') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'N') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'b') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'b') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'b') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'b') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'd') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'd') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'f') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'f') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'f') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'g') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'g') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'h') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'h') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'h') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 'x') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'p') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == 'w') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'v') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'w') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'w') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'w') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'w') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'y') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (lookahead == 'y') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_map_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_scratch_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 142},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 142},
  [6] = {.lex_state = 142},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
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
    [aux_sym_config_assignment_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_map_variable_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_scratch_variable] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym_preamble] = STATE(5),
    [sym__preamble_item] = STATE(6),
    [sym_config_block] = STATE(6),
    [sym_action_block] = STATE(2),
    [sym_probes] = STATE(73),
    [sym_probe] = STATE(76),
    [sym_probe_provider] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_preamble_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_config] = ACTIONS(7),
    [anon_sym_BEGIN] = ACTIONS(9),
    [anon_sym_END] = ACTIONS(9),
    [anon_sym_bench] = ACTIONS(11),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_hardware] = ACTIONS(11),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_interval] = ACTIONS(11),
    [anon_sym_i] = ACTIONS(13),
    [anon_sym_iter] = ACTIONS(11),
    [anon_sym_it] = ACTIONS(13),
    [anon_sym_fentry] = ACTIONS(11),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_fexit] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_kprobe] = ACTIONS(11),
    [anon_sym_k] = ACTIONS(13),
    [anon_sym_kretprobe] = ACTIONS(11),
    [anon_sym_kr] = ACTIONS(13),
    [anon_sym_profile] = ACTIONS(11),
    [anon_sym_p] = ACTIONS(13),
    [anon_sym_rawtracepoint] = ACTIONS(11),
    [anon_sym_rt] = ACTIONS(11),
    [anon_sym_software] = ACTIONS(11),
    [anon_sym_s] = ACTIONS(13),
    [anon_sym_tracepoint] = ACTIONS(11),
    [anon_sym_t] = ACTIONS(13),
    [anon_sym_uprobe] = ACTIONS(11),
    [anon_sym_u] = ACTIONS(13),
    [anon_sym_uretprobe] = ACTIONS(11),
    [anon_sym_ur] = ACTIONS(13),
    [anon_sym_usdt] = ACTIONS(11),
    [anon_sym_U] = ACTIONS(11),
    [anon_sym_watchpoint] = ACTIONS(11),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_asyncwatchpoint] = ACTIONS(11),
    [anon_sym_aw] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_probes,
    STATE(76), 1,
      sym_probe,
    STATE(111), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(3), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 12,
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
    ACTIONS(11), 22,
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
  [63] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_probes,
    STATE(76), 1,
      sym_probe,
    STATE(111), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(3), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(25), 12,
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
    ACTIONS(22), 22,
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
  [126] = 9,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_probes,
    STATE(76), 1,
      sym_probe,
    STATE(111), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(3), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 12,
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
    ACTIONS(11), 22,
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
  [189] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_probes,
    STATE(76), 1,
      sym_probe,
    STATE(111), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(4), 2,
      sym_action_block,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 12,
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
    ACTIONS(11), 22,
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
  [252] = 5,
    ACTIONS(7), 1,
      anon_sym_config,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym__preamble_item,
      sym_config_block,
      aux_sym_preamble_repeat1,
    ACTIONS(32), 12,
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
    ACTIONS(30), 25,
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
  [306] = 5,
    ACTIONS(36), 1,
      anon_sym_config,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym__preamble_item,
      sym_config_block,
      aux_sym_preamble_repeat1,
    ACTIONS(39), 12,
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
    ACTIONS(34), 25,
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
  [360] = 6,
    STATE(91), 1,
      sym_probe,
    STATE(111), 1,
      sym_probe_provider,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    ACTIONS(13), 12,
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
    ACTIONS(11), 22,
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
  [413] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 12,
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
    ACTIONS(41), 26,
      ts_builtin_sym_end,
      anon_sym_config,
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
  [460] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 12,
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
    ACTIONS(45), 26,
      ts_builtin_sym_end,
      anon_sym_config,
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
  [507] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 12,
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
    ACTIONS(49), 25,
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
  [553] = 3,
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
    ACTIONS(53), 25,
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
  [599] = 3,
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
    ACTIONS(57), 25,
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
    ACTIONS(61), 25,
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
  [691] = 5,
    ACTIONS(69), 1,
      aux_sym_map_variable_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(65), 13,
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
    ACTIONS(67), 21,
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
  [740] = 4,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 13,
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
    ACTIONS(75), 21,
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
  [786] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 13,
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
    ACTIONS(81), 21,
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
  [829] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 13,
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
    ACTIONS(85), 21,
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
  [872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 13,
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
    ACTIONS(89), 21,
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
  [915] = 5,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 10,
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
    ACTIONS(95), 12,
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
  [959] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 6,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(101), 19,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [993] = 5,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(93), 18,
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
  [1031] = 3,
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
  [1063] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(109), 18,
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
  [1095] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 18,
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
  [1127] = 4,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 16,
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
  [1161] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 14,
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
  [1197] = 6,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 12,
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
  [1235] = 8,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 10,
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
  [1277] = 9,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(113), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1321] = 10,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(113), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1367] = 11,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 2,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(113), 7,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1415] = 13,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(113), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1467] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(137), 18,
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
  [1499] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(141), 18,
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
  [1531] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(145), 18,
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
  [1563] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(149), 18,
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
  [1595] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(153), 18,
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
  [1627] = 3,
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
  [1659] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(161), 18,
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
  [1691] = 16,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_integer_literal,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    ACTIONS(179), 1,
      sym_scratch_variable,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    STATE(87), 1,
      sym_statement,
    STATE(102), 1,
      sym_assignment,
    STATE(108), 1,
      sym__action_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym__variable,
      sym_map_variable,
    STATE(48), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [1748] = 14,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1800] = 15,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_integer_literal,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    ACTIONS(179), 1,
      sym_scratch_variable,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    STATE(102), 1,
      sym_assignment,
    STATE(103), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym__variable,
      sym_map_variable,
    STATE(48), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [1854] = 16,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1910] = 15,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_integer_literal,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    ACTIONS(179), 1,
      sym_scratch_variable,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    STATE(102), 1,
      sym_assignment,
    STATE(103), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym__variable,
      sym_map_variable,
    STATE(48), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [1964] = 16,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2020] = 16,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2076] = 14,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2127] = 14,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(201), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2178] = 14,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_integer_literal,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    ACTIONS(179), 1,
      sym_scratch_variable,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    STATE(102), 1,
      sym_assignment,
    STATE(103), 1,
      sym_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym__variable,
      sym_map_variable,
    STATE(48), 7,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
  [2229] = 11,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(46), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2273] = 11,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    STATE(105), 1,
      sym__predicate_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(67), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2317] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(25), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2358] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(47), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2399] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(213), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(44), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2440] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(23), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2481] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 2,
      sym_integer_literal,
      sym_scratch_variable,
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
  [2522] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(26), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2563] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(221), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(27), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2604] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(30), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2645] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(31), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2686] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(29), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2727] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(28), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2768] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(32), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2809] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_integer_literal,
      sym_scratch_variable,
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
  [2850] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(33), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2891] = 13,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(123), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2938] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      aux_sym_map_variable_token1,
    STATE(22), 1,
      sym_identifier,
    STATE(57), 1,
      sym__div_left_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 2,
      sym_integer_literal,
      sym_scratch_variable,
    STATE(49), 9,
      sym__expression,
      sym_div_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_cast_expression,
      sym_args_item,
      sym_string_literal,
      sym__variable,
      sym_map_variable,
  [2979] = 3,
    STATE(117), 1,
      sym_integer_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 9,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
  [2998] = 4,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(247), 2,
      anon_sym_args,
      aux_sym_map_variable_token1,
    ACTIONS(245), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_AT,
      sym_scratch_variable,
  [3017] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(247), 2,
      anon_sym_args,
      aux_sym_map_variable_token1,
    ACTIONS(245), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_integer_literal,
      anon_sym_AT,
      sym_scratch_variable,
  [3033] = 6,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    STATE(85), 1,
      sym_config_assignment,
    STATE(109), 1,
      sym_identifier,
    STATE(114), 1,
      sym__config_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3053] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_SLASH,
    STATE(11), 1,
      sym_action,
    STATE(101), 1,
      sym_predicate,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3070] = 4,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3085] = 4,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(260), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3100] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3117] = 4,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(260), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3132] = 4,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(260), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [3147] = 5,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3164] = 5,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_config_assignment,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3181] = 5,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      aux_sym_probes_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3198] = 4,
    ACTIONS(296), 1,
      anon_sym_SLASH,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3213] = 5,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_config_assignment,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3230] = 4,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3244] = 4,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3258] = 4,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3272] = 4,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3286] = 4,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    ACTIONS(314), 1,
      aux_sym_config_assignment_token1,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3300] = 3,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3312] = 4,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym__action_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3326] = 3,
    ACTIONS(292), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3338] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3352] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3366] = 4,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    STATE(99), 1,
      sym_config_assignment,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3380] = 3,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3392] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3406] = 4,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym__config_body_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3420] = 3,
    ACTIONS(251), 1,
      aux_sym_map_variable_token1,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3431] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3440] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3449] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_action,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3460] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3469] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3478] = 2,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3486] = 2,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3494] = 2,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3502] = 2,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3510] = 2,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3518] = 2,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3526] = 2,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3534] = 2,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3542] = 2,
    ACTIONS(356), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3550] = 2,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3558] = 2,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3566] = 2,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3574] = 2,
    ACTIONS(364), 1,
      sym_wildcard_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3582] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 460,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 553,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 645,
  [SMALL_STATE(15)] = 691,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 786,
  [SMALL_STATE(18)] = 829,
  [SMALL_STATE(19)] = 872,
  [SMALL_STATE(20)] = 915,
  [SMALL_STATE(21)] = 959,
  [SMALL_STATE(22)] = 993,
  [SMALL_STATE(23)] = 1031,
  [SMALL_STATE(24)] = 1063,
  [SMALL_STATE(25)] = 1095,
  [SMALL_STATE(26)] = 1127,
  [SMALL_STATE(27)] = 1161,
  [SMALL_STATE(28)] = 1197,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1277,
  [SMALL_STATE(31)] = 1321,
  [SMALL_STATE(32)] = 1367,
  [SMALL_STATE(33)] = 1415,
  [SMALL_STATE(34)] = 1467,
  [SMALL_STATE(35)] = 1499,
  [SMALL_STATE(36)] = 1531,
  [SMALL_STATE(37)] = 1563,
  [SMALL_STATE(38)] = 1595,
  [SMALL_STATE(39)] = 1627,
  [SMALL_STATE(40)] = 1659,
  [SMALL_STATE(41)] = 1691,
  [SMALL_STATE(42)] = 1748,
  [SMALL_STATE(43)] = 1800,
  [SMALL_STATE(44)] = 1854,
  [SMALL_STATE(45)] = 1910,
  [SMALL_STATE(46)] = 1964,
  [SMALL_STATE(47)] = 2020,
  [SMALL_STATE(48)] = 2076,
  [SMALL_STATE(49)] = 2127,
  [SMALL_STATE(50)] = 2178,
  [SMALL_STATE(51)] = 2229,
  [SMALL_STATE(52)] = 2273,
  [SMALL_STATE(53)] = 2317,
  [SMALL_STATE(54)] = 2358,
  [SMALL_STATE(55)] = 2399,
  [SMALL_STATE(56)] = 2440,
  [SMALL_STATE(57)] = 2481,
  [SMALL_STATE(58)] = 2522,
  [SMALL_STATE(59)] = 2563,
  [SMALL_STATE(60)] = 2604,
  [SMALL_STATE(61)] = 2645,
  [SMALL_STATE(62)] = 2686,
  [SMALL_STATE(63)] = 2727,
  [SMALL_STATE(64)] = 2768,
  [SMALL_STATE(65)] = 2809,
  [SMALL_STATE(66)] = 2850,
  [SMALL_STATE(67)] = 2891,
  [SMALL_STATE(68)] = 2938,
  [SMALL_STATE(69)] = 2979,
  [SMALL_STATE(70)] = 2998,
  [SMALL_STATE(71)] = 3017,
  [SMALL_STATE(72)] = 3033,
  [SMALL_STATE(73)] = 3053,
  [SMALL_STATE(74)] = 3070,
  [SMALL_STATE(75)] = 3085,
  [SMALL_STATE(76)] = 3100,
  [SMALL_STATE(77)] = 3117,
  [SMALL_STATE(78)] = 3132,
  [SMALL_STATE(79)] = 3147,
  [SMALL_STATE(80)] = 3164,
  [SMALL_STATE(81)] = 3181,
  [SMALL_STATE(82)] = 3198,
  [SMALL_STATE(83)] = 3213,
  [SMALL_STATE(84)] = 3230,
  [SMALL_STATE(85)] = 3244,
  [SMALL_STATE(86)] = 3258,
  [SMALL_STATE(87)] = 3272,
  [SMALL_STATE(88)] = 3286,
  [SMALL_STATE(89)] = 3300,
  [SMALL_STATE(90)] = 3312,
  [SMALL_STATE(91)] = 3326,
  [SMALL_STATE(92)] = 3338,
  [SMALL_STATE(93)] = 3352,
  [SMALL_STATE(94)] = 3366,
  [SMALL_STATE(95)] = 3380,
  [SMALL_STATE(96)] = 3392,
  [SMALL_STATE(97)] = 3406,
  [SMALL_STATE(98)] = 3420,
  [SMALL_STATE(99)] = 3431,
  [SMALL_STATE(100)] = 3440,
  [SMALL_STATE(101)] = 3449,
  [SMALL_STATE(102)] = 3460,
  [SMALL_STATE(103)] = 3469,
  [SMALL_STATE(104)] = 3478,
  [SMALL_STATE(105)] = 3486,
  [SMALL_STATE(106)] = 3494,
  [SMALL_STATE(107)] = 3502,
  [SMALL_STATE(108)] = 3510,
  [SMALL_STATE(109)] = 3518,
  [SMALL_STATE(110)] = 3526,
  [SMALL_STATE(111)] = 3534,
  [SMALL_STATE(112)] = 3542,
  [SMALL_STATE(113)] = 3550,
  [SMALL_STATE(114)] = 3558,
  [SMALL_STATE(115)] = 3566,
  [SMALL_STATE(116)] = 3574,
  [SMALL_STATE(117)] = 3582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_preamble_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_block, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_block, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_block, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_block, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_variable, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_variable, 6, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, 0, 8),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, 0, 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_expression, 2, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_expression, 2, 0, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args_item, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_args_item, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__predicate_expression, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__div_left_side, 2, 0, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__div_left_side, 2, 0, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probes, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probes, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_probes_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 3, 0, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 3, 0, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__config_body, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action_body, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 5, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 5, 0, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__action_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probe, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__config_body_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_assignment, 3, 0, 7),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probe_provider, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
