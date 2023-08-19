/**
 * \file endpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"

namespace Wyeth
{
    /**
     * TODO:
     */
    class Getpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Endpoint" class.
         */
        Getpoint(const std::string& uri) noexcept;

        /**
         * Queries the endpoint.
         */
        virtual const httplib::Result query() noexcept override final;

        private:

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Getpoint() override final;
    };

    /**
     * TODO:
     */
    typedef std::unordered_map<std::string, Endpoint> Endpoint_Map;
}
