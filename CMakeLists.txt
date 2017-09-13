cmake_minimum_required(VERSION 3.0.0)
project(stats4tmux VERSION 0.0.1)
include(FindBoost)
# find_package(Boost REQUIRED lamba/lambda)

# set(SOURCE_FILES src/main.cpp src/battery.cpp src/utils.cpp)
# set(HEADER_FILES src/main.hpp src/battery.hpp src/utils.hpp)

# add_executable(stats4tmux ${HEADER_FILES} ${SOURCE_FILES})
add_executable(
    stats4tmux
    inc/battery.hpp
    inc/utils.hpp
    src/battery.cpp
    src/utils.cpp
    src/main.cpp
)

target_include_directories(stats4tmux PRIVATE inc)

set_target_properties(stats4tmux PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
)

