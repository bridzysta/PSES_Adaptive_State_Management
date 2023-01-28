#ifndef RECOVERY_ACTION_HPP
#define RECOVERY_ACTION_HPP

namespace ara::phm {

    class RecoveryAction {
        public:
        virtual void RecoveryHandler(bool *isError) = 0;
    };

}

#endif
