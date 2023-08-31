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
 * \file postpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/postpoint.hpp"

namespace Wyeth
{
    Postpoint::Postpoint(const std::string& uri,
                         httplib::Client* const _httpsClient) noexcept
                         :
                         uri{uri},
                         _httpsClient{_httpsClient}
    {
    }

    const httplib::Result Postpoint::query() noexcept
    {
        return this->_httpsClient->Post(this->uri);
    }
}