cmake_minimum_required(VERSION 3.13)
project(Ex1_Diagrama)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex1_Diagrama main.cpp NotaFiscal.cpp NotaFiscal.h Cliente.cpp Cliente.h Vendedor.cpp Vendedor.h ItemVendido.cpp ItemVendido.h Produto.cpp Produto.h)