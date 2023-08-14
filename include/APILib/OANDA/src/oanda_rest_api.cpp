/**
 * \file oanda_rest_api.cpp
 *
 * TODO:
 */

#include "../include/oanda_rest_api.hpp"

namespace Wyeth
{
    OANDA_REST_API::OANDA_REST_API(const std::string& uri) noexcept
    :
    API{uri,
        {OANDA_ACCOUNT_LIST}
        }
    {
    }

    OANDA_REST_API::~OANDA_REST_API()
    {
    }

    // ACCOUNT ENDPOINTS -------------------------------------------------------

    httplib::Result OANDA_REST_API::getAccountList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_LIST);
    }

    httplib::Result OANDA_REST_API::getAccountDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_DETAILS);
    }

    httplib::Result OANDA_REST_API::getAccountSummary() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_SUMMARY);
    }

    httplib::Result OANDA_REST_API::getAccountInstruments() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_INSTRUMENTS);
    }

    httplib::Result OANDA_REST_API::patchAccountConfiguration() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_CONFIGURATION);
    }

    httplib::Result OANDA_REST_API::getAccountChanges() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ACCOUNT_CHANGES);
    }

    // INSTRUMENT ENDPOINTS ----------------------------------------------------

    httplib::Result OANDA_REST_API::getInstrumentCandles() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_INSTRUMENT_CANDLES);
    }

    httplib::Result OANDA_REST_API::getInstrumentOrderBook() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_INSTRUMENT_ORDER_BOOK);
    }

    httplib::Result OANDA_REST_API::getInstrumentPositionBook() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_INSTRUMENT_POSITION_BOOK);
    }

    // ORDER ENDPOINTS ---------------------------------------------------------

    httplib::Result OANDA_REST_API::postOrder() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_CREATE);
    }

    httplib::Result OANDA_REST_API::getOrderList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_LIST);
    }

    httplib::Result OANDA_REST_API::getPendingOrderList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_PENDING_LIST);
    }

    httplib::Result OANDA_REST_API::getOrderDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_DETAILS);
    }

    httplib::Result OANDA_REST_API::putOrderReplace() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_REPLACE);
    }

    httplib::Result OANDA_REST_API::putOrderCancel() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_CANCEL);
    }

    httplib::Result OANDA_REST_API::putOrderClientExtensions() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_ORDER_CLIENT_EXTENSIONS);
    }

    // TRADE ENDPOINTS ---------------------------------------------------------

    httplib::Result OANDA_REST_API::getTradeList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_LIST);
    }

    httplib::Result OANDA_REST_API::getOpenTradeList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_OPEN_LIST);
    }

    httplib::Result OANDA_REST_API::getTradeDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_DETAILS);
    }

    httplib::Result OANDA_REST_API::putTradeClose() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_CLOSE);
    }

    httplib::Result OANDA_REST_API::putTradeClientExtensions() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_CLIENT_EXTENSIONS);
    }

    httplib::Result OANDA_REST_API::putTradeOrders() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRADE_ORDERS);
    }

    // POSITION ENDPOINTS ------------------------------------------------------

    httplib::Result OANDA_REST_API::getPositionList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_POSITION_LIST);
    }

    httplib::Result OANDA_REST_API::getOpenPositionList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_POSITION_OPEN_LIST);
    }

    httplib::Result OANDA_REST_API::getPositionDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_POSITION_DETAILS);
    }

    httplib::Result OANDA_REST_API::putPositionClose() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_POSITION_CLOSE);
    }

    // TRANSACTION ENDPOINTS ---------------------------------------------------

    httplib::Result OANDA_REST_API::getTransactionList() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRANSACTION_LIST);
    }

    httplib::Result OANDA_REST_API::getTransactionDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRANSACTION_DETAILS);
    }

    httplib::Result OANDA_REST_API::getTransactionIdRange() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRANSACTION_ID_RANGE);
    }

    httplib::Result OANDA_REST_API::getTransactionSinceId() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_TRANSACTION_SINCE_ID);
    }

    // PRICING ENDPOINTS -------------------------------------------------------

    httplib::Result OANDA_REST_API::getPricingCandlesLatest() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_PRICING_CANDLES_LATEST);
    }

    httplib::Result OANDA_REST_API::getPricingDetails() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_PRICING_DETAILS);
    }

    httplib::Result OANDA_REST_API::getPricingCandles() noexcept {
        return this->queryEndpoint(Broker_Endpoint::OANDA_PRICING_CANDLES);
    }
}
