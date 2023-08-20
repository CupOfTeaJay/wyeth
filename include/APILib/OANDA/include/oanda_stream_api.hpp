/**
 * \file oanda_stream_api.hpp
 * 
 * TODO:
 */

#pragma once
#include "../../include/api.hpp"

namespace Wyeth
{
    class OandaStreamApi : public Api
    {
        public:

        /**
         * Constructor for the "OandaApi" class.
         */
        OandaStreamApi(const std::string& authToken,
                       const std::string& uri) noexcept;

        /**
         * Destructor for the "OandaApi" class.
         */
        virtual ~OandaStreamApi();

        private:

        /**
         * Initializes the Oanda REST API's endpoints.
         */
        virtual const EndpointMap initializeEndpoints() noexcept override final;
    };
}