#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, PosTestOfEnablingTrigger)
{
    //positive test

    /* arrange */
    const bool enableTrigger = true;

    /* act */
    mySM.myTriggerIn.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_TRUE(mySM.myTriggerIn.IsTrigger());
}

TEST_F(StateManagementTest, NegTestOfDisablingTrigger)
{
    //negative test

    /* arrange */
    const bool triggerEnabled = true;
    const bool enableTrigger = false;

    /* act */
    mySM.myTriggerIn.SetTrigger(triggerEnabled);
    mySM.myTriggerIn.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_FALSE(mySM.myTriggerIn.IsTrigger());
}