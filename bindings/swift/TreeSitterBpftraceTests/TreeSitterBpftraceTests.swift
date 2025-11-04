import XCTest
import SwiftTreeSitter
import TreeSitterBpftrace

final class TreeSitterBpftraceTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bpftrace())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bpftrace grammar")
    }
}
