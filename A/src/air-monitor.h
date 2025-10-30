#pragma once

#include "air-sensor.h"
#include <vector>

class AirMonitor {
private:
  std::vector<AirSensor> _sensors;

public:
  AirMonitor(const std::vector<AirSensor> sensors);
  void logAll();
};
