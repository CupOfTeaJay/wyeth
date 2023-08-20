/**
 * \file api.cpp
 *
 * TODO:
 */

#include "../include/api.hpp"

namespace Wyeth
{
    Api::Api(const std::string& authToken,
             const std::string& uri,
             const EndpointMap& endpoints) noexcept
             :
             uri{uri},
             _httpsClient{new httplib::Client{this->uri}},
             endpoints{endpoints}
    {
    }

    Api::~Api()
    {
        delete this->_httpsClient;
    }

    const EndpointMap& Api::getEndpoints() const noexcept {
        return this->endpoints;
    }

    httplib::Client* const Api::getHttpsClient() const noexcept {
        return this->_httpsClient;
    }

    httplib::Result Api::queryEndpoint(const std::string& key) const noexcept {
        return this->endpoints.at(key)->query();
    }
}
