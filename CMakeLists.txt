cmake_minimum_required(VERSION 3.24)
project(openmal VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE header_files
        "OpenMAL/*.h"
        )

add_library(openmal SHARED ${header_files})
set_target_properties(openmal PROPERTIES LINKER_LANGUAGE CXX)

# Examples
option(MAL_BUILD_EXAMPLES "Build all examples inside examples/ folder." ON)
if(MAL_BUILD_EXAMPLES)
    file(GLOB_RECURSE EXAMPLES_FILES ${CMAKE_SOURCE_DIR}/examples/*.cpp)
    foreach(example_file ${EXAMPLES_FILES})
        message(STATUS "Adding example ${example_file}")
        get_filename_component(target_name ${example_file} NAME_WE)
        include_directories(${target_name} ${CMAKE_SOURCE_DIR}/OpenMAL/)
        add_executable(${target_name} ${example_file})
    endforeach()
endif()