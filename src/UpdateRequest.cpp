/** =========================================================================*\
  @file UpdateRequest.cpp
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief UpdateRequest class definition
  
  SWS Reqs: [SWS_SM_91016]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "UpdateRequest.h"

/**
 * @brief UpdateRequest function
 * 
 * More details
*/
ara::com::UpdateRequest::UpdateRequest() : resetRequest{false},
                                           resetProceed{false},
                                           updateSession{false} {}

/**
 * @brief PrepareRollback function
 * 
 * More details
*/
void ara::com::UpdateRequest::PrepareRollback(void)
{

}

/**
 * @brief PrepareUpdate function
 * 
 * More details
*/
bool ara::com::UpdateRequest::PrepareUpdate(void)
{

}

/**
 * @brief ResetMachine function
 * 
 * More details
*/
bool ara::com::UpdateRequest::ResetMachine(void)
{
  resetRequest = true;

  while(resetRequest)
  {

  }
  
  return resetProceed ? true : false;
}

/**
 * @brief StartUpdateSession function
 * 
 * More details
*/
void ara::com::UpdateRequest::StartUpdateSession(bool startUpdate)
{
  updateSession = startUpdate;
}

/**
 * @brief StopUpdateSession function
 * 
 * More details
*/
bool ara::com::UpdateRequest::StopUpdateSession(void)
{
  if(updateSession)
  {
    updateSession = false;
    return true;
  }
  else
  {
    return false;
  }
}

/**
 * @brief VerifyUpdate function
 * 
 * More details
*/
void ara::com::UpdateRequest::VerifyUpdate()
{

}

/**
 * @brief SetUpdateSession function
 * 
 * More details
*/
void ara::com::UpdateRequest::SetUpdateSession(bool setUpdate)
{
  updateSession = setUpdate;
}

/**
 * @brief GetUpdateSession function
 * 
 * More details
*/
bool ara::com::UpdateRequest::GetUpdateSession(void) const
{
  return updateSession;
}

/**
 * @brief SetUpdateSession function
 * 
 * More details
*/
void ara::com::UpdateRequest::SetResetRequest(bool setRequest)
{
  resetRequest = setRequest;
}

/**
 * @brief GetResetRequest function
 * 
 * More details
*/
bool ara::com::UpdateRequest::GetResetRequest(void) const
{
  return resetRequest;
}

/**
 * @brief SetResetProceed function
 * 
 * More details
*/
void ara::com::UpdateRequest::SetResetProceed(bool setProceed)
{
  resetProceed = setProceed;
}

/**
 * @brief GetResetProceed function
 * 
 * More details
*/
bool ara::com::UpdateRequest::GetResetProceed(void) const
{
  return resetProceed;
}
