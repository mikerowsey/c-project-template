#!/usr/bin/env bash
# Run clang-tidy against all project source files using compile_commands.json.
# Usage: ./scripts/lint.sh [build-dir]
set -euo pipefail

BUILD_DIR="${1:-build}"

if [[ ! -f "$BUILD_DIR/compile_commands.json" ]]; then
    echo "error: $BUILD_DIR/compile_commands.json not found — run cmake first" >&2
    exit 1
fi

find src app -name '*.c' | xargs clang-tidy -p "$BUILD_DIR"
