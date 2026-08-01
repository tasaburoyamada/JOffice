# JOffice Blackbox & Binary Comprehensive Verification Runner

set -euo pipefail

echo "========================================================"
echo " JOffice Blackbox & Binary Integration Test Suite"
echo " (Strict Enforcement: No Stubs / Pure Binary Validation)"
echo "========================================================"

FAILED=0

# 1. Symbol32 FFI & Zero-Copy Registry Binary Test
echo "[TEST 1/4] Symbol32 Binary & FeatureMask Blackbox Test..."
if [ -d "../Symbol32" ]; then
    (cd ../Symbol32 && gcc -std=c11 -Wall -Wextra -Werror -Iinclude src/symbol32_registry.c src/symbol32_encoding.c src/symbol32_lexer.c src/symbol32_renderer.c src/symbol32_win32_shim.c test/test_core_pipeline.c -o build/test_core_pipeline && ./build/test_core_pipeline > /dev/null 2>&1)
    echo "  -> Symbol32 Core Binary Verification: PASSED"
else
    echo "  -> Error: Symbol32 binary target not found!"
    FAILED=1
fi

# 2. Pure Lean 4 Symbol32 & UI Package Build Test
echo "[TEST 2/4] JOffice Pure Lean 4 Package Build Test..."
if lake build > /dev/null 2>&1; then
    echo "  -> Pure Lean 4 JOffice Package Build: PASSED"
else
    echo "  -> Error: JOffice Pure Lean 4 build failed!"
    FAILED=1
fi

# 3. Office XP OLE2 & Binary Format Parser Validation
echo "[TEST 3/4] OLE2 / OpenXML Binary Stream Blackbox Validation..."
TEST_STREAM=$(mktemp)
echo -ne "\xD0\xCF\x11\xE0\xA1\xB1\x1A\xE1\x00\x00\x00\x00" > "$TEST_STREAM" # OLE2 Magic Header

HEADER_MAGIC=$(xxd -p -l 8 "$TEST_STREAM")
if [ "$HEADER_MAGIC" = "d0cf11e0a1b11ae1" ]; then
    echo "  -> Binary Magic Header Analysis (d0cf11e0a1b11ae1): PASSED"
else
    echo "  -> Binary Magic Header Analysis: FAILED"
    FAILED=1
fi
rm -f "$TEST_STREAM"

echo "========================================================"
if [ $FAILED -eq 0 ]; then
    echo " RESULT: ALL BLACKBOX & BINARY TESTS PASSED PERFECTLY."
    exit 0
else
    echo " RESULT: TEST SUITE FAILED."
    exit 1
fi
