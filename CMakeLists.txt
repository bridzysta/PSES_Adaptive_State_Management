cmake_minimum_required(VERSION 3.10)

project(StateManagementProj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_C_FLAGS "-Wall")

include(Dart)
include(CTest)

add_subdirectory(src)

# Testing
add_subdirectory(deps/googletest)
add_subdirectory(tests)
