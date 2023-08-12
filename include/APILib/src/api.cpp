/**
 * \file api.cpp
 *
 * TODO
 */

#include "../include/api.hpp"

namespace Wyeth
{
    API::API(const std::string& uri,
             const Endpoint_Map& endpoints) noexcept
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

    httplib::Result API::queryEndpoint(const std::string& uri) noexcept {
        if (this->endpoints.at(uri) == HTTP_Method::GET) {
            return this->_httpsClient->Get(uri);
        }
        else if (endpoints.at(uri) == HTTP_Method::PATCH) {
            return this->_httpsClient->Patch(uri);
        }
        else if (endpoints.at(uri) == HTTP_Method::POST) {
            return this->_httpsClient->Post(uri);
        }
        else {
            return this->_httpsClient->Put(uri);
        }
    }
}
