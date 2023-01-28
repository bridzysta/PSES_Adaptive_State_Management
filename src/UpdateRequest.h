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
                UpdateRequest();

                void PrepareRollback(void);
                bool PrepareUpdate(void);
                bool ResetMachine(void);
                void StartUpdateSession(bool startUpdate);
                bool StopUpdateSession(void);
                void VerifyUpdate(void);

                void SetUpdateSession(bool setUpdate);
                bool GetUpdateSession(void) const;

                void SetResetRequest(bool setRequest);
                bool GetResetRequest(void) const;
                
                void SetResetProceed(bool setProceed);
                bool GetResetProceed(void) const;
            private:
                bool resetRequest;
                bool resetProceed;
                bool updateSession;
        };
    }
}

#endif /* UPDATE_REQUEST_H */