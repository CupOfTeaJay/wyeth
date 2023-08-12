/**
 * \file oanda_rest_practice.hpp
 *
 * TODO:
 */

#pragma once
#include "api.hpp"

namespace Wyeth
{
    /**
     * An OANDA REST API for the fxTrade Practice environment.
     */
    class OANDA_REST_Practice : public API
    {
        public:

        /**
         * Constructor for the "OANDA_REST_Practice" class.
         */
        explicit OANDA_REST_Practice() noexcept;

        /**
         * Destructor for the "OANDA_REST_Practice" class.
         */
        ~OANDA_REST_Practice();

        /**
         * TODO:
         */
        httplib::Result getAccountList() noexcept;

        /**
         * TODO:         *
         */
        httplib::Result getAccountDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result getAccountSummary() noexcept;

        /**
         * TODO:
         */
        httplib::Result getAccountInstruments() noexcept;

        /**
         * TODO:
         */
        httplib::Result patchAccountConfiguration() noexcept;

        /**
         * TODO:
         */
        httplib::Result getAccountChanges() noexcept;
    };
}
