/**
 * \file endpoints.cpp
 */

#pragma once

#include <../include/endpoints.h>

/**
 * Constructor for the "OANDA_Endpoints" struct.
 */
OANDA_Endpoints::OANDA_Endpoints()
    :
    accounts("/v3/accounts"),
    accountsID("/v3/accounts/{ID}"),
    accountsIDChanges("/v3/accounts/{ID}/changes"),
    accountsIDConfiguration("/v3/accounts/{ID}/configuration"),
    accountsIDInstruments("/v3/accounts/{ID}/instruments"),
    accountsIDSummary("/v3/accounts/{ID}/summary")
{
}
