#ifndef TRIGGER_IN_H
#define TRIGGER_IN_H

/** =========================================================================*\
  @file TriggerIn.h
  @date 28.01.2023
  @authors Przemyslaw Kurzak

  @brief TriggerIn class initialization
  
  SWS Reqs: [SWS_SM_91007]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

namespace ara 
{     
    namespace com 
    {
        class TriggerIn 
        {
            public:
                bool trigger;

                bool IsTrigger(void) const;
                void SetTrigger(bool setTrigger);
        };
    }
}

#endif /* TRIGGER_IN_H */
