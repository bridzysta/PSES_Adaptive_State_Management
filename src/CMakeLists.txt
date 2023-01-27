
set(Sources
    StateManagement.cpp
    StateManagement.hpp
)

add_library(StateManagementLib ${Sources})

target_include_directories(StateManagementLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
