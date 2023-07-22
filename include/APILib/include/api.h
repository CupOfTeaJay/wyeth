/**
 * \file api.h
 */

#pragma once

#include <endpoint.h>
#include <httplib.h>
#include <string>
#include <vector>

class API
{
    protected:

    /**
     * Constructor for the "API" class.
     */
    explicit API(const std::string uri,
                 const std::vector<const Endpoint> endpoints);

    /**
     * Destructor for the "API" class.
     */
    virtual ~API();

    /**
     * Gets the requested API resource.
     */
    auto queryEndpoint(const Endpoint& endpoint);

    private:

    /**
     * The API's uniform resource identifier (URI).
     */
    const std::string uri;

    /**
     * The API's HTTP(S) client.
     */
    httplib::Client client;

    /**
     * A vector containing the API's endpoints.
     */
    const std::vector<const Endpoint> endpoints;
};