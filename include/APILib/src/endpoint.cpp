/**
 * \file endpoint.cpp
 *
 * TODO
 */

#include "../include/endpoint.h"

namespace Wyeth
{
    Endpoint::Endpoint(const std::string& uri,
                       const HTTP_Method& method) noexcept
                       :
                       uri{uri},
                       method{method}
    {
    }
}
