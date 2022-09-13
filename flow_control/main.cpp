#include <QCoreApplication>
#include <QDebug>

#include "if_statement.cpp"
#include "ternary.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  ternary();

  return QCoreApplication::exec();
}
