#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "function_params.cpp"

using namespace std;

void test2();
void test() {
  qInfo() << "Hello from test";
  test2();
}

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  int age = 0;

  qInfo() << "Enter your age: ";
  cin >> age;

  qInfo() << "for cat years: " << catYears(age);
  qInfo() << "for dog years: " << dogYears(age);

  return QCoreApplication::exec();
}

void test2() {
  qInfo() << "Hello from test2";
}

