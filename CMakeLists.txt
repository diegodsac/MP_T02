cmake_minimum_required(VERSION 3.5)

project(MP_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MP_02 romanos.cpp)
add_executable(MP_02_Test testa_romanos.cpp)
