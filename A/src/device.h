#pragma once
#include <iostream>
class Device {
public:
  Device(const std::string &, const std::string &);
  void rename(const std::string &);
  void printInfo() const;

private:
  std::string _id;
  std::string _name;
};
