#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, TestOfEnablingTrigger)
{
    /* arrange */
    const bool enableTrigger = true;

    /* act */
    mySM.myTriggerIn.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_TRUE(mySM.myTriggerIn.IsTrigger());
}

TEST_F(StateManagementTest, TestOfDisablingTrigger)
{
    /* arrange */
    const bool triggerEnabled = true;
    const bool enableTrigger = false;

    /* act */
    mySM.myTriggerIn.SetTrigger(triggerEnabled);
    mySM.myTriggerIn.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_FALSE(mySM.myTriggerIn.IsTrigger());
}
