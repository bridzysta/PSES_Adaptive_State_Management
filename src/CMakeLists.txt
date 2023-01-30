
set(Sources
    StateManagement.cpp
    StateManagement.hpp
    EcuResetRequest.hpp
    RecoveryAction.hpp
    CommunicationGroupServer.cpp
    CommunicationGroupServer.hpp
    TriggerIn.cpp
    TriggerIn.hpp
    TriggerOut.cpp
    TriggerOut.hpp
    TriggerInOut.hpp
    UpdateRequest.cpp
    UpdateRequest.hpp
    ExecutionClient.cpp
    ExecutionClient.hpp
    StateClient.cpp
    StateClient.hpp
)

add_library(StateManagementLib ${Sources})

target_include_directories(StateManagementLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
