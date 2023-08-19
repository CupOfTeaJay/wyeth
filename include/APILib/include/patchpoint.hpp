/**
 * \file patchpoint.hpp
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
    class Patchpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Patchpoint" class.
         */
        Patchpoint(const std::string& uri,
                   httplib::Client* const _httpsClient) noexcept;

        /**
         * Destructor for the "Patchpoint" class.
         */
        virtual ~Patchpoint() override final = default;

        /**
         * Queries the patchpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * The patchpoint's uniform resource identifier (URI).
         */
        const std::string uri;

        /**
         * The patchpoint's HTTPS client association.
         */
        httplib::Client* const _httpsClient;
    };
}