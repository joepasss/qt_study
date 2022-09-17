#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "function_params.cpp"
#include "overloading.cpp"
#include "byref_byvalue.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  byRefByValue();

  return QCoreApplication::exec();
}

