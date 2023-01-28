#ifndef UPDATE_REQUEST_H
#define UPDATE_REQUEST_H

/** =========================================================================*\
  @file UpdateRequest.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief UpdateRequest class initialization
  
  SWS Reqs: [SWS_SM_91016]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

namespace ara 
{     
    namespace com 
    {
        class UpdateRequest 
        {
            public:
                void PrepareRollback(void);
                void PrepareUpdate(void);
                void ResetMachine(void);
                void StartUpdateSession(void);
                void StopUpdateSession(void);
                void VerifyUpdate(void);
        };
    }
}

#endif /* UPDATE_REQUEST_H */
