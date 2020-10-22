project(sqlparser)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    include/SQLParser.h
    include/SQLParserResult.h
    include/sql/InsertStatement.h
    include/sql/SelectStatement.h
    include/sql/SQLStatement.h
    include/sql/DeleteStatement.h
    include/sql/ShowStatement.h
    include/sql/ExportStatement.h
    include/sql/Table.h
    include/sql/statements.h
    include/sql/Expr.h
    include/sql/CreateStatement.h
    include/sql/PrepareStatement.h
    include/sql/ExecuteStatement.h
    include/sql/ImportStatement.h
    include/sql/UpdateStatement.h
    include/sql/TransactionStatement.h
    include/sql/DropStatement.h
    include/sql/ColumnType.h

    src/util/sqlhelper.cpp
    src/SQLParserResult.cpp
    src/parser/bison_parser.cpp
    src/parser/flex_lexer.cpp
    src/SQLParser.cpp
    src/sql/SQLStatement.cpp
    src/sql/PrepareStatement.cpp
    src/sql/Expr.cpp
    src/sql/statements.cpp
)

add_library(sqlparser STATIC ${SOURCES})
target_include_directories(sqlparser PUBLIC include)
set_property(TARGET sqlparser PROPERTY POSITION_INDEPENDENT_CODE ON)
if (WIN32)
    target_compile_definitions(sqlparser PRIVATE YY_NO_UNISTD_H)
    add_custom_command(TARGET sqlparser POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:sqlparser> ${CMAKE_SOURCE_DIR}/libsqlparser.lib)
else (WIN32)
    add_custom_command(TARGET sqlparser POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:sqlparser> ${CMAKE_SOURCE_DIR}/libsqlparser.a)
endif (WIN32)
