cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(CMakeTest VERSION 1.0)

add_executable(${PROJECT_NAME} "main.cpp")

configure_file(Tutorial.h.in Tutorial.h)

target_include_directories(CMakeTest PUBLIC "${PROJECT_BINARY_DIR}")
