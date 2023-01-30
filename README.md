# Autosar Adaptive StateManagement

Autosar Adaptive Platform StateManagement basic implementation.

Prepared for the subject at the university "Programming Systems of Automotive Electronics".

## Documentation

You may find documentation [here](doc/).

## Prerequisites

- CMake (3.10+)
- gcc (9.3.0+)
- gcovr (5.2+)
- cppcheck (2.9+)
- googletest & gmock (1.13.0+ | in [submodule](deps/googletest/))

## Usage

1. Cloning
    ```sh
    git clone https://github.com/bridzysta/PSES_Adaptive_State_Management.git
    git submodule update --init --recursive
    ```

1. CMake
    ```sh
    mkdir -p build
    cd build
    cmake ..
    ```

1. Unit Tests
    ```sh
    cd build
    make StateManagementUT
    ./tests/StateManagementUT.exe
    ```

1. Coverage
    ```sh
    cd build
    make StateManagementCov
    StateManagementCov/index.html
    ```

1. Cppcheck
    ```sh
    cd .
    cppcheck --language=c++ --std=c++17 --enable=all src/
    ```

## [Authors](AUTHORS.md)

- Cisło Krzysztof
- Działowy Jakub (resigned)
- Kurzak Przemysław

## Note

This is not a full implementation of the State Management module.

- uses static configuration
- minimal error handling
- mocks almost everything
