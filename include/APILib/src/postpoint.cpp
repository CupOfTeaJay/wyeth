/**
 * \file postpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/postpoint.hpp"

namespace Wyeth
{
    Postpoint::Postpoint(const std::string& uri,
                         void* const _httpsClient) noexcept
                         :
                         uri{uri},
                         _httpsClient{reinterpret_cast<httplib::Client* const>(_httpsClient)}
    {
    }

    const httplib::Result Postpoint::query() noexcept
    {
        return this->_httpsClient->Post(this->uri);
    }
}