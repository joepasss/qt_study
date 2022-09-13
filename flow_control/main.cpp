#include <QCoreApplication>
#include <QDebug>

#include "if_statement.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  ifStatement();

  return QCoreApplication::exec();
}
