#include "sm_test_main.hpp"


StateManagementTest::StateManagementTest() {
    // You can do set-up work for each test here.
}

StateManagementTest::~StateManagementTest() {
    // You can do clean-up work that doesn't throw exceptions here.
}

// If the constructor and destructor are not enough for setting up
// and cleaning up each test, you can define the following methods:

void StateManagementTest::SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
}

void StateManagementTest::TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
