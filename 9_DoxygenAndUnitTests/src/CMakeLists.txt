set(LIB_SRC
    MyLib.cpp
)
set(LIB_HDR MyLib.h)
set(LIB_INCLUDES
    "./"
    "${CMAKE_BINARY_DIR}/config_files/include"
)

add_library(${LIB_NAME} STATIC
    ${LIB_SRC}
    ${LIB_HDR}
    )
target_include_directories(${LIB_NAME} PUBLIC
    ${LIB_INCLUDES}
    )
target_link_libraries(${LIB_NAME} PUBLIC
    nlohmann_json
    )
