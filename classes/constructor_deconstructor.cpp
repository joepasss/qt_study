#include "laptop.h"

void test (Laptop &machine) {
    machine.test();
}

void makeLaptops() {
  // The stack
  Laptop mine (nullptr, "my laptop");
  Laptop yours (nullptr, "your laptop");

  mine.weight = 3;
  yours.weight = 3;

  test(mine);
  test(yours);

  // Will be deleted from the stack automatically
}