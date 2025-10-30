#pragma once

#include <iostream>

struct Position {
  double x = 0;
  double y = 0;

  void move(double dx, double dy);
  void print() const;
};
