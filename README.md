# C Project Template

A minimal, opinionated C11 project template using CMake, Ninja, and Unity.

## Project structure

```
app/                    # application entry point
src/
  core/                 # logging library
  math/                 # math modules (add, subtract)
include/project/        # public headers
tests/                  # Unity test runner and test files
  unity/                # Unity v2.6.3 (vendored)
cmake/                  # CMake helpers (compiler warnings)
scripts/                # developer scripts
```

## Prerequisites

- CMake ≥ 3.20
- Ninja
- A C11 compiler (clang or gcc)
- `clang-format` and `clang-tidy` (optional, for formatting/linting)

## Build

```bash
cmake --preset debug        # configure (Debug)
cmake --build build         # compile
```

For a release build:

```bash
cmake --preset release
cmake --build build
```

## Run

```bash
./build/app
```

## Test

```bash
ctest --preset debug
```

Tests use [Unity](https://github.com/ThrowTheSwitch/Unity) (vendored, no install required).

## Format

```bash
./scripts/format.sh         # clang-format all .c/.h files (skips tests/unity/)
```

## Lint

```bash
./scripts/lint.sh           # clang-tidy against all src/ and app/ files
```

Requires a configured build directory (`cmake --preset debug` first).

## Adding a new module

1. Add `src/<module>/<name>.c` and `include/project/<module>/<name>.h`
2. Add the `.c` file to the appropriate `add_library()` in `CMakeLists.txt`
3. Add `#include "project/<module>/<name>.h"` wherever it is needed
4. Add a `tests/test_<name>.c` and register its functions in `tests/test_main.c`
