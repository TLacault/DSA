# Project Settings
cmake_minimum_required(VERSION 3.10)
project(DSA)
include(CTest)
enable_testing()

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include subdirectories
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)

# Add include directories
include_directories(include)
