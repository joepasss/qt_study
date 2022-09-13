// If statement
// basic flow control
// using if keyword

#include <iostream>

using namespace std;

void ifStatement () {
  int age = 0;
  qInfo() << "Enter your age";
  cin >> age;

  if(age == 0) {
    qFatal("Not a valid age!");
  } else if (age < 18) {
    qInfo() << "you are NOT an adult!";
    qFatal("Come back when you are order");
  } else {
    qInfo() << "your age : " << age;
  }
}