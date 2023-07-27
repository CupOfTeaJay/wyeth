add_library(
    APILib SHARED
    ./include/api.h
    ./include/api_factory.h
    ./include/common_defs.h
    ./include/endpoint.h
    ./include/oanda_rest_practice.h
    ./src/api.cpp
    ./src/api_factory.cpp
    ./src/endpoint.cpp
    ./src/oanda_rest_practice.cpp
    )

target_link_libraries(APILib PUBLIC HTTPLib)
