cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_C_FLAGS "-Wall")

set(SM_PROJ StateManagementProj)
project(${SM_PROJ})

include(Dart)
include(CTest)

# The compiled library code is here
add_subdirectory(src)
# The executable code is here
add_subdirectory(apps)

# Testing
add_subdirectory(deps/googletest)
add_subdirectory(tests)
