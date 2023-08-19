/**
 * \file oanda_rest_api.cpp
 * 
 * TODO:
 */

#pragma once
#include "../include/oanda_rest_api.hpp"
#include "../../include/getpoint.hpp"

namespace Wyeth
{
    OandaRestApi::OandaRestApi(const std::string& authToken,
                               const std::string& uri) noexcept
                               :
                               Api{authToken, uri, this->initializeEndpoints()}
    {
    }

    const EndpointMap OandaRestApi::initializeEndpoints() noexcept {
        httplib::Client* const _parentClt{this->getHttpsClient()};
        return EndpointMap 
        {{
            {"getAcctLst", 
            new Getpoint{"/v3/accounts", _parentClt}},
            {"getAcctInfo",
            new Getpoint{"/v3/accounts/{ACCT_ID}", _parentClt}}
        }};
    }
}