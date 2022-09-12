#include <QCoreApplication>
#include <QDebug>

#include "./outputs.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  couts();

  return QCoreApplication::exec();
}
