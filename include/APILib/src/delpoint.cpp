/**
 * \file delpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/delpoint.hpp"

namespace Wyeth
{
    Delpoint::Delpoint(const std::string& uri,
                       void* const _httpsClient) noexcept
                       :
                       uri{uri},
                       _httpsClient{reinterpret_cast<httplib::Client* const>(_httpsClient)}
    {
    }

    const httplib::Result Delpoint::query() noexcept
    {
        return this->_httpsClient->Delete(this->uri);
    }
}