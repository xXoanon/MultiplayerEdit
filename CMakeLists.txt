cmake_minimum_required(VERSION 3.21)

project(MultiplayerEdit VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_definitions(WIN32_LEAN_AND_MEAN)
add_compile_definitions(_WINSOCKAPI_)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE src)

# IXWebSocket with TLS support
# Note: This requires building on Windows or using GitHub Actions
# Cross-compilation from Linux has header conflicts
include(FetchContent)
FetchContent_Declare(
    ixwebsocket
    GIT_REPOSITORY https://github.com/machinezone/IXWebSocket.git
    GIT_TAG        v11.4.4
)
set(USE_TLS ON CACHE BOOL "" FORCE)
set(USE_WS OFF CACHE BOOL "" FORCE)
set(USE_ZLIB OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(ixwebsocket)
target_link_libraries(${PROJECT_NAME} ixwebsocket)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

setup_geode_mod(${PROJECT_NAME})
