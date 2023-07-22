/**
 * \file api.h
 */

#pragma once

#include <endpoints.h>

class API
{
    protected:

    /**
     * Constructor for the "API" class.
     */
    explicit API(
        const std::string uri,
        const OANDA_Endpoints endpoints
        );

    /**
     * Destructor for the "API" class.
     */
    virtual ~API();

    private:

    /**
     * The API's uniform resource identifier (URI).
     */
    const std::string uri;

    /**
     * OANDA's API endpoints.
     */
    const OANDA_Endpoints endpoints;
};
