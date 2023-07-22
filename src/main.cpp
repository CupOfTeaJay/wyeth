/**
 *  \file main.cpp
 */

#include "../include/APILib/include/api.h"
#include <iostream>

int main() {

    std::string uri = "https://api-fxpractice.oanda.com";

    std::vector<const Endpoint> endpoints{ {Request_Method::GET, "/v3/accounts"} };

    API oandaApi{uri, endpoints};

    httplib::Result response = oandaApi.queryEndpoint(endpoints[0]);

    std::cout << response << std::endl;

    return 0;
};

