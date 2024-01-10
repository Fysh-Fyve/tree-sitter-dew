/**
 * @file Dew grammar for tree-sitter
 * @author Charles Ancheta
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const
  PREC = {
    primary: 6,
    unary: 5,
    mul_div: 4,
    add_sub: 3,
    lt_gt_e: 2,
    and: 1,
    or: 0,
  },
  terminator = choice('\n', ';', '\0');

const [hexDigits, octalDigits, decimalDigits, binaryDigits] = [
  /[0-9a-fA-F]/,
  /[0-7]/,
  /[0-9]/,
  /[01]/,
].map(d => seq(d, repeat(seq(optional('_'), d))));


module.exports = grammar({
  name: "dew",

  extras: $ => [$.comment, /\s/,],

  word: $ => $.identifier,

  inline: $ => [
    $._type,
    $._type_identifier,
    $._top_level_declaration,
  ],

  conflicts: $ => [
    [$._simple_type, $._expression],
    // [$.qualified_type, $._expression],
    // [$.generic_type, $._expression],
    // [$.generic_type, $._simple_type],
    [$.parameter_declaration, $._simple_type, $._expression],
    // [$.parameter_declaration, $.generic_type, $._expression],
    [$.parameter_declaration, $._expression],
    [$.parameter_declaration, $._simple_type],
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._simple_type,
    $._statement,
  ],

  rules: {
    source_file: $ => repeat($._top_level_defs),

    _top_level_defs: $ => choice($.function_declaration),

    function_declaration: $ => prec.right(1, seq(
      'fun',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('return_type', optional(choice($._simple_type, $.return_type_list))),
      field('body', optional($.block)),
    )),

    return_type_list: $ => seq(
      '(',
      $._type,
      ',',
      seq(commaSep($._type), optional(',')),
      ')',
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq(commaSep($.parameter_declaration), optional(','))),
      ')',
    ),

    parameter_declaration: $ => seq(
      field('type', $._type),
      field('name', $.identifier),
    ),

    _type: $ => choice(
      $._simple_type,
      $.parenthesized_type,
    ),

    parenthesized_type: $ => seq('(', $._type, ')'),

    _simple_type: $ => choice(
      prec.dynamic(-1, $._type_identifier),
      $.pointer_type,
      $.array_type,
    ),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

    array_type: $ => prec.left(seq(
      field('element', $._type),
      '[',
      field('length', $._expression),
      ']',
    )),

    pointer_type: $ => prec(PREC.unary, seq('*', $._type)),

    block: $ => seq('{', optional($._statement_list), '}'),

    _statement_list: $ => seq(
      $._statement,
      repeat(seq(terminator, $._statement)),
      optional(terminator),
    ),

    _statement: $ => choice(
      $._declaration,
      // $._simple_statement,
      $.return_statement,
      // TODO: other kinds of statements
    ),

    _declaration: $ => choice(
      $.var_declaration,
    ),

    var_declaration: $ => seq(
      field('type', $._type),
      field('name', $.identifier),
      optional(seq('=', field('value', $.expression_list))),
    ),

    // _simple_statement: $ => choice(
    //
    // ),

    return_statement: $ => seq('return', optional($.expression_list)),

    expression_list: $ => commaSep1($._expression),

    _expression: $ => choice(
      $.identifier,
      $.unary_expression,
      $.binary_expression,
      $.index_expression,
      $.int_literal,
      // TODO: other kinds of expressions
    ),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']',
    )),

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
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),

    // Use the same as Go because it's more fun
    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    int_literal: _ => token(choice(
      seq('0', choice('b', 'B'), optional('_'), binaryDigits),
      choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
      seq('0', choice('o', 'O'), optional('_'), octalDigits),
      seq('0', choice('x', 'X'), optional('_'), hexDigits),
    )),
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
