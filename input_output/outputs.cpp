#include <iostream>

using namespace std;

void couts () {
  cout << "Hello from cout function" << endl;

  qInfo() << "Hello from qInfo";

  int age = 44;
  cout << age;
  cout << endl;
  cout << flush;
}

void errors() {
  cout << "standard out" << endl;
  cerr << "error out" << endl;
}

void outputs() {
  errors();
}