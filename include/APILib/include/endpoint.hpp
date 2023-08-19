/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "../../HTTPLib/include/httplib.h"
#include <string>

namespace Wyeth
{
    class API;

    /**
     * TODO:
     */
    class Endpoint
    {
        public:

        /**
         * Queries the endpoint.
         */
        virtual const httplib::Result query() noexcept = 0;

        protected:

        /**
         * Constructor for the "Endpoint" class.
         */
        Endpoint(const std::string& uri,
                 API* const _api) noexcept;

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Endpoint();

        /**
         * Gets the URI of this endpoint.
         */
        std::string getUri() const noexcept;

        /**
         * Gets the API that this endpoint belongs to.
         */
        API* const getApi() const noexcept;

        private:

        /**
         * TODO:
         */
        std::string uri;

        /**
         * The API that this endpoint is associated with.
         */
        API* const _api;
    };
}
