add_library(
    APILib SHARED
    ./include/api.hpp
    ./include/delpoint.hpp
    ./include/endpoint_map.hpp
    ./include/endpoint.hpp
    ./include/getpoint.hpp
    ./include/patchpoint.hpp
    ./include/postpoint.hpp
    ./include/putpoint.hpp
    ./src/api.cpp
    ./src/delpoint.cpp
    ./src/getpoint.cpp
    ./src/patchpoint.cpp
    ./src/postpoint.cpp
    ./src/putpoint.cpp
    ./OANDA/include/oanda_rest_api.hpp
    ./OANDA/src/oanda_rest_api.cpp
    )

target_link_libraries(APILib PUBLIC HTTPLib)
