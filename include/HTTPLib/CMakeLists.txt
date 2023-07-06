include(FindOpenSSL)

add_library(
    HTTPLib SHARED
    ./include/httplib.h
    ./src/httplib.cpp
    )

target_link_libraries(HTTPLib PUBLIC OpenSSL::Crypto)
target_link_libraries(HTTPLib PUBLIC OpenSSL::SSL)

