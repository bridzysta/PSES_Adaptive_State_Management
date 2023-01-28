#ifndef TRIGGER_OUT_H
#define TRIGGER_OUT_H

/** =========================================================================*\
  @file TriggerOut.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerOut class initialization
  
  SWS Reqs: [SWS_SM_91008]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

namespace ara 
{     
    namespace com 
    {
        class TriggerOut 
        {
            public:
                bool notifier;

                bool IsNotifier(void) const;
                void SetNotifier(bool setNotifier);
        };
    }
}

#endif /* TRIGGER_OUT_H */
