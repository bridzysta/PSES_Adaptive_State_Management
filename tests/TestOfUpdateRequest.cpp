#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, PosTestOfStartUpdateSession)
{
    //positive test

    /* act */
    mySM.myUpdateRequest.StartUpdateSession(true);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetUpdateSession());
}

TEST_F(StateManagementTest, PosTestOfStopUpdateSession)
{
    //positive test

    /* arrange */ 
    const bool updateSessionRunning = true;
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(updateSessionRunning);
    result = mySM.myUpdateRequest.StopUpdateSession();

    /* assert */
    EXPECT_FALSE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_TRUE(result);
}

TEST_F(StateManagementTest, NegTestOfStopUpdateSession)
{
    //negative test

    /* arrange */ 
    const bool updateSessionNotRunning = false;
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(updateSessionNotRunning);
    result = mySM.myUpdateRequest.StopUpdateSession();

    /* assert */
    EXPECT_FALSE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_FALSE(result);
}

TEST_F(StateManagementTest, PosTestOfUpdateSession)
{
    //positive test

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(true);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetUpdateSession());
}

TEST_F(StateManagementTest, PosTestOfResetRequest)
{
    //positive test

    /* act */
    mySM.myUpdateRequest.SetResetRequest(true);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetResetRequest());
}

TEST_F(StateManagementTest, PosTestOfResetProceed)
{
    //positive test

    /* act */
    mySM.myUpdateRequest.SetResetProceed(true);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetResetProceed());
}