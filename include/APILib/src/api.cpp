/**
 * \file api.cpp
 *
 * TODO:
 */

#include "../include/api.hpp"

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

    httplib::Result API::queryEndpoint(const int& index) noexcept {
        if (this->endpoints[index].method == HTTP_Method::GET) {
            return this->_httpsClient->Get(this->endpoints[index].uri);
        }
        else if (this->endpoints[index].method == HTTP_Method::PATCH) {
            return this->_httpsClient->Patch(this->endpoints[index].uri);
        }
        else if (this->endpoints[index].method == HTTP_Method::POST) {
            return this->_httpsClient->Post(this->endpoints[index].uri);
        }
        else {
            return this->_httpsClient->Put(this->endpoints[index].uri);
        }
    }
}
