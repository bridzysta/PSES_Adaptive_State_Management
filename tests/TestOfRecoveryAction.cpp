#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, TestOfRecoveryHandler) {
    ara::phm::RecoveryAction *ra = &mySM;
    bool isError = true;
    bool expectedValue = false;
    ra->RecoveryHandler(&isError);
    EXPECT_EQ(isError, expectedValue);
}
