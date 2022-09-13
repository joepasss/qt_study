// Do loop, For loop

#include <iostream>
#include <array>

using namespace std;

void divider() {
  qInfo() << "----------------------------------------";
}

void loops () {
  int start = 80;
  int max = 100;

  // Do - While loop
  // evaluate first do last
  int i = start;
  while (i < max) {
    qInfo() << "While = " << i;
    i++;
  }

  divider();

  // do first evaluate last
  i = start;
  do {
    qInfo() << "do = " << i;
    i++;
  } while (i < max);

  qInfo() << "while loop DONE!";
  divider();

  // For loops
  qInfo() << "Please enter a max";
  cin >> max;

  if(max <= 0) qFatal("please enter a valid number next time!");

  for(int i = 0; i < max; i ++) {
    qInfo() << "i = " << i;
  }

  array<int, 4> ages = {44, 56, 32, 16};  // Zero based index array
  for (int i = 0; i < ages.size(); i++) {
    qInfo() << "ages : " << ages.at(i);
  }
}