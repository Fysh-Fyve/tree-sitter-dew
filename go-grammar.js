/**
 * @file Go grammar for tree-sitter
 * @author Max Brunsfeld
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const
  PREC = {
    primary: 7,
    unary: 6,
    mul_div: 5,
    add_sub: 4,
    lt_gt_e: 3,
    and: 2,
    or: 1,
    composite_literal: -1,
  },
  terminator = choice('\n', ';', '\0');

const [hexDigits, octalDigits, decimalDigits, binaryDigits] = [
  /[0-9a-fA-F]/,
  /[0-7]/,
  /[0-9]/,
  /[01]/,
].map(d => seq(d, repeat(seq(optional('_'), d))));

const
  mulDiv = ['*', '/', '%', '<<', '>>', '&'],
  addSub = ['+', '-', '|', '^'];

module.exports = grammar({
  name: 'dew',

  extras: $ => [$.comment, /\s/,],

  inline: $ => [
    $._type,
    $._type_identifier,
    $._field_identifier,
    $._top_level_declaration,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$._simple_type, $._expression],
    [$.parameter_declaration, $._simple_type, $._expression],
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
      field('return_type', optional(choice($.parameter_list, $._simple_type))),
      field('body', optional($.block)),
    )),

    parameter_list: $ => seq(
      '(',
      optional(seq(
        commaSep($.parameter_declaration),
        optional(','),
      )),
      ')',
    ),

    parameter_declaration: $ => prec.left(seq(
      commaSep(field('name', $.identifier)),
      field('type', $._type),
    )),

    _declaration: $ => choice(
      $.const_declaration,
      $.type_declaration,
      $.var_declaration,
    ),

    const_declaration: $ => seq(
      'const',
      choice(
        $.const_spec,
        seq(
          '(',
          repeat(seq($.const_spec, terminator)),
          ')',
        ),
      ),
    ),

    const_spec: $ => prec.left(seq(
      field('name', commaSep1($.identifier)),
      optional(seq(
        optional(field('type', $._type)),
        '=',
        field('value', $.expression_list),
      )),
    )),

    var_declaration: $ => seq(
      'var',
      choice(
        $.var_spec,
        seq(
          '(',
          repeat(seq($.var_spec, terminator)),
          ')',
        ),
      ),
    ),

    var_spec: $ => seq(
      field('name', commaSep1($.identifier)),
      choice(
        seq(
          field('type', $._type),
          optional(seq('=', field('value', $.expression_list))),
        ),
        seq('=', field('value', $.expression_list)),
      ),
    ),

    type_alias: $ => seq(
      field('name', $._type_identifier),
      '=',
      field('type', $._type),
    ),

    type_declaration: $ => seq(
      'type',
      choice(
        $.type_spec,
        $.type_alias,
        seq(
          '(',
          repeat(seq(choice($.type_spec, $.type_alias), terminator)),
          ')',
        ),
      ),
    ),

    type_spec: $ => seq(
      field('name', $._type_identifier),
      field('type', $._type),
    ),

    field_name_list: $ => commaSep1($._field_identifier),

    expression_list: $ => commaSep1($._expression),

    _type: $ => choice(
      $._simple_type,
      $.parenthesized_type,
    ),

    parenthesized_type: $ => seq('(', $._type, ')'),

    _simple_type: $ => choice(
      prec.dynamic(-1, $._type_identifier),
      $.pointer_type,
      $.struct_type,
      $.array_type,
    ),

    pointer_type: $ => prec(PREC.unary, seq('*', $._type)),

    array_type: $ => prec.right(seq(
      '[',
      field('length', $._expression),
      ']',
      field('element', $._type),
    )),

    struct_type: $ => seq(
      'struct',
      $.field_declaration_list,
    ),

    field_declaration_list: $ => seq(
      '{',
      optional(seq(
        $.field_declaration,
        repeat(seq(terminator, $.field_declaration)),
        optional(terminator),
      )),
      '}',
    ),

    field_declaration: $ => seq(
      choice(
        seq(
          commaSep1(field('name', $._field_identifier)),
          field('type', $._type),
        ),
        seq(
          optional('*'),
          field('type', $._type_identifier),
        ),
      ),
    ),

    block: $ => seq('{', optional($._statement_list), '}'),

    _statement_list: $ => choice(
      seq(
        $._statement,
        repeat(seq(terminator, $._statement)),
        optional(seq(
          terminator,
          optional(alias($.empty_labeled_statement, $.labeled_statement)),
        )),
      ),
      alias($.empty_labeled_statement, $.labeled_statement),
    ),

    _statement: $ => choice(
      $._declaration,
      $._simple_statement,
      $.return_statement,
      $.if_statement,
      $.for_statement,
      $.expression_switch_statement,
      $.labeled_statement,
      $.break_statement,
      $.continue_statement,
      $.goto_statement,
      $.block,
      $.empty_statement,
    ),

    empty_statement: _ => ';',

    _simple_statement: $ => choice(
      $.expression_statement,
      $.inc_statement,
      $.dec_statement,
      $.assignment_statement,
      $.short_var_declaration,
    ),

    expression_statement: $ => $._expression,
    inc_statement: $ => seq($._expression, '++'),
    dec_statement: $ => seq($._expression, '--'),

    assignment_statement: $ => seq(
      field('left', $.expression_list),
      field('operator', choice(
        ...muldiv.concat(addsub).map(operator => operator + '=').concat('='))
      ),
      field('right', $.expression_list),
    ),

    short_var_declaration: $ => seq(
      // TODO: this should really only allow identifier lists, but that causes
      // conflicts between identifiers as expressions vs identifiers here.
      field('left', $.expression_list),
      ':=',
      field('right', $.expression_list),
    ),

    labeled_statement: $ => seq(
      field('label', alias($.identifier, $.label_name)),
      ':',
      $._statement,
    ),

    empty_labeled_statement: $ => seq(
      field('label', alias($.identifier, $.label_name)),
      ':',
    ),

    break_statement: $ => seq('break', optional(alias($.identifier, $.label_name))),

    continue_statement: $ => seq('continue', optional(alias($.identifier, $.label_name))),

    goto_statement: $ => seq('goto', alias($.identifier, $.label_name)),

    return_statement: $ => seq('return', optional($.expression_list)),

    if_statement: $ => seq(
      'if',
      optional(seq(
        field('initializer', $._simple_statement),
        ';',
      )),
      field('condition', $._expression),
      field('consequence', $.block),
      optional(seq(
        'else',
        field('alternative', choice($.block, $.if_statement)),
      )),
    ),

    for_statement: $ => seq(
      'for',
      optional(choice($._expression, $.for_clause)),
      field('body', $.block),
    ),

    for_clause: $ => seq(
      field('initializer', optional($._simple_statement)),
      ';',
      field('condition', optional($._expression)),
      ';',
      field('update', optional($._simple_statement)),
    ),

    expression_switch_statement: $ => seq(
      'switch',
      optional(seq(
        field('initializer', $._simple_statement),
        ';',
      )),
      field('value', optional($._expression)),
      '{',
      repeat(choice($.expression_case, $.default_case)),
      '}',
    ),

    expression_case: $ => seq(
      'case',
      field('value', $.expression_list),
      ':',
      optional($._statement_list),
    ),

    default_case: $ => seq(
      'default',
      ':',
      optional($._statement_list),
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $.selector_expression,
      $.index_expression,
      $.call_expression,
      $.type_conversion_expression,
      $.identifier,
      $.composite_literal,
      $.int_literal,
      $.nil,
      $.true,
      $.false,
      $.parenthesized_expression,
    ),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    call_expression: $ => prec(PREC.primary, seq(
      field('function', $._expression),
      field('arguments', $.argument_list),
    )),

    argument_list: $ => seq(
      '(',
      optional(seq(
        $._expression,
        repeat(seq(',', $._expression)),
        optional(','),
      )),
      ')',
    ),

    selector_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '.',
      field('field', $._field_identifier),
    )),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']',
    )),

    type_conversion_expression: $ => prec.dynamic(-1, seq(
      field('type', $._type),
      '(',
      field('operand', $._expression),
      optional(','),
      ')',
    )),

    composite_literal: $ => prec(PREC.composite_literal, seq(
      field('type', choice(
        $.array_type,
        $.struct_type,
        $._type_identifier,
      )),
      field('body', $.literal_value),
    )),

    literal_value: $ => seq(
      '{',
      optional(
        seq(
          commaSep(choice($.literal_element, $.keyed_element)),
          optional(','))),
      '}',
    ),

    literal_element: $ => choice($._expression, $.literal_value),

    // In T{k: v}, the key k may be:
    // - any expression (when T is a map, slice or array),
    // - a field identifier (when T is a struct), or
    // - a literal_element (when T is an array).
    // The first two cases cannot be distinguished without type information.
    keyed_element: $ => seq($.literal_element, ':', $.literal_element),

    unary_expression: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '!', '~', '*', '&')),
      field('operand', $._expression),
    )),

    binary_expression: $ => choice(...[
      [PREC.mul_div, choice(...mulDiv)], // mul, div, mod, sl, sr, bw-and
      [PREC.add_sub, choice(...addSub)], // add, sub, bw-or, bw-xor
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

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _field_identifier: $ => alias($.identifier, $.field_identifier),

    int_literal: _ => token(choice(seq('0', choice('x', 'X'), optional('_'), hexDigits), seq('0', choice('o', 'O'), optional('_'), octalDigits), choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))), seq('0', choice('b', 'B'), optional('_'), binaryDigits))),

    nil: _ => 'nil',
    true: _ => 'true',
    false: _ => 'false',

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),

    // Use the same as Go because it's more fun
    identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
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
