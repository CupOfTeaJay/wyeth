add_library(
    APILib SHARED
    ./include/api.hpp
    ./include/common.hpp
    ./include/endpoint.hpp
    ./include/oanda_rest_practice.hpp
    ./src/api.cpp
    ./src/oanda_rest_practice.cpp
    )

target_link_libraries(APILib PUBLIC HTTPLib)
