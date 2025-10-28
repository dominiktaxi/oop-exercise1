#include "logger.h"
#include "sensor-reading.h"

void Logger::log(const SensorReading &reading, const std::string &sensorName) {
  std::cout << reading.timestamp << " | " << reading.value << " | "
            << sensorName << std::endl;
}
