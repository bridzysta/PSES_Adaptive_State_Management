#ifndef SM_TEST_MAIN_HPP
#define SM_TEST_MAIN_HPP

// #include "src/ara/sm/StateManagement.h"
#include "gtest/gtest.h"


// The fixture for testing class StateManagement.
class StateManagementTest : public ::testing::Test {
    protected:

    StateManagementTest();
    ~StateManagementTest() override;

    void SetUp() override;
    void TearDown() override;

};


int main(int argc, char **argv);

#endif
