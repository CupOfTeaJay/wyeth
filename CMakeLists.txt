cmake_minimum_required(VERSION 3.10)

if(${CMAKE_VERSION} VERSION_LESS 3.26)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

set (CMAKE_CXX_STANDARD 20)

include(FindOpenSSL)

project(Wyeth
    VERSION 1.0
    DESCRIPTION "Very nice project"
    LANGUAGES CXX)

add_executable(Wyeth src/main.cpp)

target_link_libraries(Wyeth PUBLIC OpenSSL::Crypto)
target_link_libraries(Wyeth PUBLIC OpenSSL::SSL)

