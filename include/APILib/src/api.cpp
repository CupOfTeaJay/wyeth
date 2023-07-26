/**
 * \file api.cpp
 */

#include "../include/api.h"

namespace Wyeth
{
    API::API(const std::string& uri,
             const std::vector<const Endpoint>& endpoints)
             :
             uri{uri},
             endpoints{endpoints},
             _httpsClient{new httplib::Client{this->uri}}
    {
    }

    API::~API()
    {
        delete this->_httpsClient;
    }

    httplib::Result API::queryEndpoint(const Endpoint& endpoint) {
        if (endpoint.method == HTTP_Method::GET) {
            return this->_httpsClient->Get(endpoint.uri);
        }
        else if (endpoint.method == HTTP_Method::PATCH) {
            return this->_httpsClient->Patch(endpoint.uri);
        }
        else if (endpoint.method == HTTP_Method::POST) {
            return this->_httpsClient->Post(endpoint.uri);
        }
        else {
            return this->_httpsClient->Put(endpoint.uri);
        }
    }
}
