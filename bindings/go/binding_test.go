package tree_sitter_bpftrace_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bpftrace "github.com/sgruszka/tree-sitter-bpftrace/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bpftrace.Language())
	if language == nil {
		t.Errorf("Error loading Bpftrace grammar")
	}
}
