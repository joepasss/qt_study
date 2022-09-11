// Arrays

/*
 * Arrays = multiple values inside one variables
 */

#include <array>

// namespaces
using namespace std;

void arrays() {
  // Zero based index array
  int ages[4] = {23, 7, 10, 11};

  for (int age: ages) {
    qInfo() << age;
  }

  qInfo() << "ages" << ages;// it gets arrays position in memory

  array<int, 5> cars;

  for (int i = 0; i < 5; i++) {
    cars[i] = i * 10;
    qInfo() << cars[i];
  }

  qInfo() << "Size : " << cars.size(); // gets arrays size
  qInfo() << "sizeof : " << sizeof(cars);
  qInfo() << "Last : " << cars[cars.size() - 1];
}