/**
 * \file endpoint.cpp
 */

#include "../include/endpoint.h"

/**
 * Constructor for the "Endpoint" struct.
 */
Endpoint::Endpoint(const Request_Method method,
                   const std::string uri)
                   :
                   method(method),
                   uri(uri) {
}
