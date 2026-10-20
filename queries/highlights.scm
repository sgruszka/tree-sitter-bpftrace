; Comments
[
  (line_comment)
  (block_comment)
] @comment @spell

; String and numeric literals
(string_literal) @string

(escape_sequence) @string.escape

(integer_literal) @number

(boolean_literal) @boolean

; Variables
(identifier) @variable

(args_keyword) @variable.builtin

(argn_identifier) @variable.builtin

(retval_identifier) @variable.builtin

(scratch_variable) @variable

(map_variable) @variable

(script_parameter) @variable.parameter

; Macro
(macro_definition
  (identifier) @function.macro)

; Probes
; Match fields independently so script parameters use their global capture.
(probe
  provider: (_) @type.builtin)

(probe
  module: (wildcard_identifier) @module)

(probe
  function: [
    (wildcard_identifier)
    (identifier)
  ] @property)

(probe
  binary: (file_identifier) @string.special.path)

(probe
  subsys: (wildcard_identifier) @module)

(probe
  event: [
    (wildcard_identifier)
    (identifier_with_dash)
  ] @property)

(probe
  unit: (time_unit) @string.special)

(probe
  object: (identifier) @module)

(probe
  pin: (file_identifier) @property)

(probe
  namespace: (wildcard_identifier) @variable)

(probe
  mode: (watchpoint_mode) @property)

; Types
(type_specifier) @type

(integer_type) @type.builtin

[
  "BEGIN"
  "begin"
  "END"
  "end"
] @type.builtin

; Keywords
(hashbang) @keyword.directive

(return_statement) @keyword.return

[
  "config"
  "let"
  "macro"
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
  (break_statement)
  (continue_statement)
] @keyword.repeat

"import" @keyword.import

(field_expression
  field: (identifier) @property)

(call_expression
  function: (identifier) @function.call)

(call_expression
  namespace: "kfunc" @module)

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
  ":"
  "::"
  "."
] @punctuation.delimiter

; Operators
[
  ; Field access
  "->"
  ; Range
  ".."
  ; Assignment
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
  ; Update
  "--"
  "++"
  ; Arithmetic
  "%"
  "+"
  "-"
  "*"
  "/"
  ; Relational
  "<="
  "<"
  ">="
  ">"
  "=="
  "!="
  ; Bitwise
  "&"
  "^"
  "|"
  "~"
  "<<"
  ">>"
  ; Logical
  "&&"
  "||"
  "!"
] @operator

(conditional_expression
  [
    "?"
    ":"
  ] @keyword.conditional.ternary)

(predicate
  "/" @punctuation.delimiter)
