[
  (action)
  (block)
  (block_expression)
  (config_block)
] @indent.begin

; Indent for multiline return values, expression statements, and probe predicates.
[
  (return_statement)
  (expression_statement)
  (predicate)
] @indent.begin

((assignment_statement
  right: (_) @_value) @indent.begin
  (#not-kind-eq? @_value "block_expression" "if_expression"))

((declaration_statement
  value: (_) @_value) @indent.begin
  (#not-kind-eq? @_value "block_expression" "if_expression"))

([
  (arguments
    ")" @indent.branch)
  (macro_parameters
    ")" @indent.branch)
  (tuple_expression
    ")" @indent.branch)
  (record_expression
    ")" @indent.branch)
  (parenthesized_expression
    ")" @indent.branch)
  (sizeof_expression
    ")" @indent.branch)
  (offsetof_expression
    ")" @indent.branch)
  (typeof_expression
    ")" @indent.branch)
] @indent.align
  (#set! indent.open_delimiter "(")
  (#set! indent.close_delimiter ")"))

; Loop parentheses belong to the statement, so indent only their contents.
([
  (while_statement
    condition: (_) @indent.begin)
  (unroll_statement
    [
      (integer_literal)
      (script_parameter)
    ] @indent.begin)
  (for_statement
    [
      (scratch_variable)
      (map_variable)
      (range)
    ] @indent.begin)
]
  (#set! indent.immediate 1)
  (#set! indent.start_at_same_line 1))

([
  (indexes_list
    "]" @indent.branch)
  (subscript_expression
    "]" @indent.branch)
] @indent.align
  (#set! indent.open_delimiter "[")
  (#set! indent.close_delimiter "]"))

; Semicolons are siblings of statements. Keep their enclosing block as the
; indentation anchor, including when the block is unfinished at EOF.
[
  ")"
  "]"
  "}"
] @indent.end

"}" @indent.branch

; Unclosed actions can be represented as one ERROR instead of nested blocks.
(ERROR
  (probes_list)
  "{") @indent.begin

; ERROR may start before the action header. Its action brace must not add a
; second level; nested braces and unfinished calls/indexes still need one.
([
  (ERROR
    .
    [
      (line_comment)
      (block_comment)
    ]*
    . "{" @indent.begin)
  (ERROR
    [
      "("
      "["
    ] @indent.begin)
]
  (#set! indent.immediate 1)
  (#set! indent.start_at_same_line 1))

((ERROR
  (_) @_previous
  .
  [
    (line_comment)
    (block_comment)
  ]*
  . "{" @indent.begin)
  (#not-kind-eq? @_previous "probes_list" "predicate" "line_comment" "block_comment")
  (#set! indent.immediate 1)
  (#set! indent.start_at_same_line 1))

(predicate
  "/"
  (_)
  "/" @indent.branch @indent.end)

(hashbang) @indent.zero

(string_literal) @indent.ignore

; Embedded C is handled by the C indentation query when its parser is available.
; Otherwise preserve the existing indentation inside these opaque nodes.
[
  (c_struct)
  (c_enum)
  (c_preproc)
  (c_preproc_block)
  (line_comment)
  (block_comment)
] @indent.auto
