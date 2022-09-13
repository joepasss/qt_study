// Switch Statement

#include <iostream>

using namespace std;

void switch_state () {
  int age = 0;

  qInfo() << "Please enter you age: ";
  cin >> age;

  switch(age) {
    case 0 :
      qFatal("You did not enter a vaild age");
      break;

    case 16:
      qInfo() << "You can drive";
      break;

    case 18:
      qInfo() << "You can vote";
      break;

    default:
      break;
  }
}