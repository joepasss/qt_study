#include <QCoreApplication>
#include <QDebug>

#include "constructor_deconstructor.cpp"



int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

    makeLaptops();

  return QCoreApplication::exec();
}
