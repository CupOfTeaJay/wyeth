/**
 *  \file main.cpp
 */

#include "../include/APILib/include/api_factory.h"
#include <iostream>

int main() {
    // Input OAuth token.
    std::string testAuthToken;
    std::cin >> testAuthToken;

    // Instantiate an API factory.
    Wyeth::API_Factory apiFactory{};

    // Instantiate an API via the API factory.
    Wyeth::API* oandaApi = apiFactory.instantiateApi(Wyeth::Broker_API::OANDA_REST_PRACTICE);

    // Give the API our OAuth token.
    oandaApi->setAuthToken(testAuthToken);

    // Request a list of all accounts the OAuth token has access to.
    // For now simulate "getting" the endpoint via the API's interface.
    Wyeth::Endpoint endpoint{"/v3/accounts", Wyeth::HTTP_Method::GET};
    httplib::Result response;
    response = oandaApi->queryEndpoint(endpoint);

    // Output the response.
    std::cout << response->status << std::endl;
    std::cout << response->body << std::endl;

    // Release memory
    delete oandaApi;

    return 0;
};

