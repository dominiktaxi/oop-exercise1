#include "Sensor.h"
#include "logger.h"
#include "sensor-reading.h"
#include "parking-house.h"
#include "car.h"

void foo() {
  Sensor s("TemperatureSensor");
  Logger l;
  SensorReading sr = s.read();
  l.log(sr, s.name());
  Car car("MJA234", "12/12/12");
  ParkingHouse parkingHouse;
  parkingHouse.addCar(car);
}
int main() {
  foo();

  return 0;
}
