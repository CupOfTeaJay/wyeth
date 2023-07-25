/**
 * \file user.h
 */

#pragma once
#include "api.h"
#include "../../HTTPLib/include/httplib.h"

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
                  const API* _api);

    /**
     * Destructor for the "User" class.
     */
    ~User();

    httplib::Response queryApi(const Endpoint& endpoint);

    private:

    /**
     * The user's authorization token.
     */
    const std::string authToken;

    /**
     * The user's API association
     */
    const API* _api;

    /**
     * The user's HTTPS client association.
     */
    httplib::Client* _httpsClient;
};