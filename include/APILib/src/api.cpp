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
httplib::Result API::queryEndpoint(const Endpoint& endpoint)
{
    if (endpoint.method == Request_Method::GET)        // GET resource.
    {                                                  //
        return this->client.Get(endpoint.uri);         //
    }
    else if (endpoint.method == Request_Method::PATCH) // PATCH resource.
    {                                                  //
        return this->client.Patch(endpoint.uri);       //
    }
    else if (endpoint.method == Request_Method::POST)  // POST resource.
    {                                                  //
        return this->client.Post(endpoint.uri);        //
    }
    else if (endpoint.method == Request_Method::PUT)   // PUT resource.
    {                                                  //
        return this->client.Put(endpoint.uri);         //
    }
}
