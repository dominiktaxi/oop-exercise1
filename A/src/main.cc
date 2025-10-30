#include "car.h"
#include "logger.h"
#include "parking-house.h"
#include "sensor-reading.h"
#include "sensor.h"

void foo() {
  Sensor s("TemperatureSensor");
  Logger l;
  SensorReading sr = s.read();
  l.log(sr, s.name());

  Car car("MJA234", "12/13/12");
  ParkingHouse parkingHouse;
  parkingHouse.addCar(car);
  parkingHouse.printStatus();
}

int main() {
  foo();

  return 0;
}
