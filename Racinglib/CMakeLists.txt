cmake_minimum_required(VERSION 3.5)
project(RacingLib LANGUAGES CXX)


add_library(RacingLib SHARED
    src/FantasyVehicles.cpp
    src/LandVehicle.cpp
    src/MyLandCamel.cpp
    src/MyLandFastCamel.cpp
    src/MyLandCentaur.cpp
    src/MyLandAllTerrainBoots.cpp
    src/AirVehicle.cpp
    src/MyAirCarpet.cpp
    src/MyAirEagle.cpp
    src/MyAirbroom.cpp
    src/Menu.cpp
    src/Custom_sleep.cpp
    src/Custom_clear.cpp
)

target_include_directories(RacingLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/racinglib
)

