#ifndef COMMUNICATION_GROUP_SERVER_TEST_HPP
#define COMMUNICATION_GROUP_SERVER_TEST_HPP

#include "gtest/gtest.h"
#include "CommunicationGroupServer.hpp"


// The fixture for testing class CommunicationGroupServer.
class CommunicationGroupServerTest : public testing::Test {
    protected:
        //problems with testing because of class template
        //ara::com::CommunicationGroupServer<T> myCGS;
};

#endif
