/**
 * \file patchpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/patchpoint.hpp"

namespace Wyeth
{
    Patchpoint::Patchpoint(const std::string& uri,
                           void* const _httpsClient) noexcept
                           :
                           uri{uri},
                           _httpsClient{reinterpret_cast<httplib::Client* const>(_httpsClient)}
    {
    }

    const httplib::Result Patchpoint::query() noexcept
    {
        return this->_httpsClient->Patch(this->uri);
    }
}