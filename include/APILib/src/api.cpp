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
             httpsClient{httplib::Client{uri}},
             endpoints{endpoints}
    {
    }

    Api::~Api()
    {
    }

    const EndpointMap& Api::getEndpoints() const noexcept {
        return this->endpoints;
    }

    const httplib::Client& Api::getHttpsClient() const noexcept {
        return this->httpsClient;
    }

    httplib::Result Api::queryEndpoint(const std::string& key) const noexcept {
        return this->endpoints.at(key)->query();
    }
}
