#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <wctype.h>

enum TokenType {
    C_STRUCT,
};

typedef struct {
    uint8_t is_struct_body;
    uint8_t braces_count;
} Scanner;

void *tree_sitter_bpftrace_external_scanner_create()
{
    return ts_calloc(1, sizeof(Scanner));
}

void tree_sitter_bpftrace_external_scanner_destroy(void *payload)
{
    ts_free((Scanner *)payload);
}

unsigned tree_sitter_bpftrace_external_scanner_serialize(void *payload, char *buffer)
{
    Scanner *scanner = (Scanner *)payload;

    buffer[0] = (char)scanner->is_struct_body;
    buffer[1] = (char)scanner->braces_count;

    return 2;
}

void tree_sitter_bpftrace_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;

    if (length == 2) {
        scanner->is_struct_body = buffer[0];
        scanner->braces_count = buffer[1];
    } else {
        scanner->is_struct_body = 0;
        scanner->braces_count = 0;
    }
}

static bool skip_spaces(TSLexer *lexer)
{
    while (iswspace(lexer->lookahead)) {
        if (lexer->eof(lexer))
            return false;
        lexer->advance(lexer, true);
    }

    return true;
}

static bool scan_struct_start(Scanner *scanner, TSLexer *lexer)
{
    char str[] = "struct";
    int i;

    if (!skip_spaces(lexer))
        return false;

    for (i = 0; i < sizeof(str) - 1; i++) {
        if (lexer->eof(lexer))
            return false;

        if (lexer->lookahead != str[i])
            return false;

        lexer->advance(lexer, false);
    }

    if (!skip_spaces(lexer))
        return false;

    for (;;) {
        if (lexer->eof(lexer))
            return false;

        if (lexer->lookahead == '{')
            break;

        lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);
    scanner->braces_count = 1;

    lexer->advance(lexer, false);
    return true;
}

static bool scan_struct_end(Scanner *scanner, TSLexer *lexer)
{
    for (;;) {
        if (lexer->eof(lexer))
            return false;

        if (lexer->lookahead == '}') {
            scanner->braces_count--;
            if (scanner->braces_count <= 0)
                break;
        }

        if (lexer->lookahead == '{')
            scanner->braces_count++;

        lexer->advance(lexer, false);
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    return true;
}

static bool scan_struct(Scanner *scanner, TSLexer *lexer)
{
    if (!scan_struct_start(scanner, lexer))
        return false;

    return scan_struct_end(scanner, lexer);
}

bool tree_sitter_bpftrace_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[C_STRUCT] && scan_struct(scanner, lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = C_STRUCT;
        return true;
    }

    return false;
}
