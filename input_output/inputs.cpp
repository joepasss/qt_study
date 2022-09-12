#include <iostream>

using namespace std;

void inputs () {
  int age;

  qInfo() << "Please enter an age: ";
  cin >> age;
  qInfo() << "You entered: " << age;
}