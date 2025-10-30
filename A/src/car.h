#pragma once
#include <iostream>
struct Car {
  const std::string regNumber;
  const std::string arrivalTime;

  Car(const std::string &, const std::string &);
  void print() const;
};
