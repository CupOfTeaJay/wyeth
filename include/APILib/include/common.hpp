/**
 * \file common.hpp
 *
 * TODO:
 */

namespace Wyeth
{
    /**
     * An enumeration of HTTPS request methods.
     */
    enum class HTTP_Method {
        GET   = 0,
        PATCH = 1,
        POST  = 2,
        PUT   = 3
    };

    /**
     * TODO:
     */
    enum OANDA_Endpoint
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
}
