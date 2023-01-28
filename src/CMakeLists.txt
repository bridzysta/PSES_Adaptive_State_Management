
set(Sources
    StateManagement.cpp
    StateManagement.hpp
    EcuResetRequest.hpp
    RecoveryAction.hpp
    CommunicationGroupServer.cpp
    CommunicationGroupServer.h
    TriggerIn.cpp
    TriggerIn.h
    TriggerOut.cpp
    TriggerOut.h
    TriggerInOut.cpp
    TriggerInOut.h
    UpdateRequest.cpp
    UpdateRequest.h
)

add_library(StateManagementLib ${Sources})

target_include_directories(StateManagementLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
