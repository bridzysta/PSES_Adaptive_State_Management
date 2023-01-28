#include "gtest/gtest.h"
#include "StateManagementTest.hpp"

TEST_F(StateManagementTest, TestOfEnablingRapidShutdown) {
    ara::dia::EcuResetRequest *era = &mySM;
    bool requestedRapidShutdown = true;
    era->EnableRapidShutdown(requestedRapidShutdown);
    EXPECT_EQ(mySM.rapidShutdownEnabled, requestedRapidShutdown);
}

TEST_F(StateManagementTest, TestOfDisablingRapidShutdown) {
    ara::dia::EcuResetRequest *era = &mySM;
    bool requestedRapidShutdown = false;
    era->EnableRapidShutdown(requestedRapidShutdown);
    EXPECT_EQ(mySM.rapidShutdownEnabled, requestedRapidShutdown);
}

TEST_F(StateManagementTest, TestOfExecuteReset) {
    ara::dia::EcuResetRequest *era = &mySM;
    int requestedResetID = 18;
    era->RequestReset(requestedResetID);
    era->ExecuteReset();
    EXPECT_EQ(mySM.executingResetID, requestedResetID);
}

TEST_F(StateManagementTest, TestOfGetLastResetCause) {
    ara::dia::EcuResetRequest *era = &mySM;
    int returnedResetID;
    returnedResetID = era->GetLastResetCause();
    EXPECT_EQ(returnedResetID, 0);

    int requestedResetID = 18;
    era->RequestReset(requestedResetID);
    era->ExecuteReset();
    returnedResetID = era->GetLastResetCause();
    EXPECT_EQ(returnedResetID, requestedResetID);
}

TEST_F(StateManagementTest, TestOfRequestReset) {
    ara::dia::EcuResetRequest *era = &mySM;
    int requestedResetID = 12;
    era->RequestReset(requestedResetID);
    EXPECT_EQ(mySM.requestedResetID, requestedResetID);
}
