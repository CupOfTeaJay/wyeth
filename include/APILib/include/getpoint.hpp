/**
 * \file getpoint.hpp
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
    class Getpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Patchpoint" class.
         */
        Getpoint(const std::string& uri,
                 httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Patchpoint" class.
         */
        virtual ~Getpoint() override final = default;

        /**
         * Queries the getpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The getpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The getpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}