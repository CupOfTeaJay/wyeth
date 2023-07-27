/**
 * \file api.h
 */

#pragma once
#include "endpoint.h"
#include "../../HTTPLib/include/httplib.h"
#include <vector>

namespace Wyeth
{
    /**
     * The broker's API.
     */
    class API
    {
        public:

        /**
         * Destructor for the "API" class.
         */
        virtual ~API();

        /**
         * Sets the API's authorization token.
         */
        void setAuthToken(const std::string& authToken);

        /**
         * TODO
         */
        httplib::Result queryEndpoint(const Endpoint& endpoint);

        protected:

        /**
         * Constructor for the "API" class.
         */
        explicit API(const std::string& uri,
                     const std::vector<const Endpoint>& endpoints);

        private:

        /**
         * The API's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * A vector containing the API's endpoints.
         */
        const std::vector<const Endpoint> endpoints;

        /**
         * The API's HTTPS client association.
         */
        httplib::Client* _httpsClient;
    };
}