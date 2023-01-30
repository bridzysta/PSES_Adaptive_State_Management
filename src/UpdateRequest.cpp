/**
 * @file UpdateRequest.cpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief UpdateRequest class definition
 * @details SWS Reqs: [SWS_SM_91017]
 *
 * @copyright AGH University of Science and Technology
 */

#include "UpdateRequest.hpp"

namespace ara::com {

    UpdateRequest::UpdateRequest() :
        resetRequest{false},
        resetProceed{false},
        updateSession{false},
        FunctionGroupList{"sample"} {}

    void UpdateRequest::PrepareRollback(sm::FunctionGroupListType groupList) {
        FunctionGroupList = groupList;
    }

    bool UpdateRequest::PrepareUpdate(sm::FunctionGroupListType groupList) {
        if(!updateSession) {
            return false;
        }
        else {
            FunctionGroupList = groupList;
            return true;
        }
    }

    bool UpdateRequest::ResetMachine(void) {
        resetRequest = true;

        while(resetRequest) {}

        return resetProceed ? true : false;
    }

    void UpdateRequest::StartUpdateSession(bool startUpdate) {
        updateSession = startUpdate;
    }

    bool UpdateRequest::StopUpdateSession(void) {
        if(updateSession) {
            updateSession = false;
            return true;
        }
        else {
            return false;
        }
    }

    bool UpdateRequest::VerifyUpdate(sm::FunctionGroupListType groupList) {
        if(!updateSession) {
            return false;
        }
        else {
            FunctionGroupList = groupList;
            return true;
        }
    }

    void UpdateRequest::SetUpdateSession(bool setUpdate) {
        updateSession = setUpdate;
    }

    bool UpdateRequest::GetUpdateSession(void) const {
        return updateSession;
    }

    void UpdateRequest::SetResetRequest(bool setRequest) {
        resetRequest = setRequest;
    }

    bool UpdateRequest::GetResetRequest(void) const {
        return resetRequest;
    }

    void UpdateRequest::SetResetProceed(bool setProceed) {
        resetProceed = setProceed;
    }

    bool UpdateRequest::GetResetProceed(void) const {
        return resetProceed;
    }

    sm::FunctionGroupListType UpdateRequest::GetFunctionGroupList(void) const {
        return FunctionGroupList;
    }

}
