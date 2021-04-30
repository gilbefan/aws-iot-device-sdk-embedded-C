/*
 * AWS IoT Device SDK for Embedded C 202012.01
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef MQTT_AGENT_CONFIG_H
#define MQTT_AGENT_CONFIG_H

/**************************************************/
/******* DO NOT CHANGE the following order ********/
/**************************************************/

/* Include logging header files and define logging macros in the following order:
 * 1. Include the header file "logging_levels.h".
 * 2. Define the LIBRARY_LOG_NAME and LIBRARY_LOG_LEVEL macros depending on
 * the logging configuration for MQTT.
 * 3. Include the header file "logging_stack.h", if logging is enabled for MQTT.
 */

/* Include header that defines log levels. */
#include "logging_levels.h"

/* Logging configuration for the MQTT library. */
#ifndef LIBRARY_LOG_NAME
    #define LIBRARY_LOG_NAME    "MQTT AGENT"
#endif

#ifndef LIBRARY_LOG_LEVEL
    #define LIBRARY_LOG_LEVEL    LOG_DEBUG
#endif
//#define LIBRARY_LOG_NAME "MQTT AGENT"
//#define LIBRARY_LOG_LEVEL   LOG_DEBUG

#include "logging_stack.h"

/************ End of logging configuration ****************/
/*_RB_ To document and add to the mqtt config defaults header file. */
#define MQTT_AGENT_COMMAND_QUEUE_LENGTH     ( 25 )
#define MQTT_COMMAND_CONTEXTS_POOL_SIZE     ( 10 )
#define MQTT_AGENT_MAX_OUTSTANDING_ACKS     ( 50 )
#define MQTT_AGENT_MAX_SIMULTANEOUS_SUBSCRIPTIONS    ( 50 )

/*
 * The maximum number of bytes that can be used in topic filter strings
 * such as "/my/topicfilter/#".
 */
#define MQTT_AGENT_MAX_SUBSCRIPTION_FILTER_LENGTH ( 100 )
#define MQTT_AGENT_MAX_SIMULTANEOUS_CONNECTIONS ( 3 )

#endif /* ifndef MQTT_AGENT_CONFIG_H */