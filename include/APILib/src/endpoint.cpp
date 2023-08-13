/**
 * \file endpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/endpoint.hpp"

namespace Wyeth
{
    explicit Endpoint::Endpoint(const std::string& uri,
                                const HTTP_Method& method) noexcept
                                :
                                uri{uri},
                                method{method}
    {
    }

    Endpoint::~Endpoint()
    {
    }
}
