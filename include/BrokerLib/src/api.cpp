/**
 * \file api.cpp
 */

#include <../include/api.h>

/**
 * Constructor for the "API" class.
 */
API::API(const std::string uri,
         const OANDA_Endpoints endpoints)
         :
         uri(uri),
         endpoints(endpoints)
{
}

/**
 * Destructor for the "API" class.
 */
API::~API()
{
}
