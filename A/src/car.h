#pragma once
#include <iostream>
#include <string>

class Car {
private:
  std::string regNumber;
  std::string arrivalTime;

public:
  Car(const std::string &, const std::string &);
  const std::string getRegNumber();
  const std::string getArrivaltime();
  void print() const;
};
