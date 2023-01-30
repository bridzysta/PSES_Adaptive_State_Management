#ifndef STATE_MANAGEMENT_HPP
#define STATE_MANAGEMENT_HPP

#include "StateManagementTypes.hpp"
#include "EcuResetRequest.hpp"
#include "RecoveryAction.hpp"
#include "TriggerIn.hpp"
#include "TriggerInOut.hpp"
#include "TriggerOut.hpp"
#include "UpdateRequest.hpp"

namespace ara::sm {

    class StateManagement : public dia::EcuResetRequest, public phm::RecoveryAction {
        public:
        StateManagement();

        //UpdateRequest
        com::UpdateRequest myUpdateRequest;

        //Triggers
        com::TriggerInOut myTriggerInOut;
        /* @brief SWS Reqs: [SWS_SM_00020] */
        com::TriggerOut myTriggerOut;
        /* @brief SWS Reqs: [SWS_SM_00021] */
        com::TriggerIn myTriggerIn;

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
            PowerMode();

            bool message(std::string msg);
            void event(PowerModeRespMsg &respMsg);

            bool GetMsgToSend(void) const;
            std::string GetPowerModeMsg(void) const;
            sm::PowerModeRespMsg GetProcessResponse(void) const;
            bool GetMsgToSM(void) const;

        private:
            std::string powerModeMsg;
            sm::PowerModeRespMsg processResponse;
            bool msgToSend;
            bool msgToSM;
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
