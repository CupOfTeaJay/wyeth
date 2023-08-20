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
        public:

        /**
         * Constructor for the "OandaApi" class.
         */
        OandaRestApi(const std::string& authToken,
                     const std::string& uri) noexcept;

        /**
         * Destructor for the "OandaApi" class.
         */
        virtual ~OandaRestApi();

        private:

        /**
         * Initializes the Oanda REST API's endpoints.
         */
        virtual const EndpointMap initializeEndpoints() noexcept override final;
    };
}