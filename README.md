# tree-sitter-bpftrace

A [tree-sitter](https://tree-sitter.github.io/tree-sitter) grammar for [bpftrace](https://github.com/bpftrace/bpftrace).

## Building
### Using pre-generated parser
Main branch contain pre-generated parser sources for tree-sitter [abi](https://tree-sitter.github.io/tree-sitter/using-parsers/7-abi-versions.html) version 15.
You only need a C compiler toolchain and *make* to build it.

```bash
git clone --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
make
```

### Regenerate parser
If you need different abi, you have to regenerate the parser. For this you need to have *node.js* and *tree-sitter-cli* installed.
```bash
git clone --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
tree-sitter gen --abi 14
tree-sitter build
```

## Installing parser and queries in Neovim
### Using nvim-treesitter
The parser is available on  the`main` branch of [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) .
To install it, just add entry to the config together with other parsers, for example:
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
# Or if parser was regenerated and built using 'tree-sitter build'
# ls -s ~/tree-sitter-bpftrace/bpftrace.so parser/bpftrace.so

# Link query files
ln -s ~/tree-sitter-bpftrace/queries/highlights.scm  queries/bpftrace/highlights.scm
ln -s ~/tree-sitter-bpftrace/queries/injections.scm  queries/bpftrace/injections.scm
```

### File type detection
Latest Neovim from *master* branch provides built-in file type detection for bpftrace files. You can check that using below command, it should print *bpftrace*. 
```vim
echo &ft
```
If you are using older neovim version, you can add the following to your init.lua
to enable automatic detection of `bpftrace` files:
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

## Troubleshooting 
You can verify that the parser is correctly attached to the buffer:
```vim
lua print(vim.treesitter.get_parser(0)._lang) -- should print "bpftrace"
```
If this does not work, try registering the language manually:
```vim
lua vim.treesitter.language.add("bpftrace")
```
If highlighting does not work automatically, you might need to enable treesitter for buffer:
```vim
lua vim.treesitter.start()
```
And add below to your init lua file:
```lua
vim.api.nvim_create_autocmd('FileType', {
  pattern = { 'bpftrace' },
  callback = function() vim.treesitter.start() end,
})
```
