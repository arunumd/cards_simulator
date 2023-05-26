cmake_minimum_required(VERSION 3.25)
project(CardsDeckSim)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")

include_directories(include)

add_executable(CardsDeckSim app/main.cpp app/play.cpp include/card.h include/play.h app/card.cpp)
