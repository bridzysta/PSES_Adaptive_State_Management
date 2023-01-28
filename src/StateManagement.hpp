#ifndef STATE_MANAGEMENT_HPP
#define STATE_MANAGEMENT_HPP

#include "StateManagementTypes.hpp"
#include "EcuResetRequest.hpp"

namespace ara::sm {

    class StateManagement : public dia::EcuResetRequest {
        public:
        StateManagement();
        private:

        // Diagnostics
        void EnableRapidShutdown();
        void ExecuteReset();
        void GetLastResetCause();
        void RequestReset();

    };

    /**
     * @brief PowerMode Service Interface
     * @details Fills [SWS_SM_91020]
     */
    class PowerMode {
        public:
        void message(PowerModeMsg msg);
        void event(PowerModeRespMsg &respMsg);
    };

    /**
     * @brief DiagnosticReset Service Interface
     * @details Fills [SWS_SM_91015]
     */
    class DiagnosticReset {
        public:
        void message(DiagnosticResetMsg msg);
        void event(DiagnosticResetRespMsg &respMsg);
    };

}

#endif
