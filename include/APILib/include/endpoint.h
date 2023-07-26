/**
 * \file endpoint.h
 */

#pragma once
#include <string>

namespace Wyeth
{
    /**
     * An enumeration of HTTP(S) request methods.
     */
    enum class Request_Method {
        GET   = 0,
        PATCH = 1,
        POST  = 2,
        PUT   = 3
    };

    /**
     * An endpoint containing a resource that can be queried via a request
     * method.
     */
    struct Endpoint
    {
        /**
         * Constructor for the "Endpoint" struct.
         */
        Endpoint(const std::string& uri,
                const Request_Method& method);

        /**
         * The endpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The endpoint's request method.
         */
        const Request_Method method;
    };
}
