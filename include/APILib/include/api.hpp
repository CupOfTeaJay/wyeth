/**
 * Copyright (c) 2023 Thrisys LLC
 * 
 * Use of this software is govered by the Business Source License included in 
 * the LICENSE.md file and at www.mariadb.com/bsl11.
 * 
 * Change License: GNU Affero General Public License Version 3 (GNU AGPLv3)
 * Change Date: TODO: No release(s) yet. TBD.
 * 
 * On the date above, in accordance with the Business Source License, use of 
 * this software will be governed by the open source license specified above.
 * 
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
        const httplib::Client& getHttpsClient() const noexcept;

        /**
         * Gets the API's endpoints.
         */
        const EndpointMap& getEndpoints() const noexcept;

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
        httplib::Client httpsClient;

        /**
         * The API's endpoints.
         */
        const EndpointMap endpoints;
    };
}