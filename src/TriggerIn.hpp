#ifndef TRIGGER_IN_HPP
#define TRIGGER_IN_HPP

/**
 * @file TriggerIn.hpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief TriggerIn class initialization
 * @details SWS Reqs: [SWS_SM_91007]
 *
 * @copyright AGH University of Science and Technology
 */

namespace ara::com {

    class TriggerIn {
        public:
        bool trigger;

        /**
         * @brief IsTrigger
         * @details
         */
        bool IsTrigger(void) const;

        /**
         * @brief SetTrigger
         * @details
         */
        void SetTrigger(bool setTrigger);
    };

}

#endif
