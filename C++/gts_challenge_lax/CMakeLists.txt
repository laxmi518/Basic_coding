cmake_minimum_required(VERSION 3.6)
project(gts_challenge_lax)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp utils.h packet.h)
add_executable(gts_challenge_lax ${SOURCE_FILES})