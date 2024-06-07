# Project Settings
cmake_minimum_required(VERSION 3.10)
project(DSA)
include(CTest)
enable_testing()

# Setup executable binary
function(add_exe EXE_NAME SOURCE_FILE)
    add_executable(${EXE_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE})
    target_link_libraries(${EXE_NAME} PRIVATE dsa)
    target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
endfunction()

# General Tests for Sorting Algorithms
function(add_general_test ALGORITHM_NAME)
    add_test(${ALGORITHM_NAME}_regular      ./${ALGORITHM_NAME} regular)
    add_test(${ALGORITHM_NAME}_random       ./${ALGORITHM_NAME} random)
    add_test(${ALGORITHM_NAME}_sorted       ./${ALGORITHM_NAME} sorted)
    add_test(${ALGORITHM_NAME}_reversed     ./${ALGORITHM_NAME} reversed)
    add_test(${ALGORITHM_NAME}_duplicates   ./${ALGORITHM_NAME} duplicates)
endfunction()

# Data Structures Tests
add_exe(test_quicksort                  algorithms/sorting/test_quicksort.cpp)
add_general_test(test_quicksort)

add_exe(test_counting_sort              algorithms/sorting/test_counting_sort.cpp)
add_general_test(test_counting_sort)

# Algorithms Tests
