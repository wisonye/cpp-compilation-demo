cmake_minimum_required(VERSION "3.22")

# Indicate the compliation environment (Host OS and CPU Arch)
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

# Compiler and linker
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

# Compile flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -std=c++17")

# Project name
project("demo")

# Compile and build executable
add_executable("${PROJECT_NAME}" "main.cpp")

