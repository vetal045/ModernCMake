cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_library(MyLib STATIC MyLib.cpp)

add_executable(Executable main.cpp)

target_link_libraries(Executable PUBLIC MyLib)
