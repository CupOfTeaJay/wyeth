/**
 * \file endpoints_map.h
 *
 * TODO
 */

#pragma once
#include "common.h"
#include <string>
#include <unordered_map>

namespace Wyeth
{
    /**
     * An unordered endpoint map. Containins a resource (key) that can be
     * queried via an HTTP(S) request method (value).
     */
    typedef std::unordered_map<std::string, HTTP_Method> Endpoint_Map;
}
