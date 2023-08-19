/**
 * \file getpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/api.hpp"
#include "../include/getpoint.hpp"

namespace Wyeth
{
    Getpoint::Getpoint(const std::string& uri,
                       API* const _api) noexcept
                       :
                       Endpoint{uri, _api}
    {
    }

    Getpoint::~Getpoint()
    {
    }

    const httplib::Result Getpoint::query() noexcept
    {
        return this->getApi()->getHttpsClient()->Get(this->getUri());
    }
}