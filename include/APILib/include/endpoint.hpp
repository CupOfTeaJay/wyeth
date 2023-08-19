/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "../../HTTPLib/include/httplib.h"
#include <string>

namespace httplib
{
    class Result;
}

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
        Endpoint() noexcept = default;

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Endpoint() = default;
    };
}
