// Ternary
// combine if and else into one line

#include <iostream>

using namespace std;

void ternary() {
  int age = 0;

  qInfo() << "Please enter you age: ";
  cin >> age;

  age > 0 && age < 100 ? qInfo("You entered a valid age") : qFatal("You did not enter a valid age");
  
}