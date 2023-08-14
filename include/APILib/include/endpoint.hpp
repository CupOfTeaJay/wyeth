/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "common.hpp"
#include <string>
#include <unordered_map>

namespace Wyeth
{
    /**
     * TODO:
     */
    struct Endpoint
    {
        /**
         * Constructor for the "Endpoint" struct.
         */
        Endpoint(const std::string& uri, const HTTP_Method& method) noexcept;

        /**
         * Destructor for the "Endpoint" struct.
         */
        ~Endpoint();

        /**
         * TODO:
         */
        std::string uri;

        /**
         * TODO:
         */
        HTTP_Method method;
    };

    /**
     * TODO:
     */
    typedef std::unordered_map<const Broker_Endpoint, const Endpoint> Endpoint_Map;
}
