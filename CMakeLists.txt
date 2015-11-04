cmake_minimum_required(VERSION 2.8.7)
project(sample_c_cplusplus_project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sample_c_cplusplus_project ${SOURCE_FILES})