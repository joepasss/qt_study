#include <QCoreApplication>
#include <QDebug>

#include "animal.h"
#include "Mammal.h"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Animal animal;
  Mammal mammal;

  qInfo() << mammal.isAlive();      // in Animal class
  qInfo() << mammal.hasBackBone();  // in mammal class

  return QCoreApplication::exec();
}
