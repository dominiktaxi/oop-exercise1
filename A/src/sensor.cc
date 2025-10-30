#include "sensor.h"

Sensor::Sensor(const std::string &name) : _name(name) {}

SensorReading Sensor::read() const {
  SensorReading read;
  read.value = 1337;
  read.timestamp = "12/12/12";
  return read;
}

std::string Sensor::name() { return _name; }
