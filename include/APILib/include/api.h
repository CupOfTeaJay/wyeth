/**
 * \file api.h
 */

#pragma once
#include "endpoint.h"
#include "../../HTTPLib/include/httplib.h"
#include <vector>

/**
 * The broker's API.
 */
class API {
    protected:

    /**
     * Constructor for the "API" class.
     */
    explicit API(const std::string uri,
                 const std::vector<const Endpoint> endpoints);

    /**
     * Destructor for the "API" class.
     */
    ~API();

    /**
     * Gets the requested API resource.
     */
    httplib::Result queryEndpoint(const Endpoint& endpoint);

    private:

    /**
     * The API's uniform resource identifier (URI).
     */
    const std::string uri;

    /**
     * A vector containing the API's endpoints.
     */
    const std::vector<const Endpoint> endpoints;
};