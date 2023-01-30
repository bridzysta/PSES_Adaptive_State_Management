#ifndef TRIGGER_OUT_HPP
#define TRIGGER_OUT_HPP

/**
 * @file TriggerOut.hpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief TriggerOut class initialization
 * @details SWS Reqs: [SWS_SM_91008]
 *
 * @copyright AGH University of Science and Technology
 */

namespace ara::com {

    class TriggerOut {
        public:
        bool notifier;

        /**
         * @brief IsNotifier
         * @details
        */
        bool IsNotifier(void) const;

        /**
         * @brief SetNotifier
         * @details
        */
        void SetNotifier(bool setNotifier);
    };

}

#endif
