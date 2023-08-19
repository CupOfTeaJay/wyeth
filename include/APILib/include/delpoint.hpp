/**
 * \file delpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"
#include <string>

namespace httplib
{
    class Client;
}

namespace Wyeth
{
    /**
     * TODO:
     */
    class Delpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Delpoint" class.
         */
        Delpoint(const std::string& uri,
                 httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Delpoint" class.
         */
        virtual ~Delpoint() override final = default;

        /**
         * Queries the delpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The delpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The delpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}