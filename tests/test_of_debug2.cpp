#include "sm_test_main.hpp"

TEST(ExampleTestSuiteName3, ExampleTest3_1) {
    EXPECT_EQ(true, false) << "This should fail";
}

TEST(ExampleTestSuiteName3, ExampleTest3_2) {
    EXPECT_EQ(true, true) << "This shouldn't fail";
}
