/**
 * \file OANDA_REST_API.hpp
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
    class OANDA_REST_API : public API
    {
        public:

        /**
         * Constructor for the "OANDA_REST_API" class.
         */
        explicit OANDA_REST_API() noexcept;

        /**
         * Destructor for the "OANDA_REST_API" class.
         */
        virtual ~OANDA_REST_API() override final;

        // ACCOUNT ENDPOINTS ---------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getAccountList() noexcept;

        /**
         * TODO:
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

        // INSTRUMENT ENDPOINTS ------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getInstrumentCandles() noexcept;

        /**
         * TODO:
         */
        httplib::Result getInstrumentOrderBook() noexcept;

        /**
         * TODO:
         */
        httplib::Result getInstrumentPositionBook() noexcept;

        // ORDER ENDPOINTS -----------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result postOrder() noexcept;

        /**
         * TODO:
         */
        httplib::Result getOrderList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getPendingOrderList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getOrderDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result putOrderReplace() noexcept;

        /**
         * TODO:
         */
        httplib::Result putOrderCancel() noexcept;

        /**
         * TODO:
         */
        httplib::Result putOrderClientExtensions() noexcept;

        // TRADE ENDPOINTS -----------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getTradeList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getOpenTradeList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getTradeDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result putTradeClose() noexcept;

        /**
         * TODO:
         */
        httplib::Result putTradeClientExtensions() noexcept;

        /**
         * TODO:
         */
        httplib::Result putTradeOrders() noexcept;

        // POSITION ENDPOINTS --------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getPositionList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getOpenPositionList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getPositionDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result putPositionClose() noexcept;

        // TRANSACTION ENDPOINTS -----------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getTransactionList() noexcept;

        /**
         * TODO:
         */
        httplib::Result getTransactionDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result getTransactionIdRange() noexcept;

        /**
         * TODO:
         */
        httplib::Result getTransactionSinceId() noexcept;

        // PRICING ENDPOINTS ---------------------------------------------------

        /**
         * TODO:
         */
        httplib::Result getPricingCandlesLatest() noexcept;

        /**
         * TODO:
         */
        httplib::Result getPricingDetails() noexcept;

        /**
         * TODO:
         */
        httplib::Result getPricingCandles() noexcept;
    };
}
