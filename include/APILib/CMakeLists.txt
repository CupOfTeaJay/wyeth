add_library(
    APILib SHARED
    ./include/api.h
    ./include/endpoint.h
    ./src/api.cpp
    ./src/endpoint.cpp
    )

target_link_libraries(APILib PUBLIC HTTPLib)

