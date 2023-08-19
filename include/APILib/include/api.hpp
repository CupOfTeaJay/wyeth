/**
 * \file api.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"
#include "endpoint_map.hpp"

namespace httplib
{
    class Client;
}

namespace Wyeth
{
    class Api
    {
        protected:

        Api() noexcept = default;

        /**
         * Destructor for the "API" class.
         */
        virtual ~Api() = default;

        /**
         * Queries one of the API's endpoints.
         */
        httplib::Result queryEndpoint(const std::string& key) const noexcept;
    };
}