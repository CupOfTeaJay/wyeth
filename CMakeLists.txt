cmake_minimum_required(VERSION 3.10)

project(Melchizedek)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

ADD_LIBRARY(OpenSSL
    /usr/local/lib/libcrypto.a
    /usr/local/lib/libssl.a)

set_target_properties(OpenSSL PROPERTIES LINKER_LANGUAGE CXX)

add_executable(Melchizedek source/main.cpp)

target_link_libraries(Melchizedek OpenSSL)

