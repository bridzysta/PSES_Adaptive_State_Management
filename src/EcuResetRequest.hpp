#ifndef ECU_RESET_REQUEST_HPP
#define ECU_RESET_REQUEST_HPP

namespace ara::dia {

    class EcuResetRequest {
        public:
        virtual void EnableRapidShutdown(bool enabled) = 0;
        virtual void ExecuteReset() = 0;
        virtual int GetLastResetCause() = 0;
        virtual void RequestReset(int resetID) = 0;
    };

}

#endif
