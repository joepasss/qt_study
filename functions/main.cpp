#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "function_params.cpp"
#include "overloading.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  test();
  test("joepasss");
  test(32);
  test(false);

  return QCoreApplication::exec();
}

