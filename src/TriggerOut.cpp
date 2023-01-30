/**
 * @file TriggerOut.cpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief TriggerOut class definition
 * @details SWS Reqs: [SWS_SM_91008]
 *
 * @copyright AGH University of Science and Technology
 */

#include "TriggerOut.hpp"

namespace ara::com{

    bool TriggerOut::IsNotifier(void) const {
        return notifier;
    }

    void TriggerOut::SetNotifier(bool setNotifier) {
        notifier = setNotifier;
    }

}
