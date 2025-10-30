#include "car.h"
#include <string>

Car::Car(const std::string &regNumber, const std::string &arrivalTime)
    : _regNumber(regNumber), _arrivalTime(arrivalTime) {}

std::string Car::regNumber() { return this->_regNumber; }
std::string Car::arrivalTime() { return this->_arrivalTime; }

void Car::print() const {
  std::cout << "Car with regNumber: " << this->_regNumber << " arrived at "
            << this->_arrivalTime << std::endl;
}
