/**
 * \file patchpoint.cpp
 *
 * TODO:
 */

#pragma once
#include "../include/patchpoint.hpp"
#include "../../HTTPLib/include/httplib.h"

namespace Wyeth
{
    Patchpoint::Patchpoint(const std::string& uri,
                           httplib::Client* const _httpsClient) noexcept
                           :
                           uri(uri),
                           _httpsClient(_httpsClient)
    {
    }

    const httplib::Result Patchpoint::query() noexcept
    {
        return this->_httpsClient->Patch(this->uri);
    }
}