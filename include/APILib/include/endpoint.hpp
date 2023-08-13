/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "common.hpp"
#include <string>

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
        explicit Endpoint(const std::string& uri, const HTTP_Method& method) noexcept;

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
}
