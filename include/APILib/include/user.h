/**
 * \file user.h
 */

#pragma once
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
    explicit User();

    /**
     * Destructor for the "User" class.
     */
    ~User();

    /**
     * Sets the user's authorization token.
     */
    void setAuthToken(const std::string& authToken);

    private:

    /**
     * The user's authorization token.
     */
    std::string authToken;
};