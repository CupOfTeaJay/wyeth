/**
 * \file oanda_rest_practice.cpp
 *
 * TODO:
 */

#include "../include/oanda_rest_practice.hpp"

namespace Wyeth
{
    OANDA_REST_Practice::OANDA_REST_Practice() noexcept
    :
    API{"https://api-fxpractice.oanda.com",
        {{"/v3/accounts", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/summary", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/instruments", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/configuration", HTTP_Method::PATCH},
         {"/v3/accounts/{ACCNT_ID}/changes", HTTP_Method::GET},
         {"/v3/instruments/{INST}/candles", HTTP_Method::GET},
         {"/v3/instruments/{INST}/orderBook", HTTP_Method::GET},
         {"/v3/instruments/{INST}/positionBook", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/orders", HTTP_Method::POST},
         {"/v3/accounts/{ACCNT_ID}/orders", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/pendingOrders", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/orders/{ORDR_SPEC}", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/orders/{ORDR_SPEC}", HTTP_Method::PUT},
         {"/v3/accounts/{ACCNT_ID}/orders/{ORDR_SPEC}/cancel", HTTP_Method::PUT},
         {"/v3/accounts/{ACCNT_ID}/orders/{ORDR_SPEC}/clientExtensions", HTTP_Method::PUT},
         {"/v3/accounts/{ACCNT_ID}/trades", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/openTrades", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/trades/{TRD_SPEC}", HTTP_Method::GET},
         {"/v3/accounts/{ACCNT_ID}/trades/{TRD_SPEC}/close", HTTP_Method::PUT},
         {"/v3/accounts/{ACCNT_ID}/trades/{TRD_SPEC}/clientExtensions", HTTP_Method::PUT},
         {"/v3/accounts/{ACCNT_ID}/trades/{TRD_SPEC}/orders", HTTP_Method::PUT}}}
    {
    }

    OANDA_REST_Practice::~OANDA_REST_Practice()
    {
    }

    // ACCOUNT ENDPOINTS -------------------------------------------------------

    httplib::Result OANDA_REST_Practice::getAccountList() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_LIST);
    }

    httplib::Result OANDA_REST_Practice::getAccountDetails() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_DETAILS);
    }

    httplib::Result OANDA_REST_Practice::getAccountSummary() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_SUMMARY);
    }

    httplib::Result OANDA_REST_Practice::getAccountInstruments() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_INSTRUMENTS);
    }

    httplib::Result OANDA_REST_Practice:: patchAccountConfiguration() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_CONFIGURATION);
    }

    httplib::Result OANDA_REST_Practice::getAccountChanges() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ACCOUNT_CHANGES);
    }

    // INSTRUMENT ENDPOINTS ----------------------------------------------------

    httplib::Result OANDA_REST_Practice::getInstrumentCandles() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::INSTRUMENT_CANDLES);
    }

    httplib::Result OANDA_REST_Practice::getInstrumentOrderBook() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::INSTRUMENT_ORDER_BOOK);
    }

    httplib::Result OANDA_REST_Practice::getInstrumentPositionBook() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::INSTRUMENT_POSITION_BOOK);
    }

    // ORDER ENDPOINTS ---------------------------------------------------------

    httplib::Result OANDA_REST_Practice::postOrder() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_CREATE);
    }

    httplib::Result OANDA_REST_Practice::getOrderList() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_LIST);
    }

    httplib::Result OANDA_REST_Practice::getPendingOrderList() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_PENDING_LIST);
    }

    httplib::Result OANDA_REST_Practice::getOrderDetails() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_DETAILS);
    }

    httplib::Result OANDA_REST_Practice::putOrderReplace() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_REPLACE);
    }

    httplib::Result OANDA_REST_Practice::putOrderCancel() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_CANCEL);
    }

    httplib::Result OANDA_REST_Practice::putOrderClientExtensions() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::ORDER_CLIENT_EXTENSIONS);
    }

    // TRADE ENDPOINTS ---------------------------------------------------------

    httplib::Result OANDA_REST_Practice::getTradeList() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_LIST);
    }

    httplib::Result OANDA_REST_Practice::getOpenTradeList() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_OPEN_LIST);
    }

    httplib::Result OANDA_REST_Practice::getTradeDetails() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_DETAILS);
    }

    httplib::Result OANDA_REST_Practice::putTradeClose() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_CLOSE);
    }

    httplib::Result OANDA_REST_Practice::putTradeClientExtensions() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_CLIENT_EXTENSIONS);
    }

    httplib::Result OANDA_REST_Practice::putTradeOrders() noexcept {
        return this->queryEndpoint(OANDA_REST_Practice_Endpoint::TRADE_ORDERS);
    }
}
