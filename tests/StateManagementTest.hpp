#ifndef STATE_MANAGEMENT_TEST_HPP
#define STATE_MANAGEMENT_TEST_HPP

#include "gtest/gtest.h"
#include "StateManagement.hpp"


// The fixture for testing class StateManagement.
class StateManagementTest : public testing::Test {
    protected:
    ara::sm::StateManagement mySM;

    StateManagementTest();
    ~StateManagementTest() override;

    void SetUp() override;
    void TearDown() override;

};

#endif
