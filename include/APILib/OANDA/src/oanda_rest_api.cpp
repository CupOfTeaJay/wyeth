/**
 * \file oanda_rest_api.cpp
 * 
 * TODO:
 */

#pragma once
#include "../include/oanda_rest_api.hpp"
#include "../../include/getpoint.hpp"
#include "../../include/patchpoint.hpp"
#include "../../include/postpoint.hpp"
#include "../../include/putpoint.hpp"

namespace Wyeth
{
    OandaRestApi::OandaRestApi(const std::string& authToken,
                               const std::string& uri) noexcept
                               :
                               Api{authToken, uri, this->initializeEndpoints()}
    {
    }

    const EndpointMap OandaRestApi::initializeEndpoints() noexcept {
        httplib::Client* const _parentClt{this->getHttpsClient()};
        return EndpointMap
        {{
            // Initialize "Account" endpoints.
            {"getAccountList", 
            new Getpoint{"/v3/accounts", _parentClt}},
            {"getAccounttInformation",
            new Getpoint{"/v3/accounts/{ACCT_ID}", _parentClt}},
            {"getAccountSummary",
            new Getpoint{"/v3/accounts/{ACCT_ID}/summary", _parentClt}},
            {"getAccountInstruments",
            new Getpoint{"/v3/accounts/{ACCT_ID}/instruments", _parentClt}},
            {"getAccountConfiguration",
            new Patchpoint{"/v3/accounts/{ACCT_ID}/configuration", _parentClt}},
            {"getAccountChanges",
            new Getpoint{"/v3/accounts/{ACCT_ID}/changes", _parentClt}},

            // Initialize "Instrument" endpoints.
            {"getInstrumentCandleData",
            new Getpoint{"/v3/instruments/{INST}/candles", _parentClt}},
            {"getInstrumentOrderBook",
            new Getpoint{"/v3/instruments/{INST}/orderBook", _parentClt}},
            {"getInstrumentPositionBook",
            new Getpoint{"/v3/instruments/{INST}/positionBook", _parentClt}},

            // Initialize "Order" endpoints.
            {"postOrder",
            new Postpoint{"/v3/accounts/{ACCT_ID}/orders", _parentClt}},
            {"getOrderList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/orders", _parentClt}},
            {"getPendingOrderList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/pendingOrders", _parentClt}},
            {"getOrderDetails",
            new Getpoint{"/v3/accounts/{ACCT_ID}/orders/{ORDR_SPC}", _parentClt}},
            {"putOrderReplace",
            new Putpoint{"/v3/accounts/{ACCT_ID}/orders/{ORDR_SPC}", _parentClt}},
            {"putOrderCancel",
            new Putpoint{"/v3/accounts/{ACCT_ID}/orders/{ORDR_SPC}/cancel", _parentClt}},
            {"putUpdateClientExtensions",
            new Putpoint{"/v3/accounts/{ACCT_ID}/orders/{ORDR_SPC}/clientExtensions", _parentClt}},

            // Initialize "Trade" endpoints.
            {"getTradeList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/trades", _parentClt}},
            {"getOpenTradeList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/openTrades", _parentClt}},
            {"getTradeDetails",
            new Getpoint{"/v3/accounts/{ACCT_ID}/trades/{TRD_SPC}", _parentClt}},
            {"putCloseTrade",
            new Putpoint{"/v3/accounts/{ACCT_ID}/trades/{TRD_SPC}/close", _parentClt}},
            {"putUpdateTradeClientExtensions",
            new Putpoint{"/v3/accounts/{ACCT_ID}/trades/{TRD_SPC}/clientExtensions", _parentClt}},
            {"putUpdateTradeDependentOrders",
            new Putpoint{"/v3/accounts/{ACCT_ID}/trades/{TRD_SPC}/orders", _parentClt}},

            // Initialize "Position" endpoints.
            {"getPositionList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/positions", _parentClt}},
            {"getOpenPositionList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/openPositions", _parentClt}},
            {"getPositionDetails",
            new Getpoint{"/v3/accounts/{ACCT_ID}/positions/{INST}", _parentClt}},
            {"putClosePosition",
            new Putpoint{"/v3/accounts/{ACCT_ID}/positions/{INST}/close", _parentClt}},

            // Initialize "Transaction" endpoints.
            {"getTransactionList",
            new Getpoint{"/v3/accounts/{ACCT_ID}/transactions", _parentClt}},
            {"getTransactionDetails",
            new Getpoint{"/v3/accounts/{ACCT_ID}/transactions/{TXN_ID}", _parentClt}},
            {"getTransactionIdRange",
            new Getpoint{"/v3/accounts/{ACCT_ID}/transactions/idrange", _parentClt}},
            {"getTransactionSinceId",
            new Getpoint{"/v3/accounts/{ACCT_ID}/transactions/sinceid", _parentClt}},

            // Initialize "Pricing" endpoints.
            {"getLatestCandles",
            new Getpoint{"/v3/accounts/{ACCT_ID}/candles/latest", _parentClt}},
            {"getPricingInformation",
            new Getpoint{"/v3/accounts/{ACCT_ID}/pricing", _parentClt}},
            {"getCandleData",
            new Getpoint{"/v3/accounts/{ACCT_ID}/pricing/candles", _parentClt}}
        }};
    }
}