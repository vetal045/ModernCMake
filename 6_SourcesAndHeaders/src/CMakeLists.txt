set(LIB_SRC
    MyLib.cpp)

set(LIB_HDR MyLib.h)

add_library(${LIB_NAME} STATIC ${LIB_SRC} ${LIB_HDR})
target_include_directories(${LIB_NAME} PUBLIC "./"
                                            "${CMAKE_BINARY_DIR}/config_files/include")