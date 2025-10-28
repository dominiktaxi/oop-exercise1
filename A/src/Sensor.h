#pragma once
#include "sensor-reading.h"
class Sensor
{
    public:
    Sensor(const std::string&);
    SensorReading read() const;
    std::string name();
    private:
    std::string _name;
};