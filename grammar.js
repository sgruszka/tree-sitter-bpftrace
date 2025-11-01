/**
 * @file tree-sitter parser for bpftrace
 * @author Stanislaw Gruszka <stf_xl@wp.pl>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'bpftrace',
  extras: $ => [/\s/, $.line_comment, $.block_comment],

  rules: {
    // TODO: all grammar rules
    source_file: $ => seq(optional($._preamble), repeat($.action_block)),

    line_comment: _ => token(seq('//', /.*/)),
    block_comment: _ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    _preamble: $ => repeat1($.preamble_line),
    preamble_line: _ => 'TODO PREAMBLE',

    action_block: $ => seq($._probe, optional($.predicate_exp), $._action_body),

    _probe: $ => seq($.probe, repeat(seq(',', $.probe))),
    predicate_exp: $ => seq('/', $.predicate, '/'),

    probe: $ => seq(
      $.probe_provider,
      repeat($.probe_def),
    ),

    probe_provider: _ => choice(
      'begin',
      'end',
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

    probe_def: _ => seq(':', /[a-zA-Z_]+/),

    predicate: _ => 'TODO PREDICATE',

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
      $.call_expression,
      $.string_literal,
      $.integer_literal,
      $.args_item,
      $.identifier,
      // TODO
    ),

    call_expression: $ => seq(
      field('function', $.identifier),
      field('arguments', $.arguments),
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
  }
});
