cmake_minimum_required(VERSION 3.24)
project(factory_method)

set(CMAKE_CXX_STANDARD 23)

add_executable(factory_method main.cpp products/product/Product.hpp products/concrete1/ConcreteProduct1.cpp products/concrete1/ConcreteProduct1.hpp products/concrete2/ConcreteProduct2.cpp products/concrete2/ConcreteProduct2.hpp creators/creator/Creator.cpp creators/creator/Creator.hpp)
