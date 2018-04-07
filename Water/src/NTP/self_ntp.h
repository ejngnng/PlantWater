#ifndef __SELF_NTP_H
#define __SELF_NTP_H

#include <arduino.h>

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>

void ntp_init();

void ntp_loop();

#endif
