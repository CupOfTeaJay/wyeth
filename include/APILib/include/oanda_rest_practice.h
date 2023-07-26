/**
 * \file oanda_rest_practice.h
 */

#pragma once
#include "api.h"

namespace Wyeth
{
    class API_Factory;

    /**
     * TODO
     */
    class OANDA_REST_Practice : protected API
    {
        // This class should only be instantiated via the API Factory.
        friend class API_Factory;

        protected:

        /**
         * Constructor for the "OANDA API" class.
         */
        explicit OANDA_REST_Practice();

        /**
         * Destructor for the "OANDA API" class.
         */
        ~OANDA_REST_Practice();
    };
}