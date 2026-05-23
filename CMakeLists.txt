cmake_minimum_required(VERSION 3.21)

project(MultiplayerEdit VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_definitions(WIN32_LEAN_AND_MEAN)
add_compile_definitions(_WINSOCKAPI_)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE src)

# IXWebSocket with TLS support (statically linked via mbedtls)
set(IXWEBSOCKET_INSTALL OFF CACHE BOOL "" FORCE)

# 1. Fetch MbedTLS
include(FetchContent)
FetchContent_Declare(
    mbedtls
    GIT_REPOSITORY https://github.com/Mbed-TLS/mbedtls.git
    GIT_TAG        mbedtls-2.28.10
)
set(ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(ENABLE_PROGRAMS OFF CACHE BOOL "" FORCE)
set(MBEDTLS_FATAL_WARNINGS OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(mbedtls)

# Define variables for IXWebSocket
set(MBEDTLS_FOUND ON CACHE BOOL "" FORCE)
set(MBEDTLS_LIBRARIES mbedtls mbedx509 mbedcrypto CACHE INTERNAL "" FORCE)

# Get interface include directories from mbedtls target
get_target_property(MBEDTLS_HEADERS mbedtls INTERFACE_INCLUDE_DIRECTORIES)
set(MBEDTLS_INCLUDE_DIRS ${MBEDTLS_HEADERS} CACHE INTERNAL "" FORCE)
set(MBEDTLS_VERSION_GREATER_THAN_3 OFF CACHE BOOL "" FORCE)

# 2. Fetch and Patch IXWebSocket
FetchContent_Declare(
    ixwebsocket
    GIT_REPOSITORY https://github.com/machinezone/IXWebSocket.git
    GIT_TAG        v11.4.6
)
set(USE_TLS ON CACHE BOOL "" FORCE)
set(USE_MBED_TLS ON CACHE BOOL "" FORCE)
set(USE_WS OFF CACHE BOOL "" FORCE)
set(USE_ZLIB OFF CACHE BOOL "" FORCE)

FetchContent_GetProperties(ixwebsocket)
if(NOT ixwebsocket_POPULATED)
    FetchContent_Populate(ixwebsocket)
    
    # Patch IXSocketMbedTLS.cpp to fix compile errors with MbedTLS 2.x
    set(PATCH_FILE "${ixwebsocket_SOURCE_DIR}/ixwebsocket/IXSocketMbedTLS.cpp")
    if(EXISTS "${PATCH_FILE}")
        message(STATUS "Patching ${PATCH_FILE} for Mbed TLS 2.x compatibility...")
        file(READ "${PATCH_FILE}" FILE_CONTENTS)
        
        # 1. Include version.h to define version macros
        string(REPLACE "#include \"IXSocketMbedTLS.h\"" "#include \"IXSocketMbedTLS.h\"\n#include <mbedtls/version.h>" FILE_CONTENTS "${FILE_CONTENTS}")
        
        # 2. Wrap psa_crypto_init in preprocessor conditional
        string(REPLACE "psa_crypto_init();" "#if defined(MBEDTLS_VERSION_MAJOR) && MBEDTLS_VERSION_MAJOR >= 3\n            psa_crypto_init();\n#endif" FILE_CONTENTS "${FILE_CONTENTS}")
        
        # 3. Wrap mbedtls_psa_crypto_free in preprocessor conditional
        string(REPLACE "mbedtls_psa_crypto_free();" "#if defined(MBEDTLS_VERSION_MAJOR) && MBEDTLS_VERSION_MAJOR >= 3\n            mbedtls_psa_crypto_free();\n#endif" FILE_CONTENTS "${FILE_CONTENTS}")
        
        file(WRITE "${PATCH_FILE}" "${FILE_CONTENTS}")
    endif()

    # Patch CMakeLists.txt to fix case-sensitivity issue with Crypt32 on Linux cross-compilers
    set(PATCH_CMAKE "${ixwebsocket_SOURCE_DIR}/CMakeLists.txt")
    if(EXISTS "${PATCH_CMAKE}")
        message(STATUS "Patching ${PATCH_CMAKE} for Crypt32 case-sensitivity...")
        file(READ "${PATCH_CMAKE}" CMAKE_CONTENTS)
        string(REPLACE "PRIVATE Crypt32" "PRIVATE crypt32" CMAKE_CONTENTS "${CMAKE_CONTENTS}")
        file(WRITE "${PATCH_CMAKE}" "${CMAKE_CONTENTS}")
    endif()
    
    add_subdirectory(${ixwebsocket_SOURCE_DIR} ${ixwebsocket_BINARY_DIR})
endif()
target_link_libraries(${PROJECT_NAME} ixwebsocket)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

if (WIN32)
    target_link_options(${PROJECT_NAME} PRIVATE "-Wl,/MAP")
endif()

setup_geode_mod(${PROJECT_NAME})
