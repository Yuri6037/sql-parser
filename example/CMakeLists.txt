project(example)
cmake_minimum_required(VERSION 3.10)

add_subdirectory(.. ${CMAKE_BINARY_DIR}/sqlparser)

add_executable(example example.cpp)
target_link_libraries(example sqlparser)
