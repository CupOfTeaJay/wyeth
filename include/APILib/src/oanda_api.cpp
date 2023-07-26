/**
 * \file oanda_api.cpp
 */

#include "../include/oanda_api.h"

namespace Wyeth
{
    OANDA_API::OANDA_API(const std::string& uri,
                         const std::vector<const Endpoint>& endpoints)
                         :
                         API{uri, endpoints} {
                         }

    OANDA_API::~OANDA_API() {
    }
}
