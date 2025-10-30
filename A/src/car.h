#pragma once
#include <iostream>
#include <string>

struct Car {
  std::string regNumber;
  std::string arrivalTime;

  Car(const std::string &, const std::string &);
  void print() const;
};
