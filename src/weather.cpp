#include "weather.h"
#include <ArduinoJson.h>

Weather::Weather(STREAM & stream) {
    const int capacity = 900;
    StaticJsonDocument<capacity> doc;
};

