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
         {"/v3/accounts/{ACCOUNT_ID}", HTTP_Method::GET},
         {"/v3/accounts/{ACCOUNT_ID}/summary", HTTP_Method::GET},
         {"/v3/accounts/{ACCOUNT_ID}/instruments", HTTP_Method::GET},
         {"/v3/accounts/{ACCOUNT_ID}/configuration", HTTP_Method::PATCH},
         {"/v3/accounts/{ACCOUNT_ID}/changes", HTTP_Method::GET},
         {"/v3/instruments/{INSTRUMENT}/candles", HTTP_Method::GET},
         {"/v3/instruments/{INSTRUMENT}/orderBook", HTTP_Method::GET},
         {"/v3/instruments/{INSTRUMENT}/positionBook", HTTP_Method::GET}}}
    {
    }

    OANDA_REST_Practice::~OANDA_REST_Practice()
    {
    }

    httplib::Result OANDA_REST_Practice::getAccountList() noexcept {
        return this->queryEndpoint("/v3/accounts");
    }

    httplib::Result OANDA_REST_Practice::getAccountDetails() noexcept {
        return this->queryEndpoint("/v3/accounts/{ACCOUNT_ID}");
    }

    httplib::Result OANDA_REST_Practice::getAccountSummary() noexcept {
        return this->queryEndpoint("/v3/accounts/{ACCOUNT_ID}/summary");
    }

    httplib::Result OANDA_REST_Practice::getAccountInstruments() noexcept {
        return this->queryEndpoint("/v3/accounts/{ACCOUNT_ID}/instruments");
    }

    httplib::Result OANDA_REST_Practice:: patchAccountConfiguration() noexcept {
        return this->queryEndpoint("/v3/accounts/{ACCOUNT_ID}/configuration");
    }

    httplib::Result OANDA_REST_Practice::getAccountChanges() noexcept {
        return this->queryEndpoint("/v3/accounts/{ACCOUNT_ID}/changes");
    }
}
