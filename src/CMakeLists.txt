set(SM_LIBRARY StateManagementLib)

set(Sources
    StateManagement.cpp
)

# Make an automatic library - will be static or dynamic based on user setting
add_library(${SM_LIBRARY} ${Sources})

# We need this directory, and users of our library will need it too
target_include_directories(${SM_LIBRARY} PUBLIC ${PROJECT_SOURCE_DIR}/include)
