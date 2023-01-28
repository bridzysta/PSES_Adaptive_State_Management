#include "../../include/Trigger/TriggerIn.h"
//#include "TriggerIn.h"

namespace ara 
{     
    namespace com 
    {
        bool TriggerIn::IsTrigger(void) const 
        {
            return trigger;
        }

        void TriggerIn::SetTrigger(bool setTrigger) 
        {
            trigger = setTrigger;
        }
    }
}