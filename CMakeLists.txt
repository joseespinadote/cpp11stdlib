cmake_minimum_required(VERSION 2.8.11)
project(cpp11std)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(types types.cpp)
add_executable(argv argv.cpp)
add_executable(pointers pointers.cpp)
add_executable(containers containers.cpp)
add_executable(algorithms algorithms.cpp)

