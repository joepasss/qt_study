#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "function_params.cpp"
#include "overloading.cpp"
#include "byref_byvalue.cpp"
#include "functions_in_structs.cpp"
#include "returning_value.cpp"
#include "paintcalc.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  double width {0};
  double height {0};

  do {
    qInfo() << "enter 0 to exit ...";
    qInfo() << "width? : ";
    cin >> width;
    qInfo() << "height? : ";
    cin >> height;

    paintcalc(height, width);
  } while (width != 0 || height != 0);

  paintcalc(height, width);

  return QCoreApplication::exec();
}

