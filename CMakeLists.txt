cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(a1_greeting)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(greeting src/main.cpp src/greeting.cpp)