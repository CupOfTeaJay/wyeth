/**
 * \file oanda_api.h
 */

#pragma once

#include <api.h>
#include <string>
#include <vector>

class OANDA_API : public API
{
    protected:

    /**
     * Constructor for the "API" class.
     */
    explicit OANDA_API(const std::string uri, 
                       const std::vector<const std::string> endpoints); 

    /**
     * Destructor for the "API" class.
     */
    virtual ~OANDA_API();
};
