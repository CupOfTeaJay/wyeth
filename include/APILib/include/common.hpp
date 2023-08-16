/**
 * \file common.hpp
 *
 * TODO:
 */

namespace Wyeth
{
    /**
     * An enumeration of HTTPS request methods.
     */
    enum class HTTP_Method {
        _INVALID_ = 0,
        GET       = 1,
        PATCH     = 2,
        POST      = 3,
        PUT       = 4
    };
}