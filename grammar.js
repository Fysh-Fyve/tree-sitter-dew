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
  unary: 3,
  mul_div: 2,
  add_sub: 1,
  lt_gt_e: 0,
}

module.exports = grammar({
  name: "dew",

  word: $ => $.identifier,

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $.function_definition
    ),

    function_definition: $ => seq(
      'fun',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('return_type', $._type),
      field('body', $.block),
    ),

    parameter_list: $ => seq(
      '(',
      // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      $.primitive_type,
      $.array_type,
      $.pointer_type,
      // TODO: other kinds of types
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
      field('operator', choice(
        '-',
        // ...
      )),
      field('operand', $._expression),

    )),

    binary_expression: $ => choice(
      prec.left(PREC.mul_div, seq($._expression, choice('*', '/'), $._expression)),
      prec.left(PREC.add_sub, seq($._expression, choice('+', '-'), $._expression)),
      prec.left(PREC.lt_gt_e, seq($._expression, choice('>', '<', '>=', '<=', '==', '!='), $._expression)),
      // ...
    ),

    identifier: $ => token(/[a-zA-Z]+/),
    int_literal: $ => token(/\d+/),
  },
});
