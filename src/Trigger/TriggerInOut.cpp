#include "../../include/Trigger/TriggerInOut.h"
//#include "TriggerInOut.h"

namespace ara 
{ 
    namespace com 
    {
        bool TriggerInOut::IsNotifier(void) const 
        {
            return notifier;
        }

        bool TriggerInOut::IsTrigger(void) const 
        {
            return trigger;
        }

        void TriggerInOut::SetNotifier(bool setNotifier) 
        {
            notifier = setNotifier;
        }

        void TriggerInOut::SetTrigger(bool setTrigger) 
        {
            trigger = setTrigger;
        }
    }
}