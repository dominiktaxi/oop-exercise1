#include "Sensor.h"
#include "logger.h"
#include "sensor-reading.h"

void foo() {
  Sensor s("TemperatureSensor");
  Logger l;
  SensorReading sr = s.read();
  l.log(sr, s.name());
}
//branch out
int main() {
  foo();
  return 0;
}
