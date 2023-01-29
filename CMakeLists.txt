cmake_minimum_required(VERSION 3.10)

project(StateManagementProj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_C_FLAGS "-Wall")

include(Dart)
include(CTest)

# Coverage
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
include(CodeCoverage)
append_coverage_compiler_flags()

add_subdirectory(src)

# Testing
add_subdirectory(deps/googletest)
add_subdirectory(tests)
