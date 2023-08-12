add_library(
    APILib SHARED
    ./include/api.h
    ./include/common.h
    ./include/endpoint_map.h
    ./include/oanda_rest_practice.h
    ./src/api.cpp
    ./src/oanda_rest_practice.cpp
    )

target_link_libraries(APILib PUBLIC HTTPLib)
