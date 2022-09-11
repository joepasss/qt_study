#include <QCoreApplication>
#include <QDebug>

#include "./array.cpp"
#include "./arithmetic.cpp"
#include "./assignment_operators.cpp"
#include "./logical_op.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  logical();

  return QCoreApplication::exec();
}
