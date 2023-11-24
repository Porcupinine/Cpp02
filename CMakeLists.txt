cmake_minimum_required(VERSION 3.26)
project(cpp02)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00 ex00/main.cpp
		ex00/Fixed.cpp
		ex00/Fixed.h)

add_executable(ex01 ex01/main.cpp
		ex01/main.cpp
		ex01/Fixed.cpp)
