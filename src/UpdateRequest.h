#ifndef UPDATE_REQUEST_H
#define UPDATE_REQUEST_H

/** =========================================================================*\
  @file UpdateRequest.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief UpdateRequest class initialization
  
  SWS Reqs: [SWS_SM_91017]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "StateManagementTypes.hpp"
#include <string>
#include <vector>

namespace ara 
{     
    namespace com 
    {
        class UpdateRequest 
        {
            public:
                UpdateRequest();

                void PrepareRollback(sm::FunctionGroupListType groupList);
                bool PrepareUpdate(sm::FunctionGroupListType groupList);
                bool ResetMachine(void);
                void StartUpdateSession(bool startUpdate);
                bool StopUpdateSession(void);
                bool VerifyUpdate(sm::FunctionGroupListType groupList);

                void SetUpdateSession(bool setUpdate);
                bool GetUpdateSession(void) const;

                void SetResetRequest(bool setRequest);
                bool GetResetRequest(void) const;
                
                void SetResetProceed(bool setProceed);
                bool GetResetProceed(void) const;

                sm::FunctionGroupListType GetFunctionGroupList(void) const;
            private:
                bool resetRequest;
                bool resetProceed;
                bool updateSession;
                sm::FunctionGroupListType FunctionGroupList;
        };
    }
}

#endif /* UPDATE_REQUEST_H */
