#include "StateManagement.hpp"
#include "iostream"

namespace ara::sm {

    StateManagement::StateManagement() {

    }

    // Diagnostics

    /**
     * @brief Enables/Disables rapid shutdown
     * @details Fills [SWS_SM_00106] [SWS_SM_00107]
     * @param enabled enabled flag
     */
    void StateManagement::EnableRapidShutdown(bool enabled) {
        rapidShutdownEnabled = enabled;
    }

    /**
     * @brief Executes reset
     * @details Fills [SWS_SM_00101]
     */
    void StateManagement::ExecuteReset() {
        executingResetID = requestedResetID;
    }

    /**
     * @brief Gets last reset cause
     * @details Fills [SWS_SM_00103] [SWS_SM_00104]
     * @returns last reset ID
     */
    int StateManagement::GetLastResetCause() {
        return executingResetID;
    }

    /**
     * @brief Requests reset
     * @details Fills [SWS_SM_00101]
     * @param resetID requested reset ID
     */
    void StateManagement::RequestReset(int resetID) {
        requestedResetID = resetID;
    }

    void StateManagement::RecoveryHandler(bool *isError){
        *isError = false;
    }

    PowerMode::PowerMode() : msgToSend{false},
                             powerModeMsg{"sample"} {}

    /**
     * @brief sends PowerModeMsg
     *
     * @param msg Message to all running Processes in the system
     * to indicate a request to enter this state.
     *
     * sends PowerModeMsg defined in 9.1 Type definition to all Processes to request a PowerMode.
     */
    bool PowerMode::message(std::string msg)
    {
        if( (msg != sm::PowerModeMsg::On) &&
            (msg != sm::PowerModeMsg::Off) &&
            (msg != sm::PowerModeMsg::Suspend) )
        {
            return false;
        }
        else
        {
            powerModeMsg = msg;
            msgToSend = true;
            return true;
        }
    }

    bool PowerMode::GetMsgToSend(void) const
    {
        return msgToSend;
    }
    
    std::string PowerMode::GetPowerModeMsg(void) const
    {
        return powerModeMsg;
    }

    /**
     * @brief event from Process
     *
     * @param respMsg ResponseMessage from a Processes which received PowerMode request
     * from State Management.
     *
     * All Processes which got a PowerMode request sends this as answer to State Management
     */
    void PowerMode::event(PowerModeRespMsg &respMsg){
        // something like wait for event from CommunicationGroup and then do sth with respMsg
    }

    /**
     * @brief sends DiagnosticResetMsg
     *
     * @param msg Message to all running Processes in the SoftwareCluster
     * to indicate a request to perform softReset.
     *
     * sends DiagnosticResetMsg defined in 9.1 Type definition
     * to all Processes in a SoftwareCluster.
     */
    void DiagnosticReset::message(DiagnosticResetMsg msg){
        // something like CommunicationGroup send msg
    }

    /**
     * @brief event from Process
     *
     * @param respMsg ResponseMessage from a Processes which received DiagnosticReset request
     * from State Management.
     *
     * All Processes which got a DiagnosticReset request sends this as answer to State Management
     */
    void DiagnosticReset::event(DiagnosticResetRespMsg &respMsg){
        // something like wait for event from CommunicationGroup and then do sth with respMsg
    }

}
