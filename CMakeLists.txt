cmake_minimum_required(VERSION 3.29)
project(samake)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SRC_LIST "src/*.cc")

file(GLOB_RECURSE HEADER_LIST "include/*.h")

add_executable(samake ${HEADER_LIST} ${SRC_LIST})

target_include_directories(samake PUBLIC include)
