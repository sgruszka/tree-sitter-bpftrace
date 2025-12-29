/**
 * @file tree-sitter parser for bpftrace
 * @author Stanislaw Gruszka <stf_xl@wp.pl>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  subscript: 18,
  field: 17,
  call: 16,
  unary: 15,
  cast: 14,
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
  conditional: 1,
  assignment: 0,
};

module.exports = grammar({
  name: 'bpftrace',
  extras: $ => [/\s/, $.line_comment, $.block_comment],
  externals: $ => [$.c_struct],

  conflicts: $ => [
    [$._div_left_side, $._predicate_expression],
  ],

  rules: {
    source_file: $ => seq(
      optional($.hashbang),
      optional($.preamble),
      repeat(choice(
        $.action_block,
        $.macro_definition,
      )),
    ),

    line_comment: _ => token(seq('//', /.*/)),
    block_comment: _ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    hashbang: $ => token.immediate(/[#][!].*/),

    preamble: $ => repeat1($._preamble_item),
    _preamble_item: $ => choice(
      $.config_block,
      $.c_preproc,
      $.c_preproc_block,
      seq($.c_struct, optional(';')),
      $.import_statement,
      $.map_declaration,
    ),

    config_block: $ => seq(
      'config',
      '=',
      '{',
      optional($._config_body),
      '}',
    ),

    _config_body: $ => seq(
      seq($.config_assignment, repeat(seq(';', $.config_assignment))),
      optional(';'),
    ),

    config_assignment: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', choice(
        $.integer_literal,
        $.identifier,
        $.string_literal,
      )),
    ),

    c_preproc: _ => /#\s*(define|include)([^/\n]|\/[^*]|\\\n)*/,

    // TODO: why ungreedy/lazy does not work, RustRegex does not work too:
    // c_preproc_block: _ => token(new RustRegex('#\s*(ifndef|ifdef|if)(?s:.*?)#\s*endif'))
    c_preproc_block: _ => /#\s*(if|ifdef|ifndef)([^\n]|\n)*?#\s*endif/,

    import_statement: $ => seq(
      'import',
      $.string_literal,
      ';',
    ),

    map_declaration: $ => seq(
      'let',
      $.map_variable,
      '=',
      $.call_expression,
      ';',
    ),

    macro_definition: $ => seq(
      'macro',
      field('name', $.identifier),
      field('parameters', $.macro_parameters),
      field('body', $.block),
    ),

    macro_parameters: $ => seq(
      '(',
      sepBy(',', choice($.identifier, $._variable)),
      ')',
    ),

    action_block: $ => seq($.probes_list, optional($.predicate), $.action),

    probes_list: $ => sepBy1(',', $.probe),
    predicate: $ => seq('/', $._predicate_expression),
    _predicate_expression: $ => seq($._expression, '/'),

    probe: $ => choice(
      /* Built-in begin/end probes with no arguments */
      field('provider', $.begin_end_provider),

      /* Probes with diffrent arguments, i.e. fentry[:module]:function  */
      $._fentry_fexit,
      $._fentry_fexit_bpf,
      $._kprobe_kretprobe,
      $._uprobe_uretprobe,
      $._tracepoint,
      $._rawtracepoint,
      $._hardware_event,
      $._software_event,
      $._bench_test,
      $._profile_interval,
      $._iter,
      $._usdt,
      $._watchpoint,
    ),

    begin_end_provider: _ => choice(
      'BEGIN',
      'END',
      'begin',
      'end',
    ),

    _fentry_fexit: $ => seq(
      field('provider', $.fentry_fexit_provider),
      $._probe_arguments__optional_module_and_function,
    ),

    _probe_arguments__optional_module_and_function: $ => seq(
      optional(seq(
        ':',
        field('module', $.wildcard_identifier),
      )),
      ':',
      field('function', $.wildcard_identifier),
    ),

    _fentry_fexit_bpf: $ => seq(
      field('provider', $.fentry_fexit_provider),
      ':',
      field('subprovider', $.bpf_identifier),
      optional(seq(
        ':',
        field('program_id', $.decimal_number),
      )),
      ':',
      field('program_name', $.wildcard_identifier),
    ),

    fentry_fexit_provider: _ => choice(
      'fentry', 'f',
      'fexit', 'fr',
      'kfunc', // Deprecated alias of fentry
      'kretfunc', // Deprecated alias of fexit
    ),

    _kprobe_kretprobe: $ => seq(
      // TODO add: kprobe[:module]:fn+offset
      field('provider', $.kprobe_kretprobe_provider),
      $._probe_arguments__optional_module_and_function,
    ),

    kprobe_kretprobe_provider: _ => choice(
      'kprobe', 'k',
      'kretprobe', 'kr',
    ),

    _uprobe_uretprobe: $ => seq(
      field('provider', $.uprobe_uretprobe_provider),
      ':',
      field('binary', $.file_identifier),
      ':',
      field('function', $.identifier),
    ),

    uprobe_uretprobe_provider: $ => choice(
      'uprobe', 'u',
      'uretprobe', 'ur',
    ),

    _tracepoint: $ => seq(
      field('provider', $.tracepoint_provider),
      ':',
      field('subsys', $.wildcard_identifier),
      ':',
      field('event', $.wildcard_identifier),
    ),

    tracepoint_provider: _ => choice(
      'tracepoint', 't',
    ),

    _rawtracepoint: $ => seq(
      field('provider', $.rawtracepoint_provider),
      $._probe_arguments__optional_module_and_function,
    ),

    rawtracepoint_provider: _ => choice(
      'rawtracepoint', 'rt',
    ),

    _hardware_event: $ => seq(
      field('provider', $.hardware_event_provider),
      $._probe_arguments__event_and_optional_count,
    ),

    _software_event: $ => seq(
      field('provider', $.software_event_provider),
      $._probe_arguments__event_and_optional_count,
    ),

    hardware_event_provider: _ => choice(
      'hardware', 'h',
    ),

    software_event_provider: _ => choice(
      'software', 's',
    ),

    _probe_arguments__event_and_optional_count: $ => seq(
      ':',
      field('event', $.identifier_with_dash),
      optional(seq(
        ':',
        field('count', $.integer_literal),
      )),
    ),

    _bench_test: $ => seq(
      field('provider', $.bench_test_provider),
      ':',
      field('function', $.identifier),
    ),

    bench_test_provider: _ => choice(
      'bench',
      'test',
    ),

    _profile_interval: $ => seq(
      field('provider', $.profile_interval_provider),
      choice(
        $._profile_interval_time,
        $._profile_interval_hz,
      ),
    ),

    _profile_interval_time: $ => seq(
      optional(seq(
        ':',
        field('unit', $.time_unit),
      )),
      ':',
      field('count', $.integer_literal),
    ),

    time_unit: $ => choice(
      'us', 'ms', 's',
    ),

    _profile_interval_hz: $ => seq(
      ':',
      'hz',
      ':',
      field('rate', $.integer_literal),
    ),

    profile_interval_provider: _ => choice(
      'profile', 'p',
      'interval', 'i',
    ),

    _iter: $ => seq(
      field('provider', $.iter_provider),
      ':',
      field('object', $.identifier),
      optional(seq(
        ':',
        field('pin', $.file_identifier),
      )),
    ),

    iter_provider: _ => choice(
      'iter', 'it',
    ),

    _usdt: $ => seq(
      field('provider', $.ustd_provider),
      ':',
      field('binary', $.file_identifier),
      optional(seq(
        ':',
        field('namespace', $.identifier),
      )),
      ':',
      field('function', $.identifier),
    ),

    ustd_provider: $ => choice(
      'usdt', 'U',
    ),

    _watchpoint: $ => seq(
      field('provider', $.watchpoint_provider),
      ':',
      choice(
        field('address', $.integer_literal),
        seq(
          field('function', $.identifier),
          '+',
          field('argn', $.argn_identifier),
        ),
      ),
      ':',
      field('length', $.integer_literal),
      ':',
      field('mode', $.watchpoint_mode),
    ),

    watchpoint_provider: _ => choice(
      'watchpoint', 'w',
      'asyncwatchpoint', 'aw',
    ),

    watchpoint_mode: _ => choice(
      'r', 'w', 'x',
    ),

    /* Main action block (no continue or break) */
    action: $ => seq(
      '{',
      optional($._action_body),
      '}',
    ),

    _action_body: $ => seq(
      repeat(choice(
        seq($._statement, ';'),
        $._loop_or_if_statement,
      )),
      choice(
        seq($._statement, optional(';')),
        $._loop_or_if_statement,
      ),
    ),

    /* Internal block */
    block: $ => seq(
      '{',
      optional($._block_body),
      '}',
    ),

    _block_body: $ => seq(
      repeat(choice(
        seq($._statement, ';'),
        seq($._flow_statement, ';'),
        $._loop_or_if_statement,
      )),
      choice(
        seq($._statement, optional(';')),
        seq($._flow_statement, optional(';')),
        $._loop_or_if_statement,
      ),
    ),

    block_expression: $ => seq(
      '{',
      repeat(choice(
        seq($._statement, ';'),
        seq($._flow_statement, ';'),
        $._loop_or_if_statement,
      )),
      $._expression,
      '}',
    ),

    _statement: $ => choice(
      alias($._expression, $.expression_statement),
      alias($._assignment, $.assignment_statement),
      alias($._let_declaration, $.declaration_statement),
      alias('return', $.return_statement),
    ),

    _flow_statement: $ => choice(
      alias('break', $.break_statement),
      alias('continue', $.continue_statement),
    ),

    _loop_or_if_statement: $ => choice(
      $.if_statement,
      $.while_statement,
      $.unroll_statement,
      $.for_statement,
    ),

    if_statement: $ => seq(
      'if',
      optional('comptime'),
      choice(
        seq('(', field('condition', $._expression), ')'),
        $._variable,
        $.integer_literal,
      ),
      field('consequence', $.block),
      optional(field('alternative', $.else_clause)),
    ),

    else_clause: $ => seq(
      'else',
      choice(
        $.if_statement,
        $.block,
      ),
    ),

    while_statement: $ => seq(
      'while',
      '(',
      field('condition', $._expression),
      ')',
      field('body', $.block),
    ),

    unroll_statement: $ => seq(
      'unroll',
      '(',
      $.integer_literal,
      ')',
      field('body', $.block),
    ),

    for_statement: $ => seq(
      'for',
      '(',
      $.scratch_variable,
      ':',
      choice($.map_variable, $.range),
      ')',
      field('body', $.block),
    ),

    range: $ => choice(
      $._range,
      $._parenthesized_range,
    ),

    _range: $ => seq(
      field('left', $._expression),
      '..',
      field('right', $._expression),
    ),

    _parenthesized_range: $ => seq(
      '(',
      $._range,
      ')',
    ),

    _assignment: $ => prec(PREC.assignment, seq(
      field('left', choice($._variable, $.map_subscript_expression)),
      field('operator', choice(
        '=',
        '<<=',
        '>>=',
        '+=',
        '-=',
        '*=',
        '/=',
        '%=',
        '&=',
        '|=',
        '^=',
      )),
      field('right', $._expression),
    )),

    _let_declaration: $ => seq(
      'let',
      field('name', $.scratch_variable),
      optional(seq(
        ':',
        field('type', $.type_specifier),
      )),
      optional(seq(
        '=',
        field('value', $._expression),
      )),
    ),

    _expression: $ => choice(
      $.block_expression,
      $.binary_expression,
      alias($._div_expression, $.binary_expression),
      $.call_expression,
      $.cast_expression,
      $.comptime_expression,
      $.field_expression,
      $.subscript_expression,
      $.map_subscript_expression,
      $.sizeof_expression,
      $.offsetof_expression,
      $.pointer_expression,
      $.conditional_expression,
      $.unary_expression,
      $.tuple_expression,
      $.parenthesized_expression,
      $.update_expression,
      $.string_literal,
      $.integer_literal,
      $.boolean_literal,
      $._variable,
      $.identifier,
    ),

    _div_expression: $ => prec.left(PREC.multiplicative, seq(
      $._div_left_side,
      field('right', $._expression),
    )),
    _div_left_side: $ => seq(field('left', $._expression), field('operator', '/')),

    binary_expression: $ => {
      const table = [
        /* eslint-disable no-multi-spaces */
        ['%', PREC.multiplicative],
        // ['/',  PREC.multiplicative],
        ['*',  PREC.multiplicative],
        ['+',  PREC.additive],
        ['-',  PREC.additive],
        ['<<', PREC.shift],
        ['>>', PREC.shift],
        ['<=', PREC.relational],
        ['>=', PREC.relational],
        ['<',  PREC.relational],
        ['>',  PREC.relational],
        ['==', PREC.equal],
        ['!=', PREC.equal],
        ['&',  PREC.bitwise_and],
        ['^',  PREC.bitwise_xor],
        ['|',  PREC.bitwise_or],
        ['&&', PREC.logical_and],
        ['||', PREC.logical_or],
        /* eslint-enable no-multi-spaces */
      ];

      return choice( ...table.map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        )),
      ));
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
      ')',
    ),

    cast_expression: $ => prec(PREC.cast,
      seq(
        '(',
        field('type', $.type_specifier),
        ')',
        field('value', $._expression),
      ),
    ),

    comptime_expression: $ => prec.right(seq(
      'comptime',
      $._expression,
    )),

    type_specifier: $ => choice(
      $.integer_type,
      $.array_type,
      $.pointer_type,
      $.struct_type,
    ),

    array_type: $ => seq(
      $.integer_type,
      repeat1(seq(
        '[',
        optional($.integer_literal),
        ']',
      )),
    ),

    pointer_type: $ => seq(
      choice(
        $.integer_type,
        $.array_type,
        $.struct_type,
      ),
      repeat1('*'),
    ),

    integer_type: _ => choice(
      'bool',
      'int8',
      'int16',
      'int32',
      'int64',
      'uint8',
      'uint16',
      'uint32',
      'uint64',
    ),

    struct_type: $ => seq('struct', $.identifier),

    field_expression: $ => prec.left(PREC.field, seq(
      field('argument', choice(
        $.scratch_variable,
        $.identifier,
        $.args_keyword,
        $.field_expression,
        $.parenthesized_expression,
      )),
      choice('.', '->'),
      field('field', choice(
        $.identifier,
        $.integer_literal,
      )),
    )),

    subscript_expression: $ => prec(PREC.subscript, seq(
      field('argument', choice(
        $.scratch_variable,
        $.identifier,
        $.field_expression,
        $.string_literal,
      )),
      '[',
      field('index', $.integer_literal),
      ']',
    )),

    map_subscript_expression: $ => prec(PREC.subscript, seq(
      field('argument', $.map_variable),
      field('indexes', $.indexes_list),
    )),

    indexes_list: $ => seq(
      '[',
      sepBy1(',', $._expression),
      ']',
    ),

    sizeof_expression: $ => seq(
      'sizeof',
      '(',
      choice(
        field('type', $.type_specifier),
        field('value', $._expression),
      ),
      ')',
    ),

    offsetof_expression: $ => seq(
      'offsetof',
      '(',
      field('type', $.struct_type),
      ',',
      field('member', sepBy1('.', $.identifier)),
      ')',
    ),

    pointer_expression: $ => prec.left(PREC.cast, seq(
      '*',
      field('argument', $._expression),
    )),

    conditional_expression: $ => prec.right(PREC.conditional, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression),
    )),

    unary_expression: $ => prec.left(PREC.unary, seq(
      field('operator', choice('!', '~', '-', '+')),
      field('argument', $._expression),
    )),

    tuple_expression: $ => seq(
      '(',
      seq($._expression, ','),
      sepBy1(',', $._expression),
      ')',
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    update_expression: $ => choice(
      $._sufix_increment,
      $._sufix_decrement,
      $._prefix_increment,
      $._prefix_decrement,
    ),

    /* Sufix increment/decrement has the same precedence as funnction call */
    _sufix_increment: $ => prec.left(PREC.call, seq($._variable, '++')),
    _sufix_decrement: $ => prec.left(PREC.call, seq($._variable, '--')),

    /* Prefix increment/decrement has the same precedence as cast */
    _prefix_increment: $ => prec.right(PREC.cast, seq('++', $._variable)),
    _prefix_decrement: $ => prec.right(PREC.cast, seq('--', $._variable)),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        alias(/[^"\\\n]+/, $.string_content),
        alias(/\\[^\n]/, $.escape_sequence),
      )),
      '"',
    ),

    /* TODO: bpfrace report errors on things like 0xffLL */
    integer_literal: _ => token(seq(
      optional('-'),
      choice(
        /[0-9][0-9_]*/,
        /0[xX][0-9a-fA-F_]+/,
        /[0-9]+[eE][0-9]+/,
      ),
      choice(
        seq(
          optional(choice('u', 'U')),
          optional(choice('ll', 'l', 'L', 'LL')),
        ),
        seq(
          optional(choice('ns', 'us', 'ms', 's', 'm', 'h', 'd')),
        ),
      ),
    )),

    boolean_literal: _ => choice('true', 'false'),

    _variable: $ => choice(
      $.scratch_variable,
      $.map_variable,
    ),

    map_variable: $ => token(seq(
      '@',
      optional(/[_a-zA-Z][_a-zA-Z0-9]*/),
    )),

    scratch_variable: _ => /[$][_a-zA-Z][_a-zA-Z0-9]*/,
    identifier: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,
    wildcard_identifier: _ => /[_a-zA-Z*][_a-zA-Z0-9.*]*/,
    file_identifier: _ => token(/[./_a-zA-Z0-9]+/),
    identifier_with_dash: _ => /[_a-zA-Z][_a-zA-Z0-9\-]*/,
    bpf_identifier: _ => 'bpf',
    argn_identifier: _ => token(seq('arg', /\d+/)),
    args_keyword: _ => 'args',
    decimal_number: _ => /\d+/,

  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
