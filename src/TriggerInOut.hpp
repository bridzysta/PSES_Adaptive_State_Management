#ifndef TRIGGER_IN_OUT_HPP
#define TRIGGER_IN_OUT_HPP

/**
 * @file TriggerInOut.hpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief TriggerInOut class initialization
 * @details SWS Reqs: [SWS_SM_91009]
 *
 * @copyright AGH University of Science and Technology
 */

#include "TriggerIn.hpp"
#include "TriggerOut.hpp"

namespace ara::com {

    class TriggerInOut : public TriggerIn, public TriggerOut {};

}

#endif
