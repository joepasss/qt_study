#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "function_params.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  int age;
  qInfo() << "Enter your age: ";
  cin >> age;

  qInfo() << "Dog: " << dogYears(age);
  qInfo() << "Cat: " << catYears(age);

  return QCoreApplication::exec();
}

