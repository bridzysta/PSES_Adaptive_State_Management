#ifndef TRIGGER_IN_OUT_H
#define TRIGGER_IN_OUT_H

/** =========================================================================*\
  @file TriggerInOut.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerInOut class initialization
  
  SWS Reqs: [SWS_SM_91009]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

namespace ara 
{     
    namespace com 
    {
        class TriggerInOut 
        {
            public:
                bool notifier;
                bool trigger;

                bool IsNotifier(void) const;
                bool IsTrigger(void) const;
                void SetNotifier(bool setNotifier);
                void SetTrigger(bool setTrigger);
        };
    }
}

#endif /* TRIGGER_IN_OUT_H */
