/**
 * @file TriggerIn.cpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief TriggerIn class definition
 * @details SWS Reqs: [SWS_SM_91007]
 *
 * @copyright AGH University of Science and Technology
 */

#include "TriggerIn.hpp"

namespace ara::com {

    bool TriggerIn::IsTrigger(void) const {
        return trigger;
    }

    void TriggerIn::SetTrigger(bool setTrigger) {
        trigger = setTrigger;
    }

}
