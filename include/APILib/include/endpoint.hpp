/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "../../HTTPLib/include/httplib.h"
#include <string>
#include <unordered_map>

namespace Wyeth
{
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
        Endpoint(const std::string& uri) noexcept;

        private:

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Endpoint();

        /**
         * TODO:
         */
        std::string uri;
    };

    /**
     * TODO:
     */
    typedef std::unordered_map<std::string, Endpoint> Endpoint_Map;
}
