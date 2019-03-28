cmake_minimum_required(VERSION 3.13)
project(Ex_Mail)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex_Mail main.cpp Contato.cpp Contato.h Mail.cpp Mail.h)