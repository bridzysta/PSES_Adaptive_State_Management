#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, PosTestOfMessage)
{
    //positive test

    /* arrange */
    std::string msg = "On";
    bool result = false;

    /* act */
    result = myPM.message(msg);

    /* assert */
    EXPECT_TRUE(result);
    EXPECT_TRUE(myPM.GetMsgToSend());
    EXPECT_EQ(myPM.GetPowerModeMsg(), msg);
}

TEST_F(StateManagementTest, NegTestOfMessage)
{
    //negative test

    /* arrange */
    std::string msg = "Go";
    bool result = false;

    /* act */
    result = myPM.message(msg);

    /* assert */
    EXPECT_FALSE(result);
    EXPECT_FALSE(myPM.GetMsgToSend());
    EXPECT_EQ(myPM.GetPowerModeMsg(), "sample");
}