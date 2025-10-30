#pragma once
#include <iostream>
#include <string>

class Car {
private:
  std::string _regNumber;
  std::string _arrivalTime;

public:
  Car(const std::string &, const std::string &);
  std::string regNumber();
  std::string arrivalTime();
  void print() const;
};
