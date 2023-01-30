#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, PosTestOfEnablingNotifierInOut)
{
    //positive test

    /* arrange */
    const bool enableNotifier = true;

    /* act */
    mySM.myTriggerInOut.SetNotifier(enableNotifier);

    /* assert */
    EXPECT_TRUE(mySM.myTriggerInOut.IsNotifier());
}

TEST_F(StateManagementTest, NegTestOfDisablingNotifierInOut)
{
    //negative test

    /* arrange */
    const bool notifierEnabled = true;
    const bool enableNotifier = false;

    /* act */
    mySM.myTriggerInOut.SetNotifier(notifierEnabled);
    mySM.myTriggerInOut.SetNotifier(enableNotifier);

    /* assert */
    EXPECT_FALSE(mySM.myTriggerInOut.IsNotifier());
}

TEST_F(StateManagementTest, PosTestOfEnablingTriggerInOut)
{
    //positive test

    /* arrange */
    const bool enableTrigger = true;

    /* act */
    mySM.myTriggerInOut.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_TRUE(mySM.myTriggerInOut.IsTrigger());
}

TEST_F(StateManagementTest, NegTestOfDisablingTriggerInOut)
{
    //negative test

    /* arrange */
    const bool triggerEnabled = true;
    const bool enableTrigger = false;

    /* act */
    mySM.myTriggerInOut.SetTrigger(triggerEnabled);
    mySM.myTriggerInOut.SetTrigger(enableTrigger);

    /* assert */
    EXPECT_FALSE(mySM.myTriggerInOut.IsTrigger());
}