cmake_minimum_required(VERSION 3.10)
project(LinkedListProject C)

# Use C99 standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Include directory for header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# All source files
set(SOURCES
    src/main.c
    src/insertNode.c
    src/deleteNode.c
    src/traverseList.c
)

# Create the executable
add_executable(linked_list ${SOURCES})

# Compiler warnings
if (CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(linked_list PRIVATE -Wall -Wextra -pedantic)
elseif (MSVC)
    target_compile_options(linked_list PRIVATE /W4)
endif()
