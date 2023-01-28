#ifndef TRIGGER_IN_H
#define TRIGGER_IN_H

/** =========================================================================*\
  @file TriggerInTest.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerInTest TestClass initialization
  
  More details

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "gtest/gtest.h"
#include "TriggerIn.h"

class TriggerInTest : public testing::Test
{
    protected:
        ara::com::TriggerIn myTriggerIn;

        TriggerInTest();
        ~TriggerInTest() override;

        void SetUp() override;
        void TearDown() override;
};

#endif /* TRIGGER_IN_H */
