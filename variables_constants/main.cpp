#include <QCoreApplication>
#include <QDebug>

#include "./array.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  arrays();

  return QCoreApplication::exec();
}
