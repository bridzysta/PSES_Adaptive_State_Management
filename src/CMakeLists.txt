set(LIBRARY_NAME StateManagementLib)

set(Headers
    debug.hpp
)

set(Sources
    debug.cpp
)

add_library(${LIBRARY_NAME} SHARED ${Sources} ${Headers})
target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
