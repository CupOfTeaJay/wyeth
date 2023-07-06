cmake_minimum_required(VERSION 3.10)

if(${CMAKE_VERSION} VERSION_LESS 3.26)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

set (CMAKE_CXX_STANDARD 20)

project(Wyeth
    VERSION 1.0
    DESCRIPTION "A very cool project"
    LANGUAGES CXX)

add_executable(Wyeth src/main.cpp)

add_subdirectory(include/HTTPLib)

target_link_libraries(Wyeth PUBLIC HTTPLib)

