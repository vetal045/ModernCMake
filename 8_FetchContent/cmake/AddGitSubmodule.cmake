function(add_git_submodule dir)

    find_package(Git REQUIRED)

    if (NOT EXISTS ${PROJECT_SOURCE_DIR}/${dir}/CMakeLists.txt)
        execute_process(COMMAND ${GIT_EXECUTABLE}
                        submodule update --init --recursive -- ${dir}
                        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

    endif()

    if (EXISTS ${PROJECT_SOURCE_DIR}/${dir}/CMakeLists.txt)
        message("Adding: ${PROJECT_SOURCE_DIR}/${dir}/CMakeLists.txt")
        add_subdirectory(${dir})
    else()
        message("Couldn't find: ${dir}/CMakeLists.txt")
    endif()
endfunction(add_git_submodule)
