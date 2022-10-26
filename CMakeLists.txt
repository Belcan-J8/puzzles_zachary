cmake_minimum_required(VERSION 3.10)
project(puzzles)
include_directories(${PROJECT_SOURCE_DIR}/source)
add_executable(puzzle
	source/main.cpp
	source/Car.cpp
	source/FuelGauge.cpp 
	source/Logger.cpp)