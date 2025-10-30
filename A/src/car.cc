#include "car.h"
#include <string>

Car::Car(const std::string &regNumber, const std::string &arrivalTime)
    : regNumber(regNumber), arrivalTime(arrivalTime) {}

void Car::print() const {
  std::cout << "Car with regNumber: " << regNumber << " arrived at "
            << arrivalTime << std::endl;
}
