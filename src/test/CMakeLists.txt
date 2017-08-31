cmake_minimum_required(VERSION 2.6)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests gtest_main.cc utils_test.cpp ../utils.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
