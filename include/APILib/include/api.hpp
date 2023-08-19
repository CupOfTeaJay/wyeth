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

        /**
         * Constructor for the "API" class.
         */
        Api(const std::string& authToken,
            const std::string& uri,
            const EndpointMap& endpoints) noexcept;

        /**
         * Destructor for the "API" class.
         */
        virtual ~Api();

        /**
         * Gets the API's HTTPS client association.
         */
        httplib::Client* const getHttpsClient() const noexcept;

        /**
         * Queries one of the API's endpoints.
         */
        httplib::Result queryEndpoint(const std::string& key) const noexcept;

        private:

        /**
         * initializes the API's endpoints.
         */
        virtual const EndpointMap initializeEndpoints() = 0;

        /**
         * The Oanda REST API's uniform resource idenfitier (URI).
         */
        const std::string uri;

        /**
         * The Oanda REST API's HTTPS client association.
         */
        httplib::Client* const _httpsClient;

        /**
         * The API's endpoints.
         */
        const EndpointMap endpoints;
    };
}