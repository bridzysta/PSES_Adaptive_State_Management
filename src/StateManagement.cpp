#include "StateManagement.hpp"
#include "iostream"

namespace ara::sm {

    StateManagement::StateManagement() {

    }

    // Diagnostics
    void StateManagement::EnableRapidShutdown() {

    }

    void StateManagement::ExecuteReset() {

    }

    void StateManagement::GetLastResetCause() {

    }

    void StateManagement::RequestReset() {

    }


    /**
     * @brief sends PowerModeMsg
     *
     * @param msg Message to all running Processes in the system
     * to indicate a request to enter this state.
     *
     * sends PowerModeMsg defined in 9.1 Type definition to all Processes to request a PowerMode.
     */
    void PowerMode::message(PowerModeMsg msg){
        // something like CommunicationGroup send msg
    }

    /**
     * @brief event from Process
     *
     * @param respMsg ResponseMessage from a Processes which received PowerMode request
     * from State Management.
     *
     * All Processes which got a PowerMode request sends this as answer to State Management
     */
    void PowerMode::event(PowerModeRespMsg* respMsg){
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
    void DiagnosticReset::event(DiagnosticResetRespMsg* respMsg){
        // something like wait for event from CommunicationGroup and then do sth with respMsg
    }

}
