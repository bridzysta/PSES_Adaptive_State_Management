#include "../../include/Trigger/TriggerOut.h"
//#include "TriggerOut.h"

namespace ara 
{ 
    namespace com 
    {
        bool TriggerOut::IsNotifier(void) const 
        {
            return notifier;
        }

        void TriggerOut::SetNotifier(bool setTrigger) 
        {
            notifier = setTrigger;
        }
    }
}