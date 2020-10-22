project(tests)
cmake_minimum_required(VERSION 3.10)

add_subdirectory(.. ${CMAKE_BINARY_DIR}/sqlparser)

set(SOURCES
    auto_query_file_test.cpp
    prepare_tests.cpp
    select_tests.cpp
    sql_asserts.h
    sql_parser.cpp
    sql_tests.cpp
    tpc_h_tests.cpp
    thirdparty/microtest/microtest.h
)

add_executable(tests ${SOURCES})
target_link_libraries(tests sqlparser)

add_custom_command(TARGET tests POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:tests> ${CMAKE_SOURCE_DIR}/bin/tests)
