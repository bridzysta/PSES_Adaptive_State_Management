#ifndef AUTOSAR_STATE_MANAGEMENT_STATE_CLIENT_HPP
#define AUTOSAR_STATE_MANAGEMENT_STATE_CLIENT_HPP

namespace ara::exec{

        class StateClient{
        public:
            StateClient();
        private:
            void GetExecutionError();
        protected:
            void SetState();
            void GetInitialMachineStateTransitionResult();
            void undefinedStateCallback();
        };

}

#endif
