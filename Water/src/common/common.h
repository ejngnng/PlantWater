/*
 * Description:  common header file for debug
 *
 * Author: ninja
 *
 * Date: 2018-03-07
 *
 */

#ifndef __COMMON_H
#define __COMMON_H

#include <Arduino.h>


#define TimeStamp   (String("[") + String(millis()) + String("] "))

/* debug for every feature */
#define DEBUG_WiFi  Serial
#define DEBUG_MQTT  Serial
#define DEBUG_JSON  Serial
#define DEBUG_SW    Serial


#ifndef DEBUG_BAUD_RATE
#define DEBUG_BAUD_RATE   9600
#endif

void serial_init();

#endif
