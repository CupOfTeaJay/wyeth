/**
 * \file api.cpp
 */

#include <../include/api.h>

/**
 * Constructor for the "API" class.
 */
API::API(const std::string uri,
         const std::vector<const std::string> endpoints)
         :
         uri(uri),
         client(this->uri),
         endpoints(endpoints)
{
}

/**
 * Destructor for the "API" class.
 */
API::~API()
{
}

/**
 * Querys an API endpoint.
 */
auto API::queryEndpoint(const std::string& endpoint)
{
    auto response{this->client.Get(endpoint)}; // TODO: Should probably encapsulate "endpoint".
    return response;                           //       The client doesn't have to just "Get".
}
