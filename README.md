# tree-sitter-bpftrace

A [tree-sitter](https://tree-sitter.github.io/tree-sitter) grammar for [bpftrace](https://github.com/bpftrace/bpftrace).

## Building
### Build from `build-{DATE}` branch 
The build-{DATE} branches contain pre-generated parser sources.
To build from one of these branches you only need a C compiler and make.

Check for latest `build-{DATE}` branch. Need to have c compiler installed to build the parser.

```bash
git clone --branch build-2025-11-28 --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
make
```
Check the repository for the most recent `build-{DATE}` branch.

## Build from `main` branch
To build form `main` branch you need to have *node.js* and *tree-sitter-cli* installed.
```bash
git clone  --depth 1 https://github.com/sgruszka/tree-sitter-bpftrace.git
cd tree-sitter-bpftrace
tree-sitter gen
tree-sitter build
```

### Installing parser and queries in Neovim 
Neovim must be able to find the parser and query files in `runtimepath` subdirectories.
A common setup is to place them under `~/.config/nvim/`.
For example: 
```bash
cd ~/.config/nvim

mkdir -p parser
mkdir -p queries/bpftrace/

# Link the compiled parser (use ~/tree-sitter-bpftrace/bpftrace.so for `main` branch build)
ln -s ~/tree-sitter-bpftrace/libtree-sitter-bpftrace.so parser/bpftrace.so

# Link query files
ln -s ~/tree-sitter-bpftrace/queries/highlights.scm  queries/bpftrace/highlights.scm
ln -s ~/tree-sitter-bpftrace/queries/injections.scm  queries/bpftrace/injections.scm
```
