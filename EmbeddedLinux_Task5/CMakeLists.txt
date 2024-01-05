cmake_minimum_required(VERSION 3.22)

project(Calculator VERSION 3.22)

set(Include
    include/
    )

set(src "main.c")

message(STATUS "SRC has ${SRC}")
message(STATUS "path is ${CMAKE_SOURCE_DIR}")

if(EXISTS ${CMAKE_SOURCE_DIR}/main.c)
    message("file exists at ${CMAKE_SOURCE_DIR}")
else()
    message("Sorry, but the file main.c doesn't exist")
endif()

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(Calculator ${src})
target_include_directories(Calculator PUBLIC ${Include})
target_link_libraries(Calculator PUBLIC Math)
