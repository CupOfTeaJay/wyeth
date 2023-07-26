/**
 * \file brokers.h
 */

namespace Wyeth
{
    /**
     * An enumeration of supported Broker APIs.
     */
    enum class Broker_API {
        OANDA_REST_PRACTICE = 0
    };

    /**
     * An enumeration of HTTP(S) request methods.
     */
    enum class HTTP_Method {
        GET   = 0,
        PATCH = 1,
        POST  = 2,
        PUT   = 3
    };
}
