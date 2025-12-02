; Comments
(line_comment) @comment
(block_comment) @comment

; String and numeric literals
(string_literal) @string
(integer_literal) @number
(escape_sequence) @string.escape

; Types
(probe
  provider: (_) @type.buildin
  module: (wildcard_identifier) @module
  function: (wildcard_identifier) @property)

(probe
  provider: (_) @type.buildin
  subsys: (wildcard_identifier) @module
  event: (wildcard_identifier) @property)

(probe
  provider: (_) @type.buildin
  function: (wildcard_identifier) @property)

(type_specifier) @type
(integer_type) @type.buildin

[
  "BEGIN"
  "begin"
  "END"
  "end"
] @type.buildin

; Keywords
(break_statement) @keyword
(continue_statement) @keyword
(return_statement) @keyword.return

; TODO
[
  "config"
  ; "let"
  ; "macro"
  "offsetof"
  "sizeof"
] @keyword

[
  "if"
  "else"
] @keyword.conditional

[
  "for"
  "unroll"
  "while"
] @keyword.repeat

; TODO
; "import" @keyword.import

; Variables
(identifier) @variable

(args_keyword) @variable.builtin
((identifier) @variable.builtin
  (#match? @variable.builtin "^arg[0-9]+$"))

(scratch_variable) @variable
(map_variable) @variable

(field_expression
  field: (identifier) @property)

(call_expression
  function: (identifier) @function.call)

; Punctuations
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

; Operators
[
  "->"
  "."
  ":"
] @operator

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
 "--"
 "++"
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
