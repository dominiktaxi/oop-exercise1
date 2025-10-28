#include "Sensor.h"

Sensor::Sensor(const std::string& name) : _name(name) {}

SensorRead Sensor::read() const
{
    SensorRead read;
    read.value = 1337;
    read.timestamp = "12/12/12";
    return read;
}

std::string Sensor::name()
{
    return _name;
}