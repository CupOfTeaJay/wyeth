/**
 * \file user.h
 */

#pragma once
#include "api.h"

namespace Wyeth
{
    /**
     * The user.
     */
    class User
    {
        public:

        /**
         * Constructor for the "User" class.
         */
        explicit User(const std::string& authToken,
                    API* _api);

        /**
         * Destructor for the "User" class.
         */
        ~User();

        /**
         * TODO
         */
        httplib::Result queryApi(const Endpoint& endpoint);

        private:

        /**
         * The user's authorization token.
         */
        const std::string authToken;

        /**
         * The user's API association
         */
        API* _api;
    };
}