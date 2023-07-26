/**
 * \file endpoint.cpp
 */

#include "../include/endpoint.h"

Endpoint::Endpoint(const std::string& uri,
                   const Request_Method& method)
                   :
                   uri(uri),
                   method(method) {
}
