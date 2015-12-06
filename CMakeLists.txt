cmake_minimum_required(VERSION 3.3)
project(icpc3045)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES icpc3045.cpp)
add_executable(icpc3045 ${SOURCE_FILES} icpc3045.cpp)