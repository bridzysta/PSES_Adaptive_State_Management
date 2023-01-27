#ifndef ECU_RESET_REQUEST_HPP
#define ECU_RESET_REQUEST_HPP

namespace ara::dia {

    class EcuResetRequest {
    public:
        virtual void EnableRapidShutdown() = 0;
        virtual void ExecuteReset() = 0;
        virtual void GetLastResetCause() = 0;
        virtual void RequestReset() = 0;
    };

}

#endif
