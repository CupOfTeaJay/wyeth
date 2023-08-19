/**
 * \file api.cpp
 *
 * TODO:
 */

#include "../include/api.hpp"

namespace Wyeth
{
    API::API(const std::string& authToken,
             const std::string& uri,
             const EndpointMap& endpoints) noexcept
             :
             uri{uri},
             endpoints{endpoints},
             _httpsClient{new httplib::Client{this->uri}}
    {
        this->_httpsClient->set_bearer_token_auth(authToken);
        this->_httpsClient->set_keep_alive(true);
    }

    API::~API()
    {
        delete this->_httpsClient;
    }

    httplib::Result API::queryEndpoint(const std::string& key) const noexcept {
        return this->endpoints.at(key)->query();
    }
}
