#ifndef STATE_MANAGEMENT_HPP
#define STATE_MANAGEMENT_HPP

#include "StateManagementTypes.hpp"
#include "EcuResetRequest.hpp"
#include "RecoveryAction.hpp"

namespace ara::sm {

    class StateManagement : public dia::EcuResetRequest, public phm::RecoveryAction {
        public:
        StateManagement();

        // DIA
        int requestedResetID = 0;
        int executingResetID = 0;
        bool rapidShutdownEnabled = false;

        private:
        // DIA
        void EnableRapidShutdown(bool enabled);
        void ExecuteReset();
        int GetLastResetCause();
        void RequestReset(int resetID);

        // PHM
        void RecoveryHandler(bool *isError);
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
