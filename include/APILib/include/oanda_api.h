/**
 * \file oanda_api.h
 */

#pragma once
#include "api.h"

namespace Wyeth
{
    /**
     * TODO
     */
    class OANDA_API : protected API
    {
        public:

        /**
         * Constructor for the "OANDA API" class.
         */
        explicit OANDA_API(const std::string& uri,
                           const std::vector<const Endpoint>& endpoints);

        /**
         * Destructor for the "OANDA API" class.
         */
        ~OANDA_API();
    };
}