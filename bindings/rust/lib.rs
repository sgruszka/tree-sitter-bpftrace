//! This crate provides Bpftrace language support for the [tree-sitter] parsing library.
//!
//! Typically, you will use the [`LANGUAGE`] constant to add this language to a
//! tree-sitter [`Parser`], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_bpftrace::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading Bpftrace parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [`Parser`]: https://docs.rs/tree-sitter/0.25.10/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_bpftrace() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for this grammar.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_bpftrace) };

/// The content of the [`node-types.json`] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers/6-static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

// NOTE: uncomment these to include any queries that this grammar contains:

// pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Bpftrace parser");
    }

    #[test]
    fn test_simple_action_block() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading Bpftrace parser");

        let source_code = "kprobe:tcp_reset {}";

        let tree = parser.parse(source_code, None).unwrap();
        let root_node = tree.root_node();

        assert_eq!(root_node.kind(), "source_file");
        assert_eq!(root_node.start_position().column, 0);

        let action_block = root_node.child(0).unwrap();
        assert_eq!(action_block.kind(), "action_block");

        let probes_list = action_block.child(0).unwrap();
        let action = action_block.child(1).unwrap();

        assert_eq!(probes_list.kind(), "probes_list");
        assert_eq!(action.kind(), "action");

        let probe = probes_list.child(0).unwrap();
        assert_eq!(probe.kind(), "probe");
        assert_eq!(probe.start_position().row, 0);
        assert_eq!(probe.start_position().column, 0);
    }
}
