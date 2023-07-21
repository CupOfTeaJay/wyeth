/**
 * \file endpoints.h
 */

#pragma once

// TODO: Doxygenate me. //
enum class OANDA_Endpoint
{
    ACCOUNTS                  = 0, // Get a list of all accounts authorized for the provided token.
    ACCOUNTS_ID               = 1, // Get the full details for a single account that a client has access to.
    ACCOUNTS_ID_SUMMARY       = 2, // Get a summary for a single account that a client has access to.
    ACCOUNTS_ID_INSTRUMENTS   = 3, // Get the list of tradeable instruments for the given account.
    ACCOUNTS_ID_CONFIGURATION = 4, // Set the client configurable portions of an account.
    ACCOUNTS_ID_CHANGES       = 5  // Get the current state of the given account and changes since a specified TransactionID.

    // TODO: add remaining endpoints. //
};
