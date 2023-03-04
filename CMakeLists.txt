cmake_minimum_required(VERSION 3.24)
project(factory_method)

set(CMAKE_CXX_STANDARD 23)

add_executable(factory_method main.cpp products/product/Product.hpp)
