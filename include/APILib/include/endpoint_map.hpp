/**
 * \file endpoint_map.hpp
 * 
 * TODO:
 */

#pragma once
#include <string>
#include <unordered_map>

namespace Wyeth
{
    class Endpoint;

    /**
     * TODO:
     */
    using EndpointMap = std::unordered_map<std::string, Endpoint* const>;
}