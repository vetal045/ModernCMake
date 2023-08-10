set(EXECUTABLE_SRC
    main.cpp)

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_SRC})

target_link_libraries(${EXECUTABLE_NAME} PUBLIC
                        ${LIB_NAME}
                        nlohmann_json)
