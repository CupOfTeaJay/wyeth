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
 * \file patchpoint.hpp
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
    class Patchpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Patchpoint" class.
         */
        Patchpoint(const std::string& uri,
                   httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Patchpoint" class.
         */
        virtual ~Patchpoint() override final = default;

        /**
         * Queries the patchpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The patchpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The patchpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}