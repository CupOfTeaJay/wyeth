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
                       httplib::Client* const _httpsClient) noexcept
                       :
                       uri(uri),
                       _httpsClient(_httpsClient)
    {
    }

    const httplib::Result Delpoint::query() noexcept
    {
        return this->_httpsClient->Delete(this->uri);
    }
}