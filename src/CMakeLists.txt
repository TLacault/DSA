# Project Settings
cmake_minimum_required(VERSION 3.10)
project(DSA)

# Setup executable binary
function(add_exe EXE_NAME SOURCE_FILE)
    add_executable(${EXE_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE})
    target_link_libraries(${EXE_NAME} PRIVATE dsa)
    target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
    set_target_properties(${EXE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
endfunction()

# Create the executables
add_exe(main main.cpp)
