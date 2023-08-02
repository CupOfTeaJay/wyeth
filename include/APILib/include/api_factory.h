/**
 * \file api_factory.h
 */

#pragma once
#include "oanda_rest_practice.h"

namespace Wyeth
{
    /**
     * A factory class for instantiating API objects.
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
         * Creates an instance of an API object.
         */
        API* const instantiateApi(const Broker_API& apiToInstantiate) const;
    };
}
