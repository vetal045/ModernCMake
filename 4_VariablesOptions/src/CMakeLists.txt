add_library(${LIB_NAME} STATIC MyLib.cpp)
target_include_directories(${LIB_NAME} PUBLIC "./")
