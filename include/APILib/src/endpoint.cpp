/**
 * \file endpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/endpoint.hpp"

namespace Wyeth
{
    Endpoint::Endpoint(const std::string& uri,
                       API* const _api) noexcept
                       :
                       uri{uri},
                       _api{_api}
    {
    }

    Endpoint::~Endpoint()
    {
    }

    std::string Endpoint::getUri() const noexcept
    {
        return this->uri;
    }

    API* const Endpoint::getApi() const noexcept
    {
        return this->_api;
    }
}
