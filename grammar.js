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
  /[0-9a-fA-F]/, // Hexadecimal
  /[0-7]/, // Octal
  /[0-9]/, // Decimal
  /[01]/, // Binary
].map(d => seq(d, repeat(seq(optional('_'), d))));

const
  mulDiv = ['*', '/', '%', '<<', '>>', '&'], // mul, div, mod, sl, sr, bw-and
  addSub = ['+', '-', '|', '^']; // add, sub, bw-or, bw-xor

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
    $._simple_statement,
  ],

  rules: {
    source_file: $ => repeat($._top_level_defs),

    _top_level_defs: $ => choice($.function_declaration),

    function_declaration: $ => prec.right(1, seq(
      'fun',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('return_type', optional($._return_type)),
      field('body', optional($.block)),
    )),

    _return_type: $ => choice($._simple_type, $.return_type_list),

    builtin_type: _ => choice(
      'i8',
      'u8',
      'i16',
      'u16',
      'i32',
      'u32',
    ),

    return_type_list: $ => parens(
      $._type,
      ',',
      seq(commaSep($._type), optional(',')),
    ),

    parameter_list: $ => parens(optional(field(
      'params',
      list($.parameter_declaration),
    ))),

    parameter_declaration: $ => seq(
      field('type', $._type),
      field('name', $.identifier),
    ),

    _type: $ => choice($._simple_type, $.parenthesized_type),

    parenthesized_type: $ => parens($._type),

    _simple_type: $ => choice(
      prec.dynamic(-1, $._type_identifier),
      $.builtin_type,
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

    _statement_list: $ => list($._statement, terminator),

    _statement: $ => choice(
      $.empty_statement,
      $._declaration,
      $._simple_statement,
      $.if_statement,
      $.for_statement,
      $.return_statement,
      $.block,
      // TODO: other kinds of statements
    ),

    empty_statement: _ => ';',

    _declaration: $ => choice(
      $.var_declaration,
    ),


    var_declaration: $ => seq(
      field('type', $._type),
      choice(
        seq(
          field('name', $.identifier),
          '=',
          field('value', $.expression_list),
        ),
        field('name_list', commaSep1($.identifier)),
      ),
    ),

    _simple_statement: $ => choice(
      $.expression_statement,
      // These are now statements,
      // can't blow yourself up by having prefix increments/decrements
      $.increment_statement,
      $.decrement_statement,
      $.assignment_statement,
    ),

    expression_statement: $ => $._expression,
    increment_statement: $ => seq($._expression, '++'),
    decrement_statement: $ => seq($._expression, '--'),

    assignment_statement: $ => seq(
      field('left', $.expression_list),
      field('operator', choice(
        ...mulDiv.concat(addSub).map(op => op + '=').concat('='))
      ),
      field('right', $.expression_list),
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      field('consequence', $.block),
      optional(seq(
        'else',
        field('alternative', choice($.block, $.if_statement)),
      )),
    ),

    for_statement: $ => seq(
      'for',
      optional(choice($._expression, $.for_statement_body)),
      field('body', $.block),
    ),

    for_statement_body: $ => seq(
      field('init', optional($._simple_statement)),
      ';',
      field('cond', optional($._expression)),
      ';',
      field('update', optional($._simple_statement)),
    ),

    return_statement: $ => seq('return', optional($.expression_list)),

    expression_list: $ => commaSep1($._expression),

    _expression: $ => choice(
      $.identifier,
      $.unary_expression,
      $.binary_expression,
      $.index_expression,
      $.call_expression,
      $.int_literal,
      // TODO: other kinds of expressions
      $.parenthesized_expression,
    ),

    call_expression: $ => prec(PREC.primary, seq(
      field('function', $._expression),
      field('arguments', $.argument_list),
    )),

    argument_list: $ => parens(optional(list($._expression))),

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
      [PREC.mul_div, choice(...mulDiv)],
      [PREC.add_sub, choice(...addSub)],
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

    parenthesized_expression: $ => parens($._expression),
  },
});

/**
 * Creates a rule to match a list with a specified delimiter
 * @param {Rule} rule
 * @param {RuleOrLiteral} [delimiter=',']
 */
function list(rule, delimiter = ',') {
  return seq(rule, repeat(seq(delimiter, rule)), optional(delimiter));
}

/**
 * Creates a rule to match one or more of the rules inside parentheses
 * @param {RuleOrLiteral[]} rule
 * @return {SeqRule}
 */
function parens(...rule) {
  return seq('(', ...rule, ')')
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 * @param {Rule} rule
 * @return {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 * @param {Rule} rule
 * @return {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
