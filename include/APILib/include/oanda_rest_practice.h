/**
 * \file oanda_rest_practice.h
 *
 * TODO
 */

#pragma once
#include "api.h"

namespace Wyeth
{
    class API_Factory;

    /**
     * An OANDA REST API for the fxTrade Practice environment.
     */
    class OANDA_REST_Practice : protected API
    {
        // This class should only be instantiated via an "API_Factory" object.
        friend class API_Factory;

        public:

        /**
         * Gets an OANDA REST API endpoint.
         */
        const Endpoint getEndpoint() const noexcept;

        protected:

        /**
         * Constructor for the "OANDA_REST_Practice" class.
         */
        explicit OANDA_REST_Practice() noexcept;

        /**
         * Destructor for the "OANDA_REST_Practice" class.
         */
        ~OANDA_REST_Practice();
    };
}
