/**
 * @file Dew grammar for tree-sitter
 * @author Charles Ancheta
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  unary: 5,
  mul_div: 4,
  add_sub: 3,
  lt_gt_e: 2,
  and: 1,
  or: 0,
}

module.exports = grammar({
  name: "dew",

  extras: $ => [
    $.comment,
    /\s/,
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._top_level_defs),

    _top_level_defs: $ => choice($.function_definition),

    function_definition: $ => seq(
      'fun',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('return_type', optional($._type)),
      field('body', $.block),
    ),

    parameter_list: $ => seq('(', optional(seq(commaSep($.parameter_declaration), optional(','))), ')'),

    parameter_declaration: $ => seq(
      field('type', $._type),
      field('name', $.identifier),
    ),

    _type: $ => choice(
      $.primitive_type,
      $.array_type,
      $.pointer_type,
      // TODO: other kinds of types
      seq('(', $._type, ')'),
    ),

    array_type: $ => seq('[', $._type, ']'),

    pointer_type: $ => seq('*', $._type),

    primitive_type: $ => choice(
      'bol',
      'i8',
      'i16',
      'i32',
      'u8',
      'u16',
      'u32',
      'str',
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement,
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.unary_expression,
      $.binary_expression,
      $.int_literal,
      // TODO: other kinds of expressions
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '!', '~', '*', '&')),
      field('operand', $._expression),
    )),

    binary_expression: $ => choice(...[
      [PREC.mul_div, choice('*', '/', '%', '<<', '>>', '&')], // mul, div, mod, sl, sr, bw-and
      [PREC.add_sub, choice('+', '-', '|', '^')], // add, sub, bw-or, bw-xor
      [PREC.lt_gt_e, choice('>', '<', '>=', '<=', '==', '!=')], // gt, lt, gte, lte, eq, neq
      [PREC.and, '&&'], // logical and
      [PREC.or, '||'], // logical or
    ].map(([precedence, operators]) =>
      // @ts-expect-error
      prec.left(precedence, seq(
        field('left', $._expression),
        // @ts-expect-error
        field('operator', operators),
        field('right', $._expression),
      )))),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/',
      ),
    )),

    identifier: $ => token(/[a-zA-Z]+/),
    int_literal: $ => token(/\d+/),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
