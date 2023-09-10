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
 * \file oanda_rest_api.hpp
 * 
 * TODO:
 */

#pragma once
#include "../../include/api.hpp"

namespace Wyeth
{
    class OandaRestApi : public Api
    {
        public:

        /**
         * Constructor for the "OandaApi" class.
         */
        OandaRestApi(const std::string& authToken,
                     const std::string& uri) noexcept;

        /**
         * Destructor for the "OandaApi" class.
         */
        virtual ~OandaRestApi();

        private:

        /**
         * Initializes the Oanda REST API's endpoints.
         */
        virtual const EndpointMap initializeEndpoints() noexcept override final;
    };
}