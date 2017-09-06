cmake_minimum_required(VERSION 3.1)

project(dynamic_bitset)

set(CMAKE_CXX_STANDARD 17)

if (CMAKE_TOOLCHAIN_FILE)
    find_path(GTEST_INCLUDE_DIR gtest/gtest.h)
    find_library(GTEST_LIBRARY gtest)

    include_directories(${GTEST_INCLUDE_DIR})
    link_libraries(${GTEST_LIBRARY})
endif()

set(SOURCE_FILES dynamic_bitset.h dynamic_bitset.cpp test_dynamic_bitset.cpp)

add_executable(test_dynamic_bitset ${SOURCE_FILES})
