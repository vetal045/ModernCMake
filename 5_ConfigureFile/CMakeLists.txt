cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD             17)
set(CMAKE_CXX_STANDARD_REQUIRED    ON)
set(CMAKE_CXX_EXTENSIONS           OFF)

set(LIB_NAME MyLib)
set(EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Flag to compile exe file" ON)

add_subdirectory(config)
add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("Executable is not compiling")
endif()
