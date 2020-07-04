#ifndef _WEATHER_H_
#define _WEATHER_H_

#if defined(ESP32) || defined (ESP8266)
#include <Stream.h>
#define STREAM Stream
#else
#include <stdlib.h>
#define STREAM std::istream
#endif

#include <Arduino.h>

class Weather {
public:
    Weather(STREAM & stream);
};






















#endif