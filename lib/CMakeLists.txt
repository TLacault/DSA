# Project Settings
cmake_minimum_required(VERSION 3.10)
project(DSA)

# Pre Processor Intructions
include_directories(${CMAKE_SOURCE_DIR}/include)

# Library Generation
file(GLOB_RECURSE dsa_src ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(dsa ${dsa_src})
