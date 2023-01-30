include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(GTEST_LIBRARIES gtest gtest_main gmock gmock_main)

add_executable(StateManagementUT
    RunAllTests.cpp
    StateManagementTest.hpp
    StateManagementTest.cpp
    TestOfRecoveryAction.cpp
    TestOfEcuResetRequest.cpp
    TestOfTriggerInOut.cpp
    TestOfTriggerOut.cpp
    TestOfTriggerIn.cpp
    TestOfUpdateRequest.cpp
    TestOfPowerMode.cpp
    CommunicationGroupServerTest.hpp
    TestOfCommunicationGroupServer.cpp
)

target_link_libraries(StateManagementUT
    ${GTEST_LIBRARIES}
    StateManagementLib
)
add_test(NAME StateManagementUT COMMAND StateManagementUT)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure)


# Coverage
setup_target_for_coverage_gcovr_html (
        NAME StateManagementCov
        EXECUTABLE StateManagementUT
        EXCLUDE deps/
)
