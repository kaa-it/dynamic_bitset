cmake_minimum_required(VERSION 3.1)

project(dynamic_bitset)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES dynamic_bitset.h dynamic_bitset.cpp test_dynamic_bitset.cpp)

add_executable(test_dynamic_bitset ${SOURCE_FILES})

target_link_libraries(test_dynamic_bitset gtest)