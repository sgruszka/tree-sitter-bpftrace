# tree-sitter-bpftrace

[bpftrace](https://bpftrace.org) grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter) .

## Building

### Using the pre-generated parser

The `main` branch contains pre-generated parser sources for Tree-sitter
[ABI](https://tree-sitter.github.io/tree-sitter/using-parsers/7-abi-versions.html)
version 15. You only need a C compiler toolchain and `make` to build the parser.

```bash
git clone --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
make
```

### Regenerating the parser

If you need a different ABI version, regenerate the parser. This requires
Node.js and the Tree-sitter CLI (`tree-sitter-cli`).

```bash
git clone --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
tree-sitter gen --abi 14
tree-sitter build
```

## Installing the parser and queries in Neovim

### Using nvim-treesitter

The parser is available on the `main` branch of
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter). This branch
requires Neovim 0.12 or later; see its
[installation requirements](https://github.com/nvim-treesitter/nvim-treesitter#requirements).
To install the parser, include `bpftrace` alongside your other parsers:

```lua
require'nvim-treesitter'.install { 'rust', 'javascript', 'zig', 'bpftrace' }
```

### Manual installation

Neovim must be able to find the parser and query files in `runtimepath` subdirectories.
A common setup is to place them under `~/.config/nvim/`.
For example:

```bash
cd ~/.config/nvim

mkdir -p parser
mkdir -p queries/bpftrace/

# Link the compiled parser
ln -s ~/tree-sitter-bpftrace/libtree-sitter-bpftrace.so parser/bpftrace.so
# Alternatively, if you built the parser using 'tree-sitter build':
# ln -s ~/tree-sitter-bpftrace/bpftrace.so parser/bpftrace.so

# Link query files
ln -s ~/tree-sitter-bpftrace/queries/highlights.scm  queries/bpftrace/highlights.scm
ln -s ~/tree-sitter-bpftrace/queries/injections.scm  queries/bpftrace/injections.scm
ln -s ~/tree-sitter-bpftrace/queries/folds.scm  queries/bpftrace/folds.scm
```

### File type detection

Neovim 0.12 and later provide built-in file type detection for `.bt` files and
scripts with a bpftrace shebang. In a bpftrace buffer, the following command
should print `bpftrace`:

```vim
:echo &ft
```

If you use an older Neovim version, add the following to your `init.lua` to
enable automatic file type detection:

```lua
vim.filetype.add({
  extension = {
    bt = "bpftrace"
  },
  pattern = {
    [".*"] = {
      function(path, bufnr)
        local first_line = vim.api.nvim_buf_get_lines(bufnr, 0, 1, false)[1] or ''
        if vim.regex([[^#!.*bpftrace]]):match_str(first_line) ~= nil then
          return "bpftrace"
        end
      end,
      { priority = -math.huge }
    }
  }
})
```

### Folding support

To enable Tree-sitter folding for bpftrace files, add the following to your
`init.lua`:

```lua
vim.api.nvim_create_autocmd('FileType', {
  pattern = 'bpftrace',
  callback = function()
    vim.opt_local.foldexpr = 'v:lua.vim.treesitter.foldexpr()'
    vim.opt_local.foldmethod = 'expr'
    vim.opt_local.foldenable = true
    vim.opt_local.foldlevel = 99 -- Keep folds open initially
  end,
})
```

This configuration creates folds but leaves them open. In Normal mode, use:

- `zM` to close all folds.
- `zR` to open all folds.
- `za` to toggle the fold under the cursor.

Set `foldlevel` to `0` instead of `99` if you want folds to start closed.

### Troubleshooting

To check whether Neovim can create a parser for the current buffer, run the
following command. It should print `bpftrace`:

```vim
:lua print(vim.treesitter.get_parser(0):lang())
```

To load the parser directly and display the result or error, run:

```vim
:lua print(vim.treesitter.language.add('bpftrace'))
```

If highlighting does not work automatically, enable Tree-sitter highlighting
for the current buffer:

```vim
:lua vim.treesitter.start()
```

To enable highlighting automatically, add the following to your `init.lua`:

```lua
vim.api.nvim_create_autocmd('FileType', {
  pattern = { 'bpftrace' },
  callback = function() vim.treesitter.start() end,
})
```

If folding does not work, first check that the parser loads as described above.
Then inspect the folding settings and check whether Neovim can find and load
the folding query:

```vim
:verbose setlocal foldmethod? foldexpr?
:verbose setlocal foldenable? foldlevel? foldminlines?
:lua print(vim.inspect(vim.api.nvim_get_runtime_file('queries/bpftrace/folds.scm', true)))
:lua print(vim.treesitter.query.get('bpftrace', 'folds') ~= nil)
```

`foldmethod` should be `expr`, and `foldexpr` should be
`v:lua.vim.treesitter.foldexpr()`. If `foldenable` is off, run
`:setlocal foldenable`.

The query lookup should list a `folds.scm` path, and the final command should
print `true`. If the path list is empty, install `queries/folds.scm` as shown in
the manual installation instructions. If loading the query reports invalid
nodes or fields, check that the parser and query files come from the same
revision.

Test folding on a multiline probe block and press `zM` to close it. With the
configuration above, folds initially remain open because `foldlevel` is `99`.
Short folds may also remain open because of `foldminlines`.

If folds are not updated after editing, press `zx` to recompute them, then `zM`
to close them.
