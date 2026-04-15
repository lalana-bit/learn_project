cmake_minimum_required(VERSION 3.10)
project(C_test C)

set(CMAKE_C_STANDARD 11)

add_executable(hello_app main.c hello.c)

target_include_directories(hello_app PRIVATE ${CMAKE_SOURCE_DIR})
