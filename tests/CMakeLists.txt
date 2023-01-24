include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(test_name UT_StateManagement)
set(GTEST_LIBRARIES gtest gtest_main gmock gmock_main)

set(Sources
    sm_test_main.cpp
    sm_test_main.hpp
    test_of_debug.cpp
    test_of_debug2.cpp
)

add_executable(${test_name} ${Sources})
target_link_libraries(${test_name} ${GTEST_LIBRARIES})
target_link_libraries(${test_name} ${LIBRARY_NAME})
add_test(NAME ${test_name} COMMAND ${test_name})
