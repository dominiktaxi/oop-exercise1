#include "air-monitor.h"
#include "air-sensor.h"
#include "sensor-reading.h"
#include <vector>

AirMonitor::AirMonitor(const std::vector<AirSensor> sensors)
    : _sensors(sensors) {}

void AirMonitor::logAll() {
  for (AirSensor s : this->_sensors) {
    SensorReading r = s.read();
    r.print();
  }
}
