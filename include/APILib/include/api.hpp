/**
 * \file api.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"
#include "../../HTTPLib/include/httplib.h"
#include <vector>

namespace Wyeth
{
    /**
     * A broker's API.
     */
    class API
    {
        public:

        /**
         * Destructor for the "API" class.
         */
        virtual ~API();

        /**
         * Sets the authorization token for the API's HTTPS client association.
         */
        void setAuthToken(const std::string& authToken) noexcept;

        /**
         * Gets the API's HTTPS client association.
         */
        httplib::Client* const getHttpsClient() const noexcept;

        protected:

        /**
         * Constructor for the "API" class.
         */
        explicit API(const std::string& uri,
                     const Endpoint_Map& endpoints) noexcept;

        /**
         * Queries one of the API's endpoints.
         */
        httplib::Result queryEndpoint(const Broker_Endpoint& key) noexcept;

        private:

        /**
         * The API's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The API's endpoints.
         */
        const Endpoint_Map endpoints;

        /**
         * The API's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}
