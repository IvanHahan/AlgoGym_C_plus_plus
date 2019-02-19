cmake_minimum_required(VERSION 3.10)
project(AlgoGym)

set(CMAKE_CXX_STANDARD 17)

add_executable(AlgoGym main.cpp timetable/timetable.cpp timetable/timetable.h salad/salad.cpp salad/salad.h)