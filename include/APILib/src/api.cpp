/**
 * \file api.cpp
 *
 * TODO
 */

#include "../include/api.h"

namespace Wyeth
{
    API::API(const std::string& uri,
             const std::vector<const Endpoint>& endpoints) noexcept
             :
             uri{uri},
             endpoints{endpoints},
             _httpsClient{new httplib::Client{this->uri}}
    {
        this->_httpsClient->set_keep_alive(true);
    }

    API::~API()
    {
        delete this->_httpsClient;
    }

    void API::setAuthToken(const std::string& authToken) noexcept {
        this->_httpsClient->set_bearer_token_auth(authToken);
    }
}
