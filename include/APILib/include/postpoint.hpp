/**
 * \file postpoint.hpp
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
    class Postpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Postpoint" class.
         */
        Postpoint(const std::string& uri,
                  httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Postpoint" class.
         */
        virtual ~Postpoint() override final = default;

        /**
         * Queries the postpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The postpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The postpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}