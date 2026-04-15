cmake_minimum_required(VERSION 3.10)
project(C_test C)

set(CMAKE_C_STANDARD 11)

# Enable compile commands for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include header directories
include_directories(include)

# Collect source files
file(GLOB_RECURSE SOURCES 
    "src/**/*.c"
)

# Create executable
add_executable(hello_app ${SOURCES} main.c)

# Set target include directories
target_include_directories(hello_app PRIVATE ${CMAKE_SOURCE_DIR}/include)
