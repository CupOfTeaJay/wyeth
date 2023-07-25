/**
 * \file user.cpp
 */

#include "../include/user.h"

User::User() : authToken("") {
}

User::~User() {
}

void User::setAuthToken(const std::string& authToken) {
    this->authToken.assign(authToken);
}