cmake_minimum_required(VERSION 3.20)
project(c_project_template C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

include(cmake/compiler_warnings.cmake)

add_library(core
    src/core/log.c
)

add_library(math
    src/math/add.c
)

target_include_directories(core PUBLIC include)
target_include_directories(math PUBLIC include)

target_link_libraries(math PUBLIC core)

add_executable(app app/main.c)
target_link_libraries(app PRIVATE core math)

set_project_warnings(core)
set_project_warnings(math)
set_project_warnings(app)

enable_testing()

add_executable(tests
    tests/test_main.c
    tests/test_add.c
)

target_link_libraries(tests PRIVATE core math)
add_test(NAME all_tests COMMAND tests)

set(CMAKE_C_CLANG_TIDY "clang-tidy")
