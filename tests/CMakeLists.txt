include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(GTEST_LIBRARIES gtest gtest_main gmock gmock_main)

add_executable(StateManagementUT
    RunAllTests.cpp
    StateManagementTest.hpp
    StateManagementTest.cpp
    TestOfNothing.cpp
)

target_link_libraries(StateManagementUT
    ${GTEST_LIBRARIES}
    StateManagementLib
)
add_test(NAME StateManagementUT COMMAND StateManagementUT)
