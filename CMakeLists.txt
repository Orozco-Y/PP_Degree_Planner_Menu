cmake_minimum_required(VERSION 3.22)
project(Degree_Planner_Menu)

set(CMAKE_CXX_STANDARD 14)

add_executable(Degree_Planner_Menu main.cpp Major.h Major.cpp Menus.h Menus.cpp Student.h Student.cpp Course.cpp Course.h)
