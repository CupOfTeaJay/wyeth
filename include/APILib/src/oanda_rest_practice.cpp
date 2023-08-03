/**
 * \file oanda_api.cpp
 *
 * TODO
 */

#include "../include/oanda_rest_practice.h"

namespace Wyeth
{
    OANDA_REST_Practice::OANDA_REST_Practice() noexcept
    :
    API{"https://api-fxpractice.oanda.com",
        {{"/v3/accounts", HTTP_Method::GET},
         {"/v3/accounts/{ID}", HTTP_Method::GET},
         {"/v3/accounts/{ID}/summary", HTTP_Method::GET},
         {"/v3/accounts/{ID}/instruments", HTTP_Method::GET},
         {"/v3/accounts/{ID}/configuration", HTTP_Method::PATCH},
         {"/v3/accounts/{ID}/changes", HTTP_Method::GET}}}
    {
    }

    OANDA_REST_Practice::~OANDA_REST_Practice()
    {
    }
}
