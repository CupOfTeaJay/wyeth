/**
 * \file api.cpp
 */

#include "../include/api.h"

/**
 * Constructor for the "API" class.
 */
API::API(const std::string uri,
         const std::vector<const Endpoint> endpoints)
         :
         uri(uri),
         endpoints(endpoints) {
}

/**
 * Destructor for the "API" class.
 */
API::~API() {
}

/**
 * Sends an HTTPS request to one of the API's endpoints.
 */
httplib::Result API::queryEndpoint(const Endpoint& endpoint) {
    if (endpoint.method == Request_Method::GET) {
        return this->client->Get(endpoint.uri);
    }
    else if (endpoint.method == Request_Method::PATCH) {
        return this->client->Patch(endpoint.uri);
    }
    else if (endpoint.method == Request_Method::POST) {
        return this->client->Post(endpoint.uri);
    }
    else {
        return this->client->Put(endpoint.uri);
    }
}
