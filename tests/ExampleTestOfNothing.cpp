#include "gtest/gtest.h"

TEST(ExampleTestSuite, TestOfMultiplying1) {
    EXPECT_EQ(3*8, 24);
}
TEST(ExampleTestSuite, TestOfMultiplying2) {
    EXPECT_NE(3*8, 36);
}
