/**
 * \file api_factory.cpp
 *
 * TODO
 */

#include "../include/api_factory.h"

namespace Wyeth
{
    API_Factory::API_Factory() noexcept
    {
    }

    API_Factory::~API_Factory()
    {
    }

    API* const API_Factory::instantiateApi(const Broker_API& apiToInstantiate) const noexcept {
        if (apiToInstantiate == Broker_API::OANDA_REST_PRACTICE) {
            return new OANDA_REST_Practice{};
        }
    }
}
