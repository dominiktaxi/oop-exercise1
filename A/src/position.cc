#include "position.h"

void Position::move(double dx, double dy) {
  this->x += dx;
  this->y += dy;
}

void Position::print() {
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}
