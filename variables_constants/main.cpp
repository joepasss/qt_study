#include <QCoreApplication>
#include <QDebug>

#include "./array.cpp"
#include "./arithmetic.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  arithmetic();

  return QCoreApplication::exec();
}
