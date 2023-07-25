/**
 * \file user.cpp
 */

#include "../include/user.h"

User::User(const std::string& authToken,
           const API* _api)
           :
           authToken(authToken),
           _api(_api),
           _httpsClient(new httplib::Client{this->_api->uri}) {
}

User::~User() {
    delete this->_httpsClient;
}

httplib::Response User::queryApi(const Endpoint& endpoint) {
    if (endpoint.method == Request_Method::GET) {
        this->_httpsClient->Get(endpoint.uri);
    }
    else if (endpoint.method == Request_Method::PATCH) {
        this->_httpsClient->Patch(endpoint.uri);
    }
    else if (endpoint.method == Request_Method::POST) {
        this->_httpsClient->Post(endpoint.uri);
    }
    else {
        this->_httpsClient->Put(endpoint.uri);
    }
}
