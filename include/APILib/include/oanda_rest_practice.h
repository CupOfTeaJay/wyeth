/**
 * \file oanda_rest_practice.h
 *
 * TODO
 */

#pragma once
#include "api.h"

namespace Wyeth
{
    /**
     * An OANDA REST API for the fxTrade Practice environment.
     */
    class OANDA_REST_Practice : public API
    {

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
