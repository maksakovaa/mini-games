cmake_minimum_required(VERSION 3.0.0)
project(BlackJack VERSION 1.0.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)
add_executable(BlackJack 014-BlackJack-main.cpp 014-BlackJack-Card.cpp 014-BlackJack-Hand.cpp 014-BlackJack-House.cpp 014-BlackJack-Player.cpp 014-BlackJack-GenericPlayer.cpp 014-BlackJack-Deck.cpp 014-BlackJack-Game.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
