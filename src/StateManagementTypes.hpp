#ifndef STATE_MANAGEMENT_TYPES_HPP
#define STATE_MANAGEMENT_TYPES_HPP

#include "string"

namespace ara::sm {

    /**
     * @brief PowerMode message
     * @details Fills [SWS_SM_91011]
     *
     * Message to all running Processes in the system to indicate a request for a PowerMode switch
     */
    struct PowerModeMsg {
    public:
        /* 'On' - normal operation */
        static inline const std::string On = "On";
        /* 'Off' - persist data preparation for shutdown. */
        static inline const std::string Off = "Off";
        /* 'Suspend' - prepare for suspend2ram. */
        static inline const std::string Suspend = "Suspend";
    };

    /**
     * @brief PowerMode response message
     * @details Fills [SWS_SM_91012]
     *
     * Reply message from Process, which received PowerModeMessage from State Management.
     */
    enum class PowerModeRespMsg {
        /* requested mode successfully reached. */
        kDone,
        /* requested mode not reached. */
        kFailed,
        /* can't process requested mode e.g. important things are ongoing. */
        kBusy,
        /* requested mode not supported. */
        kNotSupported
    };

    /**
     * @brief DiagnosticReset message
     * @details Fills [SWS_SM_91013]
     *
     * Message to all Processes(in a SoftwareCluster) to indicate a request
     * to perform Diagnostic SoftReset
     */
    struct DiagnosticResetMsg {
    public:
        /* 'SoftReset' - normal operation */
        static inline const std::string SoftReset = "SoftReset";
    };

    /**
     * @brief DiagnosticReset response message
     * @details Fills [SWS_SM_91014]
     *
     * Reply message from Process, which received DiagnosticResetMessage
     * from State Management
     */
    enum class DiagnosticResetRespMsg {
        /* reset performed successfully. */
        kDone,
        /* reset not succesfully performed. */
        kFailed,
        /* can’t perform reset(e.g. important things are ongoing). */
        kBusy,
        /* reset not supported. */
        kNotSupported
    };

}

#endif
