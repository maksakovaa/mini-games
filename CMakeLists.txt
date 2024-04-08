cmake_minimum_required(VERSION 3.0.0)
project(first VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)
add_executable(Lobby 013-GameLobby-main.cpp 013-GameLobby-player.cpp 013-GameLobby-Lobby.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
