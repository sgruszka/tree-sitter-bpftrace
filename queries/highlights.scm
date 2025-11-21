;; highlights.scm for tree-sitter-bpftrace grammar

; Comments
(line_comment) @comment
(block_comment) @comment

; String and numeric literals
(string_literal) @string
(header_literal) @string
(integer_literal) @number
(escape_sequence) @string.escape

; Probes
(probe
  provider: (probe_provider) @type.buildin
  module: (wildcard_identifier) @module
  event: (wildcard_identifier) @property)

(field_expression
  field: (identifier) @property)

(call_expression
  function: (identifier) @function.call)

(preproc_include) @keyword.import
(preproc_define) @keyword.directive.define

; Types
(type_specifier) @type

; Keywords
[
  "config"
  "BEGIN"
  "END"
  "args"
] @keyword

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  ";"
] @punctuation.delimiter

[
  "="
  "<<="
  ">>="
  "+="
  "-="
  "*="
  "/="
  "%="
  "&="
  "|="
  "^="
] @operator

[
  "%"
  "+"
  "-"
  "*"
  "<<"
  ">>"
  "<="
  "<"
  ">="
  ">"
  "=="
  "!="
  "&"
  "^"
  "|"
  "&&"
  "||"
  "/"
] @operator

[
  "->"
  "."
  ":"
] @operator

