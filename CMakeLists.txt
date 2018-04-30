cmake_minimum_required(VERSION 3.8)
project(leptjson)

set(CMAKE_CXX_STANDARD 11)

set(PRJ_INCLUDES "")
set(PRJ_SOURCES "")
set(PRJ_LIBRARIES "")

# gather include dirs
list(APPEND PRJ_INCLUDES include)
include_directories(${PRJ_INCLUDES})

# gather sources
file(GLOB_RECURSE SOURCES1 src/*.cpp)
list(APPEND PRJ_SOURCES ${SOURCES1})
message(STATUS ${PRJ_SOURCES})

# gather labraries
# pass

add_executable(leptjson main.cpp ${PRJ_SOURCES})
add_executable(leptjson_test test.cpp ${PRJ_SOURCES})
