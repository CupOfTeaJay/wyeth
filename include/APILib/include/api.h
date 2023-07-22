/**
 * \file api.h
 */

#pragma once

#include<../../HTTPLib/include/httplib.h>
#include <string>
#include <vector>

class API
{
    protected:

    /**
     * Constructor for the "API" class.
     */
    explicit API(const std::string uri,
                 const std::vector<const std::string> endpoints);

    /**
     * Destructor for the "API" class.
     */
    virtual ~API();

    /**
     * Gets the requested API resource.
     */
    auto queryEndpoint(const std::string& endpoint);

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