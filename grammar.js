/**
 * @file tree-sitter parser for bpftrace
 * @author Stanislaw Gruszka <stf_xl@wp.pl>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  call: 15,
  relational: 7,
  equal: 6,
};

module.exports = grammar({
  name: 'bpftrace',
  extras: $ => [/\s/, $.line_comment, $.block_comment],

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

    _probes_list: $ => seq($.probe, repeat(seq(',', $.probe))),
    predicate: $ => seq('/', $._expression, '/'),

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
      seq($.statement, repeat(seq(';', $.statement))),
      optional(';'),
    ),
    statement: $ => $._expression,

    _expression: $ => choice(
      $.binary_expression,
      $.call_expression,
      $.string_literal,
      $.integer_literal,
      $.args_item,
      $.identifier,
      // TODO
    ),

    binary_expression: $ => {
      const table = [
        ['<=', PREC.relational],
        ['<',  PREC.relational],
        ['>=', PREC.relational],
        ['>',  PREC.relational],
        ['==', PREC.equal],
        ['!=', PREC.equal],
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
      seq($._expression, repeat(seq(',', $._expression))),
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

    identifier: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,
    wildcard_identifier: _ => /[_a-zA-Z*][_a-zA-Z0-9*]*/,
  }
});
