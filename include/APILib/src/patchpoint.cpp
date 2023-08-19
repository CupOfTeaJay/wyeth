/**
 * \file patchpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/api.hpp"
#include "../include/patchpoint.hpp"

namespace Wyeth
{
    Patchpoint::Patchpoint(const std::string& uri,
                           API* const _api) noexcept
                           :
                           Endpoint{uri, _api}
    {
    }

    Patchpoint::~Patchpoint()
    {
    }

    const httplib::Result Patchpoint::query() noexcept
    {
        return this->getApi()->getHttpsClient()->Patch(this->getUri());
    }
}