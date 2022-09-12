#include <QCoreApplication>
#include <QDebug>

#include "./outputs.cpp"
#include "./inputs.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  outputs();

  return QCoreApplication::exec();
}
