#ifndef STATE_MANAGEMENT_TYPES_HPP
#define STATE_MANAGEMENT_TYPES_HPP

#include "string"

namespace ara::sm {

    /**
     * @brief Diagnostic Reset Message
     * @details [SWS_SM_91013]
     *
     * Message to all Processes(in a SoftwareCluster) to indicate a request
     * to perform Diagnostic SoftReset
     */
    struct DiagnosticResetMsg {
    public:
        /* normal 'SoftReset' operation */
        static inline const std::string SoftReset = "SoftReset";
    };

    /**
     * @brief Diagnostic Reset Response Message
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
