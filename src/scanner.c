#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <wctype.h>

enum TokenType {
    C_STRUCT,
};

enum ScannerState {
    STRUCT_BODY = 0,
    COMMENT_BEGIN,
    LINE_COMMENT,
    BLOCK_COMMENT,
    BLOCK_COMMENT_END,
};

typedef struct {
    uint8_t state;
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

    buffer[0] = (char)scanner->state;
    buffer[1] = (char)scanner->braces_count;

    return 2;
}

void tree_sitter_bpftrace_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;

    if (length == 2) {
        scanner->state = buffer[0];
        scanner->braces_count = buffer[1];
    } else {
        scanner->braces_count = 0;
        scanner->state = STRUCT_BODY;
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
    unsigned int i;

    if (!skip_spaces(lexer))
        return false;

    for (i = 0; i < sizeof(str) - 1; i++) {
        if (lexer->eof(lexer))
            return false;

        if (lexer->lookahead != str[i])
            return false;

        lexer->advance(lexer, false);
    }

    if (lexer->eof(lexer))
        return false;
    if (!iswspace(lexer->lookahead))
        return false;
    lexer->advance(lexer, false);

    /*
     * We could have gcc attribute with different non alphanumeric characters,
     * so just detect '{' as beginning of struct body
     *
     * TODO: we can have comments with braceces between struct and actual {
     */
    for (; !lexer->eof(lexer); lexer->advance(lexer, false)) {
        if (lexer->lookahead == '{') {
            lexer->mark_end(lexer);
            scanner->state = STRUCT_BODY;
            scanner->braces_count = 1;
            return true;
        }
    }

    return false;
}

static bool scan_struct_end(Scanner *scanner, TSLexer *lexer)
{
    for ( ; !lexer->eof(lexer); lexer->advance(lexer, false)) {
        switch (scanner->state) {
        case STRUCT_BODY:
            if (lexer->lookahead == '}') {
                scanner->braces_count--;
                if (scanner->braces_count <= 0) {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    return true;
                }
            }

            if (lexer->lookahead == '{')
                scanner->braces_count++;

            if (lexer->lookahead == '/')
                scanner->state = COMMENT_BEGIN;
        break;
        case COMMENT_BEGIN:
            if (lexer->lookahead == '/')
                scanner->state = LINE_COMMENT;
            else if (lexer->lookahead == '*')
                scanner->state = BLOCK_COMMENT;
            else
                scanner->state = STRUCT_BODY;
        break;
        case LINE_COMMENT:
            if (lexer->lookahead == '\n')
                scanner->state = STRUCT_BODY;
        break;
        case BLOCK_COMMENT:
            if (lexer->lookahead == '*')
                scanner->state = BLOCK_COMMENT_END;
        break;
        case BLOCK_COMMENT_END:
            if (lexer->lookahead == '/')
                scanner->state = STRUCT_BODY;
            else
                scanner->state = BLOCK_COMMENT;
        break;
        }
    }

    return false;
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
        lexer->result_symbol = C_STRUCT;
        return true;
    }

    return false;
}
