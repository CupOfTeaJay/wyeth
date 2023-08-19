/**
 * \file oanda_rest_api.hpp
 * 
 * TODO:
 */

#pragma once
#include "../../include/api.hpp"

namespace Wyeth
{
    class OandaRestApi : public Api
    {
        protected:

        /**
         * Constructor for the "OandaApi" class.
        */
        OandaRestApi(const std::string& authToken,
                     const std::string& uri,
                     const EndpointMap& endpoints) noexcept;
    };
}