/**
 * @file tree-sitter parser for bpftrace
 * @author Stanislaw Gruszka <stf_xl@wp.pl>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  call: 15,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  relational: 7,
  equal: 6,
  bitwise_and: 5,
  bitwise_xor: 4,
  bitwise_or: 3,
  logical_and: 3,
  logical_or: 2,
};

module.exports = grammar({
  name: 'bpftrace',
  extras: $ => [/\s/, $.line_comment, $.block_comment],

  conflicts: $ => [
    [$._div_left_side, $._predicate_expression]
  ],

  rules: {
    // TODO: all grammar rules
    source_file: $ => seq(optional($.preamble), repeat($.action_block)),

    line_comment: _ => token(seq('//', /.*/)),
    block_comment: _ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    preamble: $ => repeat1($._preamble_item),
    _preamble_item: $ => choice(
      $.config_block
      //TODO
    ),

    config_block: $ => seq(
      'config',
      '=',
      '{',
      optional($._config_body),
      '}'
    ),

    _config_body: $ => seq(
      seq($.config_assignment, repeat(seq(';', $.config_assignment))),
      optional(';'),
    ),

    config_assignment: $ => seq(
      alias($.identifier, $.config_variable),
      '=',
      alias(choice(/\d+/, $.identifier), $.config_value),
    ),

    action_block: $ => seq($._probes_list, optional($.predicate), $._action_body),

    _probes_list: $ => sepBy1(',', $.probe),
    predicate: $ => seq('/', $._predicate_expression),
    _predicate_expression: $ => seq($._expression, '/'),

    probe: $ => choice(
      'BEGIN', // Two built-in probes with no arguments
      'END',
      seq(
        field('provider', $.probe_provider),
        optional(seq( ':', field('module', $.wildcard_identifier))),
        ':',
        field('event', $.wildcard_identifier),
    )),

    probe_provider: _ => choice(
      'bench',
      'self',
      'hardware', 'h',
      'interval', 'i',
      'iter', 'it',
      'fentry', 'f',
      'fexit', 'fr',
      'kprobe', 'k',
      'kretprobe', 'kr',
      'profile', 'p',
      'rawtracepoint', 'rt',
      'software',	's',
      'tracepoint',	't',
      'uprobe', 'u',
      'uretprobe', 'ur',
      'usdt', 'U'	,
      'watchpoint', 'w',
      'asyncwatchpoint', 'aw',
    ),

    _action_body: $ => seq(
      '{',
      optional($.action),
      '}'
    ),

    action: $ => seq(
      sepBy1(';', $.statement),
      optional(';'),
    ),
    statement: $ => $._expression,

    _expression: $ => choice(
      $.binary_expression,
      $.div_expression,
      $.call_expression,
      $.string_literal,
      $.integer_literal,
      $.args_item,
      $._variable,
      $.identifier,
      // TODO
    ),

    div_expression: $ => prec.left(PREC.multiplicative, seq(
      $._div_left_side,
      field('right', $._expression),
    )),
    _div_left_side: $ => seq(field('left',$._expression), '/'),

    binary_expression: $ => {
      const table = [
        ['%',  PREC.multiplicative],
        // ['/',  PREC.multiplicative],
        ['*',  PREC.multiplicative],
        ['+',  PREC.additive],
        ['-',  PREC.additive],
        ['<<', PREC.shift],
        ['>>', PREC.shift],
        ['<=', PREC.relational],
        ['<',  PREC.relational],
        ['>=', PREC.relational],
        ['>',  PREC.relational],
        ['==', PREC.equal],
        ['!=', PREC.equal],
        ['&',  PREC.bitwise_and],
        ['^',  PREC.bitwise_xor],
        ['|',  PREC.bitwise_or],
        ['&&', PREC.logical_and],
        ['||', PREC.logical_or],
      ];

      return choice( ...table.map(([operator, precedence]) =>
          prec.left(precedence, seq(
            field('left', $._expression),
            operator,
            field('right', $._expression),
          ))
        )
      );
    },

    call_expression: $ => prec(PREC.call,
      seq(
        field('function', $.identifier),
        field('arguments', $.arguments),
      ),
    ),

    arguments: $ => seq(
      '(',
      sepBy(',', $._expression),
      ')'
    ),

    args_item: $ => seq('args', '.', $.identifier),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        alias(/[^"\\\n]+/, $.string_content),
        alias(/\\[^\n]/, $.escape_sequence),
      )),
      '"'
    ),

    integer_literal: _ => token(seq(
      optional('-'),
      choice(
        /[0-9][0-9_]*/,
        /0[xX][0-9a-fA-F_]+/,
        /[0-9]+[eE][0-9]+/,
      ),
      seq(
        optional(choice('u', 'U')),
        optional(choice('ll', 'l', 'L', 'LL')),
        ),
    )),

    _variable: $ => choice(
      $.scratch_variable,
      $.map_variable,
    ),

    map_variable: $ => seq(
      '@',
      optional(/[_a-zA-Z][_a-zA-Z0-9]*/),
      optional(seq('[', sepBy1(',', $._expression), ']')), // TODO tuples
    ),

    scratch_variable: _ => /\$[_a-zA-Z][_a-zA-Z0-9]*/,
    identifier: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,
    wildcard_identifier: _ => /[_a-zA-Z*][_a-zA-Z0-9*]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
