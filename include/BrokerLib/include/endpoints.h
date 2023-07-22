/**
 * \file endpoints.h
 */

#pragma once

#include <string>

/**
 * TODO TODO TODO
 */
struct OANDA_Endpoints
{
    /**
     * Constructor for the "OANDA_Endpoints" struct.
     */
    OANDA_Endpoints();

    /**
     * OANDA "Account" endpoint.
     *
     * Get a list of all accounts authorized for the provided token.
     */
    const std::string accounts;

    /**
     * OANDA "Account" endpoint.
     *
     * Get the full details for a single account that a client has access to.
     * Full pending order, open trade, and open position representations are
     * provided.
     */
    const std::string accountsID;

    /**
     * OANDA "Account" endpoint.
     *
     * Get an account's current state and changes since a specified transaction
     * ID.
     */
    const std::string accountsIDChanges;

    /**
     * OANDA "Account" endpoint.
     *
     * Set the client-configurable portions of an account.
     */
    const std::string accountsIDConfiguration;

    /**
     * OANDA "Account" endpoint.
     *
     * Get the list of tradeable instruments for a given account. The list of
     * tradeable instruments is dependent on the regulatory division that the
     * account is located in, thus should be the same for all accounts owned by
     * a single user.
     */
    const std::string accountsIDInstruments;

    /**
     * OANDA "Account" endpoint.
     *
     * Get a summary for a single account that a client has access to.
     */
    const std::string accountsIDSummary;
};
