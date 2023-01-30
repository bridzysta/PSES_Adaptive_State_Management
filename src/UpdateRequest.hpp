#ifndef UPDATE_REQUEST_HPP
#define UPDATE_REQUEST_HPP

/**
 * @file UpdateRequest.hpp
 * @date 28.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief UpdateRequest class initialization
 * @details SWS Reqs: [SWS_SM_91017]
 *
 * @copyright AGH University of Science and Technology
 */

#include "StateManagementTypes.hpp"
#include "string"
#include "vector"

namespace ara::com {

    class UpdateRequest {
        public:
        /**
         * @brief UpdateRequest
         * @details
         */
        UpdateRequest();

        /**
         * @brief PrepareRollback
         * @details
         */
        void PrepareRollback(sm::FunctionGroupListType groupList);

        /**
         * @brief PrepareUpdate
         * @details
         */
        bool PrepareUpdate(sm::FunctionGroupListType groupList);

        /**
         * @brief ResetMachine
         * @details
         */
        bool ResetMachine(void);

        /**
         * @brief StartUpdateSession
         * @details
         */
        void StartUpdateSession(bool startUpdate);

        /**
         * @brief StopUpdateSession
         * @details
         */
        bool StopUpdateSession(void);

        /**
         * @brief VerifyUpdate
         * @details
         */
        bool VerifyUpdate(sm::FunctionGroupListType groupList);

        /**
         * @brief SetUpdateSession
         * @details
         */
        void SetUpdateSession(bool setUpdate);

        /**
         * @brief GetUpdateSession
         * @details
         */
        bool GetUpdateSession(void) const;

        /**
         * @brief SetResetRequest
         * @details
         */
        void SetResetRequest(bool setRequest);

        /**
         * @brief GetResetRequest
         * @details
         */
        bool GetResetRequest(void) const;

        /**
         * @brief SetResetProceed
         * @details
         */
        void SetResetProceed(bool setProceed);

        /**
         * @brief GetResetProceed
         * @details
         */
        bool GetResetProceed(void) const;

        /**
         * @brief GetFunctionGroupList
         * @details
         */
        sm::FunctionGroupListType GetFunctionGroupList(void) const;

        private:
        bool resetRequest;
        bool resetProceed;
        bool updateSession;
        sm::FunctionGroupListType FunctionGroupList;
    };

}

#endif
