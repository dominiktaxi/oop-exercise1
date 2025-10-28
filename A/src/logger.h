#pragma once

#include "sensor-reading.h"

class Logger {

public:
  void log(const SensorReading &reading, const std::string &sensorName);
};
