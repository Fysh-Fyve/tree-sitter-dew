#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

enum {
  sym_identifier = 1,
  anon_sym_fun = 2,
  anon_sym_i8 = 3,
  anon_sym_u8 = 4,
  anon_sym_i16 = 5,
  anon_sym_u16 = 6,
  anon_sym_i32 = 7,
  anon_sym_u32 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_STAR = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LF = 17,
  anon_sym_SEMI = 18,
  anon_sym_ = 19,
  anon_sym_EQ = 20,
  anon_sym_PLUS_PLUS = 21,
  anon_sym_DASH_DASH = 22,
  anon_sym_STAR_EQ = 23,
  anon_sym_SLASH_EQ = 24,
  anon_sym_PERCENT_EQ = 25,
  anon_sym_LT_LT_EQ = 26,
  anon_sym_GT_GT_EQ = 27,
  anon_sym_AMP_EQ = 28,
  anon_sym_PLUS_EQ = 29,
  anon_sym_DASH_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_CARET_EQ = 32,
  anon_sym_if = 33,
  anon_sym_else = 34,
  anon_sym_for = 35,
  anon_sym_return = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_BANG = 39,
  anon_sym_TILDE = 40,
  anon_sym_AMP = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_LT_LT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_PIPE = 46,
  anon_sym_CARET = 47,
  anon_sym_GT = 48,
  anon_sym_LT = 49,
  anon_sym_GT_EQ = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_EQ_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_AMP_AMP = 54,
  anon_sym_PIPE_PIPE = 55,
  sym_comment = 56,
  sym_int_literal = 57,
  sym_source_file = 58,
  sym__top_level_defs = 59,
  sym_function_declaration = 60,
  sym__return_type = 61,
  sym_builtin_type = 62,
  sym_return_type_list = 63,
  sym_parameter_list = 64,
  sym_parameter_declaration = 65,
  sym_parenthesized_type = 66,
  sym__simple_type = 67,
  sym_array_type = 68,
  sym_pointer_type = 69,
  sym_block = 70,
  sym__statement_list = 71,
  sym__statement = 72,
  sym_empty_statement = 73,
  sym__declaration = 74,
  sym_var_declaration = 75,
  sym__simple_statement = 76,
  sym_expression_statement = 77,
  sym_increment_statement = 78,
  sym_decrement_statement = 79,
  sym_assignment_statement = 80,
  sym_if_statement = 81,
  sym_for_statement = 82,
  sym_for_statement_body = 83,
  sym_return_statement = 84,
  sym_expression_list = 85,
  sym__expression = 86,
  sym_call_expression = 87,
  sym_argument_list = 88,
  sym_index_expression = 89,
  sym_unary_expression = 90,
  sym_binary_expression = 91,
  sym_parenthesized_expression = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_return_type_list_repeat1 = 94,
  aux_sym_parameter_list_repeat1 = 95,
  aux_sym__statement_list_repeat1 = 96,
  aux_sym_var_declaration_repeat1 = 97,
  aux_sym_expression_list_repeat1 = 98,
  alias_sym_type_identifier = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_fun] = "fun",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_return] = "return",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_comment] = "comment",
  [sym_int_literal] = "int_literal",
  [sym_source_file] = "source_file",
  [sym__top_level_defs] = "_top_level_defs",
  [sym_function_declaration] = "function_declaration",
  [sym__return_type] = "_return_type",
  [sym_builtin_type] = "builtin_type",
  [sym_return_type_list] = "return_type_list",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym__simple_type] = "_simple_type",
  [sym_array_type] = "array_type",
  [sym_pointer_type] = "pointer_type",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_empty_statement] = "empty_statement",
  [sym__declaration] = "_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym__simple_statement] = "_simple_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_statement_body] = "for_statement_body",
  [sym_return_statement] = "return_statement",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_index_expression] = "index_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_return_type_list_repeat1] = "return_type_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_comment] = sym_comment,
  [sym_int_literal] = sym_int_literal,
  [sym_source_file] = sym_source_file,
  [sym__top_level_defs] = sym__top_level_defs,
  [sym_function_declaration] = sym_function_declaration,
  [sym__return_type] = sym__return_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_return_type_list] = sym_return_type_list,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym__simple_type] = sym__simple_type,
  [sym_array_type] = sym_array_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_empty_statement] = sym_empty_statement,
  [sym__declaration] = sym__declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym__simple_statement] = sym__simple_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_statement_body] = sym_for_statement_body,
  [sym_return_statement] = sym_return_statement,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_index_expression] = sym_index_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_return_type_list_repeat1] = aux_sym_return_type_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_var_declaration_repeat1] = aux_sym_var_declaration_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_STAR] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
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
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_LT_EQ] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_defs] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__return_type] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement_body] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_return_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_cond = 4,
  field_condition = 5,
  field_consequence = 6,
  field_element = 7,
  field_function = 8,
  field_index = 9,
  field_init = 10,
  field_left = 11,
  field_length = 12,
  field_name = 13,
  field_operand = 14,
  field_operator = 15,
  field_parameters = 16,
  field_return_type = 17,
  field_right = 18,
  field_type = 19,
  field_update = 20,
  field_value = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_cond] = "cond",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_function] = "function",
  [field_index] = "index",
  [field_init] = "init",
  [field_left] = "left",
  [field_length] = "length",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 2},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 1},
  [16] = {.index = 31, .length = 1},
  [17] = {.index = 32, .length = 1},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 3},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 2},
  [22] = {.index = 41, .length = 3},
  [23] = {.index = 44, .length = 2},
  [24] = {.index = 46, .length = 2},
  [25] = {.index = 48, .length = 2},
  [26] = {.index = 50, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_parameters, 2},
  [2] =
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [5] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [8] =
    {field_name, 1},
    {field_type, 0},
  [10] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [14] =
    {field_operand, 1},
    {field_operator, 0},
  [16] =
    {field_body, 1},
  [17] =
    {field_arguments, 1},
    {field_function, 0},
  [19] =
    {field_element, 0},
    {field_length, 2},
  [21] =
    {field_condition, 1},
    {field_consequence, 2},
  [23] =
    {field_body, 2},
  [24] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 0},
  [27] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [30] =
    {field_update, 2},
  [31] =
    {field_cond, 1},
  [32] =
    {field_init, 0},
  [33] =
    {field_name, 1},
  [34] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 3},
  [37] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [39] =
    {field_index, 2},
    {field_operand, 0},
  [41] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [44] =
    {field_cond, 1},
    {field_update, 3},
  [46] =
    {field_init, 0},
    {field_update, 3},
  [48] =
    {field_cond, 2},
    {field_init, 0},
  [50] =
    {field_cond, 2},
    {field_init, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
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
  [24] = 11,
  [25] = 12,
  [26] = 10,
  [27] = 8,
  [28] = 7,
  [29] = 12,
  [30] = 13,
  [31] = 9,
  [32] = 8,
  [33] = 13,
  [34] = 11,
  [35] = 9,
  [36] = 10,
  [37] = 23,
  [38] = 20,
  [39] = 18,
  [40] = 17,
  [41] = 19,
  [42] = 21,
  [43] = 22,
  [44] = 19,
  [45] = 16,
  [46] = 20,
  [47] = 22,
  [48] = 48,
  [49] = 23,
  [50] = 18,
  [51] = 17,
  [52] = 16,
  [53] = 21,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 11,
  [58] = 13,
  [59] = 12,
  [60] = 48,
  [61] = 10,
  [62] = 9,
  [63] = 56,
  [64] = 64,
  [65] = 64,
  [66] = 8,
  [67] = 23,
  [68] = 20,
  [69] = 21,
  [70] = 16,
  [71] = 18,
  [72] = 19,
  [73] = 17,
  [74] = 22,
  [75] = 55,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 76,
  [82] = 76,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 88,
  [93] = 93,
  [94] = 86,
  [95] = 88,
  [96] = 93,
  [97] = 86,
  [98] = 15,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 103,
  [108] = 106,
  [109] = 103,
  [110] = 106,
  [111] = 111,
  [112] = 106,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 114,
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 114,
  [122] = 103,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 124,
  [137] = 135,
  [138] = 126,
  [139] = 125,
  [140] = 135,
  [141] = 124,
  [142] = 142,
  [143] = 143,
  [144] = 123,
  [145] = 124,
  [146] = 123,
  [147] = 127,
  [148] = 128,
  [149] = 131,
  [150] = 133,
  [151] = 151,
  [152] = 133,
  [153] = 131,
  [154] = 128,
  [155] = 127,
  [156] = 125,
  [157] = 142,
  [158] = 132,
  [159] = 135,
  [160] = 123,
  [161] = 127,
  [162] = 128,
  [163] = 131,
  [164] = 133,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 167,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 151,
  [179] = 179,
  [180] = 180,
  [181] = 111,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 185,
  [189] = 189,
  [190] = 190,
  [191] = 182,
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
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 194,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 206,
  [212] = 212,
  [213] = 197,
  [214] = 203,
  [215] = 215,
  [216] = 205,
  [217] = 217,
  [218] = 198,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 221,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 184,
  [234] = 221,
  [235] = 235,
  [236] = 236,
  [237] = 193,
  [238] = 238,
  [239] = 210,
  [240] = 240,
  [241] = 241,
  [242] = 219,
  [243] = 220,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 246,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 260,
  [262] = 262,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(68);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '^') ADVANCE(68);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(55);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(68);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '^') ADVANCE(68);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '8') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '8') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
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
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_int_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(262),
    [sym__top_level_defs] = STATE(186),
    [sym_function_declaration] = STATE(186),
    [aux_sym_source_file_repeat1] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(7), 1,
      sym__expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(192), 1,
      sym__statement,
    STATE(260), 1,
      sym__statement_list,
    STATE(240), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
    STATE(200), 12,
      sym_block,
      sym_empty_statement,
      sym__declaration,
      sym_var_declaration,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_for_statement,
      sym_return_statement,
  [91] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(192), 1,
      sym__statement,
    STATE(261), 1,
      sym__statement_list,
    STATE(240), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
    STATE(200), 12,
      sym_block,
      sym_empty_statement,
      sym__declaration,
      sym_var_declaration,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_for_statement,
      sym_return_statement,
  [182] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(212), 1,
      sym__statement,
    STATE(240), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
    STATE(200), 12,
      sym_block,
      sym_empty_statement,
      sym__declaration,
      sym_var_declaration,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_for_statement,
      sym_return_statement,
  [270] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(212), 1,
      sym__statement,
    STATE(240), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
    STATE(200), 12,
      sym_block,
      sym_empty_statement,
      sym__declaration,
      sym_var_declaration,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_for_statement,
      sym_return_statement,
  [358] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(7), 1,
      sym__expression,
    STATE(176), 1,
      sym_expression_list,
    STATE(212), 1,
      sym__statement,
    STATE(240), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
    STATE(200), 12,
      sym_block,
      sym_empty_statement,
      sym__declaration,
      sym_var_declaration,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
      sym_for_statement,
      sym_return_statement,
  [443] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(55), 1,
      anon_sym_DASH_DASH,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(16), 1,
      sym_argument_list,
    STATE(151), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(47), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(45), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(59), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [517] = 6,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(67), 35,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [570] = 6,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(71), 35,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [623] = 7,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(45), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 29,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [678] = 8,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(45), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 25,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [735] = 9,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(45), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(59), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 19,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [794] = 10,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_argument_list,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(45), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(59), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 18,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_PIPE,
  [855] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH,
    ACTIONS(95), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 1,
      anon_sym_PIPE_PIPE,
    STATE(52), 1,
      sym_argument_list,
    STATE(151), 1,
      aux_sym_expression_list_repeat1,
    STATE(215), 1,
      sym_block,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(93), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(87), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [934] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(101), 36,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [985] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(108), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1031] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(112), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1077] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(116), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1123] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(120), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1169] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(124), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1215] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(101), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1261] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(128), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1307] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(132), 37,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1353] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(140), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(140), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1467] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(67), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1571] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH,
    ACTIONS(95), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 1,
      anon_sym_PIPE_PIPE,
    STATE(52), 1,
      sym_argument_list,
    STATE(151), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(93), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(87), 10,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [1644] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(93), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 17,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1703] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_AMP_AMP,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(93), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 16,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_PIPE,
  [1764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(71), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1815] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(67), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1866] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(140), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_PIPE,
  [1927] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(81), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(71), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2033] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(110), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2570] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(140), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(150), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(134), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(110), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 13,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2852] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      sym_int_literal,
    STATE(14), 1,
      sym__expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(208), 1,
      sym_block,
    STATE(238), 1,
      sym_for_statement_body,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(257), 6,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
  [2909] = 13,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_AMP_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE_PIPE,
    STATE(70), 1,
      sym_argument_list,
    STATE(178), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(51), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(176), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2964] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      sym_int_literal,
    STATE(27), 1,
      sym__expression,
    STATE(197), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(190), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [3014] = 8,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(176), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3058] = 10,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_AMP_AMP,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(176), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(71), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PIPE_PIPE,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3106] = 9,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(176), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(71), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3152] = 11,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_AMP_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE_PIPE,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(152), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(176), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(178), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3202] = 7,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(174), 6,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 16,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3244] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(71), 22,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3284] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(8), 1,
      sym__expression,
    STATE(197), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(29), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [3334] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      sym_int_literal,
    STATE(95), 1,
      sym__expression,
    STATE(248), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(190), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [3384] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
      sym_int_literal,
    STATE(92), 1,
      sym__expression,
    STATE(248), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(190), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [3434] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(67), 22,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3474] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(132), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3507] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(124), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3540] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(101), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3573] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(108), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3606] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(116), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3639] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(120), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3672] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(112), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3705] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(128), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3738] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_argument_list,
    STATE(151), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3795] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    STATE(221), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      sym_int_literal,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(251), 6,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
  [3899] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      sym_int_literal,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(254), 6,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
  [3947] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      sym_int_literal,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(256), 6,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
  [3995] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    STATE(222), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4051] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    STATE(234), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4107] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    STATE(227), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4163] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      sym_int_literal,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__expression,
    STATE(175), 1,
      sym_expression_list,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
    STATE(259), 6,
      sym__simple_statement,
      sym_expression_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_assignment_statement,
      sym_if_statement,
  [4211] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_argument_list,
    STATE(233), 1,
      sym_block,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4264] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    STATE(45), 1,
      sym_argument_list,
    STATE(184), 1,
      sym_block,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4317] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4367] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4417] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4467] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4517] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4567] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4617] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4667] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4717] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4767] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4817] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4867] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(140), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(144), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(146), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(194), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(101), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 14,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4948] = 9,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym__expression,
    STATE(209), 1,
      sym_expression_list,
    ACTIONS(251), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(255), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [4988] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_fun,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_STAR,
    STATE(196), 1,
      sym__simple_type,
    STATE(249), 1,
      sym_block,
    STATE(252), 1,
      sym_parenthesized_type,
    STATE(195), 2,
      sym__return_type,
      sym_return_type_list,
    STATE(214), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(267), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__expression,
    STATE(204), 1,
      sym_expression_list,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5068] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(224), 1,
      sym_parameter_declaration,
    STATE(247), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5136] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_parameter_declaration,
    STATE(247), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5172] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_parameter_declaration,
    STATE(247), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5240] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5272] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(150), 14,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [5394] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(217), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5462] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__expression,
    STATE(210), 1,
      sym_expression_list,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5558] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5590] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5622] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__expression,
    STATE(239), 1,
      sym_expression_list,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [5953] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [5986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(235), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [6106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym__expression,
    ACTIONS(273), 2,
      sym_identifier,
      sym_int_literal,
    STATE(69), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(277), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(244), 1,
      sym_parameter_declaration,
    STATE(247), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [6371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6400] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(334), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [6599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_identifier,
      sym_int_literal,
    STATE(21), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(29), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__expression,
    ACTIONS(192), 2,
      sym_identifier,
      sym_int_literal,
    STATE(42), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(190), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6918] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__expression,
    ACTIONS(166), 2,
      sym_identifier,
      sym_int_literal,
    STATE(53), 5,
      sym_call_expression,
      sym_index_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
    ACTIONS(160), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_AMP,
  [6976] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(235), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(229), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(197), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(248), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_STAR,
    STATE(246), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(203), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(11), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_STAR,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(213), 2,
      sym_parenthesized_type,
      sym__simple_type,
    STATE(214), 3,
      sym_builtin_type,
      sym_array_type,
      sym_pointer_type,
    ACTIONS(267), 6,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
  [7156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
    ACTIONS(340), 8,
      anon_sym_fun,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      sym_identifier,
  [7176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
    ACTIONS(344), 8,
      anon_sym_fun,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      sym_identifier,
  [7196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
    ACTIONS(348), 8,
      anon_sym_fun,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      sym_identifier,
  [7216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_LBRACE,
    ACTIONS(352), 8,
      anon_sym_fun,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      sym_identifier,
  [7236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [7270] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      anon_sym_EQ,
    STATE(179), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(360), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7291] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_LF,
    STATE(181), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(366), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7309] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(180), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(368), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7327] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_LF,
    STATE(180), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(375), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7345] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(152), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_else,
  [7374] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_LF,
    STATE(189), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(388), 2,
      anon_sym_SEMI,
      anon_sym_,
  [7391] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      anon_sym_else,
    ACTIONS(390), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_else,
  [7417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(187), 3,
      sym__top_level_defs,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [7432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_fun,
    STATE(187), 3,
      sym__top_level_defs,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [7447] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(405), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_else,
  [7460] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(189), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(412), 2,
      anon_sym_SEMI,
      anon_sym_,
  [7477] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(415), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7490] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(419), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_else,
  [7503] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(425), 2,
      anon_sym_SEMI,
      anon_sym_,
  [7520] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(427), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_if,
    STATE(237), 2,
      sym_block,
      sym_if_statement,
  [7546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_block,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_fun,
  [7560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 3,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
  [7572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7592] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(443), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7604] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(447), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7646] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(455), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      anon_sym_if,
    STATE(193), 2,
      sym_block,
      sym_if_statement,
  [7692] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(465), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7704] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(469), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7716] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(473), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [7738] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7770] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(479), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    STATE(232), 1,
      aux_sym_return_type_list_repeat1,
  [7808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [7818] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(489), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7830] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(493), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_,
  [7842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
  [7855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
  [7868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
  [7877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
  [7890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_return_type_list_repeat1,
  [7903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
  [7912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
  [7925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_parameter_list_repeat1,
  [7938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [7951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 3,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
  [7960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_parameter_list_repeat1,
  [7973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_return_type_list_repeat1,
  [7986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_else,
    ACTIONS(392), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [7997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
  [8010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 3,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_LBRACE,
  [8030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_block,
  [8048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [8056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      sym_identifier,
  [8066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_parameter_list,
  [8076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [8084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [8092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [8118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(545), 1,
      sym_identifier,
  [8128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [8138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_fun,
  [8146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      anon_sym_fun,
  [8154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [8161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
  [8168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [8175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [8182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [8189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
  [8196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [8203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [8210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [8217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
  [8224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
  [8231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 358,
  [SMALL_STATE(7)] = 443,
  [SMALL_STATE(8)] = 517,
  [SMALL_STATE(9)] = 570,
  [SMALL_STATE(10)] = 623,
  [SMALL_STATE(11)] = 678,
  [SMALL_STATE(12)] = 735,
  [SMALL_STATE(13)] = 794,
  [SMALL_STATE(14)] = 855,
  [SMALL_STATE(15)] = 934,
  [SMALL_STATE(16)] = 985,
  [SMALL_STATE(17)] = 1031,
  [SMALL_STATE(18)] = 1077,
  [SMALL_STATE(19)] = 1123,
  [SMALL_STATE(20)] = 1169,
  [SMALL_STATE(21)] = 1215,
  [SMALL_STATE(22)] = 1261,
  [SMALL_STATE(23)] = 1307,
  [SMALL_STATE(24)] = 1353,
  [SMALL_STATE(25)] = 1408,
  [SMALL_STATE(26)] = 1467,
  [SMALL_STATE(27)] = 1520,
  [SMALL_STATE(28)] = 1571,
  [SMALL_STATE(29)] = 1644,
  [SMALL_STATE(30)] = 1703,
  [SMALL_STATE(31)] = 1764,
  [SMALL_STATE(32)] = 1815,
  [SMALL_STATE(33)] = 1866,
  [SMALL_STATE(34)] = 1927,
  [SMALL_STATE(35)] = 1982,
  [SMALL_STATE(36)] = 2033,
  [SMALL_STATE(37)] = 2086,
  [SMALL_STATE(38)] = 2130,
  [SMALL_STATE(39)] = 2174,
  [SMALL_STATE(40)] = 2218,
  [SMALL_STATE(41)] = 2262,
  [SMALL_STATE(42)] = 2306,
  [SMALL_STATE(43)] = 2350,
  [SMALL_STATE(44)] = 2394,
  [SMALL_STATE(45)] = 2438,
  [SMALL_STATE(46)] = 2482,
  [SMALL_STATE(47)] = 2526,
  [SMALL_STATE(48)] = 2570,
  [SMALL_STATE(49)] = 2632,
  [SMALL_STATE(50)] = 2676,
  [SMALL_STATE(51)] = 2720,
  [SMALL_STATE(52)] = 2764,
  [SMALL_STATE(53)] = 2808,
  [SMALL_STATE(54)] = 2852,
  [SMALL_STATE(55)] = 2909,
  [SMALL_STATE(56)] = 2964,
  [SMALL_STATE(57)] = 3014,
  [SMALL_STATE(58)] = 3058,
  [SMALL_STATE(59)] = 3106,
  [SMALL_STATE(60)] = 3152,
  [SMALL_STATE(61)] = 3202,
  [SMALL_STATE(62)] = 3244,
  [SMALL_STATE(63)] = 3284,
  [SMALL_STATE(64)] = 3334,
  [SMALL_STATE(65)] = 3384,
  [SMALL_STATE(66)] = 3434,
  [SMALL_STATE(67)] = 3474,
  [SMALL_STATE(68)] = 3507,
  [SMALL_STATE(69)] = 3540,
  [SMALL_STATE(70)] = 3573,
  [SMALL_STATE(71)] = 3606,
  [SMALL_STATE(72)] = 3639,
  [SMALL_STATE(73)] = 3672,
  [SMALL_STATE(74)] = 3705,
  [SMALL_STATE(75)] = 3738,
  [SMALL_STATE(76)] = 3795,
  [SMALL_STATE(77)] = 3851,
  [SMALL_STATE(78)] = 3899,
  [SMALL_STATE(79)] = 3947,
  [SMALL_STATE(80)] = 3995,
  [SMALL_STATE(81)] = 4051,
  [SMALL_STATE(82)] = 4107,
  [SMALL_STATE(83)] = 4163,
  [SMALL_STATE(84)] = 4211,
  [SMALL_STATE(85)] = 4264,
  [SMALL_STATE(86)] = 4317,
  [SMALL_STATE(87)] = 4367,
  [SMALL_STATE(88)] = 4417,
  [SMALL_STATE(89)] = 4467,
  [SMALL_STATE(90)] = 4517,
  [SMALL_STATE(91)] = 4567,
  [SMALL_STATE(92)] = 4617,
  [SMALL_STATE(93)] = 4667,
  [SMALL_STATE(94)] = 4717,
  [SMALL_STATE(95)] = 4767,
  [SMALL_STATE(96)] = 4817,
  [SMALL_STATE(97)] = 4867,
  [SMALL_STATE(98)] = 4917,
  [SMALL_STATE(99)] = 4948,
  [SMALL_STATE(100)] = 4988,
  [SMALL_STATE(101)] = 5036,
  [SMALL_STATE(102)] = 5068,
  [SMALL_STATE(103)] = 5104,
  [SMALL_STATE(104)] = 5136,
  [SMALL_STATE(105)] = 5172,
  [SMALL_STATE(106)] = 5208,
  [SMALL_STATE(107)] = 5240,
  [SMALL_STATE(108)] = 5272,
  [SMALL_STATE(109)] = 5304,
  [SMALL_STATE(110)] = 5336,
  [SMALL_STATE(111)] = 5368,
  [SMALL_STATE(112)] = 5394,
  [SMALL_STATE(113)] = 5426,
  [SMALL_STATE(114)] = 5462,
  [SMALL_STATE(115)] = 5494,
  [SMALL_STATE(116)] = 5526,
  [SMALL_STATE(117)] = 5558,
  [SMALL_STATE(118)] = 5590,
  [SMALL_STATE(119)] = 5622,
  [SMALL_STATE(120)] = 5654,
  [SMALL_STATE(121)] = 5686,
  [SMALL_STATE(122)] = 5718,
  [SMALL_STATE(123)] = 5750,
  [SMALL_STATE(124)] = 5779,
  [SMALL_STATE(125)] = 5808,
  [SMALL_STATE(126)] = 5837,
  [SMALL_STATE(127)] = 5866,
  [SMALL_STATE(128)] = 5895,
  [SMALL_STATE(129)] = 5924,
  [SMALL_STATE(130)] = 5953,
  [SMALL_STATE(131)] = 5986,
  [SMALL_STATE(132)] = 6015,
  [SMALL_STATE(133)] = 6044,
  [SMALL_STATE(134)] = 6073,
  [SMALL_STATE(135)] = 6106,
  [SMALL_STATE(136)] = 6135,
  [SMALL_STATE(137)] = 6164,
  [SMALL_STATE(138)] = 6193,
  [SMALL_STATE(139)] = 6222,
  [SMALL_STATE(140)] = 6251,
  [SMALL_STATE(141)] = 6280,
  [SMALL_STATE(142)] = 6309,
  [SMALL_STATE(143)] = 6338,
  [SMALL_STATE(144)] = 6371,
  [SMALL_STATE(145)] = 6400,
  [SMALL_STATE(146)] = 6429,
  [SMALL_STATE(147)] = 6458,
  [SMALL_STATE(148)] = 6487,
  [SMALL_STATE(149)] = 6516,
  [SMALL_STATE(150)] = 6545,
  [SMALL_STATE(151)] = 6574,
  [SMALL_STATE(152)] = 6599,
  [SMALL_STATE(153)] = 6628,
  [SMALL_STATE(154)] = 6657,
  [SMALL_STATE(155)] = 6686,
  [SMALL_STATE(156)] = 6715,
  [SMALL_STATE(157)] = 6744,
  [SMALL_STATE(158)] = 6773,
  [SMALL_STATE(159)] = 6802,
  [SMALL_STATE(160)] = 6831,
  [SMALL_STATE(161)] = 6860,
  [SMALL_STATE(162)] = 6889,
  [SMALL_STATE(163)] = 6918,
  [SMALL_STATE(164)] = 6947,
  [SMALL_STATE(165)] = 6976,
  [SMALL_STATE(166)] = 7006,
  [SMALL_STATE(167)] = 7036,
  [SMALL_STATE(168)] = 7066,
  [SMALL_STATE(169)] = 7096,
  [SMALL_STATE(170)] = 7126,
  [SMALL_STATE(171)] = 7156,
  [SMALL_STATE(172)] = 7176,
  [SMALL_STATE(173)] = 7196,
  [SMALL_STATE(174)] = 7216,
  [SMALL_STATE(175)] = 7236,
  [SMALL_STATE(176)] = 7253,
  [SMALL_STATE(177)] = 7270,
  [SMALL_STATE(178)] = 7291,
  [SMALL_STATE(179)] = 7309,
  [SMALL_STATE(180)] = 7327,
  [SMALL_STATE(181)] = 7345,
  [SMALL_STATE(182)] = 7363,
  [SMALL_STATE(183)] = 7374,
  [SMALL_STATE(184)] = 7391,
  [SMALL_STATE(185)] = 7406,
  [SMALL_STATE(186)] = 7417,
  [SMALL_STATE(187)] = 7432,
  [SMALL_STATE(188)] = 7447,
  [SMALL_STATE(189)] = 7460,
  [SMALL_STATE(190)] = 7477,
  [SMALL_STATE(191)] = 7490,
  [SMALL_STATE(192)] = 7503,
  [SMALL_STATE(193)] = 7520,
  [SMALL_STATE(194)] = 7532,
  [SMALL_STATE(195)] = 7546,
  [SMALL_STATE(196)] = 7560,
  [SMALL_STATE(197)] = 7572,
  [SMALL_STATE(198)] = 7582,
  [SMALL_STATE(199)] = 7592,
  [SMALL_STATE(200)] = 7604,
  [SMALL_STATE(201)] = 7616,
  [SMALL_STATE(202)] = 7626,
  [SMALL_STATE(203)] = 7636,
  [SMALL_STATE(204)] = 7646,
  [SMALL_STATE(205)] = 7658,
  [SMALL_STATE(206)] = 7668,
  [SMALL_STATE(207)] = 7678,
  [SMALL_STATE(208)] = 7692,
  [SMALL_STATE(209)] = 7704,
  [SMALL_STATE(210)] = 7716,
  [SMALL_STATE(211)] = 7728,
  [SMALL_STATE(212)] = 7738,
  [SMALL_STATE(213)] = 7750,
  [SMALL_STATE(214)] = 7760,
  [SMALL_STATE(215)] = 7770,
  [SMALL_STATE(216)] = 7782,
  [SMALL_STATE(217)] = 7792,
  [SMALL_STATE(218)] = 7808,
  [SMALL_STATE(219)] = 7818,
  [SMALL_STATE(220)] = 7830,
  [SMALL_STATE(221)] = 7842,
  [SMALL_STATE(222)] = 7855,
  [SMALL_STATE(223)] = 7868,
  [SMALL_STATE(224)] = 7877,
  [SMALL_STATE(225)] = 7890,
  [SMALL_STATE(226)] = 7903,
  [SMALL_STATE(227)] = 7912,
  [SMALL_STATE(228)] = 7925,
  [SMALL_STATE(229)] = 7938,
  [SMALL_STATE(230)] = 7951,
  [SMALL_STATE(231)] = 7960,
  [SMALL_STATE(232)] = 7973,
  [SMALL_STATE(233)] = 7986,
  [SMALL_STATE(234)] = 7997,
  [SMALL_STATE(235)] = 8010,
  [SMALL_STATE(236)] = 8021,
  [SMALL_STATE(237)] = 8030,
  [SMALL_STATE(238)] = 8038,
  [SMALL_STATE(239)] = 8048,
  [SMALL_STATE(240)] = 8056,
  [SMALL_STATE(241)] = 8066,
  [SMALL_STATE(242)] = 8076,
  [SMALL_STATE(243)] = 8084,
  [SMALL_STATE(244)] = 8092,
  [SMALL_STATE(245)] = 8100,
  [SMALL_STATE(246)] = 8108,
  [SMALL_STATE(247)] = 8118,
  [SMALL_STATE(248)] = 8128,
  [SMALL_STATE(249)] = 8138,
  [SMALL_STATE(250)] = 8146,
  [SMALL_STATE(251)] = 8154,
  [SMALL_STATE(252)] = 8161,
  [SMALL_STATE(253)] = 8168,
  [SMALL_STATE(254)] = 8175,
  [SMALL_STATE(255)] = 8182,
  [SMALL_STATE(256)] = 8189,
  [SMALL_STATE(257)] = 8196,
  [SMALL_STATE(258)] = 8203,
  [SMALL_STATE(259)] = 8210,
  [SMALL_STATE(260)] = 8217,
  [SMALL_STATE(261)] = 8224,
  [SMALL_STATE(262)] = 8231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 7),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_type, 1, .dynamic_precedence = -1, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__simple_type, 1, .dynamic_precedence = -1, .production_id = 2), REDUCE(sym__expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 21),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 21),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 3, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 3, .production_id = 16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 4, .production_id = 25),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_type, 1, .dynamic_precedence = -1, .production_id = 2), REDUCE(sym__expression, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(138),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2, .production_id = 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3, .production_id = 13),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2, .production_id = 20), SHIFT_REPEAT(253),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2, .production_id = 20),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2, .production_id = 20),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(126),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_declaration_repeat1, 2, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2, .production_id = 18),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 22),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 22),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_type, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 10),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 19),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 19),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, .dynamic_precedence = -1, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 8),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 8),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 14),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 14),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 12),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 12),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_list, 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_return_type_list_repeat1, 2), SHIFT_REPEAT(165),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_return_type_list_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_list, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_list, 5),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(143),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_list, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 4, .production_id = 24),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 4, .production_id = 23),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 5, .production_id = 26),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement_body, 3, .production_id = 15),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [569] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dew(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
