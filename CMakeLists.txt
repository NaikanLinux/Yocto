cmake_minimum_required(VERSION 4.2.2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(myProject VERSION 0.1.0)
add_executable(${PROJECT_NAME} yocto_test.c yocto_lib.c)

add_executable(myProgram)
target_sources(myProgram
  PRIVATE yocto_test.c
)

add_library(myLibrary)
target_sources(myLibrary
  PRIVATE yocto_lib.c
  INTERFACE
    FILE_SET myHeaders
    TYPE HEADERS
    BASE_DIRS
      include
    FILES
      include/yocto_lib.h
)

target_link_libraries(myProgram
  PRIVATE
    myLibrary
)
