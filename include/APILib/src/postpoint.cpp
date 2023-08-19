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
                         httplib::Client* const _httpsClient) noexcept
                         :
                         uri(uri),
                         _httpsClient(_httpsClient)
    {
    }

    const httplib::Result Postpoint::query() noexcept
    {
        return this->_httpsClient->Post(this->uri);
    }
}