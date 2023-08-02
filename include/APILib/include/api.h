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
        void setAuthToken(const std::string& authToken);

        /**
         * Queries one of the API's endpoints.
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
         * The API's endpoints.
         */
        const std::vector<const Endpoint> endpoints;

        /**
         * The API's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}
