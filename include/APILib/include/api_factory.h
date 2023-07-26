/**
 * \file api_factory.h
 */

#pragma once
#include "oanda_rest_practice.h"

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
        API* const instantiateApi(const Broker_API& apiToInstantiate);
    };
}