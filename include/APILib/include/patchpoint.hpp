/**
 * \file patchpoint.hpp
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
    class Patchpoint : public Endpoint
    {
        public:

        /**
         * Constructor for the "Patchpoint" class.
         */
        Patchpoint(const std::string& uri,
                   API* const api) noexcept;

        /**
         * Destructor for the "Patchpoint" class.
         */
        virtual ~Patchpoint() override final;

        /**
         * Queries the patchpoint.
         */
        virtual const httplib::Result query() noexcept override final;
    };
}