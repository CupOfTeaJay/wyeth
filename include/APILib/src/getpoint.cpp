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
                       void* const _httpsClient) noexcept
                       :
                       uri{uri},
                       _httpsClient{reinterpret_cast<httplib::Client* const>(_httpsClient)}
    {
    }

    const httplib::Result Getpoint::query() noexcept
    {
        return this->_httpsClient->Get(this->uri);
    }
}