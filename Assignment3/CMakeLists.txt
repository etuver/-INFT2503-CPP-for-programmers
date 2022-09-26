cmake_minimum_required(VERSION 3.23)
project(Assignment3)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")


add_executable(task1_and2 Task1_and2.cpp)
add_executable(commodity Commodity.cpp)
add_executable(task3 task3.cpp)
add_executable(task4 task4.cpp)