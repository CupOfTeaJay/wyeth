/**
 * \file endpoint.cpp
 *
 * TODO
 */

#include "../include/endpoint.h"

namespace Wyeth
{
    Endpoint::Endpoint(const std::string& uri,
                       const HTTP_Method& method)
                       :
                       uri{uri},
                       method{method}
    {
    }
}
