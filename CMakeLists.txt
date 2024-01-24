cmake_minimum_required(VERSION 3.26)
project(cpp02)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00 ex00/main.cpp
		ex00/Fixed.cpp)

add_executable(ex01 ex01/main.cpp
		ex01/Fixed.cpp)

add_executable(ex02 ex02/main.cpp
		ex02/Fixed.cpp)

add_executable(ex03
		ex03/Fixed.cpp
		ex03/main.cpp
		ex03/Point.cpp
		ex03/Point.h
		ex03/bsp.cpp)