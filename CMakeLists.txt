cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_C_FLAGS "-Wall")

set(PROJECT_NAME StateManagementProj)
project(${PROJECT_NAME})

include(Dart)

add_subdirectory(src)

add_subdirectory(deps/googletest)
add_subdirectory(tests)
