/**
 * \file putpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"

namespace httplib
{
    class Client;
}

namespace Wyeth
{
    /**
     * TODO:
     */
    class Putpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Putpoint" class.
         */
        Putpoint(const std::string& uri,
                 void* const _httpsClient) noexcept;

        /**
         * Destructor for the "Putpoint" class.
         */
        virtual ~Putpoint() override final = default;

        /**
         * Queries the putpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The putpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The putpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}