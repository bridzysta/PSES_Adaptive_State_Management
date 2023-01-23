#ifndef AUTOSAR_DIAGNOSTICS_ECU_RESET_REQUEST_H
#define AUTOSAR_DIAGNOSTICS_ECU_RESET_REQUEST_H

namespace ara {
    namespace dia {
        class EcuResetRequest {
        public:
            virtual void EnableRapidShutdown() = 0;
            virtual void ExecuteReset() = 0;
            virtual void GetLastResetCause() = 0;
            virtual void RequestReset() = 0;
        };
    }
}
#endif //AUTOSAR_DIAGNOSTICS_ECU_RESET_REQUEST_H
