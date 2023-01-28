/** =========================================================================*\
  @file TriggerIn.cpp
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerIn class definition
  
  SWS Reqs: [SWS_SM_91007]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "TriggerIn.h"

/**
 * @brief IsTrigger function
 * 
 * More details
*/
bool ara::com::TriggerIn::IsTrigger(void) const 
{
    return trigger;
}

/**
 * @brief SetTrigger function
 * 
 * More details
*/
void ara::com::TriggerIn::SetTrigger(bool setTrigger) 
{
    trigger = setTrigger;
}
