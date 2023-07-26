/**
 * \file user.cpp
 */

#include "../include/user.h"

namespace Wyeth
{
    User::User(const std::string& authToken,
            API* _api)
            :
            authToken(authToken),
            _api(_api) {
    }

    User::~User() {
    }

    httplib::Result User::queryApi(const Endpoint& endpoint) {
        return this->_api->queryEndpoint(endpoint);
    }
}
