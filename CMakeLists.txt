cmake_minimum_required(VERSION 3.20)
project(c_project_template C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(cmake/compiler_warnings.cmake)

# -----------------------
# Core library
# -----------------------
add_library(core STATIC
    src/core/log.c
)
target_include_directories(core PUBLIC include)
set_project_warnings(core)

# -----------------------
# Math module
# -----------------------
add_library(math STATIC
    src/math/add.c
)
target_include_directories(math PUBLIC include)
set_project_warnings(math)

# -----------------------
# Application
# -----------------------
add_executable(app app/main.c)
target_link_libraries(app PRIVATE core math)
set_project_warnings(app)

# -----------------------
# Tests
# -----------------------
include(CTest)

# Unity is compiled as its own library — our strict warnings don't apply to it.
add_library(unity STATIC tests/unity/unity.c)
target_include_directories(unity PUBLIC tests/unity)

add_executable(tests
    tests/test_main.c
    tests/test_add.c
)
target_link_libraries(tests PRIVATE math unity)
set_project_warnings(tests)

add_test(NAME all_tests COMMAND tests)
