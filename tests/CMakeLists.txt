include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TESTS_NAME UT_StateManagement)
set(GTEST_LIBRARIES gtest gmock)

set(TestSources
    StateManagementTest.cpp
    StateManagementTest.hpp
    ExampleTestOfNothing.cpp
)

add_executable(${TESTS_NAME} ${TestSources})
target_link_libraries(${TESTS_NAME} ${LIBRARY_NAME} ${GTEST_LIBRARIES})
add_test(NAME ${TESTS_NAME} COMMAND ${TESTS_NAME})
