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
    class API
    {
        protected:

        /**
         * Constructor for the "API" class.
         */
        API(const std::string& authToken,
            const std::string& uri,
            const EndpointMap& endpoints) noexcept;

        /**
         * Destructor for the "API" class.
         */
        ~API();

        /**
         * Queries one of the API's endpoints.
         */
        httplib::Result queryEndpoint(const std::string& key) const noexcept;

        private:

        /**
         * The API's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The API's endpoints.
         */
        const EndpointMap endpoints;

        /**
         * The API's HTTPS client.
         */ 
        httplib::Client* const _httpsClient;
    };
}