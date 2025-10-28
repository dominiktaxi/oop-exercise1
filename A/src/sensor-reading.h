#pragma once

#include <iostream>
#include <string>

struct SensorReading {
  double value;
  std::string timestamp;

  void print();
};
