/**
 * \file getpoint.hpp
 *
 * TODO:
 */

#pragma once
#include "endpoint.hpp"

namespace Wyeth
{
    class API;

    /**
     * TODO:
     */
    class Getpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Endpoint" class.
         */
        Getpoint(const std::string& uri,
                 API* const api) noexcept;

        /**
         * Destructor for the "Endpoint" struct.
         */
        virtual ~Getpoint() override final;

        /**
         * Queries the getpoint.
         */
        virtual const httplib::Result query() noexcept override final;
    };
}
