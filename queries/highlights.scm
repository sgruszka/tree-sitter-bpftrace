; Comments
(line_comment) @comment
(block_comment) @comment

; String and numeric literals
(string_literal) @string
(escape_sequence) @string.escape
(integer_literal) @number
(boolean_literal) @boolean

; Macro
(macro_definition (identifier) @function.macro)

; Probes

; fentry/fexit, kprobe/kretprobe, rawtracepoint
(probe
  provider: (_) @type.buildin
  module: (wildcard_identifier) @module
  function: (wildcard_identifier) @property)
(probe
  provider: (_) @type.buildin
  function: (wildcard_identifier) @property)

; uprobe/uretprobe
(probe
  provider: (uprobe_uretprobe_provider) @type.buildin
  binary: (file_identifier) @string.special.path
  function: (identifier) @property)

; tracepoint
(probe
  provider: (_) @type.buildin
  subsys: (wildcard_identifier) @module
  event: (wildcard_identifier) @property)

; software/hardware
(probe
  provider: (_) @type.buildin
  event: (identifier_with_dash) @property
  count: (integer_literal) @number)
(probe
  provider: (_) @type.buildin
  event: (identifier_with_dash) @property)

; bench/test
(probe
  provider: (bench_test_provider) @type.buildin
  function: (identifier) @property)

; profile/interval
(probe
  provider: (profile_interval_provider) @type.buildin
  unit: (time_unit) @string.special
  count: (integer_literal) @property)
(probe
  provider: (profile_interval_provider) @type.buildin
  count: (integer_literal) @number)

; iter
(probe
  provider: (iter_provider) @type.buildin
  object: (identifier) @module
  pin: (file_identifier) @property)
(probe
  provider: (iter_provider) @type.buildin
  object: (identifier) @module)

; ustd
(probe
  provider: (ustd_provider) @type.buildin
  binary: (file_identifier) @string.special.path
  namespace: (identifier) @variable
  function: (identifier) @property)
(probe
  provider: (ustd_provider) @type.buildin
  binary: (file_identifier) @string.special.path
  function: (identifier) @property)

; watchpoint/asyncwatchpoint
(probe
  provider: (watchpoint_provider) @type.buildin
  address: (integer_literal) @number
  length: (integer_literal) @number
  mode: (watchpoint_mode) @property)

; Types
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
] @keyword.repeat

"import" @keyword.import

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
