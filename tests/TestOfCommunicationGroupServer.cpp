#include "gtest/gtest.h"
#include "CommunicationGroupServerTest.hpp"

TEST_F(CommunicationGroupServerTest, PosTestOfResponse)
{
    //positive test

    /* arrange */
    struct Response_t responseTest, result;
    responseTest.clientID = 1;
    responseTest.responseMsg = "SM";

    /* act */
    //myCGS.SetResponse_t(responseTest);
    //result = myCGS.Response();

    /* assert */
    //EXPECT_EQ(result, responseTest);
}
