#include <QCoreApplication>
#include <QDebug>

#include "./outputs.cpp"
#include "./inputs.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  inputs();

  return QCoreApplication::exec();
}
