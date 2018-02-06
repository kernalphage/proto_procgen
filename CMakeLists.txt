cmake_minimum_required(VERSION 3.6)
project(capn_producer)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-lcapnp -lkj")

set(SOURCE_FILES main.cpp image.capnp.h)
add_executable(capn_producer ${SOURCE_FILES})