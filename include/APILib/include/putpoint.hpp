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
 * \file putpoint.hpp
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
    class Putpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Putpoint" class.
         */
        Putpoint(const std::string& uri,
                 httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Putpoint" class.
         */
        virtual ~Putpoint() override final = default;

        /**
         * Queries the putpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The putpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The putpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}