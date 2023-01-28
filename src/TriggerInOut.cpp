/** =========================================================================*\
  @file TriggerInOut.cpp
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerInOut class definition
  
  SWS Reqs: [SWS_SM_91009]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "TriggerInOut.h"

/**
 * @brief IsNotifier function
 * 
 * More details
*/
bool ara::com::TriggerInOut::IsNotifier(void) const 
{
    return notifier;
}

/**
 * @brief IsTrigger function
 * 
 * More details
*/
bool ara::com::TriggerInOut::IsTrigger(void) const 
{
    return trigger;
}

/**
 * @brief SetNotifier function
 * 
 * More details
*/
void ara::com::TriggerInOut::SetNotifier(bool setNotifier) 
{
    notifier = setNotifier;
}

/**
 * @brief SetTrigger function
 * 
 * More details
*/
void ara::com::TriggerInOut::SetTrigger(bool setTrigger) 
{
    trigger = setTrigger;
}
