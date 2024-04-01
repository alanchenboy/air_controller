cmake_minimum_required(VERSION 3.19 FATAL_ERROR)

project(air_controller)

# find_package(libgpiod REQUIRED)

file (GLOB SRC_FILES 
        *.cc
)

add_executable(air_controller ${SRC_FILES})

target_link_libraries(air_controller -lgpiodcxx -lwiringPi)
