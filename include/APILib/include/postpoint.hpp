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
 * \file postpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"

namespace httplib
{
    class Client;
}

namespace Wyeth
{
    /**
     * TODO:
     */
    class Postpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Postpoint" class.
         */
        Postpoint(const std::string& uri,
                  httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Postpoint" class.
         */
        virtual ~Postpoint() override final = default;

        /**
         * Queries the postpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The postpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The postpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}