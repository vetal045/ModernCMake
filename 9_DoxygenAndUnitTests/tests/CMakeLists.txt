set(TEST_MAIN "unit_tests")
set(TEST_SRC "main.cpp")
set(TEST_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(${TEST_MAIN} ${TEST_SRC})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
target_link_libraries(${TEST_MAIN} PUBLIC ${LIB_NAME} Catch2)
