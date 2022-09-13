#include <QCoreApplication>
#include <QDebug>
#include <iostream>

#include "if_statement.cpp"
#include "ternary.cpp"
#include "switch_state.cpp"
#include "loops.cpp"
#include "age_calculator.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  age_calc();

  return QCoreApplication::exec();
}
