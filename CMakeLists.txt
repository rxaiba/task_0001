cmake_minimum_required(VERSION 3.24)
project(task_0001)

set(CMAKE_CXX_STANDARD 17 CACHE STRING "C++ standard")
set(CMAKE_CXX_STANDARD_REQUIRED ON CACHE BOOL "C++ standard required")
set(CMAKE_CXX_EXTENSIONS FALSE CACHE BOOL "C++ standard extension")

add_compile_options(
    -Wall
    -Werror
    -Wpedantic
    -Wextra
    -Weverything
    -Wfatal-errors
    -pedantic
    --pedantic-errors
    -Wno-c++98-compat
    -Wno-c++98-compat-pedantic
    -Wno-padded
)

add_executable(task_0001 main.cpp subprocess.h subprocess.cpp)
target_include_directories(task_0001 PRIVATE "${CMAKE_CURRENT_LIST_DIR}")

enable_testing()
add_test(
    NAME task_0001
    COMMAND task_0001
)
