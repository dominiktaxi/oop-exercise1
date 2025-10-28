#include "position.h"

int main() {
  Position p;

  p.print();

  p.move(1.0, 15.0);

  p.print();

  return 0;
}
