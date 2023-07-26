/**
 * \file endpoint.h
 */

#pragma once
#include "common_defs.h"
#include <string>

namespace Wyeth
{
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
                const HTTP_Method& method);

        /**
         * The endpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The endpoint's request method.
         */
        const HTTP_Method method;
    };
}
