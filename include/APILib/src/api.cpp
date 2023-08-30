/**
 * Copyright (c) 2023 Thrisys LLC
 * 
 * Use of this software is govered by the Business Source License included in 
 * the LICENSE.md file and at www.mariadb.com/bsl11.
 * 
 * Change Date: TODO:
 * 
 * On the date above, in accordance with the Business Source License, use of 
 * this software will be governed by the open source license specified in the 
 * LICENSE.md file.
 * 
 * \file api.cpp
 *
 * TODO:
 */

#include "../include/api.hpp"

namespace Wyeth
{
    Api::Api(const std::string& authToken,
             const std::string& uri,
             const EndpointMap& endpoints) noexcept
             :
             uri{uri},
             httpsClient{httplib::Client{uri}},
             endpoints{endpoints}
    {
    }

    Api::~Api()
    {
    }

    const EndpointMap& Api::getEndpoints() const noexcept {
        return this->endpoints;
    }

    const httplib::Client& Api::getHttpsClient() const noexcept {
        return this->httpsClient;
    }

    httplib::Result Api::queryEndpoint(const std::string& key) const noexcept {
        return this->endpoints.at(key)->query();
    }
}
