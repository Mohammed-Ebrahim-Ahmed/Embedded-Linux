cmake_minimum_required(VERSION 3.22)

set(src
    addition.c 
    division.c 
    modulus.c 
    multiplication.c 
    subtraction.c )

set(include 
    ${CMAKE_SOURCE_DIR}/include/)

message("hello from math libaray")

add_library(Math
            ${src}
            ${include}

            
)       