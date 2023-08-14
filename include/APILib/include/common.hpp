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
        _INVALID_ = 0,
        GET       = 1,
        PATCH     = 2,
        POST      = 3,
        PUT       = 4
    };

    /**
     * TODO:
     */
    enum class Broker_Endpoint
    {
        _INVALID_                      = 0,
        OANDA_ACCOUNT_LIST             = 1,
        OANDA_ACCOUNT_DETAILS          = 2,
        OANDA_ACCOUNT_SUMMARY          = 3,
        OANDA_ACCOUNT_INSTRUMENTS      = 4,
        OANDA_ACCOUNT_CONFIGURATION    = 5,
        OANDA_ACCOUNT_CHANGES          = 6,
        OANDA_INSTRUMENT_CANDLES       = 7,
        OANDA_INSTRUMENT_ORDER_BOOK    = 8,
        OANDA_INSTRUMENT_POSITION_BOOK = 9,
        OANDA_ORDER_CREATE             = 10,
        OANDA_ORDER_LIST               = 11,
        OANDA_ORDER_PENDING_LIST       = 12,
        OANDA_ORDER_DETAILS            = 13,
        OANDA_ORDER_REPLACE            = 14,
        OANDA_ORDER_CANCEL             = 15,
        OANDA_ORDER_CLIENT_EXTENSIONS  = 16,
        OANDA_TRADE_LIST               = 17,
        OANDA_TRADE_OPEN_LIST          = 18,
        OANDA_TRADE_DETAILS            = 19,
        OANDA_TRADE_CLOSE              = 20,
        OANDA_TRADE_CLIENT_EXTENSIONS  = 21,
        OANDA_TRADE_ORDERS             = 22,
        OANDA_POSITION_LIST            = 23,
        OANDA_POSITION_OPEN_LIST       = 24,
        OANDA_POSITION_DETAILS          = 25,
        OANDA_POSITION_CLOSE           = 26,
        OANDA_TRANSACTION_LIST         = 27,
        OANDA_TRANSACTION_DETAILS      = 28,
        OANDA_TRANSACTION_ID_RANGE     = 29,
        OANDA_TRANSACTION_SINCE_ID     = 30,
        OANDA_TRANSACTION_STREAM       = 31,
        OANDA_PRICING_CANDLES_LATEST   = 32,
        OANDA_PRICING_DETAILS          = 33,
        OANDA_PRICING_STREAM           = 34,
        OANDA_PRICING_CANDLES          = 35,
    };
}
