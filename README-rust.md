# tree-sitter-bpftrace (Rust)

This crate provides Tree-sitter grammar bindings for the
[bpftrace](https://github.com/iovisor/bpftrace) language.

## Usage

Add to your Cargo.toml:

```toml
[dependencies]
tree-sitter = "0.26.3"
tree-sitter-bpftrace = "0.1.1"
```

# Example
```rust
fn main() {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&tree_sitter_bpftrace::LANGUAGE.into())
        .expect("Error loading Bpftrace parser");

    let source_code = r#"kprobe:tcp_reset { printf("PROBE") }"#;

    let tree = parser.parse(source_code, None).unwrap();
    let root_node = tree.root_node();
    assert_eq!(root_node.kind(), "source_file");

    println!("{}", root_node.to_sexp());
}

```

