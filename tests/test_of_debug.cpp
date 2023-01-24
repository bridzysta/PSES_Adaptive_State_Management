#include "sm_test_main.hpp"
// #include "src/debug.hpp"

TEST(ExampleTestSuiteName1, ExampleTest1_1) {
    EXPECT_EQ(true, false) << "This should fail";
}

TEST(ExampleTestSuiteName2, ExampleTest2_1) {
    EXPECT_EQ(true, true) << "This shouldn't fail";
}
