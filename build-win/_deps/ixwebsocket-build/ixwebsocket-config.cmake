

include(CMakeFindDependencyMacro)

if (OFF)
  find_dependency(ZLIB)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/ixwebsocket-targets.cmake")
