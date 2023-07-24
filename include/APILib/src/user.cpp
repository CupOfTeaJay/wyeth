/**
 * \file user.cpp
 */

#include "../include/user.h"

/**
 * Constructor for the "API" class.
 */
User::User() : authToken("") {
}

/**
 * Destructor for the "API" class.
 */
User::~User() {
}

/**
 * Gets the requested API resource.
 */
void User::setAuthToken(const std::string& authToken) {
    this->authToken.assign(authToken);
}