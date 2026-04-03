#!/usr/bin/env bash
set -euo pipefail
find . -path ./tests/unity -prune -o \( -name '*.c' -o -name '*.h' \) -print | xargs clang-format -i
