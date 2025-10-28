#include "sensor-reading.h"

void SensorReading::print() {
  std::cout << this->timestamp << " | " << this->value << std::endl;
}
