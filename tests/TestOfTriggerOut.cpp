#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, PosTestOfEnablingNotifier)
{
    //positive test

    /* arrange */
    const bool enableNotifier = true;

    /* act */
    mySM.myTriggerOut.SetNotifier(enableNotifier);

    /* assert */
    EXPECT_TRUE(mySM.myTriggerOut.IsNotifier());
}

TEST_F(StateManagementTest, NegTestOfDisablingNotifier)
{
    //negative test

    /* arrange */
    const bool notifierEnabled = true;
    const bool enableNotifier = false;

    /* act */
    mySM.myTriggerOut.SetNotifier(notifierEnabled);
    mySM.myTriggerOut.SetNotifier(enableNotifier);

    /* assert */
    EXPECT_FALSE(mySM.myTriggerOut.IsNotifier());
}