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
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "../../external/HTTPLib/httplib.h"
#include <string>

namespace httplib
{
    class Result;
}

namespace Wyeth
{
    /**
     * TODO:
     */
    class Endpoint
    {
        public:

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Endpoint() = default;

        /**
         * Queries the endpoint.
         */
        virtual const httplib::Result query() noexcept = 0;

        protected:

        /**
         * Constructor for the "Endpoint" class.
         */
        Endpoint() noexcept = default;
    };
}
