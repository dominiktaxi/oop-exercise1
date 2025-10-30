#include "car.h"
#include <string>

Car::Car(const std::string &regNumber, const std::string &arrivalTime)
    : regNumber(regNumber), arrivalTime(arrivalTime) {}

const std::string Car::getRegNumber() { return this->regNumber; }

const std::string Car::getArrivaltime() { return this->arrivalTime; }

void Car::print() const {
  std::cout << "Car with regNumber: " << this->regNumber << " arrived at "
            << this->arrivalTime << std::endl;
}
