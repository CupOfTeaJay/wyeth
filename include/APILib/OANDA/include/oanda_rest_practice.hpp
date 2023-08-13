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
     * TODO:
     */
    enum OANDA_REST_Practice_Endpoint
    {
        ACCOUNT_LIST             = 0,
        ACCOUNT_DETAILS          = 1,
        ACCOUNT_SUMMARY          = 2,
        ACCOUNT_INSTRUMENTS      = 3,
        ACCOUNT_CONFIGURATION    = 4,
        ACCOUNT_CHANGES          = 5,
        INSTRUMENT_CANDLES       = 6,
        INSTRUMENT_ORDER_BOOK    = 7,
        INSTRUMENT_POSITION_BOOK = 8,
        ORDER_CREATE             = 9,
        ORDER_LIST               = 10,
        ORDER_PENDING_LIST       = 11,
        ORDER_DETAILS            = 12,
        ORDER_REPLACE            = 13,
        ORDER_CANCEL             = 14,
        ORDER_CLIENT_EXTENSIONS  = 15,
        TRADE_LIST               = 16,
        TRADE_OPEN_LIST          = 17,
        TRADE_DETAILS            = 18,
        TRADE_CLOSE              = 19,
        TRADE_CLIENT_EXTENSIONS  = 20,
        TRADE_ORDERS             = 21,
        POSITION_LIST            = 22,
        POSITION_OPEN_LIST       = 23,
        POSITION_DETAILS         = 24,
        POSITION_CLOSE           = 25,
        TRANSACTION_LIST         = 26,
        TRANSACTION_DETAILS      = 27,
        TRANSACTION_ID_RANGE     = 28,
        TRANSACTION_SINCE_ID     = 29,
        TRANSACTION_STREAM       = 30,
        PRICING_CANDLES_LATEST   = 31,
        PRICING_DETAILS          = 32,
        PRICING_STREAM           = 33,
        PRICING_CANDLES          = 34,
    };

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
        virtual ~OANDA_REST_Practice() override final;

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

        /**
         * TODO:
         */
        httplib::Result getTransactionStream() noexcept;

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
        httplib::Result getPricingStream() noexcept;

        /**
         * TODO:
         */
        httplib::Result getPricingCandles() noexcept;
    };
}
