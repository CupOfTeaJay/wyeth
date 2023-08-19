/**
 * \file getpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/getpoint.hpp"

namespace Wyeth
{
    Getpoint::Getpoint(const std::string& uri,
                       httplib::Client* const _httpsClient) noexcept
                       :
                       uri{uri},
                       _httpsClient{_httpsClient}
    {
    }

    const httplib::Result Getpoint::query() noexcept
    {
        return this->_httpsClient->Get(this->uri);
    }
}