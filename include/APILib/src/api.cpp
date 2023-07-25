/**
 * \file api.cpp
 */

#include "../include/api.h"

API::API(const std::string uri,
         const std::vector<const Endpoint> endpoints)
         :
         uri(uri),
         endpoints(endpoints) {
}

API::~API() {
}
