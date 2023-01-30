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

TEST_F(StateManagementTest, PosTestOfPrepareRollback)
{
    //positive test

    /* arrange */
    ara::sm::FunctionGroupListType groupList = {"groupList"};

    /* act */
    mySM.myUpdateRequest.PrepareRollback(groupList);

    /* assert */
    EXPECT_EQ(mySM.myUpdateRequest.GetFunctionGroupList(), groupList);
}

TEST_F(StateManagementTest, PosTestOfPrepareUpdate)
{
    //positive test

    /* arrange */
    ara::sm::FunctionGroupListType groupList = {"groupList"};
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(true);
    result = mySM.myUpdateRequest.PrepareUpdate(groupList);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_TRUE(result);
    EXPECT_EQ(mySM.myUpdateRequest.GetFunctionGroupList(), groupList);
}

TEST_F(StateManagementTest, NegTestOfPrepareUpdate)
{
    //negative test

    /* arrange */
    ara::sm::FunctionGroupListType groupList = {"groupList"};
    ara::sm::FunctionGroupListType groupListInit = {"sample"};
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(false);
    result = mySM.myUpdateRequest.PrepareUpdate(groupList);

    /* assert */
    EXPECT_FALSE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_FALSE(result);
    EXPECT_EQ(mySM.myUpdateRequest.GetFunctionGroupList(), groupListInit);
}

TEST_F(StateManagementTest, PosTestOfVerifyUpdate)
{
    //positive test

    /* arrange */
    ara::sm::FunctionGroupListType groupList = {"groupList"};
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(true);
    result = mySM.myUpdateRequest.VerifyUpdate(groupList);

    /* assert */
    EXPECT_TRUE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_TRUE(result);
    EXPECT_EQ(mySM.myUpdateRequest.GetFunctionGroupList(), groupList);
}

TEST_F(StateManagementTest, NegTestOfVerifyUpdate)
{
    //negative test

    /* arrange */
    ara::sm::FunctionGroupListType groupList = {"groupList"};
    ara::sm::FunctionGroupListType groupListInit = {"sample"};
    bool result = false;

    /* act */
    mySM.myUpdateRequest.SetUpdateSession(false);
    result = mySM.myUpdateRequest.VerifyUpdate(groupList);

    /* assert */
    EXPECT_FALSE(mySM.myUpdateRequest.GetUpdateSession());
    EXPECT_FALSE(result);
    EXPECT_EQ(mySM.myUpdateRequest.GetFunctionGroupList(), groupListInit);
}
