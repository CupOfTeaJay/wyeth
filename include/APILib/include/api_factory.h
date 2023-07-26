/**
 * \file api_factory.h
 */

#pragma once
#include "oanda_api.h"

namespace Wyeth
{
    /**
     * TODO
     */
    class API_Factory
    {
        public:

        /**
         * Constructor for the "API Factory" class.
         */
        API_Factory();

        /**
         * Destructor for the "API Factory" class.
         */
        ~API_Factory();

        /**
         * TODO
         */
        API* const instantiateApi(const std::string& uri,
                                  const std::vector<const Endpoint> endpoints);
    };
}