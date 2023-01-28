/** =========================================================================*\
  @file TriggerOut.cpp
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerOut class definition
  
  SWS Reqs: [SWS_SM_91008]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "TriggerOut.h"

/**
 * @brief IsNotifier function
 * 
 * More details
*/
bool ara::com::TriggerOut::IsNotifier(void) const 
{
    return notifier;
}

/**
 * @brief SetNotifier function
 * 
 * More details
*/
void ara::com::TriggerOut::SetNotifier(bool setNotifier) 
{
    notifier = setNotifier;
}
