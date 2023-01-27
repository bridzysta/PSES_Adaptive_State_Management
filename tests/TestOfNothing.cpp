#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, TestOfMultiplying1) {
    EXPECT_EQ(3*8, 24);
}
TEST_F(StateManagementTest, TestOfMultiplying2) {
    EXPECT_NE(3*8, 36);
}
