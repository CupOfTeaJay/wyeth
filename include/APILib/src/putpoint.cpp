/**
 * \file putpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/putpoint.hpp"

namespace Wyeth
{
    Putpoint::Putpoint(const std::string& uri,
                       void* const _httpsClient) noexcept
                       :
                       uri{uri},
                       _httpsClient{reinterpret_cast<httplib::Client* const>(_httpsClient)}
    {
    }

    const httplib::Result Putpoint::query() noexcept
    {
        return this->_httpsClient->Put(this->uri);
    }
}